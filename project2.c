/* IAED-23 - ist1106635 - project2 ---------------------------------------------
 * File: project1.c
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

/*------------------------------GLOBAL VARIABLES------------------------------*/

int global_route_num = 0;
int global_stop_num = 0;
int global_connection_num = 0;

/*-------------------------------MAIN FUNCTION--------------------------------*/
int main() {

    char c, line[BUFSIZ];
    int end;
    Route routes[MAX_ROUTES];
    Stop stops[MAX_STOPS];
    Connection connections[MAX_CONNECTIONS];

    while ((c = getchar()) != EOF) {
        if (fgets(line, BUFSIZ, stdin) == NULL) {
            return 0;
        }
        end = handle_command(line, c, stops, routes, connections);
        if (!end) 
            break;
    }
    return 0;
}

/*------------------------------------------------------------------------------
 * Function: handle_command
 * Description: brief function that handles the command the user inputs
 * Output: returns FALSE if user terminates the program, TRUE otherwise
------------------------------------------------------------------------------*/
int handle_command(char line[], char command, Stop stops[], 
                   Route routes[], Connection connections[]) {

    switch(command) {
            case 'q':
                return FALSE;
            case 'c':
                command_c(line, routes, connections);
                break;
            case 'p':
                command_p(line, stops, connections, routes);
                break;
            case 'l':
                command_l(line, routes, stops, connections);
                break;
            case 'i':
                command_i(stops, routes, connections);
                break;
    }
    return TRUE;
}

/*------------------------------------------------------------------------------
 * Function: parser
 * Description: parses the line the user inputs into an array of arguments
 * Output: returns the number of arguments
------------------------------------------------------------------------------*/
int parser(char line[], char arguments[][STOP_NAME_LENGTH]) {

    int i, length = strlen(line);
    int space = FALSE, quotation = FALSE, arg_number = 0, j = 0;

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
                    arguments[arg_number][j] = line[i];
                    j++;
                }
                break;

            case '"':
            case '\n':
                quotation = !quotation;
                break;

            default:
                if (space) {
                    arg_number ++;
                    j = 0;
                    space = FALSE;
                }
                arguments[arg_number][j] = line[i];
                j++;
        }
    }
    return arg_number+1; /*+1 since the array starts with position 0*/
}

/*------------------------------------------------------------------------------
 * Function: command_p
 * Description: function that handles the command "p" in function of the number
 *              of arguments
 * Output: doesn't return anything
------------------------------------------------------------------------------*/
void command_p(char line[], Stop stops[],
                Connection connections[], Route routes[]) {

    char arguments[MAX_ARGUMENTS][STOP_NAME_LENGTH] = {0};
    int exists, arg_number = parser(line, arguments);

    switch (arg_number) {
        case 0:
            list_stops(stops, connections, routes);
            break;

        case 1:
            exists = check_stop(arguments[0], stops, arg_number);
            if (!exists)
                printf("%s: no such stop.\n", arguments[0]);
            break;

        case 3:
            exists = check_stop(arguments[0], stops, arg_number);
            if (!exists) {
                create_stop(arguments, stops);
            }
            else
                printf("%s: stop already exists.\n", arguments[0]);
            break;
    }
}

/*------------------------------------------------------------------------------
 * Function: command_c
 * Description: function that handles the command "c" in function of the number
 *              of arguments
 * Output: doesn't return anything
------------------------------------------------------------------------------*/
void command_c(char line[], Route routes[],  Connection connections[]) {

    char arguments[MAX_ARGUMENTS][STOP_NAME_LENGTH] = {0};
    int arg_number = parser(line, arguments), i, reverse_flag = FALSE;
    int exists = FALSE;

    switch(arg_number) {
        case 0:
            for (i = 0; i < global_route_num; i++)
                print_route_description(routes[i]);
            break;

        case 1:
            exists = get_stops_route(arguments, routes, connections);
            if (!exists) 
                create_route(arguments, routes);
            break;

        case 2:
            reverse_flag = is_inverted(arguments[1]);
            if (reverse_flag == FALSE) {
                printf("incorrect sort option.\n");
                break;
            }
            get_inverted_stops_route(arguments, routes, connections);
    }
}

/*------------------------------------------------------------------------------
 * Function: command_l
 * Description: function that handles the command "l"
 * Output: doesn't return anything
------------------------------------------------------------------------------*/
void command_l(char line[], Route routes[], Stop stops[], 
                Connection connections[]) {

    /* the way this command works is by adding connections to an array, and 
     *checking where the last connection of that same route is in order to 
     *update index, this will provide the opportunity to jump from connection to 
     *connection (of the same route) instead of going through each one, 
     *improving efficiency                                                    */

    char args[MAX_ARGUMENTS][STOP_NAME_LENGTH] = {0};
    int i, add_end = FALSE; /*to check if we're adding to the end of the route*/
    parser(line, args); /*we don't need the number of args since it's 0*/
    if (!is_valid_connection(args, routes, stops))
        return;

    for(i = 0; i < global_route_num; i++) {
        if(strcmp(routes[i].name, args[0]) == EQUAL) {
            create_connection(args, routes, connections, i);
            if (routes[i].stops_number == 0) { /*if it's the first connection*/
                add_route_information(args, routes, i);
            }
            else if (strcmp(args[1], routes[i].last_stop) == EQUAL) {
                add_end = TRUE;
                change_route_information(args, routes, connections, i, add_end);
            }
            else { /*when we're adding to the beggining of the route*/
                change_route_information(args, routes, connections, i, add_end);
            }
            break;
        }
    }
    global_connection_num++;
}

/*------------------------------------------------------------------------------
 * Function: command:i
 * Description: function that handles the command i
 * Output: doesn't return anything
------------------------------------------------------------------------------*/
void command_i(Stop stops[], Route routes[], Connection connections[]) {

    int i, j, k, pos = 0;

    for (i = 0; i < global_stop_num; i++) {
        stops[i] = add_routes_passing(stops[i], connections, routes);
        /*to update the number of routes that go through that stop*/
        if (stops[i].routes_passing > 1) { 
            int list_of_routes[MAX_ROUTES] = {0}; 

            for (j = 0; j < global_route_num; j++) {
                k = routes[j].start_index; /*to get first connection*/
                pos = check_first_and_last(stops[i], routes[j], j, 
                                            list_of_routes, pos);
                while (k != routes[j].end_index) { /*until the last one*/
                    if (strcmp(stops[i].name, \
                        connections[k].final_stop) == EQUAL) {
                            list_of_routes[pos] = j;
                            pos++;
                            break;
                    }
                    k = connections[k].next_index; /*to get next connection*/
                }
            }
            bubble_sort(routes, list_of_routes, pos);
            print_routes_passing(pos, list_of_routes, stops[i], routes);
            pos = 0;
        }
    }
}     

/*------------------------------------------------------------------------------
 * Function: add_routes_passing
 * Description: function that changes the number of routes in which a stop is
 *              passing through
 * Output: returns the stop with the number of routes updated
------------------------------------------------------------------------------*/
Stop add_routes_passing(Stop p_stop, Connection connection[], Route routes[]) {

    int i, j;
    p_stop.routes_passing = 0;

    for (i = 0; i < global_route_num; i++) {
        j = routes[i].start_index;
        if (strcmp(p_stop.name, routes[i].first_stop) == EQUAL) {
            /*if the stop is the first one of the route*/
            p_stop.routes_passing++;
        }
        else if (strcmp(p_stop.name, routes[i].last_stop) == EQUAL) {
            /*if it's the last one*/
            p_stop.routes_passing++;
        }
        else if (j == -1) {
            /*if there aren't any stops*/
            continue;
        }
        else {
            while (j != routes[i].end_index) {
                if (strcmp(p_stop.name, connection[j].final_stop) == EQUAL) {
                    p_stop.routes_passing++;
                    break;
                }
                j = connection[j].next_index;
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
void create_stop(char arguments[][STOP_NAME_LENGTH], Stop stops[]) {

    strcpy(stops[global_stop_num].name, arguments[0]);
    stops[global_stop_num].latitude = atof(arguments[1]);
    stops[global_stop_num].longitude = atof(arguments[2]);
    stops[global_stop_num].routes_passing = 0;
    global_stop_num++;
}

/*------------------------------------------------------------------------------
 * Function: list_stops
 * Description: function that prints all the stops
 * Output: doesn't return anything
------------------------------------------------------------------------------*/
void list_stops(Stop stops[], Connection connections[], Route routes[]) {
    
    int i; 

    for (i = 0; i < global_stop_num; i++) {
        stops[i] = add_routes_passing(stops[i], connections, routes);
        printf("%s: %16.12f %16.12f %d\n", stops[i].name, 
                stops[i].latitude, stops[i].longitude, 
                stops[i].routes_passing);
    }
}

/*------------------------------------------------------------------------------
 * Function: check_stop
 * Description: function that checks if certain stop exists
 * Output: returns TRUE if the stop exists, FALSE otherwise
------------------------------------------------------------------------------*/
int check_stop(char arguments[], Stop stops[], int arg_number) {

    int i;

    for (i = 0; i < global_stop_num; i++) {
        if (strcmp(stops[i].name, arguments) == EQUAL) {
            if (arg_number == 1) {
                printf("%16.12f %16.12f\n", stops[i].latitude, 
                                            stops[i].longitude);
            }
            return TRUE;
        }
    }
    return FALSE;
}

/*------------------------------------------------------------------------------
 * Function: create_route
 * Description: function that creates a route given by the user
 * Output: doesn't return anything
------------------------------------------------------------------------------*/
void create_route(char arguments[][STOP_NAME_LENGTH], Route routes[]) {

    strcpy(routes[global_route_num].name, arguments[0]);
    routes[global_route_num].stops_number = 0;
    routes[global_route_num].cost = 0;
    routes[global_route_num].duration = 0;
    routes[global_route_num].start_index = -1;
    /*since we don't have stops in this route yet*/
    global_route_num++;
}

/*------------------------------------------------------------------------------
 * Function: get_stops_route
 * Description: function that prints all the stops in a certain route from
 *              start to end
 * Output: return TRUE if the route exists, FALSE otherwise
------------------------------------------------------------------------------*/
int get_stops_route(char arguments[][STOP_NAME_LENGTH], 
                    Route routes[], Connection connections[]) {
    int i, j;
    int exists = FALSE;

    for (i = 0; i < global_route_num; i++) {
        if (strcmp(routes[i].name, arguments[0]) == EQUAL) {

            exists = TRUE;

            if ((routes[i].stops_number) == 0)
                break;

            printf("%s", routes[i].first_stop);
            j = routes[i].start_index; /*to get the first connection*/

            while (j != routes[i].end_index) { /*until the last one*/
                printf(", %s", connections[j].final_stop);
                /*print final stop from each connection and jump to 
                next of the same route                                        */
                j = connections[j].next_index;
            }

            printf(", %s\n", routes[i].last_stop);
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
void get_inverted_stops_route(char arguments[][STOP_NAME_LENGTH], 
                              Route routes[], Connection connections[]) {
    int i, j;

    /*it's the same as the function before, but we go from end to beginning*/
    for (i = 0; i < global_route_num; i++) {
        if (strcmp(routes[i].name, arguments[0]) == EQUAL) {
            if (routes[i].stops_number == 0)
                break;

            j = routes[i].end_index;
            printf("%s", routes[i].last_stop);

            while (j != routes[i].start_index) {
                printf(", %s", connections[j].initial_stop);
                j = connections[j].prev_index;
            }

            printf(", %s\n", routes[i].first_stop);
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


/*------------------------------------------------------------------------------
 * Function: create_connection
 * Description: function that creates a connection between two stops in a
 *              certain route
 * Output: doesn't return anything
------------------------------------------------------------------------------*/
void create_connection(char arguments[][STOP_NAME_LENGTH], Route routes[], 
                       Connection connections[], int i) {

    strcpy(connections[global_connection_num].route_name,arguments[0]);
    strcpy(connections[global_connection_num].initial_stop, arguments[1]);
    strcpy(connections[global_connection_num].final_stop, arguments[2]);
    connections[global_connection_num].cost = atof(arguments[3]);
    connections[global_connection_num].duration = atof(arguments[4]);
    /*to update route's cost and duration*/
    routes[i].cost += connections[global_connection_num].cost;
    routes[i].duration += connections[global_connection_num].duration;
}

/*------------------------------------------------------------------------------
 * Function: add_route_information
 * Description: function that adds the information of a route according to the 
 *              connection given to the array of routes
 * Output: doesn't return anything
------------------------------------------------------------------------------*/
void add_route_information(char arguments[][STOP_NAME_LENGTH], Route routes[], 
                           int i) {

    routes[i].stops_number = 2; /*since it's the first connection of the route*/
    strcpy(routes[i].first_stop, arguments[1]);
    strcpy(routes[i].last_stop, arguments[2]);
    routes[i].start_index = global_connection_num;
    routes[i].end_index = global_connection_num;
    
}

/*------------------------------------------------------------------------------
 * Function: change_route_information
 * Description: function that changes the information of a route according 
 *              to the connection given
 * Output: doesn't return anything
------------------------------------------------------------------------------*/
void change_route_information(char args[][STOP_NAME_LENGTH], Route routes[],
                              Connection connections[], int i, int add_end) {

    int j;
    routes[i].stops_number++;
    if (add_end) { /*if we add the connection to the end of the route*/
        strcpy(routes[i].last_stop, args[2]);
        routes[i].end_index = global_connection_num; /*update route's end*/

        for (j = global_connection_num-1; j >= 0; j--) {
            if (strcmp(connections[j].final_stop, 
            args[1]) == EQUAL) {
                /* when we find the last connection, we update the index to 
                the new one, and the new one we create the index to the 
                previous connection                                           */
                connections[j].next_index = global_connection_num;
                connections[global_connection_num].prev_index = j;
                break;
            }
        }
    }
    else { /*if we add the connection to the beginning of the route*/
        strcpy(routes[i].first_stop, args[1]);
        routes[i].start_index = global_connection_num;
        for (j = global_connection_num-1; j >= 0; j--) {
            if (strcmp(connections[j].initial_stop, 
            args[2]) == EQUAL) {
                /*the opposite to the add to end case*/
                connections[j].prev_index = global_connection_num;
                connections[global_connection_num].next_index = j;
                break;
            }
        }
    }
}

/*------------------------------------------------------------------------------
 * Function: is_valid_connection
 * Description: function that checks if the connection given is valid
 * Output: return TRUE all checks are passed, FALSE otherwise
------------------------------------------------------------------------------*/
int is_valid_connection(char arguments[][STOP_NAME_LENGTH],
                        Route routes[], Stop stops[]) {

    int route_num, exists = FALSE;

    route_num = find_route(arguments, routes); 
    /*so we can get the route to check if the stops belong to the end 
      or the beggining                                                        */
    if (route_num == NO_ROUTE)
        return FALSE;

    if (!find_stops(arguments, stops))
        return FALSE;

    if ((routes[route_num].start_index == -1)||
        (strcmp(routes[route_num].last_stop, arguments[1]) == EQUAL) ||
        (strcmp(routes[route_num].first_stop, arguments[2]) == EQUAL)) {
            exists = TRUE;
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
int find_route(char arguments[][STOP_NAME_LENGTH], Route routes[]) {

    int i, route_num, exists = FALSE;
    for (i = 0; i < global_route_num; i++) {
        if (strcmp(arguments[0], routes[i].name) == EQUAL) {
            route_num = i;
            exists = TRUE;
            break;
        }
    }
    if (!exists) {
        printf("%s: no such line.\n", arguments[0]);
        return NO_ROUTE;
    }
    return route_num; /*return the index of the route*/
}

/*------------------------------------------------------------------------------
 * Function: find_stops
 * Description: function that finds the stops given in the connections command
 * Output: return TRUE if both stops exist, FALSE otherwise
------------------------------------------------------------------------------*/
int find_stops(char arguments[][STOP_NAME_LENGTH], Stop stops[]) {

    int i, exists = FALSE, exists_second = FALSE;
    for (i = 0; i < global_stop_num; i++) {
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


/*------------------------------------------------------------------------------
 * Function: bubble_sort
 * Description: function that sorts the routes in alphabetical order
 * Output: doesn't return anything
------------------------------------------------------------------------------*/
void bubble_sort(Route routes[], int list_of_routes[], int len) {

    int i, j, done, aux;

    for (i = 0; i < len; i++){
        done = TRUE;
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
                          int list_of_routes[], int pos) {

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
                          Stop spec_stop, Route routes[]) {

    int j; 

    printf("%s %d: ", spec_stop.name, spec_stop.routes_passing);
    for (j = 0; j < pos-1; j++) {
        printf("%s ", routes[list_of_routes[j]].name);
    }
    printf("%s\n", routes[list_of_routes[j]].name);
}