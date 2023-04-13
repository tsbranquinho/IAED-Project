#ifndef prototypes
#define prototypes
#include "constants.h"

void handle_commands(Stop *stops, Route *routes, int *route_num, int *stop_num);
int parser(char line[], char ***arguments, int max_arguments);
Stop add_routes_passing(Stop p_stop, Route *routes, int route_num);
int create_stop(char **arguments, Stop **stops, int *stop_num);
void list_stops(Stop **stops, Route *routes, int stop_num, int route_num);
int check_stop(char arguments[], Stop **stops, int arg_number, int stop_num);
int command_p(char line[], Stop **stops, Route *routes, int *stop_num, int route_num);
int is_inverted(char argument[]);
int create_route(char **arguments, Route **routes, int *route_num);
int get_stops_route(char **arguments, Route **routes,  int route_num);
void get_inverted_stops_route(char **arguments, Route **routes,  int route_num);
void print_route_description(Route spec_route);
int command_c(char line[], Route **routes,   int *route_num);
int create_connection(char **arguments, Route **routes,  int route_index, int size_1, int size_2, Connection *spec_connection);
void add_route_information(char **arguments, Route **routes, int i, int size_1, int size_2, Connection spec_connection);
void change_route_information(char **args, Route **routes,  int i, int add_end, int size, Connection spec_connection);
int command_l(char line[], Route **routes, Stop *stops,  int route_num, int stop_num);
int find_route(char **arguments, Route **routes, int route_num);
int find_stops(char **arguments, Stop *stops, int stop_num);
int is_valid_connection(char **arguments, Route **routes, Stop *stops, int stop_num, int route_num, int *route_index);
int check_first_and_last(Stop spec_stop, Route spec_route, int j, int *list_of_routes, int pos);
void print_routes_passing(int pos, int list_of_routes[], Stop spec_stop, Route *routes);
void command_i(Stop **stops, Route *routes,  int stop_num, int route_num);
void bubble_sort(Route *routes, int list_of_routes[], int size);
void free_arguments(char **arguments, int arg_number);
void free_memory(Stop *stops, Route *routes, int *stop_num, int *route_num);
void free_linked(Linked *head);
void command_r(char line[], Route **routes, int *route_num);
void command_e(char line[], Stop **stops, int *stop_num, Route **routes, int route_num);
void get_stops_number(Route **routes, int route_index);

#endif /*prototypes*/