#ifndef constants
#define constants

#define NO_ROUTE -1 /*just to check if there's a route                        */
#define FALSE 0 /*boolean value: false                                        */
#define EQUAL 0 /*when two strings are the same                               */
#define TRUE 1 /*boolean value: true                                          */
#define INV_LEN 3 /*length of the abbreviation inv                            */
#define INVERSO_LEN 7 /*length of the word inverso                            */
#define ROUTE_NAME_LENGTH 21 /*maximum length of a route's name               */
#define STOP_NAME_LENGTH 51 /*maximum length of a stop's name                 */
#define MAX_ROUTES 200 /*maximum number of routes                             */
#define BUFFER 65535 /*maximum number of characters in a line                  */
#define MAX_STOPS 10000 /*maximum number of stops                             */
#define MAX_CONNECTIONS 30000 /*maximum number of connections                 */
#define INVERSO "inverso" /*the word inverso*/

typedef struct { /*struct of routes*/
    char *name;
    char first_stop[STOP_NAME_LENGTH];
    char last_stop[STOP_NAME_LENGTH];
    int start_index;
    int end_index;
    double cost;
    double duration;
    int stops_number;
} Route;

typedef struct { /*struct of stops*/
    char *name;
    double latitude;
    double longitude;
    int routes_passing;
} Stop;

typedef struct { /*struct of connections*/
    int route_index;
    char initial_stop[STOP_NAME_LENGTH];
    char final_stop[STOP_NAME_LENGTH];
    int next_index;
    int prev_index;
    double cost;
    double duration;
} Connection;

#endif /*constants*/
