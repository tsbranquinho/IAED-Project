#ifndef constants
#define constants

#define NO_ROUTE -1 /*just to check if there's a route                        */
#define ERROR -1 /*just to check if there's an error allocating memory        */
#define NO_CONNECTIONS 0 /*just to check if there are connections in a route  */
#define FALSE 0 /*boolean value: false                                        */
#define EQUAL 0 /*when two strings are the same                               */
#define TRUE 1 /*boolean value: true                                          */
#define INV_LEN 3 /*length of the abbreviation inv                            */
#define INVERSO_LEN 7 /*length of the word inverso                            */
#define BUFFER 65535 /*maximum number of characters in a line                 */
#define INVERSO "inverso" /*the word inverso                                  */

typedef struct { /*struct of connections*/
    char *route_name;
    char *initial_stop;
    char *final_stop;
    double cost;
    double duration;
} Connection;

typedef struct Linked { /*struct of linked list for connections*/
    Connection spec_connection;
    struct Linked *next;
    struct Linked *prev;
} Linked;

typedef struct { /*struct of routes*/
    char *name;
    char *first_stop;
    char *last_stop;
    double cost;
    double duration;
    int stops_number;
    Linked *first_connection;
    Linked *last_connection;
} Route;

typedef struct { /*struct of stops*/
    char *name;
    double latitude;
    double longitude;
    int routes_passing;
} Stop;

#endif /*constants*/
