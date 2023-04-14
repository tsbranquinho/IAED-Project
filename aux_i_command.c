/* IAED-23 - ist1106635 - project2 ---------------------------------------------
 * File: aux_i_command.c
 * Author: Tiago Branquinho
 * Description: a file with aux functions to handle the command i (intersection)
 *              and complement the main program that manages a bus network
------------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "constants.h" 
#include "prototypes.h"

/*------------------------------------------------------------------------------
 * Function: bubble_sort
 * Description: function that sorts the routes in alphabetical order
 * Output: doesn't return anything
------------------------------------------------------------------------------*/
void bubble_sort(Route *routes, int *list_of_routes, int len) {

    int i, j, aux;

    for (i = 0; i < len; i++){
        int done = TRUE;
        for (j = 0; j < len - 1; j++) {
            if (strcmp(routes[list_of_routes[j]].name,
                routes[list_of_routes[j+1]].name) > EQUAL) {
                    aux = list_of_routes[j];
                    list_of_routes[j] = list_of_routes[j+1];
                    list_of_routes[j+1] = aux;
                    done = FALSE;
                }
        }
        if (done) /*if the list is sorted, we stop the loop*/
            break;
    }
}

/*------------------------------------------------------------------------------
 * Function: check_first_and_last
 * Description: function that checks if the stop is the first or last of a route
 * Output: return the incremented position in the list of routes if the route 
 *         is added, the old position otherwise
------------------------------------------------------------------------------*/
int check_first_and_last(Stop spec_stop, Route spec_route, int j,
                          int *list_of_routes, int pos) {

    if ((strcmp(spec_stop.name, spec_route.first_stop) == EQUAL) || 
        (strcmp(spec_stop.name, spec_route.last_stop) == EQUAL)) {
            list_of_routes[pos] = j;
            return pos + 1;
    }   
    return pos;
}

/*------------------------------------------------------------------------------
 * Function: print_routes_passing
 * Description: function that prints the routes passing through a stop
 * Output: doesn't return anything
------------------------------------------------------------------------------*/
void print_routes_passing(int pos, int list_of_routes[], 
                          Stop spec_stop, Route *routes) {

    int j; 

    printf("%s %d: ", spec_stop.name, spec_stop.routes_passing);
    for (j = 0; j < pos-1; j++) {
        printf("%s ", routes[list_of_routes[j]].name);
    }
    printf("%s\n", routes[list_of_routes[j]].name);
}

/*------------------------------------------------------------------------------
 * Function: add_route_to_array
 * Description: function that adds indexes of the routes that go through a stop
 *              to the array of routes 
 * Output: returns the number of routes passing through a stop
------------------------------------------------------------------------------*/
int add_route_to_array(int *list_of_routes, int pos, 
                       int route_num, int stop_num, Stop **stops, Route *routes) {

    int j;
    for (j = 0; j < route_num; j++) {
        if (routes[j].stops_number == 0) {
            continue;
        }
        else if ((strcmp((*stops)[stop_num].name, routes[j].first_stop) == EQUAL) || 
                (strcmp((*stops)[stop_num].name, routes[j].last_stop)) == EQUAL) {
                    list_of_routes[pos] = j;
                    pos++;
        }   
        else {
            Linked *aux = routes[j].first_connection;
            while (aux != NULL) {
                if (strcmp((*stops)[stop_num].name, aux->spec_connection.final_stop) == EQUAL) {
                    list_of_routes[pos] = j;
                    pos++;
                    break;
                }
                aux = aux->next;
            }
        }
    }
    return pos;
}