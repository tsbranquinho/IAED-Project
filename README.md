# Projecto 2 - IAED 2022/2023

## Enunciado

O enunciado do projecto está disponível em [enunciado.md](enunciado.md). 

## Data de entrega: 14 de abril de 2023, às 19h59

Informações detalhadas sobre o processo de submissão estão disponíveis em [informacoes.md](informacoes.md).



# Evaluation

2023-04-05T17:35:48

## Test 1: [+ Accepted+].
## Test 2: [+ Accepted+].
## Test 3: [- Command terminated by signal (11: SIGSEGV)-].

## Test 4: [- Wrong Answer-].


## Test 5: [- Wrong Answer-].


## Test 6: [- Wrong Answer-].


## Test 7: [- Command terminated by signal (11: SIGSEGV)-].

## Test 8: [- Command terminated by signal (11: SIGSEGV)-].

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


## Test 21: [- Command terminated by signal (11: SIGSEGV)-].

## Test 22: [+ Accepted+].
## Test 23: [+ Accepted+].
## Test 24: [- Command terminated by signal (11: SIGSEGV)-].

## Test 25: [- Wrong Answer-].


## Test 26: [- Command terminated by signal (11: SIGSEGV)-].

## Test 27: [- Wrong Answer-].


## Test 28: [- Memory Limit Exceeded-].

## Test 29: [- Memory Limit Exceeded-].

## Test 30: [- Memory Limit Exceeded-].

## Test 31: [- Memory Limit Exceeded-].

## Test 32: [- Wrong Answer-].




## Number of passed tests: 4/32


## Valgrind Output:


```
==15781== Memcheck, a memory error detector
==15781== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==15781== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==15781== Command: ./proj.out
==15781== 
==15781== Invalid write of size 4
==15781==    at 0x109DF4: check_first_and_last (project2.c:822)
==15781==    by 0x109DF4: command_i (project2.c:305)
==15781==    by 0x10B9D9: handle_commands (project2.c:99)
==15781==    by 0x109161: main (project2.c:39)
==15781==  Address 0x538a430 is 0 bytes after a block of size 16 alloc'd
==15781==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==15781==    by 0x109BD4: command_i (project2.c:301)
==15781==    by 0x10B9D9: handle_commands (project2.c:99)
==15781==    by 0x109161: main (project2.c:39)
==15781== 
==15781== Invalid write of size 4
==15781==    at 0x109D04: command_i (project2.c:310)
==15781==    by 0x10B9D9: handle_commands (project2.c:99)
==15781==    by 0x109161: main (project2.c:39)
==15781==  Address 0x538a434 is 4 bytes after a block of size 16 alloc'd
==15781==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==15781==    by 0x109BD4: command_i (project2.c:301)
==15781==    by 0x10B9D9: handle_commands (project2.c:99)
==15781==    by 0x109161: main (project2.c:39)
==15781== 
==15781== Invalid read of size 4
==15781==    at 0x109D88: bubble_sort (project2.c:799)
==15781==    by 0x109D88: command_i (project2.c:317)
==15781==    by 0x10B9D9: handle_commands (project2.c:99)
==15781==    by 0x109161: main (project2.c:39)
==15781==  Address 0x538a430 is 0 bytes after a block of size 16 alloc'd
==15781==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==15781==    by 0x109BD4: command_i (project2.c:301)
==15781==    by 0x10B9D9: handle_commands (project2.c:99)
==15781==    by 0x109161: main (project2.c:39)
==15781== 
==15781== Invalid read of size 4
==15781==    at 0x109D8C: bubble_sort (project2.c:798)
==15781==    by 0x109D8C: command_i (project2.c:317)
==15781==    by 0x10B9D9: handle_commands (project2.c:99)
==15781==    by 0x109161: main (project2.c:39)
==15781==  Address 0x538a430 is 0 bytes after a block of size 16 alloc'd
==15781==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==15781==    by 0x109BD4: command_i (project2.c:301)
==15781==    by 0x10B9D9: handle_commands (project2.c:99)
==15781==    by 0x109161: main (project2.c:39)
==15781== 
==15781== Invalid read of size 4
==15781==    at 0x109E30: print_routes_passing (project2.c:840)
==15781==    by 0x109E30: command_i (project2.c:318)
==15781==    by 0x10B9D9: handle_commands (project2.c:99)
==15781==    by 0x109161: main (project2.c:39)
==15781==  Address 0x538a430 is 0 bytes after a block of size 16 alloc'd
==15781==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==15781==    by 0x109BD4: command_i (project2.c:301)
==15781==    by 0x10B9D9: handle_commands (project2.c:99)
==15781==    by 0x109161: main (project2.c:39)
==15781== 
==15781== Invalid read of size 4
==15781==    at 0x109E65: print_routes_passing (project2.c:842)
==15781==    by 0x109E65: command_i (project2.c:318)
==15781==    by 0x10B9D9: handle_commands (project2.c:99)
==15781==    by 0x109161: main (project2.c:39)
==15781==  Address 0x538a43c is 12 bytes after a block of size 16 alloc'd
==15781==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==15781==    by 0x109BD4: command_i (project2.c:301)
==15781==    by 0x10B9D9: handle_commands (project2.c:99)
==15781==    by 0x109161: main (project2.c:39)
==15781== 
==15781== Invalid read of size 8
==15781==    at 0x109802: command_r (project2.c:364)
==15781==    by 0x10B87A: handle_commands (project2.c:106)
==15781==    by 0x109161: main (project2.c:39)
==15781==  Address 0x53892a0 is 0 bytes after a block of size 3,808 alloc'd
==15781==    at 0x4837D7B: realloc (vg_replace_malloc.c:826)
==15781==    by 0x10AFCB: create_connection (project2.c:623)
==15781==    by 0x10B5AB: command_l (project2.c:270)
==15781==    by 0x10B9AE: handle_commands (project2.c:95)
==15781==    by 0x109161: main (project2.c:39)
==15781== 
==15781== Invalid read of size 1
==15781==    at 0x4A608D0: __strcmp_sse2_unaligned (strcmp-sse2-unaligned.S:24)
==15781==    by 0x10980D: command_r (project2.c:364)
==15781==    by 0x10B87A: handle_commands (project2.c:106)
==15781==    by 0x109161: main (project2.c:39)
==15781==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==15781== 
==15781== 
==15781== Process terminating with default action of signal 11 (SIGSEGV)
==15781==  Access not within mapped region at address 0x0
==15781==    at 0x4A608D0: __strcmp_sse2_unaligned (strcmp-sse2-unaligned.S:24)
==15781==    by 0x10980D: command_r (project2.c:364)
==15781==    by 0x10B87A: handle_commands (project2.c:106)
==15781==    by 0x109161: main (project2.c:39)
==15781==  If you believe this happened as a result of a stack
==15781==  overflow in your program's main thread (unlikely but
==15781==  possible), you can try to increase the size of the
==15781==  main thread stack using the --main-stacksize= flag.
==15781==  The main thread stack size used in this run was 8388608.
==15781== 
==15781== HEAP SUMMARY:
==15781==     in use at exit: 922,152 bytes in 47 blocks
==15781==   total heap usage: 482 allocs, 435 frees, 12,258,218 bytes allocated
==15781== 
==15781== LEAK SUMMARY:
==15781==    definitely lost: 917,490 bytes in 14 blocks
==15781==    indirectly lost: 0 bytes in 0 blocks
==15781==      possibly lost: 0 bytes in 0 blocks
==15781==    still reachable: 4,662 bytes in 33 blocks
==15781==         suppressed: 0 bytes in 0 blocks
==15781== Rerun with --leak-check=full to see details of leaked memory
==15781== 
==15781== For counts of detected and suppressed errors, rerun with: -v
==15781== ERROR SUMMARY: 122 errors from 8 contexts (suppressed: 0 from 0)

```


Your code will not be reevaluated if you submit before 2023-04-05 17:45:48 @ Lisbon, Portugal. You need to wait 10 minute(s).

