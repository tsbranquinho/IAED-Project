/* IAED-23 - ist1106635 - project2 ---------------------------------------------
 * File: aux_c_command.c
 * Author: Tiago Branquinho
 * Description: a file with auxiliary functions to handle the command c (routes)
 *              and complement the main program that manages a bus network
------------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "constants.h" 
#include "prototypes.h"

/*------------------------------------------------------------------------------
 * Function: create_route
 * Description: function that creates a route given by the user
 * Output: returns TRUE if the route was created successfully
 *         returns ERROR if it ran out of memory
------------------------------------------------------------------------------*/
int create_route(char **arguments, Route **routes, int *route_num) {
    int length = strlen(arguments[0]);

    if (*route_num == 0) {
        *routes = (Route *) malloc(sizeof(Route));
    }
    else {
        *routes = (Route *) realloc(*routes, ((*route_num)+1)*sizeof(Route));
    }   
    if (*routes == NULL)
        return ERROR;

    (*routes)[*route_num].name = malloc(sizeof(char) * (length + 1));
    if ((*routes)[*route_num].name == NULL)
        return ERROR;
    strcpy((*routes)[*route_num].name, arguments[0]);
    (*routes)[*route_num].stops_number = 0;
    (*routes)[*route_num].cost = 0;
    (*routes)[*route_num].duration = 0;
    (*routes)[*route_num].first_stop = NULL;
    (*routes)[*route_num].last_stop = NULL;
    (*routes)[*route_num].first_connection = NULL;
    (*routes)[*route_num].last_connection = NULL;
    (*route_num)++;
    return TRUE;
}


/*------------------------------------------------------------------------------
 * Function: get_stops_route
 * Description: function that prints all the stops in a certain route from
 *              start to end
 * Output: returns TRUE if the route exists, FALSE otherwise
------------------------------------------------------------------------------*/
int get_stops_route(char **arguments, 
                    Route **routes, int route_num) {
    int i;
    int exists = FALSE;
    Linked *aux;

    for (i = 0; i < route_num; i++) {
        if (strcmp((*routes)[i].name, arguments[0]) == EQUAL) {

            exists = TRUE;

            if ((*routes)[i].stops_number == 0)
                break;
            
            aux = (*routes)[i].first_connection;
            printf("%s", (*routes)[i].first_stop);

            while (aux != (*routes)[i].last_connection) {
                printf(", %s", aux->spec_connection.final_stop);
                aux = aux->next;
            }

            printf(", %s\n", (*routes)[i].last_stop);
            break;
        }
    }
    return exists;
}

/*------------------------------------------------------------------------------
 * Function: get_inverted_stops_route
 * Description: This function prints all the stops in a given route in 
 *              reverse order, starting from the end and ending at the start
 * Output: doesn't return anything
------------------------------------------------------------------------------*/
void get_inverted_stops_route(char **arguments, 
                              Route **routes, 
                              int route_num) {
    int i;
    Linked *aux;

    /*it's the same as the function before, but we go from end to beginning*/
    for (i = 0; i < route_num; i++) {
        if (strcmp((*routes)[i].name, arguments[0]) == EQUAL) {
            if ((*routes)[i].stops_number == 0)
                break;

            aux = (*routes)[i].last_connection;
            printf("%s", (*routes)[i].last_stop);

            while(aux != (*routes)[i].first_connection) {
                printf(", %s", aux->spec_connection.initial_stop);
                aux = aux->prev;
            }

            printf(", %s\n", (*routes)[i].first_stop);
        }
    }
}

/*------------------------------------------------------------------------------
 * Function: is_inverted
 * Description: function that checks if the user inputed the command "inverso"
 *              or abbreviations of it
 * Output: returns TRUE if the input is in the correct format, FALSE otherwise
------------------------------------------------------------------------------*/
int is_inverted(char argument[]) {

    int i;
    int length = strlen(argument);

    if ((length < INV_LEN ) || (length > INVERSO_LEN))
        return FALSE;
    for (i = 0; i < length; i++) {
        if (INVERSO[i] != argument[i]) /*checking one by one*/
            return FALSE;
    }
    return TRUE;
}

/*------------------------------------------------------------------------------
 * Function: print_route_description
 * Description: function that prints the description of a certain route
 * Output: doesn't return anything
------------------------------------------------------------------------------*/
void print_route_description(Route spec_route) {

    if (spec_route.stops_number == 0) {
        printf("%s %d %.2f %.2f\n", spec_route.name,
                spec_route.stops_number, spec_route.cost,
                spec_route.duration);
    }
    else {
        printf("%s %s %s %d %.2f %.2f\n", spec_route.name,
                spec_route.first_stop, spec_route.last_stop,
                spec_route.stops_number, spec_route.cost,
                spec_route.duration);
    }
}