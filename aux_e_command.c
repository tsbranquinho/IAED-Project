/* IAED-23 - ist1106635 - project2 ---------------------------------------------
 * File: aux_e_command.c
 * Author: Tiago Branquinho
 * Description: a file with aux functions to handle the command e (remove stops)
 *              and complement the main program that manages a bus network
------------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "constants.h" 
#include "prototypes.h"

/*------------------------------------------------------------------------------
 * Function: remove_stop
 * Description: function that removes a stop from the array of stops
 * Output: doesn't return anything
------------------------------------------------------------------------------*/
void remove_stop(Stop **stops, int stop_index, int *stop_num) {
    int i;

    free((*stops)[stop_index].name);
    for (i = stop_index; i < *stop_num-1; i++)
        (*stops)[i] = (*stops)[i+1];
    (*stops) = realloc((*stops), sizeof(Stop) * (*stop_num-1));
    (*stop_num)--;
}

/*------------------------------------------------------------------------------
 * Function: remove_from_beginning
 * Description: function that removes a connection from the beginning of a route
 * Output: returns TRUE if the route has connections left, 
 *         NO_CONNECTIONS otherwise
------------------------------------------------------------------------------*/
int remove_from_beginning(Route **routes, int i) {

    (*routes)[i].duration -= (*routes)[i].first_connection->spec_connection.duration;
    (*routes)[i].cost -= (*routes)[i].first_connection->spec_connection.cost;
    free((*routes)[i].first_stop);
    free((*routes)[i].first_connection->spec_connection.route_name);
    free((*routes)[i].first_connection -> spec_connection.initial_stop);
    if ((*routes)[i].first_connection->next == NULL) {
        (*routes)[i].first_stop = NULL;
        free((*routes)[i].first_connection->spec_connection.final_stop);
        free((*routes)[i].first_connection);
        (*routes)[i].first_connection = NULL;
        (*routes)[i].stops_number = 0;
        free((*routes)[i].last_stop);
        (*routes)[i].last_stop = NULL;
        (*routes)[i].last_connection = NULL;
        return NO_CONNECTIONS;
    }

    (*routes)[i].first_stop = malloc(sizeof(char) * 
        (strlen((*routes)[i].first_connection->spec_connection.final_stop) + 1));
    strcpy((*routes)[i].first_stop, (*routes)[i].first_connection->spec_connection.final_stop);  
    free((*routes)[i].first_connection -> spec_connection.final_stop);
    (*routes)[i].first_connection = (*routes)[i].first_connection->next;
    free((*routes)[i].first_connection->prev);
    (*routes)[i].first_connection->prev = NULL;
    return TRUE;
}

/*------------------------------------------------------------------------------
 * Function: remove_from_middle
 * Description: function that removes a connection from the middle of a route
 * Output: doesn't return anything
------------------------------------------------------------------------------*/
void remove_from_middle(Stop **stops, Route **routes, int i, int stop_index) {

    Linked *current = (*routes)[i].first_connection;

    while (current != (*routes)[i].last_connection) {
        Connection new_connection;
        Linked *aux = current->next; 

        if (strcmp(current->spec_connection.final_stop, 
            (*stops)[stop_index].name) == EQUAL) {
                new_connection = join_connections(current, aux);
                free(current -> spec_connection.initial_stop);
                free(current -> spec_connection.final_stop);
                free(current -> spec_connection.route_name);
                current -> spec_connection = new_connection;
                if (current -> prev != NULL)
                    current -> prev -> next = current;
                else
                    (*routes)[i].first_connection = current;
                if (current -> next -> next != NULL)
                    current -> next -> next -> prev = current;
                else
                    (*routes)[i].last_connection = current;
                current->next = current->next->next;
                free(aux -> spec_connection.initial_stop);
                free(aux -> spec_connection.final_stop);
                free(aux -> spec_connection.route_name);
                free(aux);
        }
        else {
            current = current -> next;
        }
    }
}

/*------------------------------------------------------------------------------
 * Function: remove_from_end
 * Description: function that removes a connection from the end of a route
 * Output: returns TRUE if the route has connections left,
 *         NO_CONNECTIONS otherwise
------------------------------------------------------------------------------*/
int remove_from_end(Route **routes, int i) {

    (*routes)[i].duration -= (*routes)[i].last_connection->spec_connection.duration;
    (*routes)[i].cost -= (*routes)[i].last_connection->spec_connection.cost;
    free((*routes)[i].last_stop);
    free((*routes)[i].last_connection->spec_connection.route_name);
    free((*routes)[i].last_connection->spec_connection.final_stop);

    if ((*routes)[i].last_connection -> prev == NULL) {
        (*routes)[i].last_stop = NULL;
        free((*routes)[i].last_connection->spec_connection.initial_stop);
        free((*routes)[i].last_connection);
        (*routes)[i].last_connection = NULL;
        (*routes)[i].stops_number = 0;
        free((*routes)[i].first_stop);
        (*routes)[i].first_stop = NULL;
        (*routes)[i].first_connection = NULL;
        return NO_CONNECTIONS;
    }

    (*routes)[i].last_stop = malloc(sizeof(char) * 
      (strlen((*routes)[i].last_connection->spec_connection.initial_stop) + 1));
    strcpy((*routes)[i].last_stop, (*routes)[i].last_connection->spec_connection.initial_stop);
    free((*routes)[i].last_connection -> spec_connection.initial_stop);
    (*routes)[i].last_connection = (*routes)[i].last_connection->prev;
    free((*routes)[i].last_connection->next);
    (*routes)[i].last_connection->next = NULL;
    return TRUE;
}

/*------------------------------------------------------------------------------
 * Function: remove_connection
 * Description: function that joins two connections into one
 * Output: returns the new connection
------------------------------------------------------------------------------*/
Connection join_connections(Linked *current, Linked *aux) {

    Connection joined;
    Connection conn1 = current->spec_connection;
    Connection conn2 = aux->spec_connection;

    joined.duration = conn1.duration + conn2.duration;
    joined.cost = conn1.cost + conn2.cost;
    joined.initial_stop = malloc(sizeof(char) * (strlen(conn1.initial_stop) + 1));
    strcpy(joined.initial_stop, conn1.initial_stop);
    joined.final_stop = malloc(sizeof(char) * (strlen(conn2.final_stop) + 1));
    strcpy(joined.final_stop, conn2.final_stop);
    joined.route_name = malloc(sizeof(char) * (strlen(conn1.route_name) + 1));
    strcpy(joined.route_name, conn1.route_name);
    return joined;
}

/*------------------------------------------------------------------------------
 * Function: get_stops_number
 * Description: function that updates the number of stops of a route
 * Output: doesn't return anything
------------------------------------------------------------------------------*/
void get_stops_number(Route **routes, int route_index) {

    Linked *aux = NULL;
    if ((*routes)[route_index].stops_number == 0) {
        return;
    }
    aux = (*routes)[route_index].first_connection;
    (*routes)[route_index].stops_number = 1;
    while(aux != NULL) {
        (*routes)[route_index].stops_number++;
        aux = aux->next;
    }
}