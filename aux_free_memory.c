/* IAED-23 - ist1106635 - project2 ---------------------------------------------
 * File: aux_free_memory.c
 * Author: Tiago Branquinho
 * Description: a file with auxiliary functions to free the memory allocated
------------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "constants.h" 
#include "prototypes.h"

/*------------------------------------------------------------------------------
 * Function: free_linked
 * Description: function that frees the memory allocated for a linked list
 * Output: doesn't return anything
------------------------------------------------------------------------------*/
void free_linked(Linked *head) {

    Linked *current = head;

    while (current != NULL) {
        Linked *next = current->next;
        if (current->spec_connection.route_name != NULL)
            free(current->spec_connection.route_name);
        if (current->spec_connection.initial_stop != NULL)
            free(current->spec_connection.initial_stop);
        if (current->spec_connection.final_stop != NULL)
            free(current->spec_connection.final_stop);
        free(current);
        current = next;
    }
}

/*------------------------------------------------------------------------------
 * Function: free_memory
 * Description: function that frees the memory allocated for the 
 *              stops and routes
 * Output: doesn't return anything
------------------------------------------------------------------------------*/
void free_memory(Stop *stops, Route *routes, 
                 int *stop_num, int *route_num) {

    int i;

    if (*stop_num > 0) {
        for (i = 0; i < *stop_num; i++)
            if (stops[i].name != NULL)
                free(stops[i].name);
        free(stops);
    }

    if (*route_num > 0) {
        for (i = 0; i < *route_num; i++) {
            if (routes[i].name != NULL)
                free(routes[i].name);
            if (routes[i].first_stop != NULL)
                free(routes[i].first_stop);
            if (routes[i].last_stop != NULL)
                free(routes[i].last_stop);
            free_linked(routes[i].first_connection);
        }
        free(routes);
    }

    *stop_num = 0;
    *route_num = 0;
}

/*------------------------------------------------------------------------------
 * Function: free_arguments
 * Description: function that frees the memory allocated for the arguments given
 * Output: doesn't return anything
------------------------------------------------------------------------------*/
void free_arguments(char **arguments, int max_arguments) {

    int i;

    for (i = 0; i < max_arguments; i++) {
        free(arguments[i]);
    }
    
    free(arguments);
}