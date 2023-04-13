/* IAED-23 - ist1106635 - project2 ---------------------------------------------
 * File: aux_p_command.c
 * Author: Tiago Branquinho
 * Description: a file with auxiliary functions to handle the command p (stops)
 *              and complement the main program that manages a bus network
------------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "constants.h" 
#include "prototypes.h"

/*------------------------------------------------------------------------------
 * Function: create_stop
 * Description: function that creates a stop given by the user
 * Output: returns TRUE if the stop was created successfully
 *         returns ERROR if it ran out of memory
------------------------------------------------------------------------------*/
int create_stop(char **arguments, Stop **stops, int *stop_num) {
    int length = strlen(arguments[0]);
    if (*stop_num == 0) {
        *stops = (Stop *) malloc(sizeof(Stop));
    }
    else {
        *stops = (Stop *) realloc(*stops, ((*stop_num)+1) * sizeof(Stop));
    }
    if (*stops == NULL)
        return ERROR;
    (*stops)[*stop_num].name = malloc(sizeof(char) * (length + 1));
    if ((*stops)[*stop_num].name == NULL)
        return ERROR;
    strcpy((*stops)[*stop_num].name, arguments[0]);
    (*stops)[*stop_num].latitude = atof(arguments[1]);
    (*stops)[*stop_num].longitude = atof(arguments[2]);
    (*stops)[*stop_num].routes_passing = 0;
    (*stop_num)++;
    return TRUE;
}

/*------------------------------------------------------------------------------
 * Function: list_stops
 * Description: function that prints all the stops
 * Output: doesn't return anything
------------------------------------------------------------------------------*/
void list_stops(Stop **stops, Route *routes,
                int stop_num, int route_num) {
    
    int i; 

    for (i = 0; i < stop_num; i++) {
        (*stops)[i] = add_routes_passing((*stops)[i], routes, route_num);
        printf("%s: %16.12f %16.12f %d\n", (*stops)[i].name, 
                (*stops)[i].latitude, (*stops)[i].longitude, 
                (*stops)[i].routes_passing);
    }
}

/*------------------------------------------------------------------------------
 * Function: check_stop
 * Description: function that checks if certain stop exists
 * Output: returns TRUE if the stop exists, FALSE otherwise
------------------------------------------------------------------------------*/
int check_stop(char arguments[], Stop **stops, int arg_number, int stop_num) {

    int i;

    for (i = 0; i < stop_num; i++) {
        if (strcmp((*stops)[i].name, arguments) == EQUAL) {
            if (arg_number == 1) {
                printf("%16.12f %16.12f\n", (*stops)[i].latitude, 
                                            (*stops)[i].longitude);
            }
            return TRUE;
        }
    }
    return FALSE;
}