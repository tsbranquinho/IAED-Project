#ifndef prototypes
#define prototypes
#include "constants.h"

int handle_command(char line[], char command, Stop stops[], Route routes[], Connection connections[]);
int parser(char line[], char arguments[][STOP_NAME_LENGTH]);
Stop add_routes_passing(Stop p_stop, Connection connections[], Route routes[]);
void create_stop(char arguments[][STOP_NAME_LENGTH], Stop stops[]);
void list_stops(Stop stops[], Connection connections[], Route routes[]);
int check_stop(char arguments[], Stop stops[], int arg_number);
void command_p(char line[], Stop stops[], Connection connections[], Route routes[]);
int is_inverted(char argument[]);
void create_route(char arguments[][STOP_NAME_LENGTH], Route routes[]);
int get_stops_route(char arguments[][STOP_NAME_LENGTH], Route routes[], Connection connections[]);
void get_inverted_stops_route(char arguments[][STOP_NAME_LENGTH], Route routes[], Connection connections[]);
void print_route_description(Route spec_route);
void command_c(char line[], Route routes[],  Connection connections[]);
void create_connection(char arguments[][STOP_NAME_LENGTH], Route routes[], Connection connections[], int i);
void add_route_information(char arguments[][STOP_NAME_LENGTH], Route routes[], int i);
void change_route_information(char args[][STOP_NAME_LENGTH], Route routes[], Connection connections[], int i, int add_end);
void command_l(char line[], Route routes[], Stop stops[], Connection connections[]);
int find_route(char arguments[][STOP_NAME_LENGTH], Route routes[]);
int find_stops(char arguments[][STOP_NAME_LENGTH], Stop stops[]);
int is_valid_connection(char arguments[][STOP_NAME_LENGTH], Route routes[], Stop stops[]);
int check_first_and_last(Stop spec_stop, Route spec_route, int j, int list_of_routes[], int pos);
void print_routes_passing(int pos, int list_of_routes[], Stop spec_stop, Route routes[]);
void command_i(Stop stops[], Route routes[], Connection connections[]);
void bubble_sort(Route routes[], int list_of_routes[], int size);


#endif /*prototypes*/