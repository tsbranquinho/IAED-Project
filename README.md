# Projecto 2 - IAED 2022/2023

## Enunciado

O enunciado do projecto está disponível em [enunciado.md](enunciado.md). 

## Data de entrega: 14 de abril de 2023, às 19h59

Informações detalhadas sobre o processo de submissão estão disponíveis em [informacoes.md](informacoes.md).



# Evaluation

2023-04-09T21:52:13

## Test 1: [+ Accepted+].
## Test 2: [+ Accepted+].
## Test 3: [+ Accepted+].
## Test 4: [+ Accepted+].
## Test 5: [+ Accepted+].
## Test 6: [+ Accepted+].
## Test 7: [+ Accepted+].
## Test 8: [+ Accepted+].
## Test 9: [- Command terminated by signal (6: SIGABRT)-].

## Test 10: [- Command terminated by signal (6: SIGABRT)-].

## Test 11: [- Wrong Answer-].


## Test 12: [- Command terminated by signal (6: SIGABRT)-].

## Test 13: [- Command terminated by signal (6: SIGABRT)-].

## Test 14: [- Wrong Answer-].


## Test 15: [- Command terminated by signal (6: SIGABRT)-].

## Test 16: [- Wrong Answer-].


## Test 17: [- Command terminated by signal (6: SIGABRT)-].

## Test 18: [- Command terminated by signal (6: SIGABRT)-].

## Test 19: [- Command terminated by signal (6: SIGABRT)-].

## Test 20: [- Command terminated by signal (6: SIGABRT)-].

## Test 21: [+ Accepted+].
## Test 22: [+ Accepted+].
## Test 23: [+ Accepted+].
## Test 24: [+ Accepted+].
## Test 25: [- Command terminated by signal (6: SIGABRT)-].

## Test 26: [- Wrong Answer-].


## Test 27: [+ Accepted+].
## Test 28: [+ Accepted+].
## Test 29: [+ Accepted+].
## Test 30: [+ Accepted+].
## Test 31: [- Command terminated by signal (6: SIGABRT)-].

## Test 32: [+ Accepted+].


## Number of passed tests: 17/32


## Valgrind Output:


```
==19915== Memcheck, a memory error detector
==19915== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19915== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==19915== Command: ./proj.out
==19915== 
==19915== Invalid free() / delete / delete[] / realloc()
==19915==    at 0x48369AB: free (vg_replace_malloc.c:530)
==19915==    by 0x1099EE: free_linked_list (project2.c:47)
==19915==    by 0x1099EE: command_r (project2.c:401)
==19915==    by 0x10BA9D: handle_commands (project2.c:135)
==19915==    by 0x10914E: main (project2.c:37)
==19915==  Address 0x4b9ccb0 is 0 bytes inside a block of size 10 free'd
==19915==    at 0x48369AB: free (vg_replace_malloc.c:530)
==19915==    by 0x109D68: command_e (project2.c:459)
==19915==    by 0x10BB7E: handle_commands (project2.c:138)
==19915==    by 0x10914E: main (project2.c:37)
==19915==  Block was alloc'd at
==19915==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==19915==    by 0x10AFFF: create_connection (project2.c:861)
==19915==    by 0x10B603: command_l (project2.c:313)
==19915==    by 0x10BB36: handle_commands (project2.c:121)
==19915==    by 0x10914E: main (project2.c:37)
==19915== 
==19915== Invalid free() / delete / delete[] / realloc()
==19915==    at 0x48369AB: free (vg_replace_malloc.c:530)
==19915==    by 0x1099FC: free_linked_list (project2.c:49)
==19915==    by 0x1099FC: command_r (project2.c:401)
==19915==    by 0x10BA9D: handle_commands (project2.c:135)
==19915==    by 0x10914E: main (project2.c:37)
==19915==  Address 0x4b9cd00 is 0 bytes inside a block of size 9 free'd
==19915==    at 0x48369AB: free (vg_replace_malloc.c:530)
==19915==    by 0x109D7A: command_e (project2.c:460)
==19915==    by 0x10BB7E: handle_commands (project2.c:138)
==19915==    by 0x10914E: main (project2.c:37)
==19915==  Block was alloc'd at
==19915==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==19915==    by 0x10B023: create_connection (project2.c:865)
==19915==    by 0x10B603: command_l (project2.c:313)
==19915==    by 0x10BB36: handle_commands (project2.c:121)
==19915==    by 0x10914E: main (project2.c:37)
==19915== 
==19915== Invalid free() / delete / delete[] / realloc()
==19915==    at 0x48369AB: free (vg_replace_malloc.c:530)
==19915==    by 0x1099CC: free_linked_list (project2.c:51)
==19915==    by 0x1099CC: command_r (project2.c:401)
==19915==    by 0x10BA9D: handle_commands (project2.c:135)
==19915==    by 0x10914E: main (project2.c:37)
==19915==  Address 0x4b9cd50 is 0 bytes inside a block of size 9 free'd
==19915==    at 0x48369AB: free (vg_replace_malloc.c:530)
==19915==    by 0x109D8C: command_e (project2.c:461)
==19915==    by 0x10BB7E: handle_commands (project2.c:138)
==19915==    by 0x10914E: main (project2.c:37)
==19915==  Block was alloc'd at
==19915==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==19915==    by 0x10B040: create_connection (project2.c:868)
==19915==    by 0x10B603: command_l (project2.c:313)
==19915==    by 0x10BB36: handle_commands (project2.c:121)
==19915==    by 0x10914E: main (project2.c:37)
==19915== 
==19915== 
==19915== HEAP SUMMARY:
==19915==     in use at exit: 224 bytes in 4 blocks
==19915==   total heap usage: 613 allocs, 633 frees, 20,377 bytes allocated
==19915== 
==19915== LEAK SUMMARY:
==19915==    definitely lost: 224 bytes in 4 blocks
==19915==    indirectly lost: 0 bytes in 0 blocks
==19915==      possibly lost: 0 bytes in 0 blocks
==19915==    still reachable: 0 bytes in 0 blocks
==19915==         suppressed: 0 bytes in 0 blocks
==19915== Rerun with --leak-check=full to see details of leaked memory
==19915== 
==19915== For counts of detected and suppressed errors, rerun with: -v
==19915== ERROR SUMMARY: 24 errors from 3 contexts (suppressed: 0 from 0)

```


Your code will not be reevaluated if you submit before 2023-04-09 22:02:13 @ Lisbon, Portugal. You need to wait 10 minute(s).

