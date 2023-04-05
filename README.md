# Projecto 2 - IAED 2022/2023

## Enunciado

O enunciado do projecto está disponível em [enunciado.md](enunciado.md). 

## Data de entrega: 14 de abril de 2023, às 19h59

Informações detalhadas sobre o processo de submissão estão disponíveis em [informacoes.md](informacoes.md).



# Evaluation

2023-04-05T22:00:57

## Test 1: [+ Accepted+].
## Test 2: [+ Accepted+].
## Test 3: [+ Accepted+].
## Test 4: [- Wrong Answer-].


## Test 5: [+ Accepted+].
## Test 6: [- Wrong Answer-].


## Test 7: [- Command terminated by signal (6: SIGABRT)-].

## Test 8: [- Wrong Answer-].


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


## Test 21: [- Wrong Answer-].


## Test 22: [- Wrong Answer-].


## Test 23: [- Wrong Answer-].


## Test 24: [- Command terminated by signal (6: SIGABRT)-].

## Test 25: [- Command terminated by signal (6: SIGABRT)-].

## Test 26: [- Command terminated by signal (6: SIGABRT)-].

## Test 27: [- Memory Limit Exceeded-].

## Test 28: [- Memory Limit Exceeded-].

## Test 29: [- Memory Limit Exceeded-].

## Test 30: [- Memory Limit Exceeded-].

## Test 31: [- Memory Limit Exceeded-].

## Test 32: [- Wrong Answer-].




## Number of passed tests: 4/32


## Valgrind Output:


```
==18779== Memcheck, a memory error detector
==18779== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==18779== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==18779== Command: ./proj.out
==18779== 
==18779== Invalid write of size 4
==18779==    at 0x109EBD: check_first_and_last (project2.c:925)
==18779==    by 0x109EBD: command_i (project2.c:349)
==18779==    by 0x10BBB3: handle_commands (project2.c:126)
==18779==    by 0x109188: main (project2.c:39)
==18779==  Address 0x4f88d20 is 0 bytes after a block of size 16 alloc'd
==18779==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==18779==    by 0x109D1C: command_i (project2.c:345)
==18779==    by 0x10BBB3: handle_commands (project2.c:126)
==18779==    by 0x109188: main (project2.c:39)
==18779== 
==18779== Invalid write of size 4
==18779==    at 0x109DC6: command_i (project2.c:354)
==18779==    by 0x10BBB3: handle_commands (project2.c:126)
==18779==    by 0x109188: main (project2.c:39)
==18779==  Address 0x4f88d24 is 4 bytes after a block of size 16 alloc'd
==18779==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==18779==    by 0x109D1C: command_i (project2.c:345)
==18779==    by 0x10BBB3: handle_commands (project2.c:126)
==18779==    by 0x109188: main (project2.c:39)
==18779== 
==18779== Invalid read of size 4
==18779==    at 0x109E48: bubble_sort (project2.c:902)
==18779==    by 0x109E48: command_i (project2.c:361)
==18779==    by 0x10BBB3: handle_commands (project2.c:126)
==18779==    by 0x109188: main (project2.c:39)
==18779==  Address 0x4f88d20 is 0 bytes after a block of size 16 alloc'd
==18779==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==18779==    by 0x109D1C: command_i (project2.c:345)
==18779==    by 0x10BBB3: handle_commands (project2.c:126)
==18779==    by 0x109188: main (project2.c:39)
==18779== 
==18779== Invalid read of size 4
==18779==    at 0x109E4C: bubble_sort (project2.c:901)
==18779==    by 0x109E4C: command_i (project2.c:361)
==18779==    by 0x10BBB3: handle_commands (project2.c:126)
==18779==    by 0x109188: main (project2.c:39)
==18779==  Address 0x4f88d20 is 0 bytes after a block of size 16 alloc'd
==18779==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==18779==    by 0x109D1C: command_i (project2.c:345)
==18779==    by 0x10BBB3: handle_commands (project2.c:126)
==18779==    by 0x109188: main (project2.c:39)
==18779== 
==18779== Invalid read of size 4
==18779==    at 0x109F00: print_routes_passing (project2.c:943)
==18779==    by 0x109F00: command_i (project2.c:362)
==18779==    by 0x10BBB3: handle_commands (project2.c:126)
==18779==    by 0x109188: main (project2.c:39)
==18779==  Address 0x4f88d20 is 0 bytes after a block of size 16 alloc'd
==18779==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==18779==    by 0x109D1C: command_i (project2.c:345)
==18779==    by 0x10BBB3: handle_commands (project2.c:126)
==18779==    by 0x109188: main (project2.c:39)
==18779== 
==18779== Invalid read of size 4
==18779==    at 0x109F39: print_routes_passing (project2.c:945)
==18779==    by 0x109F39: command_i (project2.c:362)
==18779==    by 0x10BBB3: handle_commands (project2.c:126)
==18779==    by 0x109188: main (project2.c:39)
==18779==  Address 0x4f88d2c is 12 bytes after a block of size 16 alloc'd
==18779==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==18779==    by 0x109D1C: command_i (project2.c:345)
==18779==    by 0x10BBB3: handle_commands (project2.c:126)
==18779==    by 0x109188: main (project2.c:39)
==18779== 
==18779== Invalid read of size 1
==18779==    at 0x4A608D0: __strcmp_sse2_unaligned (strcmp-sse2-unaligned.S:24)
==18779==    by 0x10996E: command_r (project2.c:424)
==18779==    by 0x10BABE: handle_commands (project2.c:133)
==18779==    by 0x109188: main (project2.c:39)
==18779==  Address 0x4f85000 is 0 bytes inside a block of size 10 free'd
==18779==    at 0x48369AB: free (vg_replace_malloc.c:530)
==18779==    by 0x109982: command_r (project2.c:426)
==18779==    by 0x10BABE: handle_commands (project2.c:133)
==18779==    by 0x109188: main (project2.c:39)
==18779==  Block was alloc'd at
==18779==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==18779==    by 0x10AF3D: create_connection (project2.c:713)
==18779==    by 0x10B609: command_l (project2.c:307)
==18779==    by 0x10BB86: handle_commands (project2.c:117)
==18779==    by 0x109188: main (project2.c:39)
==18779== 
==18779== Invalid read of size 1
==18779==    at 0x4839D20: strcmp (vg_replace_strmem.c:848)
==18779==    by 0x10996E: command_r (project2.c:424)
==18779==    by 0x10BABE: handle_commands (project2.c:133)
==18779==    by 0x109188: main (project2.c:39)
==18779==  Address 0x4f85001 is 1 bytes inside a block of size 10 free'd
==18779==    at 0x48369AB: free (vg_replace_malloc.c:530)
==18779==    by 0x109982: command_r (project2.c:426)
==18779==    by 0x10BABE: handle_commands (project2.c:133)
==18779==    by 0x109188: main (project2.c:39)
==18779==  Block was alloc'd at
==18779==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==18779==    by 0x10AF3D: create_connection (project2.c:713)
==18779==    by 0x10B609: command_l (project2.c:307)
==18779==    by 0x10BB86: handle_commands (project2.c:117)
==18779==    by 0x109188: main (project2.c:39)
==18779== 
==18779== 
==18779== HEAP SUMMARY:
==18779==     in use at exit: 28,000 bytes in 1 blocks
==18779==   total heap usage: 554 allocs, 553 frees, 13,038,523 bytes allocated
==18779== 
==18779== LEAK SUMMARY:
==18779==    definitely lost: 28,000 bytes in 1 blocks
==18779==    indirectly lost: 0 bytes in 0 blocks
==18779==      possibly lost: 0 bytes in 0 blocks
==18779==    still reachable: 0 bytes in 0 blocks
==18779==         suppressed: 0 bytes in 0 blocks
==18779== Rerun with --leak-check=full to see details of leaked memory
==18779== 
==18779== For counts of detected and suppressed errors, rerun with: -v
==18779== ERROR SUMMARY: 498 errors from 8 contexts (suppressed: 0 from 0)

```


Your code will not be reevaluated if you submit before 2023-04-05 22:10:57 @ Lisbon, Portugal. You need to wait 10 minute(s).

