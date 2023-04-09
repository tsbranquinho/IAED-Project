# Projecto 2 - IAED 2022/2023

## Enunciado

O enunciado do projecto está disponível em [enunciado.md](enunciado.md). 

## Data de entrega: 14 de abril de 2023, às 19h59

Informações detalhadas sobre o processo de submissão estão disponíveis em [informacoes.md](informacoes.md).



# Evaluation

2023-04-09T10:49:43

## Test 1: [+ Accepted+].
## Test 2: [+ Accepted+].
## Test 3: [- Command terminated by signal (6: SIGABRT)-].

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


## Test 21: [- Command terminated by signal (6: SIGABRT)-].

## Test 22: [+ Accepted+].
## Test 23: [+ Accepted+].
## Test 24: [- Command terminated by signal (6: SIGABRT)-].

## Test 25: [- Wrong Answer-].


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
==4206== Memcheck, a memory error detector
==4206== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==4206== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==4206== Command: ./proj.out
==4206== 
==4206== Invalid free() / delete / delete[] / realloc()
==4206==    at 0x48369AB: free (vg_replace_malloc.c:530)
==4206==    by 0x109999: command_r (project2.c:453)
==4206==    by 0x10B93D: handle_commands (project2.c:135)
==4206==    by 0x10914E: main (project2.c:37)
==4206==  Address 0x4f8e3d0 is 0 bytes inside a block of size 10 free'd
==4206==    at 0x48369AB: free (vg_replace_malloc.c:530)
==4206==    by 0x109926: command_r (project2.c:443)
==4206==    by 0x10B93D: handle_commands (project2.c:135)
==4206==    by 0x10914E: main (project2.c:37)
==4206==  Block was alloc'd at
==4206==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==4206==    by 0x109660: copy_route (project2.c:382)
==4206==    by 0x109974: command_r (project2.c:451)
==4206==    by 0x10B93D: handle_commands (project2.c:135)
==4206==    by 0x10914E: main (project2.c:37)
==4206== 
==4206== Invalid free() / delete / delete[] / realloc()
==4206==    at 0x48369AB: free (vg_replace_malloc.c:530)
==4206==    by 0x109B40: command_r (project2.c:455)
==4206==    by 0x10B93D: handle_commands (project2.c:135)
==4206==    by 0x10914E: main (project2.c:37)
==4206==  Address 0x4f8e420 is 0 bytes inside a block of size 9 free'd
==4206==    at 0x48369AB: free (vg_replace_malloc.c:530)
==4206==    by 0x109BE8: command_r (project2.c:445)
==4206==    by 0x10B93D: handle_commands (project2.c:135)
==4206==    by 0x10914E: main (project2.c:37)
==4206==  Block was alloc'd at
==4206==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==4206==    by 0x109789: copy_route (project2.c:385)
==4206==    by 0x109974: command_r (project2.c:451)
==4206==    by 0x10B93D: handle_commands (project2.c:135)
==4206==    by 0x10914E: main (project2.c:37)
==4206== 
==4206== Invalid free() / delete / delete[] / realloc()
==4206==    at 0x48369AB: free (vg_replace_malloc.c:530)
==4206==    by 0x109B5D: command_r (project2.c:456)
==4206==    by 0x10B93D: handle_commands (project2.c:135)
==4206==    by 0x10914E: main (project2.c:37)
==4206==  Address 0x4f8e470 is 0 bytes inside a block of size 9 free'd
==4206==    at 0x48369AB: free (vg_replace_malloc.c:530)
==4206==    by 0x109BFA: command_r (project2.c:446)
==4206==    by 0x10B93D: handle_commands (project2.c:135)
==4206==    by 0x10914E: main (project2.c:37)
==4206==  Block was alloc'd at
==4206==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==4206==    by 0x1097AC: copy_route (project2.c:387)
==4206==    by 0x109974: command_r (project2.c:451)
==4206==    by 0x10B93D: handle_commands (project2.c:135)
==4206==    by 0x10914E: main (project2.c:37)
==4206== 
==4206== Invalid read of size 8
==4206==    at 0x109B95: free_linked_list (project2.c:46)
==4206==    by 0x109B95: command_r (project2.c:457)
==4206==    by 0x10B93D: handle_commands (project2.c:135)
==4206==    by 0x10914E: main (project2.c:37)
==4206==  Address 0x4f8e4c0 is 0 bytes inside a block of size 56 free'd
==4206==    at 0x48369AB: free (vg_replace_malloc.c:530)
==4206==    by 0x109C1C: free_linked_list (project2.c:52)
==4206==    by 0x109C1C: command_r (project2.c:447)
==4206==    by 0x10B93D: handle_commands (project2.c:135)
==4206==    by 0x10914E: main (project2.c:37)
==4206==  Block was alloc'd at
==4206==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==4206==    by 0x1096CD: copy_route (project2.c:401)
==4206==    by 0x109974: command_r (project2.c:451)
==4206==    by 0x10B93D: handle_commands (project2.c:135)
==4206==    by 0x10914E: main (project2.c:37)
==4206== 
==4206== Invalid read of size 8
==4206==    at 0x109B98: free_linked_list (project2.c:45)
==4206==    by 0x109B98: command_r (project2.c:457)
==4206==    by 0x10B93D: handle_commands (project2.c:135)
==4206==    by 0x10914E: main (project2.c:37)
==4206==  Address 0x4f8e4e8 is 40 bytes inside a block of size 56 free'd
==4206==    at 0x48369AB: free (vg_replace_malloc.c:530)
==4206==    by 0x109C1C: free_linked_list (project2.c:52)
==4206==    by 0x109C1C: command_r (project2.c:447)
==4206==    by 0x10B93D: handle_commands (project2.c:135)
==4206==    by 0x10914E: main (project2.c:37)
==4206==  Block was alloc'd at
==4206==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==4206==    by 0x1096CD: copy_route (project2.c:401)
==4206==    by 0x109974: command_r (project2.c:451)
==4206==    by 0x10B93D: handle_commands (project2.c:135)
==4206==    by 0x10914E: main (project2.c:37)
==4206== 
==4206== Invalid free() / delete / delete[] / realloc()
==4206==    at 0x48369AB: free (vg_replace_malloc.c:530)
==4206==    by 0x109BA5: free_linked_list (project2.c:47)
==4206==    by 0x109BA5: command_r (project2.c:457)
==4206==    by 0x10B93D: handle_commands (project2.c:135)
==4206==    by 0x10914E: main (project2.c:37)
==4206==  Address 0x4f8e540 is 0 bytes inside a block of size 10 free'd
==4206==    at 0x48369AB: free (vg_replace_malloc.c:530)
==4206==    by 0x109C37: free_linked_list (project2.c:47)
==4206==    by 0x109C37: command_r (project2.c:447)
==4206==    by 0x10B93D: handle_commands (project2.c:135)
==4206==    by 0x10914E: main (project2.c:37)
==4206==  Block was alloc'd at
==4206==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==4206==    by 0x1096E1: copy_route (project2.c:402)
==4206==    by 0x109974: command_r (project2.c:451)
==4206==    by 0x10B93D: handle_commands (project2.c:135)
==4206==    by 0x10914E: main (project2.c:37)
==4206== 
==4206== Invalid read of size 8
==4206==    at 0x109BA6: free_linked_list (project2.c:48)
==4206==    by 0x109BA6: command_r (project2.c:457)
==4206==    by 0x10B93D: handle_commands (project2.c:135)
==4206==    by 0x10914E: main (project2.c:37)
==4206==  Address 0x4f8e4c8 is 8 bytes inside a block of size 56 free'd
==4206==    at 0x48369AB: free (vg_replace_malloc.c:530)
==4206==    by 0x109C1C: free_linked_list (project2.c:52)
==4206==    by 0x109C1C: command_r (project2.c:447)
==4206==    by 0x10B93D: handle_commands (project2.c:135)
==4206==    by 0x10914E: main (project2.c:37)
==4206==  Block was alloc'd at
==4206==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==4206==    by 0x1096CD: copy_route (project2.c:401)
==4206==    by 0x109974: command_r (project2.c:451)
==4206==    by 0x10B93D: handle_commands (project2.c:135)
==4206==    by 0x10914E: main (project2.c:37)
==4206== 
==4206== Invalid free() / delete / delete[] / realloc()
==4206==    at 0x48369AB: free (vg_replace_malloc.c:530)
==4206==    by 0x109BB3: free_linked_list (project2.c:49)
==4206==    by 0x109BB3: command_r (project2.c:457)
==4206==    by 0x10B93D: handle_commands (project2.c:135)
==4206==    by 0x10914E: main (project2.c:37)
==4206==  Address 0x4f8e590 is 0 bytes inside a block of size 9 free'd
==4206==    at 0x48369AB: free (vg_replace_malloc.c:530)
==4206==    by 0x109C46: free_linked_list (project2.c:49)
==4206==    by 0x109C46: command_r (project2.c:447)
==4206==    by 0x10B93D: handle_commands (project2.c:135)
==4206==    by 0x10914E: main (project2.c:37)
==4206==  Block was alloc'd at
==4206==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==4206==    by 0x109702: copy_route (project2.c:404)
==4206==    by 0x109974: command_r (project2.c:451)
==4206==    by 0x10B93D: handle_commands (project2.c:135)
==4206==    by 0x10914E: main (project2.c:37)
==4206== 
==4206== Invalid read of size 8
==4206==    at 0x109BB4: free_linked_list (project2.c:50)
==4206==    by 0x109BB4: command_r (project2.c:457)
==4206==    by 0x10B93D: handle_commands (project2.c:135)
==4206==    by 0x10914E: main (project2.c:37)
==4206==  Address 0x4f8e4d0 is 16 bytes inside a block of size 56 free'd
==4206==    at 0x48369AB: free (vg_replace_malloc.c:530)
==4206==    by 0x109C1C: free_linked_list (project2.c:52)
==4206==    by 0x109C1C: command_r (project2.c:447)
==4206==    by 0x10B93D: handle_commands (project2.c:135)
==4206==    by 0x10914E: main (project2.c:37)
==4206==  Block was alloc'd at
==4206==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==4206==    by 0x1096CD: copy_route (project2.c:401)
==4206==    by 0x109974: command_r (project2.c:451)
==4206==    by 0x10B93D: handle_commands (project2.c:135)
==4206==    by 0x10914E: main (project2.c:37)
==4206== 
==4206== Invalid free() / delete / delete[] / realloc()
==4206==    at 0x48369AB: free (vg_replace_malloc.c:530)
==4206==    by 0x109B84: free_linked_list (project2.c:51)
==4206==    by 0x109B84: command_r (project2.c:457)
==4206==    by 0x10B93D: handle_commands (project2.c:135)
==4206==    by 0x10914E: main (project2.c:37)
==4206==  Address 0x4f8e5e0 is 0 bytes inside a block of size 9 free'd
==4206==    at 0x48369AB: free (vg_replace_malloc.c:530)
==4206==    by 0x109C14: free_linked_list (project2.c:51)
==4206==    by 0x109C14: command_r (project2.c:447)
==4206==    by 0x10B93D: handle_commands (project2.c:135)
==4206==    by 0x10914E: main (project2.c:37)
==4206==  Block was alloc'd at
==4206==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==4206==    by 0x109724: copy_route (project2.c:406)
==4206==    by 0x109974: command_r (project2.c:451)
==4206==    by 0x10B93D: handle_commands (project2.c:135)
==4206==    by 0x10914E: main (project2.c:37)
==4206== 
==4206== Invalid free() / delete / delete[] / realloc()
==4206==    at 0x48369AB: free (vg_replace_malloc.c:530)
==4206==    by 0x109B8C: free_linked_list (project2.c:52)
==4206==    by 0x109B8C: command_r (project2.c:457)
==4206==    by 0x10B93D: handle_commands (project2.c:135)
==4206==    by 0x10914E: main (project2.c:37)
==4206==  Address 0x4f8e4c0 is 0 bytes inside a block of size 56 free'd
==4206==    at 0x48369AB: free (vg_replace_malloc.c:530)
==4206==    by 0x109C1C: free_linked_list (project2.c:52)
==4206==    by 0x109C1C: command_r (project2.c:447)
==4206==    by 0x10B93D: handle_commands (project2.c:135)
==4206==    by 0x10914E: main (project2.c:37)
==4206==  Block was alloc'd at
==4206==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==4206==    by 0x1096CD: copy_route (project2.c:401)
==4206==    by 0x109974: command_r (project2.c:451)
==4206==    by 0x10B93D: handle_commands (project2.c:135)
==4206==    by 0x10914E: main (project2.c:37)
==4206== 
==4206== 
==4206== HEAP SUMMARY:
==4206==     in use at exit: 0 bytes in 0 blocks
==4206==   total heap usage: 654 allocs, 716 frees, 12,926,739 bytes allocated
==4206== 
==4206== All heap blocks were freed -- no leaks are possible
==4206== 
==4206== For counts of detected and suppressed errors, rerun with: -v
==4206== ERROR SUMMARY: 118 errors from 11 contexts (suppressed: 0 from 0)

```


Your code will not be reevaluated if you submit before 2023-04-09 10:59:43 @ Lisbon, Portugal. You need to wait 10 minute(s).

