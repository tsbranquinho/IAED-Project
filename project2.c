/* IAED-23 - ist1106635 - project2 ---------------------------------------------
 * File: project2.c
 * Author: Tiago Branquinho
 * Description: a file for the first project of IAED, consisting of a program
 *              that manages a bus network
------------------------------------------------------------------------------*/


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "constants.h" 
#include "prototypes.h"

/*-------------------------------MAIN FUNCTION--------------------------------*/
int main() {

    int route_num = 0;
    int stop_num = 0;
    Route routes = {0};
    Stop stops = {0};

    /*while ((c = getchar()) != EOF) {
        int end;
        if (fgets(line, BUFFER, stdin) == NULL) {
            return 0;
        }
        end = handle_command(line, c, &stops, &routes, &connections, &route_num, 
                             &stop_num, &connection_num);
        if (!end) {
            free_memory(stops, routes, connections);
            break;
        }
    }
    */
    handle_commands(&stops, &routes, &route_num, 
                    &stop_num);
    return 0;
}

/*------------------------------------------------------------------------------
 * Function: handle_command
 * Description: brief function that handles the command the user inputs
 * Output: returns FALSE if user terminates the program, TRUE otherwise
------------------------------------------------------------------------------*/
void handle_commands(Stop *stops, 
                   Route *routes, int *route_num,
                   int *stop_num) {

    int *ptr_route = route_num;
    int *ptr_stop = stop_num;
    char c, line[BUFFER];
    while ((c = getchar()) != EOF) {
        if (fgets(line, BUFFER, stdin) == NULL) {
            return;
        }
        switch(c) {
            case 'q':
                free_memory(stops, routes, ptr_stop, ptr_route);
                return;
            case 'c':
                if (command_c(line, &routes, ptr_route) == ERROR) {
                    free_memory(stops, routes, ptr_stop, ptr_route);
                    printf("No memory.\n");
                    exit(1);
                }
                break;
            case 'p':
                if (command_p(line, &stops, routes, 
                              ptr_stop, *route_num) == ERROR) {
                    free_memory(stops, routes, ptr_stop, ptr_route);
                    printf("No memory.\n");
                    exit(1);
                }
                break;
            case 'l':
                if (command_l(line, &routes, stops,
                          *route_num, *stop_num) == ERROR) {
                    free_memory(stops, routes, ptr_stop, ptr_route);
                    printf("No memory.\n");
                    exit(1);
                }
                break;
            case 'i':
                command_i(&stops, routes, *stop_num, *route_num);
                break;
            case 'a':
                free_memory(stops, routes, ptr_stop, ptr_route);
                break;
            case 'r':
                command_r(line, &routes, ptr_route);
                break;
            case 'e':
                command_e(line, &stops, ptr_stop, &routes, *route_num);
                break;
        }
    }
}

/*------------------------------------------------------------------------------
 * Function: command_p
 * Description: function that handles the command "p" in function of the number
 *              of arguments
 * Output: doesn't return anything
------------------------------------------------------------------------------*/
int command_p(char line[], Stop **stops, 
               Route *routes, int *stop_num, int route_num) {

    char **arguments = NULL;
    int max_arguments = 3;
    int exists, arg_number = parser(line, &arguments, max_arguments);

    switch (arg_number) {
        case 0:
            list_stops(stops, routes, *stop_num, route_num);
            break;

        case 1:
            exists = check_stop(arguments[0], stops, arg_number, *stop_num);
            if (!exists)
                printf("%s: no such stop.\n", arguments[0]);
            break;

        case 3:
            exists = check_stop(arguments[0], stops, arg_number, *stop_num);
            if (!exists) {
                if (create_stop(arguments, stops, stop_num) == ERROR) {
                    free_arguments(arguments, max_arguments);
                    return ERROR;
                }
            }
            else
                printf("%s: stop already exists.\n", arguments[0]);
            break;
    }
    free_arguments(arguments, max_arguments);
    return TRUE;
}

/*------------------------------------------------------------------------------
 * Function: command_c
 * Description: function that handles the command "c" in function of the number
 *              of arguments
 * Output: doesn't return anything
------------------------------------------------------------------------------*/
int command_c(char line[], Route **routes,
               int *route_num) {

    char **arguments = NULL;
    int max_arguments = 2, arg_number = parser(line, &arguments, max_arguments);
    int i, reverse_flag = FALSE;
    int exists = FALSE;

    switch(arg_number) {
        case 0:
            for (i = 0; i < *route_num; i++) {
                print_route_description((*routes)[i]);
            }
            break;

        case 1:
            exists = get_stops_route(arguments, routes, *route_num);
            if (!exists) 
                if (create_route(arguments, routes, route_num) == ERROR) {
                    free_arguments(arguments, arg_number);
                    return ERROR;
                }
            break;

        case 2:
            reverse_flag = is_inverted(arguments[1]);
            if (reverse_flag == FALSE) {
                printf("incorrect sort option.\n");
                break;
            }
            get_inverted_stops_route(arguments, routes, *route_num);
    }
    free_arguments(arguments, max_arguments);
    return TRUE;
}

/*------------------------------------------------------------------------------
 * Function: command_l
 * Description: function that handles the command "l"
 * Output: doesn't return anything
------------------------------------------------------------------------------*/
int command_l(char line[], Route **routes, Stop *stops, int route_num,
                int stop_num) {

    /* the way this command works is by adding connections to an array, and 
     *checking where the last connection of that same route is in order to 
     *update index, this will provide the opportunity to jump from connection to 
     *connection (of the same route) instead of going through each one, 
     *improving efficiency                                                    */

    char **args = NULL;
    int add_end = FALSE; /*to check if we're adding to the end of the route*/
    int max_arguments = 5;
    int route_index, size_1, size_2;
    Connection spec_connection;

    int arg_number = parser(line, &args, max_arguments);
    if (!is_valid_connection(args, routes, stops, stop_num, route_num,
                             &route_index)) {
        free_arguments(args, arg_number);
        return TRUE;
    }
    size_1 = strlen(args[1]);
    size_2 = strlen(args[2]);
    if (create_connection(args, routes, route_index, size_1, size_2, &spec_connection) == ERROR) {
        free_arguments(args, arg_number);
        return ERROR;
    }

    if ((*routes)[route_index].stops_number == 0) { /*if it's the first connection*/
        add_route_information(args, routes, route_index,
                              size_1, size_2, spec_connection);
    }
    else if (strcmp(args[1], (*routes)[route_index].last_stop) == EQUAL) {
        add_end = TRUE;
        change_route_information(args, routes, route_index, 
                                add_end, size_2, spec_connection);
    }
    else { /*when we're adding to the beggining of the route*/
        change_route_information(args, routes, route_index, 
                                add_end, size_1, spec_connection);
    }
    free_arguments(args, arg_number);
    return TRUE;
}

/*------------------------------------------------------------------------------
 * Function: command_i
 * Description: function that handles the command i
 * Output: doesn't return anything
------------------------------------------------------------------------------*/
void command_i(Stop **stops, Route *routes,
               int stop_num, int route_num) {
    
    int i, j, pos = 0;
    
    for (i = 0; i < stop_num; i++) {
        (*stops)[i] = add_routes_passing((*stops)[i], routes, route_num);
        if ((*stops)[i].routes_passing > 1) {
            int *list_of_routes = malloc(sizeof(int) * route_num);

            for (j = 0; j < route_num; j++) {
                if (routes[j].stops_number == 0) {
                    continue;
                }
                else if ((strcmp((*stops)[i].name, routes[j].first_stop) == EQUAL) || 
                        (strcmp((*stops)[i].name, routes[j].last_stop)) == EQUAL) {
                            list_of_routes[pos] = j;
                            pos++;
                }   
                else {
                    Linked *aux = routes[j].first_connection;
                    while (aux != NULL) {
                        if (strcmp((*stops)[i].name, aux->spec_connection.final_stop) == EQUAL) {
                            list_of_routes[pos] = j;
                            pos++;
                            break;
                        }
                        aux = aux->next;
                    }
                }
            }
            bubble_sort(routes, list_of_routes, pos);
            print_routes_passing(pos, list_of_routes, (*stops)[i], routes);
            pos = 0;
            free(list_of_routes);
        }
    }
}

void command_r(char line[], Route **routes, int *route_num) {

    char **arguments = NULL;
    int max_arguments = 1, arg_number = parser(line, &arguments, max_arguments);
    int route_index = 0, exists = FALSE, i;

    for (i = 0; i < *route_num; i++) {
        if (strcmp((*routes)[i].name, arguments[0]) == EQUAL) {
            route_index = i;
            exists = TRUE;
            break;
        }
    }

    if (!exists) {
        printf("%s: no such line.\n", arguments[0]);
    }
    else {
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
    free_arguments(arguments, arg_number);
}

void command_e(char line[], Stop **stops, int *stop_num, Route **routes, int route_num) {

    char **arguments = NULL;
    int max_arguments = 1, arg_number = parser(line, &arguments, max_arguments);
    int stop_index = 0, exists = FALSE, i;

    for (i = 0; i < *stop_num; i++) {
        if (strcmp((*stops)[i].name, arguments[0]) == EQUAL) {
            stop_index = i;
            exists = TRUE;
            break;
        }
    }
    if (!exists) {
        printf("%s: no such stop.\n", arguments[0]);
        free_arguments(arguments, arg_number);
        return;
    }
    for (i = 0; i < route_num; i++) {
        if ((*routes)[i].stops_number == 0) {
            continue;
        }
        else {
            while(strcmp((*routes)[i].first_stop, (*stops)[stop_index].name) == EQUAL) {
                (*routes)[i].duration -= (*routes)[i].first_connection->spec_connection.duration;
                (*routes)[i].cost -= (*routes)[i].first_connection->spec_connection.cost;
                if ((*routes)[i].first_connection->next == NULL) {
                    free((*routes)[i].first_stop);
                    (*routes)[i].first_stop = NULL;
                    free((*routes)[i].first_connection->spec_connection.route_name);
                    free((*routes)[i].first_connection->spec_connection.initial_stop);
                    free((*routes)[i].first_connection->spec_connection.final_stop);
                    free((*routes)[i].first_connection);
                    (*routes)[i].first_connection = NULL;
                    (*routes)[i].stops_number = 0;
                    free((*routes)[i].last_stop);
                    (*routes)[i].last_stop = NULL;
                    (*routes)[i].last_connection = NULL;
                    break;
                }
                free((*routes)[i].first_stop);
                (*routes)[i].first_stop = malloc(sizeof(char) * (strlen((*routes)[i].first_connection->spec_connection.final_stop) + 1));
                strcpy((*routes)[i].first_stop, (*routes)[i].first_connection->spec_connection.final_stop);
                free((*routes)[i].first_connection -> spec_connection.route_name);    
                free((*routes)[i].first_connection -> spec_connection.initial_stop);
                free((*routes)[i].first_connection -> spec_connection.final_stop);
                (*routes)[i].first_connection = (*routes)[i].first_connection->next;
                free((*routes)[i].first_connection->prev);
                (*routes)[i].first_connection->prev = NULL;
            }
            get_stops_number(routes, i);
            if ((*routes)[i].stops_number == 0) {
                continue;
            }
            else {
                while(strcmp((*routes)[i].last_stop, (*stops)[stop_index].name) == EQUAL) {
                    (*routes)[i].duration -= (*routes)[i].last_connection->spec_connection.duration;
                    (*routes)[i].cost -= (*routes)[i].last_connection->spec_connection.cost;
                    if ((*routes)[i].last_connection -> prev == NULL) {
                        free((*routes)[i].last_stop);
                        (*routes)[i].last_stop = NULL;
                        free((*routes)[i].last_connection->spec_connection.route_name);
                        free((*routes)[i].last_connection->spec_connection.initial_stop);
                        free((*routes)[i].last_connection->spec_connection.final_stop);
                        free((*routes)[i].last_connection);
                        (*routes)[i].last_connection = NULL;
                        (*routes)[i].stops_number = 0;
                        free((*routes)[i].first_stop);
                        (*routes)[i].first_stop = NULL;
                        (*routes)[i].first_connection = NULL;
                        break;
                    }
                    free((*routes)[i].last_stop);
                    (*routes)[i].last_stop = malloc(sizeof(char) * (strlen((*routes)[i].last_connection->spec_connection.initial_stop) + 1));
                    strcpy((*routes)[i].last_stop, (*routes)[i].last_connection->spec_connection.initial_stop);
                    free((*routes)[i].last_connection -> spec_connection.route_name);
                    free((*routes)[i].last_connection -> spec_connection.initial_stop);
                    free((*routes)[i].last_connection -> spec_connection.final_stop);
                    (*routes)[i].last_connection = (*routes)[i].last_connection->prev;
                    free((*routes)[i].last_connection->next);
                    (*routes)[i].last_connection->next = NULL;
                }
            }
            get_stops_number(routes, i);
            if ((*routes)[i].stops_number == 0) {
                continue;
            }
            else {
                Linked *current = (*routes)[i].first_connection;
                while (current != (*routes)[i].last_connection) {
                    Connection new_connection;
                    Linked *aux = current->next; 
                    if (strcmp(current->spec_connection.final_stop, (*stops)[stop_index].name) == EQUAL) {
                        new_connection.duration = current -> spec_connection.duration + current -> next -> spec_connection.duration;
                        new_connection.cost = current -> spec_connection.cost + current -> next -> spec_connection.cost;
                        new_connection.initial_stop = malloc (sizeof(char) * (strlen(current -> spec_connection.initial_stop) + 1));
                        strcpy(new_connection.initial_stop, current -> spec_connection.initial_stop);
                        new_connection.final_stop = malloc (sizeof(char) * (strlen(current -> next -> spec_connection.final_stop) + 1));
                        strcpy(new_connection.final_stop, current -> next -> spec_connection.final_stop);
                        new_connection.route_name = malloc (sizeof(char) * (strlen(current -> spec_connection.route_name) + 1));
                        strcpy(new_connection.route_name, current -> spec_connection.route_name);
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
                    else 
                        current = current -> next;
                }
            }
            get_stops_number(routes, i);
        }
    }
    free((*stops)[stop_index].name);
    for (i = stop_index; i < *stop_num-1; i++)
        (*stops)[i] = (*stops)[i+1];
    (*stops) = realloc((*stops), sizeof(Stop) * (*stop_num-1));
    (*stop_num)--;
    free_arguments(arguments, arg_number);
}