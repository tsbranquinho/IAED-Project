/* IAED-23 - ist1106635 - project2 ---------------------------------------------
 * File: aux_r_command.c
 * Author: Tiago Branquinho
 * Description: a file with aux functions to handle the command r(remove routes)
 *              and complement the main program that manages a bus network
------------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "constants.h" 
#include "prototypes.h"

/*------------------------------------------------------------------------------
 * Function: remove_route
 * Description: function that removes a route from the array of routes
 * Output: doesn't return anything
------------------------------------------------------------------------------*/
void remove_route(Route **routes, int route_index, int *route_num) {

    int i;

    free((*routes)[route_index].name);
    if ((*routes)[route_index].stops_number != 0) {
        free((*routes)[route_index].first_stop);
        free((*routes)[route_index].last_stop);
        free_linked((*routes)[route_index].first_connection);
    }

    for (i = route_index; i < *route_num-1; i++) {
        (*routes)[i] = (*routes)[i+1];
    }
    (*routes) = realloc((*routes), sizeof(Route) * (*route_num-1));
    (*route_num)--;
}