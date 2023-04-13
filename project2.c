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


/*------------------------------------------------------------------------------
 * Function: parser
 * Description: parses the line the user inputs into an array of arguments
 * Output: returns the number of arguments if the command was successful,
 *         ERROR if it runs out of memory
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
                (*arguments)[arg_number] = realloc
                                 ((*arguments)[arg_number], (j+1)*sizeof(char));
                break;
            default:
                if (space) {
                    (*arguments)[arg_number][j] = '\0';
                    (*arguments)[arg_number] = realloc
                                 ((*arguments)[arg_number], (j+1)*sizeof(char));
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

/*------------------------------------------------------------------------------
 * Function: command_p
 * Description: function that handles the command "p" in function of the number
 *              of arguments
 * Output: returns TRUE if the command was successful,
 *         ERROR if it runs out of memory
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
 * Output: returns TRUE if the command was successful, 
 *         ERROR if it runs out of memory
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
 * Output: returns TRUE if the command was successful, 
 *         ERROR if it runs out of memory
------------------------------------------------------------------------------*/
int command_l(char line[], Route **routes, Stop *stops, int route_num,
                int stop_num) {


    char **args = NULL;
    Connection spec_connection;
    int add_end = FALSE; /*to check if we're adding to the end of the route*/
    int max_arguments = 5, route_index, size_1, size_2;
    int arg_number = parser(line, &args, max_arguments);

    if (!is_valid_connection(args, routes, stops, stop_num, route_num,
                             &route_index)) {
        free_arguments(args, arg_number);
        return TRUE;
    }

    size_1 = strlen(args[1]);
    size_2 = strlen(args[2]);

    if (create_connection(args, routes, route_index, 
                          size_1, size_2, &spec_connection) == ERROR) {
        free_arguments(args, arg_number);
        return ERROR;
    }

    if ((*routes)[route_index].stops_number == 0) { /*if it's the first one*/
        add_route_information(args, routes, route_index,
                              size_1, size_2, spec_connection);
    }

    else if (strcmp(args[1], (*routes)[route_index].last_stop) == EQUAL) {
        add_end = TRUE;
        change_route_information(args, routes, route_index, 
                                add_end, size_2, spec_connection);
    }

    else { /*when we're adding to the beginning of the route*/
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
    
    int i, pos = 0;
    
    for (i = 0; i < stop_num; i++) {
        (*stops)[i] = add_routes_passing((*stops)[i], routes, route_num);

        if ((*stops)[i].routes_passing > 1) {
            int *list_of_routes = malloc(sizeof(int) * route_num);

            pos = add_route_to_list(list_of_routes, pos, route_num, 
                                    i, stops, routes);
            bubble_sort(routes, list_of_routes, pos);
            print_routes_passing(pos, list_of_routes, (*stops)[i], routes);
            pos = 0;
            free(list_of_routes);
        }
    }
}

/*------------------------------------------------------------------------------
 * Function: command_r
 * Description: function that handles the command r
 * Output: doesn't return anything
------------------------------------------------------------------------------*/
void command_r(char line[], Route **routes, int *route_num) {

    char **arguments = NULL;
    int max_arguments = 1, arg_number = parser(line, &arguments, max_arguments);
    int route_index = 0;

    route_index = find_route(arguments, routes, route_index);
    if (route_index != NO_ROUTE)
        remove_route(routes, route_index, route_num);
    free_arguments(arguments, arg_number);
}

/*------------------------------------------------------------------------------
 * Function: command_e
 * Description: function that handles the command e
 * Output: doesn't return anything
------------------------------------------------------------------------------*/
void command_e(char line[], Stop **stops, int *stop_num, 
               Route **routes, int route_num) {

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
                if (remove_from_beginning(routes, i) == NO_CONNECTIONS)
                    break;
            }

            get_stops_number(routes, i);
            if ((*routes)[i].stops_number == 0) {
                continue;
            }
            else {
                while(strcmp((*routes)[i].last_stop, (*stops)[stop_index].name) == EQUAL) {
                    if (remove_from_end(routes, i) == NO_CONNECTIONS)
                        break;
                }
            }

            get_stops_number(routes, i);
            if ((*routes)[i].stops_number == 0)
                continue;
            else
                remove_from_middle(stops, routes, i, stop_index);
            get_stops_number(routes, i);
        }
    }
    remove_stop(stops, stop_index, stop_num);
    free_arguments(arguments, arg_number);
}

/*------------------------------------------------------------------------------
 * Function: handle_commands
 * Description: brief function that handles the command the user inputs
 * Output: doesn't return anything, exits the program if the user inputs 'q' or
 *         if there is no memory
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

/*-------------------------------MAIN FUNCTION--------------------------------*/
int main() {

    int route_num = 0;
    int stop_num = 0;
    Route routes = {0};
    Stop stops = {0};
    
    handle_commands(&stops, &routes, &route_num, 
                    &stop_num);
    return 0;
}