/* IAED-23 - ist1106635 - project2 ---------------------------------------------
 * File: aux_functions.c
 * Author: Tiago Branquinho
 * Description: a file with auxiliary functions to complement the main program
 *              that manages a bus network 
------------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "constants.h" 
#include "prototypes.h"

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

void free_memory(Stop *stops, Route *routes, 
                 int *stop_num, int *route_num) {

    int i;
    /*int max;*/
    if (*stop_num > 0) {
        /*max = ((*stop_num/STOP_INCREMENT)+1)*STOP_INCREMENT;*/
        for (i = 0; i < *stop_num; i++)
            if (stops[i].name != NULL)
                free(stops[i].name);
        free(stops);
    }
    if (*route_num > 0) {
        /*max = ((*route_num/ROUTE_INCREMENT)+1)*ROUTE_INCREMENT;*/
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

void free_arguments(char **arguments, int max_arguments) {
    int i;
    for (i = 0; i < max_arguments; i++) {
        free(arguments[i]);
    }
    free(arguments);
}

/*------------------------------------------------------------------------------
 * Function: parser
 * Description: parses the line the user inputs into an array of arguments
 * Output: returns the number of arguments
------------------------------------------------------------------------------*/
int parser(char line[], char ***arguments, int max_arguments) {

    int i, length = strlen(line);
    int space = FALSE, quotation = FALSE, arg_number = 0, j = 0;
    *arguments = malloc(max_arguments*sizeof(char*));
    for (i = 0; i < max_arguments; i++) {
        (*arguments)[i] = malloc(length*sizeof(char));
    }

    if (line[0] == '\n') {
        return 0;
    }
    for (i = 1; i < length; i++) { /*already starts with a space*/ 
        switch(line[i]) {
            case ' ':
                if (quotation == FALSE) {
                    space = TRUE;
                }
                else {
                    (*arguments)[arg_number][j] = line[i];
                    j++;
                }
                break;

            case '"':
                quotation = !quotation;
                break;
            case '\n':
                (*arguments)[arg_number][j] = '\0';
                (*arguments)[arg_number] = realloc((*arguments)[arg_number], (j+1)*sizeof(char));
                break;
            default:
                if (space) {
                    (*arguments)[arg_number][j] = '\0';
                    (*arguments)[arg_number] = realloc((*arguments)[arg_number], (j+1)*sizeof(char));
                    arg_number ++;
                    j = 0;
                    space = FALSE;
                }
                (*arguments)[arg_number][j] = line[i];
                j++;
        }
    }
    return arg_number+1; /*+1 since the array starts with position 0*/
}

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

/*------------------------------------------------------------------------------
 * Function: add_routes_passing
 * Description: function that changes the number of routes in which a stop is
 *              passing through
 * Output: returns the stop with the number of routes updated
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
 * Function: create_stop
 * Description: function that creates a stop given by the user
 * Output: since it adds to a list of stops, it doesn't return anything
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

/*----------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------
 * Function: create_route
 * Description: function that creates a route given by the user
 * Output: doesn't return anything
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
 * Output: return TRUE if the route exists, FALSE otherwise
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
 * Description: function that prints all the stops in a certain route from
 *              end to start
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

/*----------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------
 * Function: create_connection
 * Description: function that creates a connection between two stops in a
 *              certain route
 * Output: doesn't return anything
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
 * Function: find_route
 * Description: function that finds the route given in the connections command
 * Output: return the number of the route if it exists, NO_ROUTE otherwise
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

/*----------------------------------------------------------------------------*/

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