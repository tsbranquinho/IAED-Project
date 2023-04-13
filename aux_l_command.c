/* IAED-23 - ist1106635 - project2 ---------------------------------------------
 * File: aux_l_command.c
 * Author: Tiago Branquinho
 * Description: a file with aux functions to handle the command l (connections)
 *              and complement the main program that manages a bus network
------------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "constants.h" 
#include "prototypes.h"

/*------------------------------------------------------------------------------
 * Function: create_connection
 * Description: function that creates a connection between two stops in a
 *              certain route
 * Output: returns TRUE if the connection was created
 *         returns ERROR if it ran out of memory
------------------------------------------------------------------------------*/
int create_connection(char **arguments, Route **routes, int route_index, 
                      int size_1, int size_2, Connection *spec_connection) {

    spec_connection->route_name = malloc(sizeof(char) * (strlen(arguments[0]) + 1));
    if (spec_connection->route_name == NULL)
        return ERROR;
    strcpy(spec_connection->route_name, arguments[0]);
    spec_connection->initial_stop = malloc(sizeof(char) * (size_1 + 1));
    if (spec_connection->initial_stop == NULL)
        return ERROR;
    spec_connection->final_stop = malloc(sizeof(char) * (size_2 + 1));
    if (spec_connection->final_stop == NULL)
        return ERROR;
    strcpy(spec_connection->initial_stop, arguments[1]);
    strcpy(spec_connection->final_stop, arguments[2]);
    spec_connection -> cost = atof(arguments[3]);
    spec_connection -> duration = atof(arguments[4]);
    (*routes)[route_index].cost += spec_connection->cost;
    (*routes)[route_index].duration += spec_connection->duration;
    return TRUE;
}

/*------------------------------------------------------------------------------
 * Function: add_route_information
 * Description: function that adds the information of a route according to the 
 *              connection given to the array of routes
 * Output: doesn't return anything
------------------------------------------------------------------------------*/
void add_route_information(char **arguments, Route **routes, 
                           int i, int size_1, int size_2, 
                           Connection spec_connection) {

    Linked *link = malloc(sizeof(Linked));
    (*routes)[i].stops_number = 2; /*since it's the first connection of the route*/
    (*routes)[i].first_stop = malloc(sizeof(char) * (size_1 + 1));
    (*routes)[i].last_stop = malloc(sizeof(char) * (size_2 + 1));
    strcpy((*routes)[i].first_stop, arguments[1]);
    strcpy((*routes)[i].last_stop, arguments[2]);
    link -> spec_connection = spec_connection;
    link -> next = NULL;
    link -> prev = NULL;
    (*routes)[i].first_connection = link;
    (*routes)[i].last_connection = link;
}

/*------------------------------------------------------------------------------
 * Function: change_route_information
 * Description: function that changes the information of a route according 
 *              to the connection given
 * Output: doesn't return anything
------------------------------------------------------------------------------*/
void change_route_information(char **args, Route **routes,
                              int route_index, int add_end, 
                              int size, Connection spec_connection) {
    Linked *node = malloc(sizeof(Linked));
    Linked *aux;
    (*routes)[route_index].stops_number++;
    node -> spec_connection = spec_connection;
    if (add_end) { /*if we add the connection to the end of the route*/
        free((*routes)[route_index].last_stop);
        (*routes)[route_index].last_stop = malloc(sizeof(char) * (size + 1));
        strcpy((*routes)[route_index].last_stop, args[2]);
        aux = (*routes)[route_index].last_connection;
        aux -> next = node;
        node -> prev = aux;
        node -> next = NULL;
        (*routes)[route_index].last_connection = node;
    }
    else { /*if we add the connection to the beginning of the route*/
        free((*routes)[route_index].first_stop);
        (*routes)[route_index].first_stop = malloc(sizeof(char) * (size + 1));
        strcpy((*routes)[route_index].first_stop, args[1]);
        aux = (*routes)[route_index].first_connection;
        aux -> prev = node;
        node -> next = aux;
        node -> prev = NULL;
        (*routes)[route_index].first_connection = node;
    }
}

/*------------------------------------------------------------------------------
 * Function: is_valid_connection
 * Description: function that checks if the connection given is valid
 * Output: return TRUE all checks are passed, FALSE otherwise
------------------------------------------------------------------------------*/
int is_valid_connection(char **arguments,
                        Route **routes, Stop *stops, 
                        int stop_num, int route_num, int *route_index) {

    int exists = FALSE;

    *route_index = find_route(arguments, routes, route_num); 
    /*so we can get the route to check if the stops belong to the end 
      or the beggining                                                        */
    if (*route_index == NO_ROUTE)
        return FALSE;

    if (!find_stops(arguments, stops, stop_num))
        return FALSE;

    if ((*routes)[*route_index].stops_number == 0) {
        exists = TRUE;
    }
    else {
        if ((strcmp((*routes)[*route_index].last_stop, arguments[1]) == EQUAL) ||
        (strcmp((*routes)[*route_index].first_stop, arguments[2]) == EQUAL)) {
            exists = TRUE;
        }
    }
    if (!exists) {
        printf("link cannot be associated with bus line.\n");
        return FALSE;
    }
    if ((atof(arguments[3]) < 0) || (atof(arguments[4]) < 0)) {
        printf("negative cost or duration.\n");
        return FALSE;
    }
    return TRUE;
}

/*------------------------------------------------------------------------------
 * Function: find_stops
 * Description: function that finds the stops given in the connections command
 * Output: return TRUE if both stops exist, FALSE otherwise
------------------------------------------------------------------------------*/
int find_stops(char **arguments, Stop *stops, int stop_num) {

    int i, exists = FALSE, exists_second = FALSE;
    for (i = 0; i < stop_num; i++) {
        if (strcmp(arguments[1], stops[i].name) == EQUAL) {
            exists = TRUE;
        }
        if (strcmp(arguments[2], stops[i].name) == EQUAL) {
            exists_second = TRUE;
        }
    }
    if (!exists) {
        printf("%s: no such stop.\n", arguments[1]);
        return FALSE;
    }
    if (!exists_second) {
        printf("%s: no such stop.\n", arguments[2]);
        return FALSE;
    }
    return TRUE;
}
