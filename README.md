# Projecto 2 - IAED 2022/2023

## Enunciado

O enunciado do projecto está disponível em [enunciado.md](enunciado.md). 

## Data de entrega: 14 de abril de 2023, às 19h59

Informações detalhadas sobre o processo de submissão estão disponíveis em [informacoes.md](informacoes.md).



# Evaluation

2023-04-09T09:43:43

## Test 1: [+ Accepted+].
## Test 2: [+ Accepted+].
## Test 3: [+ Accepted+].
## Test 4: [- Wrong Answer-].


## Test 5: [+ Accepted+].
## Test 6: [- Wrong Answer-].


## Test 7: [- Command terminated by signal (6: SIGABRT)-].

## Test 8: [- Command terminated by signal (6: SIGABRT)-].

## Test 9: [- Wrong Answer-].


## Test 10: [- Wrong Answer-].


## Test 11: [- Wrong Answer-].


## Test 12: [- Wrong Answer-].


## Test 13: [- Wrong Answer-].


## Test 14: [- Wrong Answer-].


## Test 15: [- Wrong Answer-].


## Test 16: [- Wrong Answer-].


## Test 17: [- Wrong Answer-].


## Test 18: [- Wrong Answer-].


## Test 19: [- Wrong Answer-].


## Test 20: [- Wrong Answer-].


## Test 21: [- Command terminated by signal (6: SIGABRT)-].

## Test 22: [+ Accepted+].
## Test 23: [+ Accepted+].
## Test 24: [- Command terminated by signal (6: SIGABRT)-].

## Test 25: [- Wrong Answer-].


## Test 26: [- Command terminated by signal (6: SIGABRT)-].

## Test 27: [+ Accepted+].
## Test 28: [- Memory Limit Exceeded-].

## Test 29: [- Memory Limit Exceeded-].

## Test 30: [- Memory Limit Exceeded-].

## Test 31: [- Memory Limit Exceeded-].

## Test 32: [- Wrong Answer-].




## Number of passed tests: 7/32


## Valgrind Output:


```
==25615== Memcheck, a memory error detector
==25615== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25615== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==25615== Command: ./proj.out
==25615== 
==25615== Invalid read of size 8
==25615==    at 0x109945: free_linked_list (project2.c:46)
==25615==    by 0x109945: command_r (project2.c:424)
==25615==    by 0x10B80D: handle_commands (project2.c:135)
==25615==    by 0x10914E: main (project2.c:37)
==25615==  Address 0x4f8b2e0 is 0 bytes inside a block of size 56 free'd
==25615==    at 0x48369AB: free (vg_replace_malloc.c:530)
==25615==    by 0x10993C: free_linked_list (project2.c:52)
==25615==    by 0x10993C: command_r (project2.c:424)
==25615==    by 0x10B80D: handle_commands (project2.c:135)
==25615==    by 0x10914E: main (project2.c:37)
==25615==  Block was alloc'd at
==25615==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==25615==    by 0x10B6A1: add_route_information (project2.c:763)
==25615==    by 0x10B6A1: command_l (project2.c:314)
==25615==    by 0x10B8A6: handle_commands (project2.c:121)
==25615==    by 0x10914E: main (project2.c:37)
==25615== 
==25615== Invalid read of size 8
==25615==    at 0x109948: free_linked_list (project2.c:45)
==25615==    by 0x109948: command_r (project2.c:424)
==25615==    by 0x10B80D: handle_commands (project2.c:135)
==25615==    by 0x10914E: main (project2.c:37)
==25615==  Address 0x4f8b308 is 40 bytes inside a block of size 56 free'd
==25615==    at 0x48369AB: free (vg_replace_malloc.c:530)
==25615==    by 0x10993C: free_linked_list (project2.c:52)
==25615==    by 0x10993C: command_r (project2.c:424)
==25615==    by 0x10B80D: handle_commands (project2.c:135)
==25615==    by 0x10914E: main (project2.c:37)
==25615==  Block was alloc'd at
==25615==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==25615==    by 0x10B6A1: add_route_information (project2.c:763)
==25615==    by 0x10B6A1: command_l (project2.c:314)
==25615==    by 0x10B8A6: handle_commands (project2.c:121)
==25615==    by 0x10914E: main (project2.c:37)
==25615== 
==25615== Invalid free() / delete / delete[] / realloc()
==25615==    at 0x48369AB: free (vg_replace_malloc.c:530)
==25615==    by 0x109955: free_linked_list (project2.c:47)
==25615==    by 0x109955: command_r (project2.c:424)
==25615==    by 0x10B80D: handle_commands (project2.c:135)
==25615==    by 0x10914E: main (project2.c:37)
==25615==  Address 0x4f8b1f0 is 0 bytes inside a block of size 10 free'd
==25615==    at 0x48369AB: free (vg_replace_malloc.c:530)
==25615==    by 0x109955: free_linked_list (project2.c:47)
==25615==    by 0x109955: command_r (project2.c:424)
==25615==    by 0x10B80D: handle_commands (project2.c:135)
==25615==    by 0x10914E: main (project2.c:37)
==25615==  Block was alloc'd at
==25615==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==25615==    by 0x10AD6F: create_connection (project2.c:734)
==25615==    by 0x10B362: command_l (project2.c:308)
==25615==    by 0x10B8A6: handle_commands (project2.c:121)
==25615==    by 0x10914E: main (project2.c:37)
==25615== 
==25615== Invalid read of size 8
==25615==    at 0x109956: free_linked_list (project2.c:48)
==25615==    by 0x109956: command_r (project2.c:424)
==25615==    by 0x10B80D: handle_commands (project2.c:135)
==25615==    by 0x10914E: main (project2.c:37)
==25615==  Address 0x4f8b2e8 is 8 bytes inside a block of size 56 free'd
==25615==    at 0x48369AB: free (vg_replace_malloc.c:530)
==25615==    by 0x10993C: free_linked_list (project2.c:52)
==25615==    by 0x10993C: command_r (project2.c:424)
==25615==    by 0x10B80D: handle_commands (project2.c:135)
==25615==    by 0x10914E: main (project2.c:37)
==25615==  Block was alloc'd at
==25615==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==25615==    by 0x10B6A1: add_route_information (project2.c:763)
==25615==    by 0x10B6A1: command_l (project2.c:314)
==25615==    by 0x10B8A6: handle_commands (project2.c:121)
==25615==    by 0x10914E: main (project2.c:37)
==25615== 
==25615== Invalid free() / delete / delete[] / realloc()
==25615==    at 0x48369AB: free (vg_replace_malloc.c:530)
==25615==    by 0x109963: free_linked_list (project2.c:49)
==25615==    by 0x109963: command_r (project2.c:424)
==25615==    by 0x10B80D: handle_commands (project2.c:135)
==25615==    by 0x10914E: main (project2.c:37)
==25615==  Address 0x4f8b240 is 0 bytes inside a block of size 9 free'd
==25615==    at 0x48369AB: free (vg_replace_malloc.c:530)
==25615==    by 0x109963: free_linked_list (project2.c:49)
==25615==    by 0x109963: command_r (project2.c:424)
==25615==    by 0x10B80D: handle_commands (project2.c:135)
==25615==    by 0x10914E: main (project2.c:37)
==25615==  Block was alloc'd at
==25615==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==25615==    by 0x10AD93: create_connection (project2.c:738)
==25615==    by 0x10B362: command_l (project2.c:308)
==25615==    by 0x10B8A6: handle_commands (project2.c:121)
==25615==    by 0x10914E: main (project2.c:37)
==25615== 
==25615== Invalid read of size 8
==25615==    at 0x109964: free_linked_list (project2.c:50)
==25615==    by 0x109964: command_r (project2.c:424)
==25615==    by 0x10B80D: handle_commands (project2.c:135)
==25615==    by 0x10914E: main (project2.c:37)
==25615==  Address 0x4f8b2f0 is 16 bytes inside a block of size 56 free'd
==25615==    at 0x48369AB: free (vg_replace_malloc.c:530)
==25615==    by 0x10993C: free_linked_list (project2.c:52)
==25615==    by 0x10993C: command_r (project2.c:424)
==25615==    by 0x10B80D: handle_commands (project2.c:135)
==25615==    by 0x10914E: main (project2.c:37)
==25615==  Block was alloc'd at
==25615==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==25615==    by 0x10B6A1: add_route_information (project2.c:763)
==25615==    by 0x10B6A1: command_l (project2.c:314)
==25615==    by 0x10B8A6: handle_commands (project2.c:121)
==25615==    by 0x10914E: main (project2.c:37)
==25615== 
==25615== Invalid free() / delete / delete[] / realloc()
==25615==    at 0x48369AB: free (vg_replace_malloc.c:530)
==25615==    by 0x109934: free_linked_list (project2.c:51)
==25615==    by 0x109934: command_r (project2.c:424)
==25615==    by 0x10B80D: handle_commands (project2.c:135)
==25615==    by 0x10914E: main (project2.c:37)
==25615==  Address 0x4f8b290 is 0 bytes inside a block of size 9 free'd
==25615==    at 0x48369AB: free (vg_replace_malloc.c:530)
==25615==    by 0x109934: free_linked_list (project2.c:51)
==25615==    by 0x109934: command_r (project2.c:424)
==25615==    by 0x10B80D: handle_commands (project2.c:135)
==25615==    by 0x10914E: main (project2.c:37)
==25615==  Block was alloc'd at
==25615==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==25615==    by 0x10ADB0: create_connection (project2.c:741)
==25615==    by 0x10B362: command_l (project2.c:308)
==25615==    by 0x10B8A6: handle_commands (project2.c:121)
==25615==    by 0x10914E: main (project2.c:37)
==25615== 
==25615== Invalid free() / delete / delete[] / realloc()
==25615==    at 0x48369AB: free (vg_replace_malloc.c:530)
==25615==    by 0x10993C: free_linked_list (project2.c:52)
==25615==    by 0x10993C: command_r (project2.c:424)
==25615==    by 0x10B80D: handle_commands (project2.c:135)
==25615==    by 0x10914E: main (project2.c:37)
==25615==  Address 0x4f8b2e0 is 0 bytes inside a block of size 56 free'd
==25615==    at 0x48369AB: free (vg_replace_malloc.c:530)
==25615==    by 0x10993C: free_linked_list (project2.c:52)
==25615==    by 0x10993C: command_r (project2.c:424)
==25615==    by 0x10B80D: handle_commands (project2.c:135)
==25615==    by 0x10914E: main (project2.c:37)
==25615==  Block was alloc'd at
==25615==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==25615==    by 0x10B6A1: add_route_information (project2.c:763)
==25615==    by 0x10B6A1: command_l (project2.c:314)
==25615==    by 0x10B8A6: handle_commands (project2.c:121)
==25615==    by 0x10914E: main (project2.c:37)
==25615== 
==25615== 
==25615== HEAP SUMMARY:
==25615==     in use at exit: 1,176 bytes in 56 blocks
==25615==   total heap usage: 598 allocs, 598 frees, 12,925,563 bytes allocated
==25615== 
==25615== LEAK SUMMARY:
==25615==    definitely lost: 112 bytes in 2 blocks
==25615==    indirectly lost: 1,064 bytes in 54 blocks
==25615==      possibly lost: 0 bytes in 0 blocks
==25615==    still reachable: 0 bytes in 0 blocks
==25615==         suppressed: 0 bytes in 0 blocks
==25615== Rerun with --leak-check=full to see details of leaked memory
==25615== 
==25615== For counts of detected and suppressed errors, rerun with: -v
==25615== ERROR SUMMARY: 112 errors from 8 contexts (suppressed: 0 from 0)

```


Your code will not be reevaluated if you submit before 2023-04-09 09:53:43 @ Lisbon, Portugal. You need to wait 10 minute(s).

