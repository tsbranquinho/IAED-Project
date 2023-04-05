# Projecto 2 - IAED 2022/2023

## Enunciado

O enunciado do projecto está disponível em [enunciado.md](enunciado.md). 

## Data de entrega: 14 de abril de 2023, às 19h59

Informações detalhadas sobre o processo de submissão estão disponíveis em [informacoes.md](informacoes.md).



# Evaluation

2023-04-05T23:05:48

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
==1872== Memcheck, a memory error detector
==1872== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1872== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1872== Command: ./proj.out
==1872== 
==1872== Invalid write of size 4
==1872==    at 0x109F2D: check_first_and_last (project2.c:930)
==1872==    by 0x109F2D: command_i (project2.c:349)
==1872==    by 0x10BC23: handle_commands (project2.c:126)
==1872==    by 0x109188: main (project2.c:39)
==1872==  Address 0x4f88d20 is 0 bytes after a block of size 16 alloc'd
==1872==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==1872==    by 0x109D8C: command_i (project2.c:345)
==1872==    by 0x10BC23: handle_commands (project2.c:126)
==1872==    by 0x109188: main (project2.c:39)
==1872== 
==1872== Invalid write of size 4
==1872==    at 0x109E36: command_i (project2.c:354)
==1872==    by 0x10BC23: handle_commands (project2.c:126)
==1872==    by 0x109188: main (project2.c:39)
==1872==  Address 0x4f88d24 is 4 bytes after a block of size 16 alloc'd
==1872==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==1872==    by 0x109D8C: command_i (project2.c:345)
==1872==    by 0x10BC23: handle_commands (project2.c:126)
==1872==    by 0x109188: main (project2.c:39)
==1872== 
==1872== Invalid read of size 4
==1872==    at 0x109EB8: bubble_sort (project2.c:907)
==1872==    by 0x109EB8: command_i (project2.c:361)
==1872==    by 0x10BC23: handle_commands (project2.c:126)
==1872==    by 0x109188: main (project2.c:39)
==1872==  Address 0x4f88d20 is 0 bytes after a block of size 16 alloc'd
==1872==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==1872==    by 0x109D8C: command_i (project2.c:345)
==1872==    by 0x10BC23: handle_commands (project2.c:126)
==1872==    by 0x109188: main (project2.c:39)
==1872== 
==1872== Invalid read of size 4
==1872==    at 0x109EBC: bubble_sort (project2.c:906)
==1872==    by 0x109EBC: command_i (project2.c:361)
==1872==    by 0x10BC23: handle_commands (project2.c:126)
==1872==    by 0x109188: main (project2.c:39)
==1872==  Address 0x4f88d20 is 0 bytes after a block of size 16 alloc'd
==1872==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==1872==    by 0x109D8C: command_i (project2.c:345)
==1872==    by 0x10BC23: handle_commands (project2.c:126)
==1872==    by 0x109188: main (project2.c:39)
==1872== 
==1872== Invalid read of size 4
==1872==    at 0x109F70: print_routes_passing (project2.c:948)
==1872==    by 0x109F70: command_i (project2.c:362)
==1872==    by 0x10BC23: handle_commands (project2.c:126)
==1872==    by 0x109188: main (project2.c:39)
==1872==  Address 0x4f88d20 is 0 bytes after a block of size 16 alloc'd
==1872==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==1872==    by 0x109D8C: command_i (project2.c:345)
==1872==    by 0x10BC23: handle_commands (project2.c:126)
==1872==    by 0x109188: main (project2.c:39)
==1872== 
==1872== Invalid read of size 4
==1872==    at 0x109FA9: print_routes_passing (project2.c:950)
==1872==    by 0x109FA9: command_i (project2.c:362)
==1872==    by 0x10BC23: handle_commands (project2.c:126)
==1872==    by 0x109188: main (project2.c:39)
==1872==  Address 0x4f88d2c is 12 bytes after a block of size 16 alloc'd
==1872==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==1872==    by 0x109D8C: command_i (project2.c:345)
==1872==    by 0x10BC23: handle_commands (project2.c:126)
==1872==    by 0x109188: main (project2.c:39)
==1872== 
==1872== Invalid read of size 1
==1872==    at 0x4A608D0: __strcmp_sse2_unaligned (strcmp-sse2-unaligned.S:24)
==1872==    by 0x10996E: command_r (project2.c:424)
==1872==    by 0x10BB2E: handle_commands (project2.c:133)
==1872==    by 0x109188: main (project2.c:39)
==1872==  Address 0x4f85000 is 0 bytes inside a block of size 10 free'd
==1872==    at 0x48369AB: free (vg_replace_malloc.c:530)
==1872==    by 0x109982: command_r (project2.c:426)
==1872==    by 0x10BB2E: handle_commands (project2.c:133)
==1872==    by 0x109188: main (project2.c:39)
==1872==  Block was alloc'd at
==1872==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==1872==    by 0x10AFAD: create_connection (project2.c:718)
==1872==    by 0x10B679: command_l (project2.c:307)
==1872==    by 0x10BBF6: handle_commands (project2.c:117)
==1872==    by 0x109188: main (project2.c:39)
==1872== 
==1872== Invalid read of size 1
==1872==    at 0x4839D20: strcmp (vg_replace_strmem.c:848)
==1872==    by 0x10996E: command_r (project2.c:424)
==1872==    by 0x10BB2E: handle_commands (project2.c:133)
==1872==    by 0x109188: main (project2.c:39)
==1872==  Address 0x4f85001 is 1 bytes inside a block of size 10 free'd
==1872==    at 0x48369AB: free (vg_replace_malloc.c:530)
==1872==    by 0x109982: command_r (project2.c:426)
==1872==    by 0x10BB2E: handle_commands (project2.c:133)
==1872==    by 0x109188: main (project2.c:39)
==1872==  Block was alloc'd at
==1872==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==1872==    by 0x10AFAD: create_connection (project2.c:718)
==1872==    by 0x10B679: command_l (project2.c:307)
==1872==    by 0x10BBF6: handle_commands (project2.c:117)
==1872==    by 0x109188: main (project2.c:39)
==1872== 
==1872== 
==1872== HEAP SUMMARY:
==1872==     in use at exit: 28,000 bytes in 1 blocks
==1872==   total heap usage: 562 allocs, 561 frees, 13,038,651 bytes allocated
==1872== 
==1872== LEAK SUMMARY:
==1872==    definitely lost: 28,000 bytes in 1 blocks
==1872==    indirectly lost: 0 bytes in 0 blocks
==1872==      possibly lost: 0 bytes in 0 blocks
==1872==    still reachable: 0 bytes in 0 blocks
==1872==         suppressed: 0 bytes in 0 blocks
==1872== Rerun with --leak-check=full to see details of leaked memory
==1872== 
==1872== For counts of detected and suppressed errors, rerun with: -v
==1872== ERROR SUMMARY: 498 errors from 8 contexts (suppressed: 0 from 0)

```


Your code will not be reevaluated if you submit before 2023-04-05 23:15:48 @ Lisbon, Portugal. You need to wait 10 minute(s).

