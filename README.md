# Projecto 2 - IAED 2022/2023

## Enunciado

O enunciado do projecto está disponível em [enunciado.md](enunciado.md). 

## Data de entrega: 14 de abril de 2023, às 19h59

Informações detalhadas sobre o processo de submissão estão disponíveis em [informacoes.md](informacoes.md).



# Evaluation

2023-04-05T23:21:26

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
==6235== Memcheck, a memory error detector
==6235== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==6235== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==6235== Command: ./proj.out
==6235== 
==6235== Invalid write of size 4
==6235==    at 0x109EAD: check_first_and_last (project2.c:923)
==6235==    by 0x109EAD: command_i (project2.c:349)
==6235==    by 0x10BBA3: handle_commands (project2.c:126)
==6235==    by 0x109188: main (project2.c:39)
==6235==  Address 0x4f92af0 is 0 bytes after a block of size 16 alloc'd
==6235==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==6235==    by 0x109D0C: command_i (project2.c:345)
==6235==    by 0x10BBA3: handle_commands (project2.c:126)
==6235==    by 0x109188: main (project2.c:39)
==6235== 
==6235== Invalid write of size 4
==6235==    at 0x109DB6: command_i (project2.c:354)
==6235==    by 0x10BBA3: handle_commands (project2.c:126)
==6235==    by 0x109188: main (project2.c:39)
==6235==  Address 0x4f92af4 is 4 bytes after a block of size 16 alloc'd
==6235==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==6235==    by 0x109D0C: command_i (project2.c:345)
==6235==    by 0x10BBA3: handle_commands (project2.c:126)
==6235==    by 0x109188: main (project2.c:39)
==6235== 
==6235== Invalid read of size 4
==6235==    at 0x109E38: bubble_sort (project2.c:900)
==6235==    by 0x109E38: command_i (project2.c:361)
==6235==    by 0x10BBA3: handle_commands (project2.c:126)
==6235==    by 0x109188: main (project2.c:39)
==6235==  Address 0x4f92af0 is 0 bytes after a block of size 16 alloc'd
==6235==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==6235==    by 0x109D0C: command_i (project2.c:345)
==6235==    by 0x10BBA3: handle_commands (project2.c:126)
==6235==    by 0x109188: main (project2.c:39)
==6235== 
==6235== Invalid read of size 4
==6235==    at 0x109E3C: bubble_sort (project2.c:899)
==6235==    by 0x109E3C: command_i (project2.c:361)
==6235==    by 0x10BBA3: handle_commands (project2.c:126)
==6235==    by 0x109188: main (project2.c:39)
==6235==  Address 0x4f92af0 is 0 bytes after a block of size 16 alloc'd
==6235==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==6235==    by 0x109D0C: command_i (project2.c:345)
==6235==    by 0x10BBA3: handle_commands (project2.c:126)
==6235==    by 0x109188: main (project2.c:39)
==6235== 
==6235== Invalid read of size 4
==6235==    at 0x109EF0: print_routes_passing (project2.c:941)
==6235==    by 0x109EF0: command_i (project2.c:362)
==6235==    by 0x10BBA3: handle_commands (project2.c:126)
==6235==    by 0x109188: main (project2.c:39)
==6235==  Address 0x4f92af0 is 0 bytes after a block of size 16 alloc'd
==6235==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==6235==    by 0x109D0C: command_i (project2.c:345)
==6235==    by 0x10BBA3: handle_commands (project2.c:126)
==6235==    by 0x109188: main (project2.c:39)
==6235== 
==6235== Invalid read of size 4
==6235==    at 0x109F29: print_routes_passing (project2.c:943)
==6235==    by 0x109F29: command_i (project2.c:362)
==6235==    by 0x10BBA3: handle_commands (project2.c:126)
==6235==    by 0x109188: main (project2.c:39)
==6235==  Address 0x4f92afc is 12 bytes after a block of size 16 alloc'd
==6235==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==6235==    by 0x109D0C: command_i (project2.c:345)
==6235==    by 0x10BBA3: handle_commands (project2.c:126)
==6235==    by 0x109188: main (project2.c:39)
==6235== 
==6235== Invalid read of size 1
==6235==    at 0x4A608D0: __strcmp_sse2_unaligned (strcmp-sse2-unaligned.S:24)
==6235==    by 0x10996E: command_r (project2.c:424)
==6235==    by 0x10BAAE: handle_commands (project2.c:133)
==6235==    by 0x109188: main (project2.c:39)
==6235==  Address 0x4f8edd0 is 0 bytes inside a block of size 10 free'd
==6235==    at 0x48369AB: free (vg_replace_malloc.c:530)
==6235==    by 0x109982: command_r (project2.c:426)
==6235==    by 0x10BAAE: handle_commands (project2.c:133)
==6235==    by 0x109188: main (project2.c:39)
==6235==  Block was alloc'd at
==6235==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==6235==    by 0x10AF2D: create_connection (project2.c:711)
==6235==    by 0x10B5F9: command_l (project2.c:307)
==6235==    by 0x10BB76: handle_commands (project2.c:117)
==6235==    by 0x109188: main (project2.c:39)
==6235== 
==6235== Invalid read of size 1
==6235==    at 0x4839D20: strcmp (vg_replace_strmem.c:848)
==6235==    by 0x10996E: command_r (project2.c:424)
==6235==    by 0x10BAAE: handle_commands (project2.c:133)
==6235==    by 0x109188: main (project2.c:39)
==6235==  Address 0x4f8edd1 is 1 bytes inside a block of size 10 free'd
==6235==    at 0x48369AB: free (vg_replace_malloc.c:530)
==6235==    by 0x109982: command_r (project2.c:426)
==6235==    by 0x10BAAE: handle_commands (project2.c:133)
==6235==    by 0x109188: main (project2.c:39)
==6235==  Block was alloc'd at
==6235==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==6235==    by 0x10AF2D: create_connection (project2.c:711)
==6235==    by 0x10B5F9: command_l (project2.c:307)
==6235==    by 0x10BB76: handle_commands (project2.c:117)
==6235==    by 0x109188: main (project2.c:39)
==6235== 
==6235== 
==6235== HEAP SUMMARY:
==6235==     in use at exit: 2,800 bytes in 1 blocks
==6235==   total heap usage: 562 allocs, 561 frees, 13,013,451 bytes allocated
==6235== 
==6235== LEAK SUMMARY:
==6235==    definitely lost: 2,800 bytes in 1 blocks
==6235==    indirectly lost: 0 bytes in 0 blocks
==6235==      possibly lost: 0 bytes in 0 blocks
==6235==    still reachable: 0 bytes in 0 blocks
==6235==         suppressed: 0 bytes in 0 blocks
==6235== Rerun with --leak-check=full to see details of leaked memory
==6235== 
==6235== For counts of detected and suppressed errors, rerun with: -v
==6235== ERROR SUMMARY: 498 errors from 8 contexts (suppressed: 0 from 0)

```


Your code will not be reevaluated if you submit before 2023-04-05 23:31:26 @ Lisbon, Portugal. You need to wait 10 minute(s).

