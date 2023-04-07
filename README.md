# Projecto 2 - IAED 2022/2023

## Enunciado

O enunciado do projecto está disponível em [enunciado.md](enunciado.md). 

## Data de entrega: 14 de abril de 2023, às 19h59

Informações detalhadas sobre o processo de submissão estão disponíveis em [informacoes.md](informacoes.md).



# Evaluation

2023-04-07T16:36:25

## Test 1: [+ Accepted+].
## Test 2: [+ Accepted+].
## Test 3: [+ Accepted+].
## Test 4: [- Wrong Answer-].


## Test 5: [+ Accepted+].
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
==15036== Memcheck, a memory error detector
==15036== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==15036== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==15036== Command: ./proj.out
==15036== 
==15036== Invalid write of size 4
==15036==    at 0x109F1D: check_first_and_last (project2.c:935)
==15036==    by 0x109F1D: command_i (project2.c:360)
==15036==    by 0x10BBB3: handle_commands (project2.c:132)
==15036==    by 0x109198: main (project2.c:39)
==15036==  Address 0x4f92d80 is 0 bytes after a block of size 16 alloc'd
==15036==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==15036==    by 0x109D3B: command_i (project2.c:352)
==15036==    by 0x10BBB3: handle_commands (project2.c:132)
==15036==    by 0x109198: main (project2.c:39)
==15036== 
==15036== Invalid write of size 4
==15036==    at 0x109E33: command_i (project2.c:367)
==15036==    by 0x10BBB3: handle_commands (project2.c:132)
==15036==    by 0x109198: main (project2.c:39)
==15036==  Address 0x4f92d84 is 4 bytes after a block of size 16 alloc'd
==15036==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==15036==    by 0x109D3B: command_i (project2.c:352)
==15036==    by 0x10BBB3: handle_commands (project2.c:132)
==15036==    by 0x109198: main (project2.c:39)
==15036== 
==15036== Invalid read of size 4
==15036==    at 0x109EB0: bubble_sort (project2.c:912)
==15036==    by 0x109EB0: command_i (project2.c:375)
==15036==    by 0x10BBB3: handle_commands (project2.c:132)
==15036==    by 0x109198: main (project2.c:39)
==15036==  Address 0x4f92d80 is 0 bytes after a block of size 16 alloc'd
==15036==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==15036==    by 0x109D3B: command_i (project2.c:352)
==15036==    by 0x10BBB3: handle_commands (project2.c:132)
==15036==    by 0x109198: main (project2.c:39)
==15036== 
==15036== Invalid read of size 4
==15036==    at 0x109EB4: bubble_sort (project2.c:911)
==15036==    by 0x109EB4: command_i (project2.c:375)
==15036==    by 0x10BBB3: handle_commands (project2.c:132)
==15036==    by 0x109198: main (project2.c:39)
==15036==  Address 0x4f92d80 is 0 bytes after a block of size 16 alloc'd
==15036==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==15036==    by 0x109D3B: command_i (project2.c:352)
==15036==    by 0x10BBB3: handle_commands (project2.c:132)
==15036==    by 0x109198: main (project2.c:39)
==15036== 
==15036== Invalid read of size 4
==15036==    at 0x109F60: print_routes_passing (project2.c:953)
==15036==    by 0x109F60: command_i (project2.c:376)
==15036==    by 0x10BBB3: handle_commands (project2.c:132)
==15036==    by 0x109198: main (project2.c:39)
==15036==  Address 0x4f92d80 is 0 bytes after a block of size 16 alloc'd
==15036==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==15036==    by 0x109D3B: command_i (project2.c:352)
==15036==    by 0x10BBB3: handle_commands (project2.c:132)
==15036==    by 0x109198: main (project2.c:39)
==15036== 
==15036== Invalid read of size 4
==15036==    at 0x109F99: print_routes_passing (project2.c:955)
==15036==    by 0x109F99: command_i (project2.c:376)
==15036==    by 0x10BBB3: handle_commands (project2.c:132)
==15036==    by 0x109198: main (project2.c:39)
==15036==  Address 0x4f92d8c is 12 bytes after a block of size 16 alloc'd
==15036==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==15036==    by 0x109D3B: command_i (project2.c:352)
==15036==    by 0x10BBB3: handle_commands (project2.c:132)
==15036==    by 0x109198: main (project2.c:39)
==15036== 
==15036== Invalid read of size 1
==15036==    at 0x4A608D0: __strcmp_sse2_unaligned (strcmp-sse2-unaligned.S:24)
==15036==    by 0x10999E: command_r (project2.c:438)
==15036==    by 0x10BABE: handle_commands (project2.c:139)
==15036==    by 0x109198: main (project2.c:39)
==15036==  Address 0x4f8ae60 is 0 bytes inside a block of size 10 free'd
==15036==    at 0x48369AB: free (vg_replace_malloc.c:530)
==15036==    by 0x1099B2: command_r (project2.c:440)
==15036==    by 0x10BABE: handle_commands (project2.c:139)
==15036==    by 0x109198: main (project2.c:39)
==15036==  Block was alloc'd at
==15036==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==15036==    by 0x10AF22: create_connection (project2.c:720)
==15036==    by 0x10B5F3: command_l (project2.c:313)
==15036==    by 0x10BB86: handle_commands (project2.c:123)
==15036==    by 0x109198: main (project2.c:39)
==15036== 
==15036== Invalid read of size 1
==15036==    at 0x4839D20: strcmp (vg_replace_strmem.c:848)
==15036==    by 0x10999E: command_r (project2.c:438)
==15036==    by 0x10BABE: handle_commands (project2.c:139)
==15036==    by 0x109198: main (project2.c:39)
==15036==  Address 0x4f8ae61 is 1 bytes inside a block of size 10 free'd
==15036==    at 0x48369AB: free (vg_replace_malloc.c:530)
==15036==    by 0x1099B2: command_r (project2.c:440)
==15036==    by 0x10BABE: handle_commands (project2.c:139)
==15036==    by 0x109198: main (project2.c:39)
==15036==  Block was alloc'd at
==15036==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==15036==    by 0x10AF22: create_connection (project2.c:720)
==15036==    by 0x10B5F3: command_l (project2.c:313)
==15036==    by 0x10BB86: handle_commands (project2.c:123)
==15036==    by 0x109198: main (project2.c:39)
==15036== 
==15036== Invalid free() / delete / delete[] / realloc()
==15036==    at 0x48369AB: free (vg_replace_malloc.c:530)
==15036==    by 0x10936C: free_memory (project2.c:72)
==15036==    by 0x10BAE4: handle_commands (project2.c:102)
==15036==    by 0x109198: main (project2.c:39)
==15036==  Address 0x4d25900 is 0 bytes inside a block of size 10 free'd
==15036==    at 0x48369AB: free (vg_replace_malloc.c:530)
==15036==    by 0x1099B2: command_r (project2.c:440)
==15036==    by 0x10BABE: handle_commands (project2.c:139)
==15036==    by 0x109198: main (project2.c:39)
==15036==  Block was alloc'd at
==15036==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==15036==    by 0x10AF22: create_connection (project2.c:720)
==15036==    by 0x10B5F3: command_l (project2.c:313)
==15036==    by 0x10BB86: handle_commands (project2.c:123)
==15036==    by 0x109198: main (project2.c:39)
==15036== 
==15036== Invalid free() / delete / delete[] / realloc()
==15036==    at 0x48369AB: free (vg_replace_malloc.c:530)
==15036==    by 0x10937D: free_memory (project2.c:73)
==15036==    by 0x10BAE4: handle_commands (project2.c:102)
==15036==    by 0x109198: main (project2.c:39)
==15036==  Address 0x4d25950 is 0 bytes inside a block of size 9 free'd
==15036==    at 0x48369AB: free (vg_replace_malloc.c:530)
==15036==    by 0x1099C4: command_r (project2.c:441)
==15036==    by 0x10BABE: handle_commands (project2.c:139)
==15036==    by 0x109198: main (project2.c:39)
==15036==  Block was alloc'd at
==15036==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==15036==    by 0x10AF46: create_connection (project2.c:724)
==15036==    by 0x10B5F3: command_l (project2.c:313)
==15036==    by 0x10BB86: handle_commands (project2.c:123)
==15036==    by 0x109198: main (project2.c:39)
==15036== 
==15036== Invalid free() / delete / delete[] / realloc()
==15036==    at 0x48369AB: free (vg_replace_malloc.c:530)
==15036==    by 0x109386: free_memory (project2.c:74)
==15036==    by 0x10BAE4: handle_commands (project2.c:102)
==15036==    by 0x109198: main (project2.c:39)
==15036==  Address 0x4d259a0 is 0 bytes inside a block of size 9 free'd
==15036==    at 0x48369AB: free (vg_replace_malloc.c:530)
==15036==    by 0x1099D1: command_r (project2.c:442)
==15036==    by 0x10BABE: handle_commands (project2.c:139)
==15036==    by 0x109198: main (project2.c:39)
==15036==  Block was alloc'd at
==15036==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==15036==    by 0x10AF65: create_connection (project2.c:727)
==15036==    by 0x10B5F3: command_l (project2.c:313)
==15036==    by 0x10BB86: handle_commands (project2.c:123)
==15036==    by 0x109198: main (project2.c:39)
==15036== 
==15036== 
==15036== HEAP SUMMARY:
==15036==     in use at exit: 224 bytes in 1 blocks
==15036==   total heap usage: 595 allocs, 678 frees, 12,946,267 bytes allocated
==15036== 
==15036== LEAK SUMMARY:
==15036==    definitely lost: 224 bytes in 1 blocks
==15036==    indirectly lost: 0 bytes in 0 blocks
==15036==      possibly lost: 0 bytes in 0 blocks
==15036==    still reachable: 0 bytes in 0 blocks
==15036==         suppressed: 0 bytes in 0 blocks
==15036== Rerun with --leak-check=full to see details of leaked memory
==15036== 
==15036== For counts of detected and suppressed errors, rerun with: -v
==15036== ERROR SUMMARY: 582 errors from 11 contexts (suppressed: 0 from 0)

```


Your code will not be reevaluated if you submit before 2023-04-07 16:46:25 @ Lisbon, Portugal. You need to wait 10 minute(s).

