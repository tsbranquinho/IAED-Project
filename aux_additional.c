/* IAED-23 - ist1106635 - project2 ---------------------------------------------
 * File: aux_additional.c
 * Author: Tiago Branquinho
 * Description: a file with aux functions to 
 *              complement the main program that manages a bus network
------------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "constants.h" 
#include "prototypes.h"


/*------------------------------------------------------------------------------
 * Function: add_routes_passing
 * Description: function that changes the number of routes that go through
 *              a stop
 * Output: returns the stop with the number of routes updated
 * Additional information: it is used by the command l and command i
------------------------------------------------------------------------------*/
Stop add_routes_passing(Stop p_stop, Route *routes, int route_num) {

    int i;
    Linked *aux;
    p_stop.routes_passing = 0;
    for (i = 0; i < route_num; i++) {
        if (routes[i].stops_number == 0) {
            continue;
        }
        else if (strcmp(p_stop.name, routes[i].first_stop) == EQUAL ||
            strcmp(p_stop.name, routes[i].last_stop) == EQUAL) {
                p_stop.routes_passing++;
        }
        else {
            aux = routes[i].first_connection;
            while(aux != routes[i].last_connection) {
                if (strcmp(p_stop.name, aux->spec_connection.final_stop) == EQUAL) {
                    p_stop.routes_passing++;
                    break;
                }
                aux = aux->next;
            }
        }
    }
    return p_stop;
}

/*------------------------------------------------------------------------------
 * Function: find_route
 * Description: function that finds the route given in the connections command
 * Output: return the number of the route if it exists, NO_ROUTE otherwise
 * Additional : used by command l and command r
------------------------------------------------------------------------------*/
int find_route(char **arguments, Route **routes, 
               int route_num) {

    int i, current_route, exists = FALSE;
    for (i = 0; i < route_num; i++) {
        if (strcmp(arguments[0], (*routes)[i].name) == EQUAL) {
            current_route = i;
            exists = TRUE;
            break;
        }
    }
    if (!exists) {
        printf("%s: no such line.\n", arguments[0]);
        return NO_ROUTE;
    }
    return current_route; /*return the index of the route*/
}