# Projecto 2 - IAED 2022/2023

## Enunciado

O enunciado do projecto está disponível em [enunciado.md](enunciado.md). 

## Data de entrega: 14 de abril de 2023, às 19h59

Informações detalhadas sobre o processo de submissão estão disponíveis em [informacoes.md](informacoes.md).



# Evaluation

2023-04-06T16:40:39

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
## Test 23: [- Command terminated by signal (11: SIGSEGV)-].

## Test 24: [- Command terminated by signal (6: SIGABRT)-].

## Test 25: [- Command terminated by signal (6: SIGABRT)-].

## Test 26: [- Command terminated by signal (6: SIGABRT)-].

## Test 27: [+ Accepted+].
## Test 28: [- Memory Limit Exceeded-].

## Test 29: [- Memory Limit Exceeded-].

## Test 30: [- Memory Limit Exceeded-].

## Test 31: [- Memory Limit Exceeded-].

## Test 32: [- Wrong Answer-].




## Number of passed tests: 6/32


## Valgrind Output:


```
==20624== Memcheck, a memory error detector
==20624== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==20624== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==20624== Command: ./proj.out
==20624== 
==20624== Invalid write of size 4
==20624==    at 0x109F1D: check_first_and_last (project2.c:940)
==20624==    by 0x109F1D: command_i (project2.c:361)
==20624==    by 0x10BC63: handle_commands (project2.c:134)
==20624==    by 0x109188: main (project2.c:39)
==20624==  Address 0x4f925a0 is 0 bytes after a block of size 16 alloc'd
==20624==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==20624==    by 0x109D48: command_i (project2.c:354)
==20624==    by 0x10BC63: handle_commands (project2.c:134)
==20624==    by 0x109188: main (project2.c:39)
==20624== 
==20624== Invalid write of size 4
==20624==    at 0x109E33: command_i (project2.c:368)
==20624==    by 0x10BC63: handle_commands (project2.c:134)
==20624==    by 0x109188: main (project2.c:39)
==20624==  Address 0x4f925a4 is 4 bytes after a block of size 16 alloc'd
==20624==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==20624==    by 0x109D48: command_i (project2.c:354)
==20624==    by 0x10BC63: handle_commands (project2.c:134)
==20624==    by 0x109188: main (project2.c:39)
==20624== 
==20624== Invalid read of size 4
==20624==    at 0x109EB0: bubble_sort (project2.c:917)
==20624==    by 0x109EB0: command_i (project2.c:376)
==20624==    by 0x10BC63: handle_commands (project2.c:134)
==20624==    by 0x109188: main (project2.c:39)
==20624==  Address 0x4f925a0 is 0 bytes after a block of size 16 alloc'd
==20624==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==20624==    by 0x109D48: command_i (project2.c:354)
==20624==    by 0x10BC63: handle_commands (project2.c:134)
==20624==    by 0x109188: main (project2.c:39)
==20624== 
==20624== Invalid read of size 4
==20624==    at 0x109EB4: bubble_sort (project2.c:916)
==20624==    by 0x109EB4: command_i (project2.c:376)
==20624==    by 0x10BC63: handle_commands (project2.c:134)
==20624==    by 0x109188: main (project2.c:39)
==20624==  Address 0x4f925a0 is 0 bytes after a block of size 16 alloc'd
==20624==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==20624==    by 0x109D48: command_i (project2.c:354)
==20624==    by 0x10BC63: handle_commands (project2.c:134)
==20624==    by 0x109188: main (project2.c:39)
==20624== 
==20624== Invalid read of size 4
==20624==    at 0x109F60: print_routes_passing (project2.c:958)
==20624==    by 0x109F60: command_i (project2.c:377)
==20624==    by 0x10BC63: handle_commands (project2.c:134)
==20624==    by 0x109188: main (project2.c:39)
==20624==  Address 0x4f925a0 is 0 bytes after a block of size 16 alloc'd
==20624==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==20624==    by 0x109D48: command_i (project2.c:354)
==20624==    by 0x10BC63: handle_commands (project2.c:134)
==20624==    by 0x109188: main (project2.c:39)
==20624== 
==20624== Invalid read of size 4
==20624==    at 0x109F99: print_routes_passing (project2.c:960)
==20624==    by 0x109F99: command_i (project2.c:377)
==20624==    by 0x10BC63: handle_commands (project2.c:134)
==20624==    by 0x109188: main (project2.c:39)
==20624==  Address 0x4f925ac is 12 bytes after a block of size 16 alloc'd
==20624==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==20624==    by 0x109D48: command_i (project2.c:354)
==20624==    by 0x10BC63: handle_commands (project2.c:134)
==20624==    by 0x109188: main (project2.c:39)
==20624== 
==20624== Invalid read of size 1
==20624==    at 0x4A608D0: __strcmp_sse2_unaligned (strcmp-sse2-unaligned.S:24)
==20624==    by 0x1099AE: command_r (project2.c:439)
==20624==    by 0x10BB6E: handle_commands (project2.c:141)
==20624==    by 0x109188: main (project2.c:39)
==20624==  Address 0x4f8f8c0 is 0 bytes inside a block of size 10 free'd
==20624==    at 0x48369AB: free (vg_replace_malloc.c:530)
==20624==    by 0x1099C2: command_r (project2.c:441)
==20624==    by 0x10BB6E: handle_commands (project2.c:141)
==20624==    by 0x109188: main (project2.c:39)
==20624==  Block was alloc'd at
==20624==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==20624==    by 0x10AFAD: create_connection (project2.c:725)
==20624==    by 0x10B6A3: command_l (project2.c:315)
==20624==    by 0x10BC36: handle_commands (project2.c:125)
==20624==    by 0x109188: main (project2.c:39)
==20624== 
==20624== Invalid read of size 1
==20624==    at 0x4839D20: strcmp (vg_replace_strmem.c:848)
==20624==    by 0x1099AE: command_r (project2.c:439)
==20624==    by 0x10BB6E: handle_commands (project2.c:141)
==20624==    by 0x109188: main (project2.c:39)
==20624==  Address 0x4f8f8c1 is 1 bytes inside a block of size 10 free'd
==20624==    at 0x48369AB: free (vg_replace_malloc.c:530)
==20624==    by 0x1099C2: command_r (project2.c:441)
==20624==    by 0x10BB6E: handle_commands (project2.c:141)
==20624==    by 0x109188: main (project2.c:39)
==20624==  Block was alloc'd at
==20624==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==20624==    by 0x10AFAD: create_connection (project2.c:725)
==20624==    by 0x10B6A3: command_l (project2.c:315)
==20624==    by 0x10BC36: handle_commands (project2.c:125)
==20624==    by 0x109188: main (project2.c:39)
==20624== 
==20624== Conditional jump or move depends on uninitialised value(s)
==20624==    at 0x1092EE: free_memory (project2.c:52)
==20624==    by 0x10BB94: handle_commands (project2.c:104)
==20624==    by 0x109188: main (project2.c:39)
==20624== 
==20624== Conditional jump or move depends on uninitialised value(s)
==20624==    at 0x1093BD: free_memory (project2.c:71)
==20624==    by 0x10BB94: handle_commands (project2.c:104)
==20624==    by 0x109188: main (project2.c:39)
==20624== 
==20624== Conditional jump or move depends on uninitialised value(s)
==20624==    at 0x1093C5: free_memory (project2.c:72)
==20624==    by 0x10BB94: handle_commands (project2.c:104)
==20624==    by 0x109188: main (project2.c:39)
==20624== 
==20624== 
==20624== HEAP SUMMARY:
==20624==     in use at exit: 5,600 bytes in 1 blocks
==20624==   total heap usage: 562 allocs, 561 frees, 13,016,251 bytes allocated
==20624== 
==20624== LEAK SUMMARY:
==20624==    definitely lost: 5,600 bytes in 1 blocks
==20624==    indirectly lost: 0 bytes in 0 blocks
==20624==      possibly lost: 0 bytes in 0 blocks
==20624==    still reachable: 0 bytes in 0 blocks
==20624==         suppressed: 0 bytes in 0 blocks
==20624== Rerun with --leak-check=full to see details of leaked memory
==20624== 
==20624== For counts of detected and suppressed errors, rerun with: -v
==20624== Use --track-origins=yes to see where uninitialised values come from
==20624== ERROR SUMMARY: 3438 errors from 11 contexts (suppressed: 0 from 0)

```


Your code will not be reevaluated if you submit before 2023-04-06 16:50:39 @ Lisbon, Portugal. You need to wait 10 minute(s).

