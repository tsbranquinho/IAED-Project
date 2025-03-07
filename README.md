# Bus Network Management System

## Overview

This project is a bus network management system developed as part of the IAED (Algorithms and Data Structures) course. The system allows users to manage bus routes, stops, and connections through a command-line interface. The program supports various commands to add, remove, and list stops and routes, as well as to manage connections between stops.

## Features

- **Stop Management**:
  - Add new stops with names, latitude, and longitude.
  - List all stops with their details.
  - Remove existing stops and update the network accordingly.

- **Route Management**:
  - Create new bus routes.
  - List all routes with their details.
  - Remove existing routes.
  - List stops in a route in both forward and reverse order.

- **Connection Management**:
  - Add connections between stops with cost and duration.
  - Remove connections when stops are removed.
  - Check for valid connections before adding them to the network.

- **Intersection Management**:
  - List all routes that pass through a specific stop.
  - Sort routes alphabetically.

- **Memory Management**:
  - Efficient memory allocation and deallocation.
  - Functions to free memory for stops, routes, and connections.

## Commands

The system supports the following commands:

- **p**: Manage stops.
  - `p` - List all stops.
  - `p <stop_name>` - Show details of a specific stop.
  - `p <stop_name> <latitude> <longitude>` - Add a new stop.

- **c**: Manage routes.
  - `c` - List all routes.
  - `c <route_name>` - Create a new route or list stops in a route.
  - `c <route_name> inverso` - List stops in a route in reverse order.

- **l**: Manage connections.
  - `l <route_name> <stop1> <stop2> <cost> <duration>` - Add a connection between two stops in a route.

- **i**: List all routes that pass through each stop (intersection).

- **r**: Remove a route.
  - `r <route_name>` - Remove a specific route.

- **e**: Remove a stop.
  - `e <stop_name>` - Remove a specific stop and update all routes.

- **q**: Quit the program.

- **a**: Clear all data (stops and routes).

## Data Structures

- **Stop**: Represents a bus stop with a name, latitude, longitude, and the number of routes passing through it.
- **Route**: Represents a bus route with a name, list of stops, cost, duration, and connections between stops.
- **Connection**: Represents a connection between two stops with a route name, initial stop, final stop, cost, and duration.
- **Linked List**: Used to manage connections between stops in a route.

## Memory Management

The program includes functions to handle dynamic memory allocation and deallocation for stops, routes, and connections. It ensures that memory is properly freed when stops or routes are removed, preventing memory leaks.


## Project Description

The project description is available in [enunciado.md](enunciado.md).

## Submission Deadline: April 14, 2023, at 19:59

Detailed information about the submission process is available in [informacoes.md](informacoes.md).



# Evaluation

2023-04-13T21:32:56

## Test 1: [+ Accepted+].
## Test 2: [+ Accepted+].
## Test 3: [+ Accepted+].
## Test 4: [+ Accepted+].
## Test 5: [+ Accepted+].
## Test 6: [+ Accepted+].
## Test 7: [+ Accepted+].
## Test 8: [+ Accepted+].
## Test 9: [+ Accepted+].
## Test 10: [+ Accepted+].
## Test 11: [+ Accepted+].
## Test 12: [+ Accepted+].
## Test 13: [+ Accepted+].
## Test 14: [+ Accepted+].
## Test 15: [+ Accepted+].
## Test 16: [+ Accepted+].
## Test 17: [+ Accepted+].
## Test 18: [+ Accepted+].
## Test 19: [+ Accepted+].
## Test 20: [+ Accepted+].
## Test 21: [+ Accepted+].
## Test 22: [+ Accepted+].
## Test 23: [+ Accepted+].
## Test 24: [+ Accepted+].
## Test 25: [+ Accepted+].
## Test 26: [+ Accepted+].
## Test 27: [+ Accepted+].
## Test 28: [+ Accepted+].
## Test 29: [+ Accepted+].
## Test 30: [+ Accepted+].
## Test 31: [+ Accepted+].
## Test 32: [+ Accepted+].


## Number of passed tests: 32/32


## Valgrind Output:


```
==7611== Memcheck, a memory error detector
==7611== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==7611== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==7611== Command: ./proj.out
==7611== 
==7611== 
==7611== HEAP SUMMARY:
==7611==     in use at exit: 0 bytes in 0 blocks
==7611==   total heap usage: 657 allocs, 657 frees, 20,789 bytes allocated
==7611== 
==7611== All heap blocks were freed -- no leaks are possible
==7611== 
==7611== For counts of detected and suppressed errors, rerun with: -v
==7611== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```


Your code will not be reevaluated if you submit before 2023-04-13 21:42:56 @ Lisbon, Portugal. You need to wait 10 minute(s).

