# Projecto 2 - IAED 2022/2023

## Enunciado

O enunciado do projecto está disponível em [enunciado.md](enunciado.md). 

## Data de entrega: 14 de abril de 2023, às 19h59

Informações detalhadas sobre o processo de submissão estão disponíveis em [informacoes.md](informacoes.md).



# Evaluation

2023-04-06T17:03:01

## Test 1: [+ Accepted+].
## Test 2: [+ Accepted+].
## Test 3: [+ Accepted+].
## Test 4: [- Wrong Answer-].


## Test 5: [- Command terminated by signal (6: SIGABRT)-].

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


## Test 21: [+ Accepted+].
## Test 22: [+ Accepted+].
## Test 23: [+ Accepted+].
## Test 24: [- Command terminated by signal (6: SIGABRT)-].

## Test 25: [- Command terminated by signal (6: SIGABRT)-].

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
==31968== Memcheck, a memory error detector
==31968== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==31968== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==31968== Command: ./proj.out
==31968== 
==31968== Invalid write of size 4
==31968==    at 0x109F4D: check_first_and_last (project2.c:944)
==31968==    by 0x109F4D: command_i (project2.c:362)
==31968==    by 0x10BCA3: handle_commands (project2.c:134)
==31968==    by 0x1091A8: main (project2.c:39)
==31968==  Address 0x4f925a0 is 0 bytes after a block of size 16 alloc'd
==31968==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==31968==    by 0x109D6B: command_i (project2.c:354)
==31968==    by 0x10BCA3: handle_commands (project2.c:134)
==31968==    by 0x1091A8: main (project2.c:39)
==31968== 
==31968== Invalid write of size 4
==31968==    at 0x109E63: command_i (project2.c:369)
==31968==    by 0x10BCA3: handle_commands (project2.c:134)
==31968==    by 0x1091A8: main (project2.c:39)
==31968==  Address 0x4f925a4 is 4 bytes after a block of size 16 alloc'd
==31968==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==31968==    by 0x109D6B: command_i (project2.c:354)
==31968==    by 0x10BCA3: handle_commands (project2.c:134)
==31968==    by 0x1091A8: main (project2.c:39)
==31968== 
==31968== Invalid read of size 4
==31968==    at 0x109EE0: bubble_sort (project2.c:921)
==31968==    by 0x109EE0: command_i (project2.c:377)
==31968==    by 0x10BCA3: handle_commands (project2.c:134)
==31968==    by 0x1091A8: main (project2.c:39)
==31968==  Address 0x4f925a0 is 0 bytes after a block of size 16 alloc'd
==31968==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==31968==    by 0x109D6B: command_i (project2.c:354)
==31968==    by 0x10BCA3: handle_commands (project2.c:134)
==31968==    by 0x1091A8: main (project2.c:39)
==31968== 
==31968== Invalid read of size 4
==31968==    at 0x109EE4: bubble_sort (project2.c:920)
==31968==    by 0x109EE4: command_i (project2.c:377)
==31968==    by 0x10BCA3: handle_commands (project2.c:134)
==31968==    by 0x1091A8: main (project2.c:39)
==31968==  Address 0x4f925a0 is 0 bytes after a block of size 16 alloc'd
==31968==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==31968==    by 0x109D6B: command_i (project2.c:354)
==31968==    by 0x10BCA3: handle_commands (project2.c:134)
==31968==    by 0x1091A8: main (project2.c:39)
==31968== 
==31968== Invalid read of size 4
==31968==    at 0x109F90: print_routes_passing (project2.c:962)
==31968==    by 0x109F90: command_i (project2.c:378)
==31968==    by 0x10BCA3: handle_commands (project2.c:134)
==31968==    by 0x1091A8: main (project2.c:39)
==31968==  Address 0x4f925a0 is 0 bytes after a block of size 16 alloc'd
==31968==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==31968==    by 0x109D6B: command_i (project2.c:354)
==31968==    by 0x10BCA3: handle_commands (project2.c:134)
==31968==    by 0x1091A8: main (project2.c:39)
==31968== 
==31968== Invalid read of size 4
==31968==    at 0x109FC9: print_routes_passing (project2.c:964)
==31968==    by 0x109FC9: command_i (project2.c:378)
==31968==    by 0x10BCA3: handle_commands (project2.c:134)
==31968==    by 0x1091A8: main (project2.c:39)
==31968==  Address 0x4f925ac is 12 bytes after a block of size 16 alloc'd
==31968==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==31968==    by 0x109D6B: command_i (project2.c:354)
==31968==    by 0x10BCA3: handle_commands (project2.c:134)
==31968==    by 0x1091A8: main (project2.c:39)
==31968== 
==31968== Invalid read of size 1
==31968==    at 0x4A608D0: __strcmp_sse2_unaligned (strcmp-sse2-unaligned.S:24)
==31968==    by 0x1099CE: command_r (project2.c:440)
==31968==    by 0x10BBAE: handle_commands (project2.c:141)
==31968==    by 0x1091A8: main (project2.c:39)
==31968==  Address 0x4f8f8c0 is 0 bytes inside a block of size 10 free'd
==31968==    at 0x48369AB: free (vg_replace_malloc.c:530)
==31968==    by 0x1099E2: command_r (project2.c:442)
==31968==    by 0x10BBAE: handle_commands (project2.c:141)
==31968==    by 0x1091A8: main (project2.c:39)
==31968==  Block was alloc'd at
==31968==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==31968==    by 0x10AFE9: create_connection (project2.c:729)
==31968==    by 0x10B6E3: command_l (project2.c:315)
==31968==    by 0x10BC76: handle_commands (project2.c:125)
==31968==    by 0x1091A8: main (project2.c:39)
==31968== 
==31968== Invalid read of size 1
==31968==    at 0x4839D20: strcmp (vg_replace_strmem.c:848)
==31968==    by 0x1099CE: command_r (project2.c:440)
==31968==    by 0x10BBAE: handle_commands (project2.c:141)
==31968==    by 0x1091A8: main (project2.c:39)
==31968==  Address 0x4f8f8c1 is 1 bytes inside a block of size 10 free'd
==31968==    at 0x48369AB: free (vg_replace_malloc.c:530)
==31968==    by 0x1099E2: command_r (project2.c:442)
==31968==    by 0x10BBAE: handle_commands (project2.c:141)
==31968==    by 0x1091A8: main (project2.c:39)
==31968==  Block was alloc'd at
==31968==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==31968==    by 0x10AFE9: create_connection (project2.c:729)
==31968==    by 0x10B6E3: command_l (project2.c:315)
==31968==    by 0x10BC76: handle_commands (project2.c:125)
==31968==    by 0x1091A8: main (project2.c:39)
==31968== 
==31968== 
==31968== HEAP SUMMARY:
==31968==     in use at exit: 5,600 bytes in 1 blocks
==31968==   total heap usage: 562 allocs, 561 frees, 13,016,251 bytes allocated
==31968== 
==31968== LEAK SUMMARY:
==31968==    definitely lost: 5,600 bytes in 1 blocks
==31968==    indirectly lost: 0 bytes in 0 blocks
==31968==      possibly lost: 0 bytes in 0 blocks
==31968==    still reachable: 0 bytes in 0 blocks
==31968==         suppressed: 0 bytes in 0 blocks
==31968== Rerun with --leak-check=full to see details of leaked memory
==31968== 
==31968== For counts of detected and suppressed errors, rerun with: -v
==31968== ERROR SUMMARY: 498 errors from 8 contexts (suppressed: 0 from 0)

```


Your code will not be reevaluated if you submit before 2023-04-06 17:13:01 @ Lisbon, Portugal. You need to wait 10 minute(s).

