# Projecto 2 - IAED 2022/2023

## Enunciado

O enunciado do projecto está disponível em [enunciado.md](enunciado.md). 

## Data de entrega: 14 de abril de 2023, às 19h59

Informações detalhadas sobre o processo de submissão estão disponíveis em [informacoes.md](informacoes.md).



# Evaluation

2023-04-05T23:39:07

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
==12065== Memcheck, a memory error detector
==12065== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12065== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==12065== Command: ./proj.out
==12065== 
==12065== Invalid write of size 4
==12065==    at 0x109EAD: check_first_and_last (project2.c:927)
==12065==    by 0x109EAD: command_i (project2.c:349)
==12065==    by 0x10BBD3: handle_commands (project2.c:126)
==12065==    by 0x109188: main (project2.c:39)
==12065==  Address 0x4d47200 is 0 bytes after a block of size 16 alloc'd
==12065==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==12065==    by 0x109D0C: command_i (project2.c:345)
==12065==    by 0x10BBD3: handle_commands (project2.c:126)
==12065==    by 0x109188: main (project2.c:39)
==12065== 
==12065== Invalid write of size 4
==12065==    at 0x109DB6: command_i (project2.c:354)
==12065==    by 0x10BBD3: handle_commands (project2.c:126)
==12065==    by 0x109188: main (project2.c:39)
==12065==  Address 0x4d47204 is 4 bytes after a block of size 16 alloc'd
==12065==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==12065==    by 0x109D0C: command_i (project2.c:345)
==12065==    by 0x10BBD3: handle_commands (project2.c:126)
==12065==    by 0x109188: main (project2.c:39)
==12065== 
==12065== Invalid read of size 4
==12065==    at 0x109E38: bubble_sort (project2.c:904)
==12065==    by 0x109E38: command_i (project2.c:361)
==12065==    by 0x10BBD3: handle_commands (project2.c:126)
==12065==    by 0x109188: main (project2.c:39)
==12065==  Address 0x4d47200 is 0 bytes after a block of size 16 alloc'd
==12065==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==12065==    by 0x109D0C: command_i (project2.c:345)
==12065==    by 0x10BBD3: handle_commands (project2.c:126)
==12065==    by 0x109188: main (project2.c:39)
==12065== 
==12065== Invalid read of size 4
==12065==    at 0x109E3C: bubble_sort (project2.c:903)
==12065==    by 0x109E3C: command_i (project2.c:361)
==12065==    by 0x10BBD3: handle_commands (project2.c:126)
==12065==    by 0x109188: main (project2.c:39)
==12065==  Address 0x4d47200 is 0 bytes after a block of size 16 alloc'd
==12065==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==12065==    by 0x109D0C: command_i (project2.c:345)
==12065==    by 0x10BBD3: handle_commands (project2.c:126)
==12065==    by 0x109188: main (project2.c:39)
==12065== 
==12065== Invalid read of size 4
==12065==    at 0x109EF0: print_routes_passing (project2.c:945)
==12065==    by 0x109EF0: command_i (project2.c:362)
==12065==    by 0x10BBD3: handle_commands (project2.c:126)
==12065==    by 0x109188: main (project2.c:39)
==12065==  Address 0x4d47200 is 0 bytes after a block of size 16 alloc'd
==12065==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==12065==    by 0x109D0C: command_i (project2.c:345)
==12065==    by 0x10BBD3: handle_commands (project2.c:126)
==12065==    by 0x109188: main (project2.c:39)
==12065== 
==12065== Invalid read of size 4
==12065==    at 0x109F29: print_routes_passing (project2.c:947)
==12065==    by 0x109F29: command_i (project2.c:362)
==12065==    by 0x10BBD3: handle_commands (project2.c:126)
==12065==    by 0x109188: main (project2.c:39)
==12065==  Address 0x4d4720c is 12 bytes after a block of size 16 alloc'd
==12065==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==12065==    by 0x109D0C: command_i (project2.c:345)
==12065==    by 0x10BBD3: handle_commands (project2.c:126)
==12065==    by 0x109188: main (project2.c:39)
==12065== 
==12065== Invalid read of size 1
==12065==    at 0x4A608D0: __strcmp_sse2_unaligned (strcmp-sse2-unaligned.S:24)
==12065==    by 0x10996E: command_r (project2.c:424)
==12065==    by 0x10BADE: handle_commands (project2.c:133)
==12065==    by 0x109188: main (project2.c:39)
==12065==  Address 0x4c97500 is 0 bytes inside a block of size 10 free'd
==12065==    at 0x48369AB: free (vg_replace_malloc.c:530)
==12065==    by 0x109982: command_r (project2.c:426)
==12065==    by 0x10BADE: handle_commands (project2.c:133)
==12065==    by 0x109188: main (project2.c:39)
==12065==  Block was alloc'd at
==12065==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==12065==    by 0x10AF2D: create_connection (project2.c:711)
==12065==    by 0x10B629: command_l (project2.c:307)
==12065==    by 0x10BBA6: handle_commands (project2.c:117)
==12065==    by 0x109188: main (project2.c:39)
==12065== 
==12065== Invalid read of size 1
==12065==    at 0x4839D20: strcmp (vg_replace_strmem.c:848)
==12065==    by 0x10996E: command_r (project2.c:424)
==12065==    by 0x10BADE: handle_commands (project2.c:133)
==12065==    by 0x109188: main (project2.c:39)
==12065==  Address 0x4c97501 is 1 bytes inside a block of size 10 free'd
==12065==    at 0x48369AB: free (vg_replace_malloc.c:530)
==12065==    by 0x109982: command_r (project2.c:426)
==12065==    by 0x10BADE: handle_commands (project2.c:133)
==12065==    by 0x109188: main (project2.c:39)
==12065==  Block was alloc'd at
==12065==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==12065==    by 0x10AF2D: create_connection (project2.c:711)
==12065==    by 0x10B629: command_l (project2.c:307)
==12065==    by 0x10BBA6: handle_commands (project2.c:117)
==12065==    by 0x109188: main (project2.c:39)
==12065== 
==12065== 
==12065== HEAP SUMMARY:
==12065==     in use at exit: 2,800 bytes in 1 blocks
==12065==   total heap usage: 562 allocs, 561 frees, 2,073,056 bytes allocated
==12065== 
==12065== LEAK SUMMARY:
==12065==    definitely lost: 2,800 bytes in 1 blocks
==12065==    indirectly lost: 0 bytes in 0 blocks
==12065==      possibly lost: 0 bytes in 0 blocks
==12065==    still reachable: 0 bytes in 0 blocks
==12065==         suppressed: 0 bytes in 0 blocks
==12065== Rerun with --leak-check=full to see details of leaked memory
==12065== 
==12065== For counts of detected and suppressed errors, rerun with: -v
==12065== ERROR SUMMARY: 498 errors from 8 contexts (suppressed: 0 from 0)

```


Your code will not be reevaluated if you submit before 2023-04-05 23:49:07 @ Lisbon, Portugal. You need to wait 10 minute(s).

