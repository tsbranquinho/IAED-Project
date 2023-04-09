# Projecto 2 - IAED 2022/2023

## Enunciado

O enunciado do projecto está disponível em [enunciado.md](enunciado.md). 

## Data de entrega: 14 de abril de 2023, às 19h59

Informações detalhadas sobre o processo de submissão estão disponíveis em [informacoes.md](informacoes.md).



# Evaluation

2023-04-09T11:12:17

## Test 1: [+ Accepted+].
## Test 2: [+ Accepted+].
## Test 3: [- Command terminated by signal (6: SIGABRT)-].

## Test 4: [- Wrong Answer-].


## Test 5: [- Command terminated by signal (6: SIGABRT)-].

## Test 6: [- Wrong Answer-].


## Test 7: [- Wrong Answer-].


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
==13655== Memcheck, a memory error detector
==13655== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13655== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==13655== Command: ./proj.out
==13655== 
==13655== Invalid read of size 1
==13655==    at 0x4838CC2: __strlen_sse2 (vg_replace_strmem.c:462)
==13655==    by 0x4A21B1E: vfprintf (vfprintf.c:1638)
==13655==    by 0x4A28735: printf (printf.c:33)
==13655==    by 0x10ABC4: print_route_description (project2.c:679)
==13655==    by 0x10ABC4: command_c (project2.c:260)
==13655==    by 0x10B8A5: handle_commands (project2.c:106)
==13655==    by 0x10914E: main (project2.c:37)
==13655==  Address 0x4cd5530 is 0 bytes inside a block of size 10 free'd
==13655==    at 0x48369AB: free (vg_replace_malloc.c:530)
==13655==    by 0x109807: command_r (project2.c:407)
==13655==    by 0x10B7AD: handle_commands (project2.c:135)
==13655==    by 0x10914E: main (project2.c:37)
==13655==  Block was alloc'd at
==13655==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==13655==    by 0x10A5BF: create_route (project2.c:562)
==13655==    by 0x10AB13: command_c (project2.c:267)
==13655==    by 0x10B8A5: handle_commands (project2.c:106)
==13655==    by 0x10914E: main (project2.c:37)
==13655== 
==13655== Invalid read of size 1
==13655==    at 0x4838CD4: __strlen_sse2 (vg_replace_strmem.c:462)
==13655==    by 0x4A21B1E: vfprintf (vfprintf.c:1638)
==13655==    by 0x4A28735: printf (printf.c:33)
==13655==    by 0x10ABC4: print_route_description (project2.c:679)
==13655==    by 0x10ABC4: command_c (project2.c:260)
==13655==    by 0x10B8A5: handle_commands (project2.c:106)
==13655==    by 0x10914E: main (project2.c:37)
==13655==  Address 0x4cd5531 is 1 bytes inside a block of size 10 free'd
==13655==    at 0x48369AB: free (vg_replace_malloc.c:530)
==13655==    by 0x109807: command_r (project2.c:407)
==13655==    by 0x10B7AD: handle_commands (project2.c:135)
==13655==    by 0x10914E: main (project2.c:37)
==13655==  Block was alloc'd at
==13655==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==13655==    by 0x10A5BF: create_route (project2.c:562)
==13655==    by 0x10AB13: command_c (project2.c:267)
==13655==    by 0x10B8A5: handle_commands (project2.c:106)
==13655==    by 0x10914E: main (project2.c:37)
==13655== 
==13655== Invalid read of size 1
==13655==    at 0x483D4E0: mempcpy (vg_replace_strmem.c:1536)
==13655==    by 0x4A4BB24: _IO_new_file_xsputn (fileops.c:1243)
==13655==    by 0x4A4BB24: _IO_file_xsputn@@GLIBC_2.2.5 (fileops.c:1204)
==13655==    by 0x4A2032A: vfprintf (vfprintf.c:1638)
==13655==    by 0x4A28735: printf (printf.c:33)
==13655==    by 0x10ABC4: print_route_description (project2.c:679)
==13655==    by 0x10ABC4: command_c (project2.c:260)
==13655==    by 0x10B8A5: handle_commands (project2.c:106)
==13655==    by 0x10914E: main (project2.c:37)
==13655==  Address 0x4cd5538 is 8 bytes inside a block of size 10 free'd
==13655==    at 0x48369AB: free (vg_replace_malloc.c:530)
==13655==    by 0x109807: command_r (project2.c:407)
==13655==    by 0x10B7AD: handle_commands (project2.c:135)
==13655==    by 0x10914E: main (project2.c:37)
==13655==  Block was alloc'd at
==13655==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==13655==    by 0x10A5BF: create_route (project2.c:562)
==13655==    by 0x10AB13: command_c (project2.c:267)
==13655==    by 0x10B8A5: handle_commands (project2.c:106)
==13655==    by 0x10914E: main (project2.c:37)
==13655== 
==13655== Invalid read of size 1
==13655==    at 0x483D4F1: mempcpy (vg_replace_strmem.c:1536)
==13655==    by 0x4A4BB24: _IO_new_file_xsputn (fileops.c:1243)
==13655==    by 0x4A4BB24: _IO_file_xsputn@@GLIBC_2.2.5 (fileops.c:1204)
==13655==    by 0x4A2032A: vfprintf (vfprintf.c:1638)
==13655==    by 0x4A28735: printf (printf.c:33)
==13655==    by 0x10ABC4: print_route_description (project2.c:679)
==13655==    by 0x10ABC4: command_c (project2.c:260)
==13655==    by 0x10B8A5: handle_commands (project2.c:106)
==13655==    by 0x10914E: main (project2.c:37)
==13655==  Address 0x4cd5536 is 6 bytes inside a block of size 10 free'd
==13655==    at 0x48369AB: free (vg_replace_malloc.c:530)
==13655==    by 0x109807: command_r (project2.c:407)
==13655==    by 0x10B7AD: handle_commands (project2.c:135)
==13655==    by 0x10914E: main (project2.c:37)
==13655==  Block was alloc'd at
==13655==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==13655==    by 0x10A5BF: create_route (project2.c:562)
==13655==    by 0x10AB13: command_c (project2.c:267)
==13655==    by 0x10B8A5: handle_commands (project2.c:106)
==13655==    by 0x10914E: main (project2.c:37)
==13655== 
==13655== Invalid read of size 1
==13655==    at 0x4A608D0: __strcmp_sse2_unaligned (strcmp-sse2-unaligned.S:24)
==13655==    by 0x10977A: command_r (project2.c:386)
==13655==    by 0x10B7AD: handle_commands (project2.c:135)
==13655==    by 0x10914E: main (project2.c:37)
==13655==  Address 0x4cd5530 is 0 bytes inside a block of size 10 free'd
==13655==    at 0x48369AB: free (vg_replace_malloc.c:530)
==13655==    by 0x109807: command_r (project2.c:407)
==13655==    by 0x10B7AD: handle_commands (project2.c:135)
==13655==    by 0x10914E: main (project2.c:37)
==13655==  Block was alloc'd at
==13655==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==13655==    by 0x10A5BF: create_route (project2.c:562)
==13655==    by 0x10AB13: command_c (project2.c:267)
==13655==    by 0x10B8A5: handle_commands (project2.c:106)
==13655==    by 0x10914E: main (project2.c:37)
==13655== 
==13655== Invalid read of size 1
==13655==    at 0x4839D20: strcmp (vg_replace_strmem.c:848)
==13655==    by 0x10977A: command_r (project2.c:386)
==13655==    by 0x10B7AD: handle_commands (project2.c:135)
==13655==    by 0x10914E: main (project2.c:37)
==13655==  Address 0x4cd5531 is 1 bytes inside a block of size 10 free'd
==13655==    at 0x48369AB: free (vg_replace_malloc.c:530)
==13655==    by 0x109807: command_r (project2.c:407)
==13655==    by 0x10B7AD: handle_commands (project2.c:135)
==13655==    by 0x10914E: main (project2.c:37)
==13655==  Block was alloc'd at
==13655==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==13655==    by 0x10A5BF: create_route (project2.c:562)
==13655==    by 0x10AB13: command_c (project2.c:267)
==13655==    by 0x10B8A5: handle_commands (project2.c:106)
==13655==    by 0x10914E: main (project2.c:37)
==13655== 
==13655== Invalid free() / delete / delete[] / realloc()
==13655==    at 0x48369AB: free (vg_replace_malloc.c:530)
==13655==    by 0x109786: command_r (project2.c:397)
==13655==    by 0x10B7AD: handle_commands (project2.c:135)
==13655==    by 0x10914E: main (project2.c:37)
==13655==  Address 0x4cd5530 is 0 bytes inside a block of size 10 free'd
==13655==    at 0x48369AB: free (vg_replace_malloc.c:530)
==13655==    by 0x109807: command_r (project2.c:407)
==13655==    by 0x10B7AD: handle_commands (project2.c:135)
==13655==    by 0x10914E: main (project2.c:37)
==13655==  Block was alloc'd at
==13655==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==13655==    by 0x10A5BF: create_route (project2.c:562)
==13655==    by 0x10AB13: command_c (project2.c:267)
==13655==    by 0x10B8A5: handle_commands (project2.c:106)
==13655==    by 0x10914E: main (project2.c:37)
==13655== 
==13655== Invalid free() / delete / delete[] / realloc()
==13655==    at 0x48369AB: free (vg_replace_malloc.c:530)
==13655==    by 0x109A58: command_r (project2.c:399)
==13655==    by 0x10B7AD: handle_commands (project2.c:135)
==13655==    by 0x10914E: main (project2.c:37)
==13655==  Address 0x4f8b360 is 0 bytes inside a block of size 9 free'd
==13655==    at 0x48369AB: free (vg_replace_malloc.c:530)
==13655==    by 0x1099B0: command_r (project2.c:409)
==13655==    by 0x10B7AD: handle_commands (project2.c:135)
==13655==    by 0x10914E: main (project2.c:37)
==13655==  Block was alloc'd at
==13655==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==13655==    by 0x10B65A: add_route_information (project2.c:727)
==13655==    by 0x10B65A: command_l (project2.c:319)
==13655==    by 0x10B846: handle_commands (project2.c:121)
==13655==    by 0x10914E: main (project2.c:37)
==13655== 
==13655== Invalid free() / delete / delete[] / realloc()
==13655==    at 0x48369AB: free (vg_replace_malloc.c:530)
==13655==    by 0x109A6A: command_r (project2.c:400)
==13655==    by 0x10B7AD: handle_commands (project2.c:135)
==13655==    by 0x10914E: main (project2.c:37)
==13655==  Address 0x4f8ca30 is 0 bytes inside a block of size 9 free'd
==13655==    at 0x48369AB: free (vg_replace_malloc.c:530)
==13655==    by 0x1099CD: command_r (project2.c:410)
==13655==    by 0x10B7AD: handle_commands (project2.c:135)
==13655==    by 0x10914E: main (project2.c:37)
==13655==  Block was alloc'd at
==13655==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==13655==    by 0x10B5FE: change_route_information (project2.c:753)
==13655==    by 0x10B5FE: command_l (project2.c:324)
==13655==    by 0x10B846: handle_commands (project2.c:121)
==13655==    by 0x10914E: main (project2.c:37)
==13655== 
==13655== Invalid read of size 8
==13655==    at 0x109A95: free_linked_list (project2.c:46)
==13655==    by 0x109A95: command_r (project2.c:401)
==13655==    by 0x10B7AD: handle_commands (project2.c:135)
==13655==    by 0x10914E: main (project2.c:37)
==13655==  Address 0x4f8b2e0 is 0 bytes inside a block of size 56 free'd
==13655==    at 0x48369AB: free (vg_replace_malloc.c:530)
==13655==    by 0x1099FC: free_linked_list (project2.c:52)
==13655==    by 0x1099FC: command_r (project2.c:411)
==13655==    by 0x10B7AD: handle_commands (project2.c:135)
==13655==    by 0x10914E: main (project2.c:37)
==13655==  Block was alloc'd at
==13655==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==13655==    by 0x10B641: add_route_information (project2.c:725)
==13655==    by 0x10B641: command_l (project2.c:319)
==13655==    by 0x10B846: handle_commands (project2.c:121)
==13655==    by 0x10914E: main (project2.c:37)
==13655== 
==13655== Invalid read of size 8
==13655==    at 0x109A99: free_linked_list (project2.c:45)
==13655==    by 0x109A99: command_r (project2.c:401)
==13655==    by 0x10B7AD: handle_commands (project2.c:135)
==13655==    by 0x10914E: main (project2.c:37)
==13655==  Address 0x4f8b308 is 40 bytes inside a block of size 56 free'd
==13655==    at 0x48369AB: free (vg_replace_malloc.c:530)
==13655==    by 0x1099FC: free_linked_list (project2.c:52)
==13655==    by 0x1099FC: command_r (project2.c:411)
==13655==    by 0x10B7AD: handle_commands (project2.c:135)
==13655==    by 0x10914E: main (project2.c:37)
==13655==  Block was alloc'd at
==13655==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==13655==    by 0x10B641: add_route_information (project2.c:725)
==13655==    by 0x10B641: command_l (project2.c:319)
==13655==    by 0x10B846: handle_commands (project2.c:121)
==13655==    by 0x10914E: main (project2.c:37)
==13655== 
==13655== Invalid free() / delete / delete[] / realloc()
==13655==    at 0x48369AB: free (vg_replace_malloc.c:530)
==13655==    by 0x109AA7: free_linked_list (project2.c:47)
==13655==    by 0x109AA7: command_r (project2.c:401)
==13655==    by 0x10B7AD: handle_commands (project2.c:135)
==13655==    by 0x10914E: main (project2.c:37)
==13655==  Address 0x4f8b1f0 is 0 bytes inside a block of size 10 free'd
==13655==    at 0x48369AB: free (vg_replace_malloc.c:530)
==13655==    by 0x109A15: free_linked_list (project2.c:47)
==13655==    by 0x109A15: command_r (project2.c:411)
==13655==    by 0x10B7AD: handle_commands (project2.c:135)
==13655==    by 0x10914E: main (project2.c:37)
==13655==  Block was alloc'd at
==13655==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==13655==    by 0x10AD0F: create_connection (project2.c:696)
==13655==    by 0x10B302: command_l (project2.c:313)
==13655==    by 0x10B846: handle_commands (project2.c:121)
==13655==    by 0x10914E: main (project2.c:37)
==13655== 
==13655== Invalid read of size 8
==13655==    at 0x109AA8: free_linked_list (project2.c:48)
==13655==    by 0x109AA8: command_r (project2.c:401)
==13655==    by 0x10B7AD: handle_commands (project2.c:135)
==13655==    by 0x10914E: main (project2.c:37)
==13655==  Address 0x4f8b2e8 is 8 bytes inside a block of size 56 free'd
==13655==    at 0x48369AB: free (vg_replace_malloc.c:530)
==13655==    by 0x1099FC: free_linked_list (project2.c:52)
==13655==    by 0x1099FC: command_r (project2.c:411)
==13655==    by 0x10B7AD: handle_commands (project2.c:135)
==13655==    by 0x10914E: main (project2.c:37)
==13655==  Block was alloc'd at
==13655==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==13655==    by 0x10B641: add_route_information (project2.c:725)
==13655==    by 0x10B641: command_l (project2.c:319)
==13655==    by 0x10B846: handle_commands (project2.c:121)
==13655==    by 0x10914E: main (project2.c:37)
==13655== 
==13655== Invalid free() / delete / delete[] / realloc()
==13655==    at 0x48369AB: free (vg_replace_malloc.c:530)
==13655==    by 0x109AB6: free_linked_list (project2.c:49)
==13655==    by 0x109AB6: command_r (project2.c:401)
==13655==    by 0x10B7AD: handle_commands (project2.c:135)
==13655==    by 0x10914E: main (project2.c:37)
==13655==  Address 0x4f8b240 is 0 bytes inside a block of size 9 free'd
==13655==    at 0x48369AB: free (vg_replace_malloc.c:530)
==13655==    by 0x109A23: free_linked_list (project2.c:49)
==13655==    by 0x109A23: command_r (project2.c:411)
==13655==    by 0x10B7AD: handle_commands (project2.c:135)
==13655==    by 0x10914E: main (project2.c:37)
==13655==  Block was alloc'd at
==13655==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==13655==    by 0x10AD33: create_connection (project2.c:700)
==13655==    by 0x10B302: command_l (project2.c:313)
==13655==    by 0x10B846: handle_commands (project2.c:121)
==13655==    by 0x10914E: main (project2.c:37)
==13655== 
==13655== Invalid read of size 8
==13655==    at 0x109AB7: free_linked_list (project2.c:50)
==13655==    by 0x109AB7: command_r (project2.c:401)
==13655==    by 0x10B7AD: handle_commands (project2.c:135)
==13655==    by 0x10914E: main (project2.c:37)
==13655==  Address 0x4f8b2f0 is 16 bytes inside a block of size 56 free'd
==13655==    at 0x48369AB: free (vg_replace_malloc.c:530)
==13655==    by 0x1099FC: free_linked_list (project2.c:52)
==13655==    by 0x1099FC: command_r (project2.c:411)
==13655==    by 0x10B7AD: handle_commands (project2.c:135)
==13655==    by 0x10914E: main (project2.c:37)
==13655==  Block was alloc'd at
==13655==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==13655==    by 0x10B641: add_route_information (project2.c:725)
==13655==    by 0x10B641: command_l (project2.c:319)
==13655==    by 0x10B846: handle_commands (project2.c:121)
==13655==    by 0x10914E: main (project2.c:37)
==13655== 
==13655== Invalid free() / delete / delete[] / realloc()
==13655==    at 0x48369AB: free (vg_replace_malloc.c:530)
==13655==    by 0x109A84: free_linked_list (project2.c:51)
==13655==    by 0x109A84: command_r (project2.c:401)
==13655==    by 0x10B7AD: handle_commands (project2.c:135)
==13655==    by 0x10914E: main (project2.c:37)
==13655==  Address 0x4f8b290 is 0 bytes inside a block of size 9 free'd
==13655==    at 0x48369AB: free (vg_replace_malloc.c:530)
==13655==    by 0x1099F4: free_linked_list (project2.c:51)
==13655==    by 0x1099F4: command_r (project2.c:411)
==13655==    by 0x10B7AD: handle_commands (project2.c:135)
==13655==    by 0x10914E: main (project2.c:37)
==13655==  Block was alloc'd at
==13655==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==13655==    by 0x10AD50: create_connection (project2.c:703)
==13655==    by 0x10B302: command_l (project2.c:313)
==13655==    by 0x10B846: handle_commands (project2.c:121)
==13655==    by 0x10914E: main (project2.c:37)
==13655== 
==13655== Invalid free() / delete / delete[] / realloc()
==13655==    at 0x48369AB: free (vg_replace_malloc.c:530)
==13655==    by 0x109A8C: free_linked_list (project2.c:52)
==13655==    by 0x109A8C: command_r (project2.c:401)
==13655==    by 0x10B7AD: handle_commands (project2.c:135)
==13655==    by 0x10914E: main (project2.c:37)
==13655==  Address 0x4f8b2e0 is 0 bytes inside a block of size 56 free'd
==13655==    at 0x48369AB: free (vg_replace_malloc.c:530)
==13655==    by 0x1099FC: free_linked_list (project2.c:52)
==13655==    by 0x1099FC: command_r (project2.c:411)
==13655==    by 0x10B7AD: handle_commands (project2.c:135)
==13655==    by 0x10914E: main (project2.c:37)
==13655==  Block was alloc'd at
==13655==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==13655==    by 0x10B641: add_route_information (project2.c:725)
==13655==    by 0x10B641: command_l (project2.c:319)
==13655==    by 0x10B846: handle_commands (project2.c:121)
==13655==    by 0x10914E: main (project2.c:37)
==13655== 
==13655== Invalid free() / delete / delete[] / realloc()
==13655==    at 0x48369AB: free (vg_replace_malloc.c:530)
==13655==    by 0x109807: command_r (project2.c:407)
==13655==    by 0x10B7AD: handle_commands (project2.c:135)
==13655==    by 0x10914E: main (project2.c:37)
==13655==  Address 0x4cd5530 is 0 bytes inside a block of size 10 free'd
==13655==    at 0x48369AB: free (vg_replace_malloc.c:530)
==13655==    by 0x109807: command_r (project2.c:407)
==13655==    by 0x10B7AD: handle_commands (project2.c:135)
==13655==    by 0x10914E: main (project2.c:37)
==13655==  Block was alloc'd at
==13655==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==13655==    by 0x10A5BF: create_route (project2.c:562)
==13655==    by 0x10AB13: command_c (project2.c:267)
==13655==    by 0x10B8A5: handle_commands (project2.c:106)
==13655==    by 0x10914E: main (project2.c:37)
==13655== 
==13655== Invalid free() / delete / delete[] / realloc()
==13655==    at 0x48369AB: free (vg_replace_malloc.c:530)
==13655==    by 0x1099B0: command_r (project2.c:409)
==13655==    by 0x10B7AD: handle_commands (project2.c:135)
==13655==    by 0x10914E: main (project2.c:37)
==13655==  Address 0x4f8b360 is 0 bytes inside a block of size 9 free'd
==13655==    at 0x48369AB: free (vg_replace_malloc.c:530)
==13655==    by 0x1099B0: command_r (project2.c:409)
==13655==    by 0x10B7AD: handle_commands (project2.c:135)
==13655==    by 0x10914E: main (project2.c:37)
==13655==  Block was alloc'd at
==13655==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==13655==    by 0x10B65A: add_route_information (project2.c:727)
==13655==    by 0x10B65A: command_l (project2.c:319)
==13655==    by 0x10B846: handle_commands (project2.c:121)
==13655==    by 0x10914E: main (project2.c:37)
==13655== 
==13655== Invalid free() / delete / delete[] / realloc()
==13655==    at 0x48369AB: free (vg_replace_malloc.c:530)
==13655==    by 0x1099CD: command_r (project2.c:410)
==13655==    by 0x10B7AD: handle_commands (project2.c:135)
==13655==    by 0x10914E: main (project2.c:37)
==13655==  Address 0x4f8ca30 is 0 bytes inside a block of size 9 free'd
==13655==    at 0x48369AB: free (vg_replace_malloc.c:530)
==13655==    by 0x1099CD: command_r (project2.c:410)
==13655==    by 0x10B7AD: handle_commands (project2.c:135)
==13655==    by 0x10914E: main (project2.c:37)
==13655==  Block was alloc'd at
==13655==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==13655==    by 0x10B5FE: change_route_information (project2.c:753)
==13655==    by 0x10B5FE: command_l (project2.c:324)
==13655==    by 0x10B846: handle_commands (project2.c:121)
==13655==    by 0x10914E: main (project2.c:37)
==13655== 
==13655== Invalid read of size 8
==13655==    at 0x109A05: free_linked_list (project2.c:46)
==13655==    by 0x109A05: command_r (project2.c:411)
==13655==    by 0x10B7AD: handle_commands (project2.c:135)
==13655==    by 0x10914E: main (project2.c:37)
==13655==  Address 0x4f8b2e0 is 0 bytes inside a block of size 56 free'd
==13655==    at 0x48369AB: free (vg_replace_malloc.c:530)
==13655==    by 0x1099FC: free_linked_list (project2.c:52)
==13655==    by 0x1099FC: command_r (project2.c:411)
==13655==    by 0x10B7AD: handle_commands (project2.c:135)
==13655==    by 0x10914E: main (project2.c:37)
==13655==  Block was alloc'd at
==13655==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==13655==    by 0x10B641: add_route_information (project2.c:725)
==13655==    by 0x10B641: command_l (project2.c:319)
==13655==    by 0x10B846: handle_commands (project2.c:121)
==13655==    by 0x10914E: main (project2.c:37)
==13655== 
==13655== Invalid read of size 8
==13655==    at 0x109A08: free_linked_list (project2.c:45)
==13655==    by 0x109A08: command_r (project2.c:411)
==13655==    by 0x10B7AD: handle_commands (project2.c:135)
==13655==    by 0x10914E: main (project2.c:37)
==13655==  Address 0x4f8b308 is 40 bytes inside a block of size 56 free'd
==13655==    at 0x48369AB: free (vg_replace_malloc.c:530)
==13655==    by 0x1099FC: free_linked_list (project2.c:52)
==13655==    by 0x1099FC: command_r (project2.c:411)
==13655==    by 0x10B7AD: handle_commands (project2.c:135)
==13655==    by 0x10914E: main (project2.c:37)
==13655==  Block was alloc'd at
==13655==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==13655==    by 0x10B641: add_route_information (project2.c:725)
==13655==    by 0x10B641: command_l (project2.c:319)
==13655==    by 0x10B846: handle_commands (project2.c:121)
==13655==    by 0x10914E: main (project2.c:37)
==13655== 
==13655== Invalid free() / delete / delete[] / realloc()
==13655==    at 0x48369AB: free (vg_replace_malloc.c:530)
==13655==    by 0x109A15: free_linked_list (project2.c:47)
==13655==    by 0x109A15: command_r (project2.c:411)
==13655==    by 0x10B7AD: handle_commands (project2.c:135)
==13655==    by 0x10914E: main (project2.c:37)
==13655==  Address 0x4f8b1f0 is 0 bytes inside a block of size 10 free'd
==13655==    at 0x48369AB: free (vg_replace_malloc.c:530)
==13655==    by 0x109A15: free_linked_list (project2.c:47)
==13655==    by 0x109A15: command_r (project2.c:411)
==13655==    by 0x10B7AD: handle_commands (project2.c:135)
==13655==    by 0x10914E: main (project2.c:37)
==13655==  Block was alloc'd at
==13655==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==13655==    by 0x10AD0F: create_connection (project2.c:696)
==13655==    by 0x10B302: command_l (project2.c:313)
==13655==    by 0x10B846: handle_commands (project2.c:121)
==13655==    by 0x10914E: main (project2.c:37)
==13655== 
==13655== Invalid read of size 8
==13655==    at 0x109A16: free_linked_list (project2.c:48)
==13655==    by 0x109A16: command_r (project2.c:411)
==13655==    by 0x10B7AD: handle_commands (project2.c:135)
==13655==    by 0x10914E: main (project2.c:37)
==13655==  Address 0x4f8b2e8 is 8 bytes inside a block of size 56 free'd
==13655==    at 0x48369AB: free (vg_replace_malloc.c:530)
==13655==    by 0x1099FC: free_linked_list (project2.c:52)
==13655==    by 0x1099FC: command_r (project2.c:411)
==13655==    by 0x10B7AD: handle_commands (project2.c:135)
==13655==    by 0x10914E: main (project2.c:37)
==13655==  Block was alloc'd at
==13655==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==13655==    by 0x10B641: add_route_information (project2.c:725)
==13655==    by 0x10B641: command_l (project2.c:319)
==13655==    by 0x10B846: handle_commands (project2.c:121)
==13655==    by 0x10914E: main (project2.c:37)
==13655== 
==13655== Invalid free() / delete / delete[] / realloc()
==13655==    at 0x48369AB: free (vg_replace_malloc.c:530)
==13655==    by 0x109A23: free_linked_list (project2.c:49)
==13655==    by 0x109A23: command_r (project2.c:411)
==13655==    by 0x10B7AD: handle_commands (project2.c:135)
==13655==    by 0x10914E: main (project2.c:37)
==13655==  Address 0x4f8b240 is 0 bytes inside a block of size 9 free'd
==13655==    at 0x48369AB: free (vg_replace_malloc.c:530)
==13655==    by 0x109A23: free_linked_list (project2.c:49)
==13655==    by 0x109A23: command_r (project2.c:411)
==13655==    by 0x10B7AD: handle_commands (project2.c:135)
==13655==    by 0x10914E: main (project2.c:37)
==13655==  Block was alloc'd at
==13655==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==13655==    by 0x10AD33: create_connection (project2.c:700)
==13655==    by 0x10B302: command_l (project2.c:313)
==13655==    by 0x10B846: handle_commands (project2.c:121)
==13655==    by 0x10914E: main (project2.c:37)
==13655== 
==13655== Invalid read of size 8
==13655==    at 0x109A24: free_linked_list (project2.c:50)
==13655==    by 0x109A24: command_r (project2.c:411)
==13655==    by 0x10B7AD: handle_commands (project2.c:135)
==13655==    by 0x10914E: main (project2.c:37)
==13655==  Address 0x4f8b2f0 is 16 bytes inside a block of size 56 free'd
==13655==    at 0x48369AB: free (vg_replace_malloc.c:530)
==13655==    by 0x1099FC: free_linked_list (project2.c:52)
==13655==    by 0x1099FC: command_r (project2.c:411)
==13655==    by 0x10B7AD: handle_commands (project2.c:135)
==13655==    by 0x10914E: main (project2.c:37)
==13655==  Block was alloc'd at
==13655==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==13655==    by 0x10B641: add_route_information (project2.c:725)
==13655==    by 0x10B641: command_l (project2.c:319)
==13655==    by 0x10B846: handle_commands (project2.c:121)
==13655==    by 0x10914E: main (project2.c:37)
==13655== 
==13655== Invalid free() / delete / delete[] / realloc()
==13655==    at 0x48369AB: free (vg_replace_malloc.c:530)
==13655==    by 0x1099F4: free_linked_list (project2.c:51)
==13655==    by 0x1099F4: command_r (project2.c:411)
==13655==    by 0x10B7AD: handle_commands (project2.c:135)
==13655==    by 0x10914E: main (project2.c:37)
==13655==  Address 0x4f8b290 is 0 bytes inside a block of size 9 free'd
==13655==    at 0x48369AB: free (vg_replace_malloc.c:530)
==13655==    by 0x1099F4: free_linked_list (project2.c:51)
==13655==    by 0x1099F4: command_r (project2.c:411)
==13655==    by 0x10B7AD: handle_commands (project2.c:135)
==13655==    by 0x10914E: main (project2.c:37)
==13655==  Block was alloc'd at
==13655==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==13655==    by 0x10AD50: create_connection (project2.c:703)
==13655==    by 0x10B302: command_l (project2.c:313)
==13655==    by 0x10B846: handle_commands (project2.c:121)
==13655==    by 0x10914E: main (project2.c:37)
==13655== 
==13655== Invalid free() / delete / delete[] / realloc()
==13655==    at 0x48369AB: free (vg_replace_malloc.c:530)
==13655==    by 0x1099FC: free_linked_list (project2.c:52)
==13655==    by 0x1099FC: command_r (project2.c:411)
==13655==    by 0x10B7AD: handle_commands (project2.c:135)
==13655==    by 0x10914E: main (project2.c:37)
==13655==  Address 0x4f8b2e0 is 0 bytes inside a block of size 56 free'd
==13655==    at 0x48369AB: free (vg_replace_malloc.c:530)
==13655==    by 0x1099FC: free_linked_list (project2.c:52)
==13655==    by 0x1099FC: command_r (project2.c:411)
==13655==    by 0x10B7AD: handle_commands (project2.c:135)
==13655==    by 0x10914E: main (project2.c:37)
==13655==  Block was alloc'd at
==13655==    at 0x483577F: malloc (vg_replace_malloc.c:299)
==13655==    by 0x10B641: add_route_information (project2.c:725)
==13655==    by 0x10B641: command_l (project2.c:319)
==13655==    by 0x10B846: handle_commands (project2.c:121)
==13655==    by 0x10914E: main (project2.c:37)
==13655== 
==13655== 
==13655== HEAP SUMMARY:
==13655==     in use at exit: 0 bytes in 0 blocks
==13655==   total heap usage: 592 allocs, 716 frees, 12,925,507 bytes allocated
==13655== 
==13655== All heap blocks were freed -- no leaks are possible
==13655== 
==13655== For counts of detected and suppressed errors, rerun with: -v
==13655== ERROR SUMMARY: 362 errors from 28 contexts (suppressed: 0 from 0)

```


Your code will not be reevaluated if you submit before 2023-04-09 11:22:17 @ Lisbon, Portugal. You need to wait 10 minute(s).

