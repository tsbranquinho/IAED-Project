# Projecto 2 - IAED 2022/2023

## Enunciado

O enunciado do projecto está disponível em [enunciado.md](enunciado.md). 

## Data de entrega: 14 de abril de 2023, às 19h59

Informações detalhadas sobre o processo de submissão estão disponíveis em [informacoes.md](informacoes.md).



# Evaluation

2023-04-05T16:53:36

## Test 1: [+ Accepted+].
## Test 2: [+ Accepted+].
## Test 3: [+ Accepted+].
## Test 4: [- Wrong Answer-].


## Test 5: [- Command terminated by signal (6: SIGABRT)-].

## Test 6: [- Wrong Answer-].


## Test 7: [- Time Limit Exceeded-].

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
## Test 24: [- Time Limit Exceeded-].

## Test 25: [- Wrong Answer-].


## Test 26: [- Time Limit Exceeded-].

## Test 27: [- Wrong Answer-].


## Test 28: [- Memory Limit Exceeded-].

## Test 29: [- Memory Limit Exceeded-].

## Test 30: [- Memory Limit Exceeded-].

## Test 31: [- Memory Limit Exceeded-].

## Test 32: [- Wrong Answer-].




## Number of passed tests: 5/32


## Valgrind Output:


```
==4803== Memcheck, a memory error detector
==4803== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==4803== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==4803== Command: ./proj.out
==4803== 
==4803== Invalid write of size 4
==4803==    at 0x109E44: check_first_and_last (project2.c:813)
==4803==    by 0x109E44: command_i (project2.c:303)
==4803==    by 0x10B9E9: handle_commands (project2.c:99)
==4803==    by 0x109161: main (project2.c:39)
==4803==  Address 0x5389b60 is 0 bytes after a block of size 16 alloc'd
==4803==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==4803==    by 0x109C24: command_i (project2.c:299)
==4803==    by 0x10B9E9: handle_commands (project2.c:99)
==4803==    by 0x109161: main (project2.c:39)
==4803== 
==4803== Invalid write of size 4
==4803==    at 0x109D54: command_i (project2.c:308)
==4803==    by 0x10B9E9: handle_commands (project2.c:99)
==4803==    by 0x109161: main (project2.c:39)
==4803==  Address 0x5389b64 is 4 bytes after a block of size 16 alloc'd
==4803==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==4803==    by 0x109C24: command_i (project2.c:299)
==4803==    by 0x10B9E9: handle_commands (project2.c:99)
==4803==    by 0x109161: main (project2.c:39)
==4803== 
==4803== Invalid read of size 4
==4803==    at 0x109DD8: bubble_sort (project2.c:790)
==4803==    by 0x109DD8: command_i (project2.c:315)
==4803==    by 0x10B9E9: handle_commands (project2.c:99)
==4803==    by 0x109161: main (project2.c:39)
==4803==  Address 0x5389b60 is 0 bytes after a block of size 16 alloc'd
==4803==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==4803==    by 0x109C24: command_i (project2.c:299)
==4803==    by 0x10B9E9: handle_commands (project2.c:99)
==4803==    by 0x109161: main (project2.c:39)
==4803== 
==4803== Invalid read of size 4
==4803==    at 0x109DDC: bubble_sort (project2.c:789)
==4803==    by 0x109DDC: command_i (project2.c:315)
==4803==    by 0x10B9E9: handle_commands (project2.c:99)
==4803==    by 0x109161: main (project2.c:39)
==4803==  Address 0x5389b60 is 0 bytes after a block of size 16 alloc'd
==4803==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==4803==    by 0x109C24: command_i (project2.c:299)
==4803==    by 0x10B9E9: handle_commands (project2.c:99)
==4803==    by 0x109161: main (project2.c:39)
==4803== 
==4803== Invalid read of size 4
==4803==    at 0x109E80: print_routes_passing (project2.c:831)
==4803==    by 0x109E80: command_i (project2.c:316)
==4803==    by 0x10B9E9: handle_commands (project2.c:99)
==4803==    by 0x109161: main (project2.c:39)
==4803==  Address 0x5389b60 is 0 bytes after a block of size 16 alloc'd
==4803==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==4803==    by 0x109C24: command_i (project2.c:299)
==4803==    by 0x10B9E9: handle_commands (project2.c:99)
==4803==    by 0x109161: main (project2.c:39)
==4803== 
==4803== Invalid read of size 4
==4803==    at 0x109EB5: print_routes_passing (project2.c:833)
==4803==    by 0x109EB5: command_i (project2.c:316)
==4803==    by 0x10B9E9: handle_commands (project2.c:99)
==4803==    by 0x109161: main (project2.c:39)
==4803==  Address 0x5389b6c is 12 bytes after a block of size 16 alloc'd
==4803==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==4803==    by 0x109C24: command_i (project2.c:299)
==4803==    by 0x10B9E9: handle_commands (project2.c:99)
==4803==    by 0x109161: main (project2.c:39)
==4803== 

```


Your code will not be reevaluated if you submit before 2023-04-05 17:03:36 @ Lisbon, Portugal. You need to wait 10 minute(s).

