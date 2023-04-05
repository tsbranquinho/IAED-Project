# Projecto 2 - IAED 2022/2023

## Enunciado

O enunciado do projecto está disponível em [enunciado.md](enunciado.md). 

## Data de entrega: 14 de abril de 2023, às 19h59

Informações detalhadas sobre o processo de submissão estão disponíveis em [informacoes.md](informacoes.md).



# Evaluation

2023-04-05T03:07:03

## Test 1: [+ Accepted+].
## Test 2: [+ Accepted+].
## Test 3: [- Wrong Answer-].


## Test 4: [- Wrong Answer-].


## Test 5: [- Wrong Answer-].


## Test 6: [- Wrong Answer-].


## Test 7: [- Wrong Answer-].


## Test 8: [- Wrong Answer-].


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


## Test 21: [- Wrong Answer-].


## Test 22: [+ Accepted+].
## Test 23: [+ Accepted+].
## Test 24: [- Wrong Answer-].


## Test 25: [- Wrong Answer-].


## Test 26: [- Wrong Answer-].


## Test 27: [- Wrong Answer-].


## Test 28: [- Memory Limit Exceeded-].

## Test 29: [- Memory Limit Exceeded-].

## Test 30: [- Memory Limit Exceeded-].

## Test 31: [- Memory Limit Exceeded-].

## Test 32: [- Wrong Answer-].




## Number of passed tests: 4/32


## Valgrind Output:


```
==6232== Memcheck, a memory error detector
==6232== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==6232== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==6232== Command: ./proj.out
==6232== 
==6232== Invalid write of size 4
==6232==    at 0x109964: check_first_and_last (project2.c:768)
==6232==    by 0x109964: command_i (project2.c:300)
==6232==    by 0x10B4E9: handle_commands (project2.c:99)
==6232==    by 0x109161: main (project2.c:39)
==6232==  Address 0x5389b60 is 0 bytes after a block of size 16 alloc'd
==6232==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==6232==    by 0x109744: command_i (project2.c:296)
==6232==    by 0x10B4E9: handle_commands (project2.c:99)
==6232==    by 0x109161: main (project2.c:39)
==6232== 
==6232== Invalid write of size 4
==6232==    at 0x109874: command_i (project2.c:305)
==6232==    by 0x10B4E9: handle_commands (project2.c:99)
==6232==    by 0x109161: main (project2.c:39)
==6232==  Address 0x5389b64 is 4 bytes after a block of size 16 alloc'd
==6232==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==6232==    by 0x109744: command_i (project2.c:296)
==6232==    by 0x10B4E9: handle_commands (project2.c:99)
==6232==    by 0x109161: main (project2.c:39)
==6232== 
==6232== Invalid read of size 4
==6232==    at 0x1098F8: bubble_sort (project2.c:745)
==6232==    by 0x1098F8: command_i (project2.c:312)
==6232==    by 0x10B4E9: handle_commands (project2.c:99)
==6232==    by 0x109161: main (project2.c:39)
==6232==  Address 0x5389b60 is 0 bytes after a block of size 16 alloc'd
==6232==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==6232==    by 0x109744: command_i (project2.c:296)
==6232==    by 0x10B4E9: handle_commands (project2.c:99)
==6232==    by 0x109161: main (project2.c:39)
==6232== 
==6232== Invalid read of size 4
==6232==    at 0x1098FC: bubble_sort (project2.c:744)
==6232==    by 0x1098FC: command_i (project2.c:312)
==6232==    by 0x10B4E9: handle_commands (project2.c:99)
==6232==    by 0x109161: main (project2.c:39)
==6232==  Address 0x5389b60 is 0 bytes after a block of size 16 alloc'd
==6232==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==6232==    by 0x109744: command_i (project2.c:296)
==6232==    by 0x10B4E9: handle_commands (project2.c:99)
==6232==    by 0x109161: main (project2.c:39)
==6232== 
==6232== Invalid read of size 4
==6232==    at 0x1099A0: print_routes_passing (project2.c:786)
==6232==    by 0x1099A0: command_i (project2.c:313)
==6232==    by 0x10B4E9: handle_commands (project2.c:99)
==6232==    by 0x109161: main (project2.c:39)
==6232==  Address 0x5389b60 is 0 bytes after a block of size 16 alloc'd
==6232==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==6232==    by 0x109744: command_i (project2.c:296)
==6232==    by 0x10B4E9: handle_commands (project2.c:99)
==6232==    by 0x109161: main (project2.c:39)
==6232== 
==6232== Invalid read of size 4
==6232==    at 0x1099D5: print_routes_passing (project2.c:788)
==6232==    by 0x1099D5: command_i (project2.c:313)
==6232==    by 0x10B4E9: handle_commands (project2.c:99)
==6232==    by 0x109161: main (project2.c:39)
==6232==  Address 0x5389b6c is 12 bytes after a block of size 16 alloc'd
==6232==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==6232==    by 0x109744: command_i (project2.c:296)
==6232==    by 0x10B4E9: handle_commands (project2.c:99)
==6232==    by 0x109161: main (project2.c:39)
==6232== 
==6232== 
==6232== HEAP SUMMARY:
==6232==     in use at exit: 1,441,770 bytes in 22 blocks
==6232==   total heap usage: 461 allocs, 439 frees, 12,716,287 bytes allocated
==6232== 
==6232== LEAK SUMMARY:
==6232==    definitely lost: 1,441,770 bytes in 22 blocks
==6232==    indirectly lost: 0 bytes in 0 blocks
==6232==      possibly lost: 0 bytes in 0 blocks
==6232==    still reachable: 0 bytes in 0 blocks
==6232==         suppressed: 0 bytes in 0 blocks
==6232== Rerun with --leak-check=full to see details of leaked memory
==6232== 
==6232== For counts of detected and suppressed errors, rerun with: -v
==6232== ERROR SUMMARY: 120 errors from 6 contexts (suppressed: 0 from 0)

```


Your code will not be reevaluated if you submit before 2023-04-05 03:17:03 @ Lisbon, Portugal. You need to wait 10 minute(s).

