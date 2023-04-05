# Projecto 2 - IAED 2022/2023

## Enunciado

O enunciado do projecto está disponível em [enunciado.md](enunciado.md). 

## Data de entrega: 14 de abril de 2023, às 19h59

Informações detalhadas sobre o processo de submissão estão disponíveis em [informacoes.md](informacoes.md).



# Evaluation

2023-04-06T00:01:50

## Test 1: [+ Accepted+].
## Test 2: [+ Accepted+].
## Test 3: [+ Accepted+].
## Test 4: [- Wrong Answer-].


## Test 5: [+ Accepted+].
## Test 6: [- Wrong Answer-].


## Test 7: [- Command terminated by signal (6: SIGABRT)-].

## Test 8: [- Time Limit Exceeded-].

## Test 9: [- Wrong Answer-].


## Test 10: [- Wrong Answer-].


## Test 11: [- Wrong Answer-].


## Test 12: [- Wrong Answer-].


## Test 13: [- Wrong Answer-].


## Test 14: [- Time Limit Exceeded-].

## Test 15: [- Time Limit Exceeded-].

## Test 16: [- Time Limit Exceeded-].

## Test 17: [- Time Limit Exceeded-].

## Test 18: [- Wrong Answer-].


## Test 19: [- Wrong Answer-].


## Test 20: [- Wrong Answer-].


## Test 21: [- Time Limit Exceeded-].

## Test 22: [+ Accepted+].
## Test 23: [+ Accepted+].
## Test 24: [- Command terminated by signal (6: SIGABRT)-].

## Test 25: [- Command terminated by signal (6: SIGABRT)-].

## Test 26: [- Command terminated by signal (6: SIGABRT)-].

## Test 27: [- Memory Limit Exceeded-].

## Test 28: [- Memory Limit Exceeded-].

## Test 29: [- Memory Limit Exceeded-].

## Test 30: [- Memory Limit Exceeded-].

## Test 31: [- Memory Limit Exceeded-].

## Test 32: [- Wrong Answer-].




## Number of passed tests: 6/32


## Valgrind Output:


```
==16422== Memcheck, a memory error detector
==16422== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==16422== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==16422== Command: ./proj.out
==16422== 
==16422== Invalid write of size 4
==16422==    at 0x109EDD: check_first_and_last (project2.c:934)
==16422==    by 0x109EDD: command_i (project2.c:353)
==16422==    by 0x10BC13: handle_commands (project2.c:126)
==16422==    by 0x109188: main (project2.c:39)
==16422==  Address 0x4f925a0 is 0 bytes after a block of size 16 alloc'd
==16422==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==16422==    by 0x109D08: command_i (project2.c:346)
==16422==    by 0x10BC13: handle_commands (project2.c:126)
==16422==    by 0x109188: main (project2.c:39)
==16422== 
==16422== Invalid write of size 4
==16422==    at 0x109DF3: command_i (project2.c:360)
==16422==    by 0x10BC13: handle_commands (project2.c:126)
==16422==    by 0x109188: main (project2.c:39)
==16422==  Address 0x4f925a4 is 4 bytes after a block of size 16 alloc'd
==16422==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==16422==    by 0x109D08: command_i (project2.c:346)
==16422==    by 0x10BC13: handle_commands (project2.c:126)
==16422==    by 0x109188: main (project2.c:39)
==16422== 
==16422== Invalid read of size 4
==16422==    at 0x109E70: bubble_sort (project2.c:911)
==16422==    by 0x109E70: command_i (project2.c:368)
==16422==    by 0x10BC13: handle_commands (project2.c:126)
==16422==    by 0x109188: main (project2.c:39)
==16422==  Address 0x4f925a0 is 0 bytes after a block of size 16 alloc'd
==16422==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==16422==    by 0x109D08: command_i (project2.c:346)
==16422==    by 0x10BC13: handle_commands (project2.c:126)
==16422==    by 0x109188: main (project2.c:39)
==16422== 
==16422== Invalid read of size 4
==16422==    at 0x109E74: bubble_sort (project2.c:910)
==16422==    by 0x109E74: command_i (project2.c:368)
==16422==    by 0x10BC13: handle_commands (project2.c:126)
==16422==    by 0x109188: main (project2.c:39)
==16422==  Address 0x4f925a0 is 0 bytes after a block of size 16 alloc'd
==16422==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==16422==    by 0x109D08: command_i (project2.c:346)
==16422==    by 0x10BC13: handle_commands (project2.c:126)
==16422==    by 0x109188: main (project2.c:39)
==16422== 
==16422== Invalid read of size 4
==16422==    at 0x109F20: print_routes_passing (project2.c:952)
==16422==    by 0x109F20: command_i (project2.c:369)
==16422==    by 0x10BC13: handle_commands (project2.c:126)
==16422==    by 0x109188: main (project2.c:39)
==16422==  Address 0x4f925a0 is 0 bytes after a block of size 16 alloc'd
==16422==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==16422==    by 0x109D08: command_i (project2.c:346)
==16422==    by 0x10BC13: handle_commands (project2.c:126)
==16422==    by 0x109188: main (project2.c:39)
==16422== 
==16422== Invalid read of size 4
==16422==    at 0x109F59: print_routes_passing (project2.c:954)
==16422==    by 0x109F59: command_i (project2.c:369)
==16422==    by 0x10BC13: handle_commands (project2.c:126)
==16422==    by 0x109188: main (project2.c:39)
==16422==  Address 0x4f925ac is 12 bytes after a block of size 16 alloc'd
==16422==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==16422==    by 0x109D08: command_i (project2.c:346)
==16422==    by 0x10BC13: handle_commands (project2.c:126)
==16422==    by 0x109188: main (project2.c:39)
==16422== 
==16422== Invalid read of size 1
==16422==    at 0x4A608D0: __strcmp_sse2_unaligned (strcmp-sse2-unaligned.S:24)
==16422==    by 0x10996E: command_r (project2.c:431)
==16422==    by 0x10BB1E: handle_commands (project2.c:133)
==16422==    by 0x109188: main (project2.c:39)
==16422==  Address 0x4f8f8c0 is 0 bytes inside a block of size 10 free'd
==16422==    at 0x48369AB: free (vg_replace_malloc.c:530)
==16422==    by 0x109982: command_r (project2.c:433)
==16422==    by 0x10BB1E: handle_commands (project2.c:133)
==16422==    by 0x109188: main (project2.c:39)
==16422==  Block was alloc'd at
==16422==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==16422==    by 0x10AF6D: create_connection (project2.c:718)
==16422==    by 0x10B669: command_l (project2.c:307)
==16422==    by 0x10BBE6: handle_commands (project2.c:117)
==16422==    by 0x109188: main (project2.c:39)
==16422== 
==16422== Invalid read of size 1
==16422==    at 0x4839D20: strcmp (vg_replace_strmem.c:848)
==16422==    by 0x10996E: command_r (project2.c:431)
==16422==    by 0x10BB1E: handle_commands (project2.c:133)
==16422==    by 0x109188: main (project2.c:39)
==16422==  Address 0x4f8f8c1 is 1 bytes inside a block of size 10 free'd
==16422==    at 0x48369AB: free (vg_replace_malloc.c:530)
==16422==    by 0x109982: command_r (project2.c:433)
==16422==    by 0x10BB1E: handle_commands (project2.c:133)
==16422==    by 0x109188: main (project2.c:39)
==16422==  Block was alloc'd at
==16422==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==16422==    by 0x10AF6D: create_connection (project2.c:718)
==16422==    by 0x10B669: command_l (project2.c:307)
==16422==    by 0x10BBE6: handle_commands (project2.c:117)
==16422==    by 0x109188: main (project2.c:39)
==16422== 
==16422== 
==16422== HEAP SUMMARY:
==16422==     in use at exit: 5,600 bytes in 1 blocks
==16422==   total heap usage: 562 allocs, 561 frees, 13,016,251 bytes allocated
==16422== 
==16422== LEAK SUMMARY:
==16422==    definitely lost: 5,600 bytes in 1 blocks
==16422==    indirectly lost: 0 bytes in 0 blocks
==16422==      possibly lost: 0 bytes in 0 blocks
==16422==    still reachable: 0 bytes in 0 blocks
==16422==         suppressed: 0 bytes in 0 blocks
==16422== Rerun with --leak-check=full to see details of leaked memory
==16422== 
==16422== For counts of detected and suppressed errors, rerun with: -v
==16422== ERROR SUMMARY: 498 errors from 8 contexts (suppressed: 0 from 0)

```


Your code will not be reevaluated if you submit before 2023-04-06 00:11:50 @ Lisbon, Portugal. You need to wait 10 minute(s).

