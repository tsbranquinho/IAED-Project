# Projecto 2 - IAED 2022/2023

## Enunciado

O enunciado do projecto está disponível em [enunciado.md](enunciado.md). 

## Data de entrega: 14 de abril de 2023, às 19h59

Informações detalhadas sobre o processo de submissão estão disponíveis em [informacoes.md](informacoes.md).



# Evaluation

2023-03-30T19:18:56

## Test 1: [+ Accepted+].
## Test 2: [- Wrong Answer-].


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


## Test 14: [- Wrong Answer-].


## Test 15: [- Wrong Answer-].


## Test 16: [- Wrong Answer-].


## Test 17: [- Wrong Answer-].


## Test 18: [- Wrong Answer-].


## Test 19: [- Wrong Answer-].


## Test 20: [- Wrong Answer-].


## Test 21: [- Wrong Answer-].


## Test 22: [+ Accepted+].
## Test 23: [- Wrong Answer-].


## Test 24: [- Wrong Answer-].


## Test 25: [- Wrong Answer-].


## Test 26: [- Wrong Answer-].


## Test 27: [- Wrong Answer-].


## Test 28: [- Time Limit Exceeded-].

## Test 29: [+ Accepted+].
## Test 30: [- Time Limit Exceeded-].

## Test 31: [- Time Limit Exceeded-].

## Test 32: [- Wrong Answer-].




## Number of passed tests: 3/32


## Valgrind Output:


```
==11972== Memcheck, a memory error detector
==11972== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11972== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==11972== Command: ./proj.out
==11972== 
==11972== Warning: client switching stacks?  SP change: 0x1fff000b48 --> 0x1ffeada4c0
==11972==          to suppress, use: --max-stackframe=5400200 or greater
==11972== Invalid write of size 8
==11972==    at 0x1090E7: getchar (stdio.h:49)
==11972==    by 0x1090E7: main (project2.c:31)
==11972==  Address 0x1ffeada4b8 is on thread 1's stack
==11972==  in frame #0, created by main (stdio.h:23)
==11972== 
==11972== Invalid read of size 8
==11972==    at 0x4A4D90C: _IO_default_uflow (genops.c:366)
==11972==    by 0x1090EB: getchar (stdio.h:49)
==11972==    by 0x1090EB: main (project2.c:31)
==11972==  Address 0x1ffeada4b8 is on thread 1's stack
==11972==  in frame #0, created by _IO_default_uflow (genops.c:361)
==11972== 
==11972== Invalid write of size 1
==11972==    at 0x483A114: memcpy@GLIBC_2.2.5 (vg_replace_strmem.c:1033)
==11972==    by 0x4A410F3: _IO_getline_info (iogetline.c:96)
==11972==    by 0x4A4011A: fgets (iofgets.c:53)
==11972==    by 0x109109: main (project2.c:32)
==11972==  Address 0x1ffeada4c0 is on thread 1's stack
==11972==  in frame #3, created by main (project2.c:23)
==11972== 
==11972== Invalid write of size 1
==11972==    at 0x4A40192: fgets (iofgets.c:60)
==11972==    by 0x109109: main (project2.c:32)
==11972==  Address 0x1ffeada4ce is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 1
==11972==    at 0x4838CC2: __strlen_sse2 (vg_replace_strmem.c:462)
==11972==    by 0x1092C0: parser (project2.c:76)
==11972==    by 0x109F4B: command_p (project2.c:122)
==11972==    by 0x10914A: handle_command (project2.c:57)
==11972==    by 0x10914A: main (project2.c:35)
==11972==  Address 0x1ffeada4c0 is on thread 1's stack
==11972==  in frame #3, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 1
==11972==    at 0x4838CD4: __strlen_sse2 (vg_replace_strmem.c:462)
==11972==    by 0x1092C0: parser (project2.c:76)
==11972==    by 0x109F4B: command_p (project2.c:122)
==11972==    by 0x10914A: handle_command (project2.c:57)
==11972==    by 0x10914A: main (project2.c:35)
==11972==  Address 0x1ffeada4c1 is on thread 1's stack
==11972==  in frame #3, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 1
==11972==    at 0x1092C4: parser (project2.c:79)
==11972==    by 0x109F4B: command_p (project2.c:122)
==11972==    by 0x10914A: handle_command (project2.c:57)
==11972==    by 0x10914A: main (project2.c:35)
==11972==  Address 0x1ffeada4c0 is on thread 1's stack
==11972==  in frame #2, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 1
==11972==    at 0x10932B: parser (project2.c:83)
==11972==    by 0x109F4B: command_p (project2.c:122)
==11972==    by 0x10914A: handle_command (project2.c:57)
==11972==    by 0x10914A: main (project2.c:35)
==11972==  Address 0x1ffeada4c1 is on thread 1's stack
==11972==  in frame #2, created by main (project2.c:23)
==11972== 
==11972== Invalid write of size 1
==11972==    at 0x4838DC8: strcpy (vg_replace_strmem.c:512)
==11972==    by 0x10A10B: create_stop (project2.c:300)
==11972==    by 0x10A10B: command_p (project2.c:138)
==11972==    by 0x10914A: handle_command (project2.c:57)
==11972==    by 0x10914A: main (project2.c:35)
==11972==  Address 0x1ffeae41c0 is on thread 1's stack
==11972==  in frame #2, created by main (project2.c:23)
==11972== 
==11972== Invalid write of size 1
==11972==    at 0x4838DD7: strcpy (vg_replace_strmem.c:512)
==11972==    by 0x10A10B: create_stop (project2.c:300)
==11972==    by 0x10A10B: command_p (project2.c:138)
==11972==    by 0x10914A: handle_command (project2.c:57)
==11972==    by 0x10914A: main (project2.c:35)
==11972==  Address 0x1ffeae41c8 is on thread 1's stack
==11972==  in frame #2, created by main (project2.c:23)
==11972== 
==11972== Invalid write of size 8
==11972==    at 0x10A136: create_stop (project2.c:301)
==11972==    by 0x10A136: command_p (project2.c:138)
==11972==    by 0x10914A: handle_command (project2.c:57)
==11972==    by 0x10914A: main (project2.c:35)
==11972==  Address 0x1ffeae41f8 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid write of size 8
==11972==    at 0x10A159: create_stop (project2.c:302)
==11972==    by 0x10A159: command_p (project2.c:138)
==11972==    by 0x10914A: handle_command (project2.c:57)
==11972==    by 0x10914A: main (project2.c:35)
==11972==  Address 0x1ffeae4200 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid write of size 4
==11972==    at 0x10A165: create_stop (project2.c:303)
==11972==    by 0x10A165: command_p (project2.c:138)
==11972==    by 0x10914A: handle_command (project2.c:57)
==11972==    by 0x10914A: main (project2.c:35)
==11972==  Address 0x1ffeae4208 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid write of size 8
==11972==    at 0x483A080: memcpy@GLIBC_2.2.5 (vg_replace_strmem.c:1033)
==11972==    by 0x4A410F3: _IO_getline_info (iogetline.c:96)
==11972==    by 0x4A4011A: fgets (iofgets.c:53)
==11972==    by 0x109109: main (project2.c:32)
==11972==  Address 0x1ffeada4c0 is on thread 1's stack
==11972==  in frame #3, created by main (project2.c:23)
==11972== 
==11972== Invalid write of size 2
==11972==    at 0x483A0DB: memcpy@GLIBC_2.2.5 (vg_replace_strmem.c:1033)
==11972==    by 0x4A410F3: _IO_getline_info (iogetline.c:96)
==11972==    by 0x4A4011A: fgets (iofgets.c:53)
==11972==    by 0x109109: main (project2.c:32)
==11972==  Address 0x1ffeada4c8 is on thread 1's stack
==11972==  in frame #3, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 1
==11972==    at 0x4A608D0: __strcmp_sse2_unaligned (strcmp-sse2-unaligned.S:24)
==11972==    by 0x10A0DB: check_stop (project2.c:334)
==11972==    by 0x10A0DB: command_p (project2.c:136)
==11972==    by 0x10914A: handle_command (project2.c:57)
==11972==    by 0x10914A: main (project2.c:35)
==11972==  Address 0x1ffeae41c0 is on thread 1's stack
==11972==  in frame #2, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 1
==11972==    at 0x4839D20: strcmp (vg_replace_strmem.c:848)
==11972==    by 0x10A0DB: check_stop (project2.c:334)
==11972==    by 0x10A0DB: command_p (project2.c:136)
==11972==    by 0x10914A: handle_command (project2.c:57)
==11972==    by 0x10914A: main (project2.c:35)
==11972==  Address 0x1ffeae41c1 is on thread 1's stack
==11972==  in frame #2, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 1
==11972==    at 0x4838CC2: __strlen_sse2 (vg_replace_strmem.c:462)
==11972==    by 0x1092C0: parser (project2.c:76)
==11972==    by 0x109400: command_c (project2.c:155)
==11972==    by 0x1091A2: handle_command (project2.c:54)
==11972==    by 0x1091A2: main (project2.c:35)
==11972==  Address 0x1ffeada4c0 is on thread 1's stack
==11972==  in frame #3, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 1
==11972==    at 0x4838CD4: __strlen_sse2 (vg_replace_strmem.c:462)
==11972==    by 0x1092C0: parser (project2.c:76)
==11972==    by 0x109400: command_c (project2.c:155)
==11972==    by 0x1091A2: handle_command (project2.c:54)
==11972==    by 0x1091A2: main (project2.c:35)
==11972==  Address 0x1ffeada4c1 is on thread 1's stack
==11972==  in frame #3, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 1
==11972==    at 0x1092C4: parser (project2.c:79)
==11972==    by 0x109400: command_c (project2.c:155)
==11972==    by 0x1091A2: handle_command (project2.c:54)
==11972==    by 0x1091A2: main (project2.c:35)
==11972==  Address 0x1ffeada4c0 is on thread 1's stack
==11972==  in frame #2, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 1
==11972==    at 0x10932B: parser (project2.c:83)
==11972==    by 0x109400: command_c (project2.c:155)
==11972==    by 0x1091A2: handle_command (project2.c:54)
==11972==    by 0x1091A2: main (project2.c:35)
==11972==  Address 0x1ffeada4c1 is on thread 1's stack
==11972==  in frame #2, created by main (project2.c:23)
==11972== 
==11972== Invalid write of size 1
==11972==    at 0x4838DC8: strcpy (vg_replace_strmem.c:512)
==11972==    by 0x1097BA: create_route (project2.c:352)
==11972==    by 0x1097BA: command_c (project2.c:167)
==11972==    by 0x1091A2: handle_command (project2.c:54)
==11972==    by 0x1091A2: main (project2.c:35)
==11972==  Address 0x1ffeadc4c0 is on thread 1's stack
==11972==  in frame #2, created by main (project2.c:23)
==11972== 
==11972== Invalid write of size 1
==11972==    at 0x4838DD7: strcpy (vg_replace_strmem.c:512)
==11972==    by 0x1097BA: create_route (project2.c:352)
==11972==    by 0x1097BA: command_c (project2.c:167)
==11972==    by 0x1091A2: handle_command (project2.c:54)
==11972==    by 0x1091A2: main (project2.c:35)
==11972==  Address 0x1ffeadc4c9 is on thread 1's stack
==11972==  in frame #2, created by main (project2.c:23)
==11972== 
==11972== Invalid write of size 4
==11972==    at 0x1097DD: create_route (project2.c:353)
==11972==    by 0x1097DD: command_c (project2.c:167)
==11972==    by 0x1091A2: handle_command (project2.c:54)
==11972==    by 0x1091A2: main (project2.c:35)
==11972==  Address 0x1ffeadc558 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid write of size 8
==11972==    at 0x1097E7: create_route (project2.c:354)
==11972==    by 0x1097E7: command_c (project2.c:167)
==11972==    by 0x1091A2: handle_command (project2.c:54)
==11972==    by 0x1091A2: main (project2.c:35)
==11972==  Address 0x1ffeadc548 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid write of size 4
==11972==    at 0x1097EE: create_route (project2.c:356)
==11972==    by 0x1097EE: command_c (project2.c:167)
==11972==    by 0x1091A2: handle_command (project2.c:54)
==11972==    by 0x1091A2: main (project2.c:35)
==11972==  Address 0x1ffeadc53c is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 1
==11972==    at 0x4A608D0: __strcmp_sse2_unaligned (strcmp-sse2-unaligned.S:24)
==11972==    by 0x109476: get_stops_route (project2.c:373)
==11972==    by 0x109476: command_c (project2.c:165)
==11972==    by 0x1091A2: handle_command (project2.c:54)
==11972==    by 0x1091A2: main (project2.c:35)
==11972==  Address 0x1ffeadc4c0 is on thread 1's stack
==11972==  in frame #2, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 1
==11972==    at 0x4839D20: strcmp (vg_replace_strmem.c:848)
==11972==    by 0x109476: get_stops_route (project2.c:373)
==11972==    by 0x109476: command_c (project2.c:165)
==11972==    by 0x1091A2: handle_command (project2.c:54)
==11972==    by 0x1091A2: main (project2.c:35)
==11972==  Address 0x1ffeadc4c1 is on thread 1's stack
==11972==  in frame #2, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 1
==11972==    at 0x4838CC2: __strlen_sse2 (vg_replace_strmem.c:462)
==11972==    by 0x1092C0: parser (project2.c:76)
==11972==    by 0x10AB8B: command_l (project2.c:196)
==11972==    by 0x10916A: handle_command (project2.c:60)
==11972==    by 0x10916A: main (project2.c:35)
==11972==  Address 0x1ffeada4c0 is on thread 1's stack
==11972==  in frame #3, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 1
==11972==    at 0x4838CD4: __strlen_sse2 (vg_replace_strmem.c:462)
==11972==    by 0x1092C0: parser (project2.c:76)
==11972==    by 0x10AB8B: command_l (project2.c:196)
==11972==    by 0x10916A: handle_command (project2.c:60)
==11972==    by 0x10916A: main (project2.c:35)
==11972==  Address 0x1ffeada4c1 is on thread 1's stack
==11972==  in frame #3, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 1
==11972==    at 0x1092C4: parser (project2.c:79)
==11972==    by 0x10AB8B: command_l (project2.c:196)
==11972==    by 0x10916A: handle_command (project2.c:60)
==11972==    by 0x10916A: main (project2.c:35)
==11972==  Address 0x1ffeada4c0 is on thread 1's stack
==11972==  in frame #2, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 1
==11972==    at 0x10932B: parser (project2.c:83)
==11972==    by 0x10AB8B: command_l (project2.c:196)
==11972==    by 0x10916A: handle_command (project2.c:60)
==11972==    by 0x10916A: main (project2.c:35)
==11972==  Address 0x1ffeada4c1 is on thread 1's stack
==11972==  in frame #2, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 1
==11972==    at 0x4839D03: strcmp (vg_replace_strmem.c:848)
==11972==    by 0x10A9B5: find_route (project2.c:589)
==11972==    by 0x10A9B5: is_valid_connection (project2.c:555)
==11972==    by 0x10AB99: command_l (project2.c:197)
==11972==    by 0x10916A: handle_command (project2.c:60)
==11972==    by 0x10916A: main (project2.c:35)
==11972==  Address 0x1ffeadc4c0 is on thread 1's stack
==11972==  in frame #3, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 1
==11972==    at 0x4839D24: strcmp (vg_replace_strmem.c:848)
==11972==    by 0x10A9B5: find_route (project2.c:589)
==11972==    by 0x10A9B5: is_valid_connection (project2.c:555)
==11972==    by 0x10AB99: command_l (project2.c:197)
==11972==    by 0x10916A: handle_command (project2.c:60)
==11972==    by 0x10916A: main (project2.c:35)
==11972==  Address 0x1ffeadc4c1 is on thread 1's stack
==11972==  in frame #3, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 1
==11972==    at 0x4839D03: strcmp (vg_replace_strmem.c:848)
==11972==    by 0x10AA0C: find_stops (project2.c:611)
==11972==    by 0x10AA0C: is_valid_connection (project2.c:561)
==11972==    by 0x10AB99: command_l (project2.c:197)
==11972==    by 0x10916A: handle_command (project2.c:60)
==11972==    by 0x10916A: main (project2.c:35)
==11972==  Address 0x1ffeae41c0 is on thread 1's stack
==11972==  in frame #3, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 1
==11972==    at 0x4839D24: strcmp (vg_replace_strmem.c:848)
==11972==    by 0x10AA0C: find_stops (project2.c:611)
==11972==    by 0x10AA0C: is_valid_connection (project2.c:561)
==11972==    by 0x10AB99: command_l (project2.c:197)
==11972==    by 0x10916A: handle_command (project2.c:60)
==11972==    by 0x10916A: main (project2.c:35)
==11972==  Address 0x1ffeae41c1 is on thread 1's stack
==11972==  in frame #3, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 1
==11972==    at 0x4839D03: strcmp (vg_replace_strmem.c:848)
==11972==    by 0x10AA1F: find_stops (project2.c:614)
==11972==    by 0x10AA1F: is_valid_connection (project2.c:561)
==11972==    by 0x10AB99: command_l (project2.c:197)
==11972==    by 0x10916A: handle_command (project2.c:60)
==11972==    by 0x10916A: main (project2.c:35)
==11972==  Address 0x1ffeae41c0 is on thread 1's stack
==11972==  in frame #3, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 1
==11972==    at 0x4839D24: strcmp (vg_replace_strmem.c:848)
==11972==    by 0x10AA1F: find_stops (project2.c:614)
==11972==    by 0x10AA1F: is_valid_connection (project2.c:561)
==11972==    by 0x10AB99: command_l (project2.c:197)
==11972==    by 0x10916A: handle_command (project2.c:60)
==11972==    by 0x10916A: main (project2.c:35)
==11972==  Address 0x1ffeae41c1 is on thread 1's stack
==11972==  in frame #3, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 4
==11972==    at 0x10AA42: is_valid_connection (project2.c:564)
==11972==    by 0x10AB99: command_l (project2.c:197)
==11972==    by 0x10916A: handle_command (project2.c:60)
==11972==    by 0x10916A: main (project2.c:35)
==11972==  Address 0x1ffeadc53c is on thread 1's stack
==11972==  in frame #2, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 1
==11972==    at 0x4A608D0: __strcmp_sse2_unaligned (strcmp-sse2-unaligned.S:24)
==11972==    by 0x10ABDD: command_l (project2.c:201)
==11972==    by 0x10916A: handle_command (project2.c:60)
==11972==    by 0x10916A: main (project2.c:35)
==11972==  Address 0x1ffeadc4c0 is on thread 1's stack
==11972==  in frame #2, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 1
==11972==    at 0x4839D20: strcmp (vg_replace_strmem.c:848)
==11972==    by 0x10ABDD: command_l (project2.c:201)
==11972==    by 0x10916A: handle_command (project2.c:60)
==11972==    by 0x10916A: main (project2.c:35)
==11972==  Address 0x1ffeadc4c1 is on thread 1's stack
==11972==  in frame #2, created by main (project2.c:23)
==11972== 
==11972== Invalid write of size 1
==11972==    at 0x4838DC8: strcpy (vg_replace_strmem.c:512)
==11972==    by 0x10A72E: create_connection (project2.c:476)
==11972==    by 0x10ABF1: command_l (project2.c:202)
==11972==    by 0x10916A: handle_command (project2.c:60)
==11972==    by 0x10916A: main (project2.c:35)
==11972==  Address 0x1ffeba76c0 is on thread 1's stack
==11972==  in frame #3, created by main (project2.c:23)
==11972== 
==11972== Invalid write of size 1
==11972==    at 0x4838DD7: strcpy (vg_replace_strmem.c:512)
==11972==    by 0x10A72E: create_connection (project2.c:476)
==11972==    by 0x10ABF1: command_l (project2.c:202)
==11972==    by 0x10916A: handle_command (project2.c:60)
==11972==    by 0x10916A: main (project2.c:35)
==11972==  Address 0x1ffeba76c9 is on thread 1's stack
==11972==  in frame #3, created by main (project2.c:23)
==11972== 
==11972== Invalid write of size 1
==11972==    at 0x4838DC8: strcpy (vg_replace_strmem.c:512)
==11972==    by 0x10A74E: create_connection (project2.c:477)
==11972==    by 0x10ABF1: command_l (project2.c:202)
==11972==    by 0x10916A: handle_command (project2.c:60)
==11972==    by 0x10916A: main (project2.c:35)
==11972==  Address 0x1ffeba76d5 is on thread 1's stack
==11972==  in frame #3, created by main (project2.c:23)
==11972== 
==11972== Invalid write of size 1
==11972==    at 0x4838DD7: strcpy (vg_replace_strmem.c:512)
==11972==    by 0x10A74E: create_connection (project2.c:477)
==11972==    by 0x10ABF1: command_l (project2.c:202)
==11972==    by 0x10916A: handle_command (project2.c:60)
==11972==    by 0x10916A: main (project2.c:35)
==11972==  Address 0x1ffeba76dd is on thread 1's stack
==11972==  in frame #3, created by main (project2.c:23)
==11972== 
==11972== Invalid write of size 1
==11972==    at 0x4838DC8: strcpy (vg_replace_strmem.c:512)
==11972==    by 0x10A75B: create_connection (project2.c:478)
==11972==    by 0x10ABF1: command_l (project2.c:202)
==11972==    by 0x10916A: handle_command (project2.c:60)
==11972==    by 0x10916A: main (project2.c:35)
==11972==  Address 0x1ffeba7708 is on thread 1's stack
==11972==  in frame #3, created by main (project2.c:23)
==11972== 
==11972== Invalid write of size 1
==11972==    at 0x4838DD7: strcpy (vg_replace_strmem.c:512)
==11972==    by 0x10A75B: create_connection (project2.c:478)
==11972==    by 0x10ABF1: command_l (project2.c:202)
==11972==    by 0x10916A: handle_command (project2.c:60)
==11972==    by 0x10916A: main (project2.c:35)
==11972==  Address 0x1ffeba7710 is on thread 1's stack
==11972==  in frame #3, created by main (project2.c:23)
==11972== 
==11972== Invalid write of size 8
==11972==    at 0x10A77A: create_connection (project2.c:479)
==11972==    by 0x10ABF1: command_l (project2.c:202)
==11972==    by 0x10916A: handle_command (project2.c:60)
==11972==    by 0x10916A: main (project2.c:35)
==11972==  Address 0x1ffeba7748 is on thread 1's stack
==11972==  in frame #2, created by main (project2.c:23)
==11972== 
==11972== Invalid write of size 8
==11972==    at 0x10A79E: create_connection (project2.c:480)
==11972==    by 0x10ABF1: command_l (project2.c:202)
==11972==    by 0x10916A: handle_command (project2.c:60)
==11972==    by 0x10916A: main (project2.c:35)
==11972==  Address 0x1ffeba7750 is on thread 1's stack
==11972==  in frame #2, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 16
==11972==    at 0x10A7BA: create_connection (project2.c:482)
==11972==    by 0x10ABF1: command_l (project2.c:202)
==11972==    by 0x10916A: handle_command (project2.c:60)
==11972==    by 0x10916A: main (project2.c:35)
==11972==  Address 0x1ffeba7748 is on thread 1's stack
==11972==  in frame #2, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 16
==11972==    at 0x10A7C4: create_connection (project2.c:482)
==11972==    by 0x10ABF1: command_l (project2.c:202)
==11972==    by 0x10916A: handle_command (project2.c:60)
==11972==    by 0x10916A: main (project2.c:35)
==11972==  Address 0x1ffeadc548 is on thread 1's stack
==11972==  in frame #2, created by main (project2.c:23)
==11972== 
==11972== Invalid write of size 8
==11972==    at 0x10A7D0: create_connection (project2.c:482)
==11972==    by 0x10ABF1: command_l (project2.c:202)
==11972==    by 0x10916A: handle_command (project2.c:60)
==11972==    by 0x10916A: main (project2.c:35)
==11972==  Address 0x1ffeadc548 is on thread 1's stack
==11972==  in frame #2, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 4
==11972==    at 0x10ABF2: command_l (project2.c:203)
==11972==    by 0x10916A: handle_command (project2.c:60)
==11972==    by 0x10916A: main (project2.c:35)
==11972==  Address 0x1ffeadc558 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid write of size 4
==11972==    at 0x10AD38: add_route_information (project2.c:495)
==11972==    by 0x10AD38: command_l (project2.c:204)
==11972==    by 0x10916A: handle_command (project2.c:60)
==11972==    by 0x10916A: main (project2.c:35)
==11972==  Address 0x1ffeadc558 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid write of size 1
==11972==    at 0x4838DC8: strcpy (vg_replace_strmem.c:512)
==11972==    by 0x10AD4F: add_route_information (project2.c:496)
==11972==    by 0x10AD4F: command_l (project2.c:204)
==11972==    by 0x10916A: handle_command (project2.c:60)
==11972==    by 0x10916A: main (project2.c:35)
==11972==  Address 0x1ffeadc4d5 is on thread 1's stack
==11972==  in frame #2, created by main (project2.c:23)
==11972== 
==11972== Invalid write of size 1
==11972==    at 0x4838DD7: strcpy (vg_replace_strmem.c:512)
==11972==    by 0x10AD4F: add_route_information (project2.c:496)
==11972==    by 0x10AD4F: command_l (project2.c:204)
==11972==    by 0x10916A: handle_command (project2.c:60)
==11972==    by 0x10916A: main (project2.c:35)
==11972==  Address 0x1ffeadc4dd is on thread 1's stack
==11972==  in frame #2, created by main (project2.c:23)
==11972== 
==11972== Invalid write of size 1
==11972==    at 0x4838DC8: strcpy (vg_replace_strmem.c:512)
==11972==    by 0x10AD5C: add_route_information (project2.c:497)
==11972==    by 0x10AD5C: command_l (project2.c:204)
==11972==    by 0x10916A: handle_command (project2.c:60)
==11972==    by 0x10916A: main (project2.c:35)
==11972==  Address 0x1ffeadc508 is on thread 1's stack
==11972==  in frame #2, created by main (project2.c:23)
==11972== 
==11972== Invalid write of size 1
==11972==    at 0x4838DD7: strcpy (vg_replace_strmem.c:512)
==11972==    by 0x10AD5C: add_route_information (project2.c:497)
==11972==    by 0x10AD5C: command_l (project2.c:204)
==11972==    by 0x10916A: handle_command (project2.c:60)
==11972==    by 0x10916A: main (project2.c:35)
==11972==  Address 0x1ffeadc510 is on thread 1's stack
==11972==  in frame #2, created by main (project2.c:23)
==11972== 
==11972== Invalid write of size 4
==11972==    at 0x10AD64: add_route_information (project2.c:498)
==11972==    by 0x10AD64: command_l (project2.c:204)
==11972==    by 0x10916A: handle_command (project2.c:60)
==11972==    by 0x10916A: main (project2.c:35)
==11972==  Address 0x1ffeadc53c is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid write of size 4
==11972==    at 0x10AD68: add_route_information (project2.c:499)
==11972==    by 0x10AD68: command_l (project2.c:204)
==11972==    by 0x10916A: handle_command (project2.c:60)
==11972==    by 0x10916A: main (project2.c:35)
==11972==  Address 0x1ffeadc540 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 1
==11972==    at 0x4A608D0: __strcmp_sse2_unaligned (strcmp-sse2-unaligned.S:24)
==11972==    by 0x10AA56: is_valid_connection (project2.c:565)
==11972==    by 0x10AB99: command_l (project2.c:197)
==11972==    by 0x10916A: handle_command (project2.c:60)
==11972==    by 0x10916A: main (project2.c:35)
==11972==  Address 0x1ffeadc508 is on thread 1's stack
==11972==  in frame #3, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 1
==11972==    at 0x4839D20: strcmp (vg_replace_strmem.c:848)
==11972==    by 0x10AA56: is_valid_connection (project2.c:565)
==11972==    by 0x10AB99: command_l (project2.c:197)
==11972==    by 0x10916A: handle_command (project2.c:60)
==11972==    by 0x10916A: main (project2.c:35)
==11972==  Address 0x1ffeadc509 is on thread 1's stack
==11972==  in frame #3, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 1
==11972==    at 0x4839D03: strcmp (vg_replace_strmem.c:848)
==11972==    by 0x10AC18: command_l (project2.c:206)
==11972==    by 0x10916A: handle_command (project2.c:60)
==11972==    by 0x10916A: main (project2.c:35)
==11972==  Address 0x1ffeadc508 is on thread 1's stack
==11972==  in frame #2, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 1
==11972==    at 0x4839D24: strcmp (vg_replace_strmem.c:848)
==11972==    by 0x10AC18: command_l (project2.c:206)
==11972==    by 0x10916A: handle_command (project2.c:60)
==11972==    by 0x10916A: main (project2.c:35)
==11972==  Address 0x1ffeadc509 is on thread 1's stack
==11972==  in frame #2, created by main (project2.c:23)
==11972== 
==11972== Invalid write of size 4
==11972==    at 0x10AC23: change_route_information (project2.c:513)
==11972==    by 0x10AC23: command_l (project2.c:208)
==11972==    by 0x10916A: handle_command (project2.c:60)
==11972==    by 0x10916A: main (project2.c:35)
==11972==  Address 0x1ffeadc558 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid write of size 1
==11972==    at 0x4838DC8: strcpy (vg_replace_strmem.c:512)
==11972==    by 0x10AC41: change_route_information (project2.c:515)
==11972==    by 0x10AC41: command_l (project2.c:208)
==11972==    by 0x10916A: handle_command (project2.c:60)
==11972==    by 0x10916A: main (project2.c:35)
==11972==  Address 0x1ffeadc508 is on thread 1's stack
==11972==  in frame #2, created by main (project2.c:23)
==11972== 
==11972== Invalid write of size 1
==11972==    at 0x4838DD7: strcpy (vg_replace_strmem.c:512)
==11972==    by 0x10AC41: change_route_information (project2.c:515)
==11972==    by 0x10AC41: command_l (project2.c:208)
==11972==    by 0x10916A: handle_command (project2.c:60)
==11972==    by 0x10916A: main (project2.c:35)
==11972==  Address 0x1ffeadc510 is on thread 1's stack
==11972==  in frame #2, created by main (project2.c:23)
==11972== 
==11972== Invalid write of size 4
==11972==    at 0x10AC42: change_route_information (project2.c:516)
==11972==    by 0x10AC42: command_l (project2.c:208)
==11972==    by 0x10916A: handle_command (project2.c:60)
==11972==    by 0x10916A: main (project2.c:35)
==11972==  Address 0x1ffeadc540 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 1
==11972==    at 0x4A608D0: __strcmp_sse2_unaligned (strcmp-sse2-unaligned.S:24)
==11972==    by 0x10AC8A: change_route_information (project2.c:519)
==11972==    by 0x10AC8A: command_l (project2.c:208)
==11972==    by 0x10916A: handle_command (project2.c:60)
==11972==    by 0x10916A: main (project2.c:35)
==11972==  Address 0x1ffeba7708 is on thread 1's stack
==11972==  in frame #2, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 1
==11972==    at 0x4839D20: strcmp (vg_replace_strmem.c:848)
==11972==    by 0x10AC8A: change_route_information (project2.c:519)
==11972==    by 0x10AC8A: command_l (project2.c:208)
==11972==    by 0x10916A: handle_command (project2.c:60)
==11972==    by 0x10916A: main (project2.c:35)
==11972==  Address 0x1ffeba7709 is on thread 1's stack
==11972==  in frame #2, created by main (project2.c:23)
==11972== 
==11972== Invalid write of size 4
==11972==    at 0x10AC8F: change_route_information (project2.c:524)
==11972==    by 0x10AC8F: command_l (project2.c:208)
==11972==    by 0x10916A: handle_command (project2.c:60)
==11972==    by 0x10916A: main (project2.c:35)
==11972==  Address 0x1ffeba773c is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid write of size 4
==11972==    at 0x10AC93: change_route_information (project2.c:525)
==11972==    by 0x10AC93: command_l (project2.c:208)
==11972==    by 0x10916A: handle_command (project2.c:60)
==11972==    by 0x10916A: main (project2.c:35)
==11972==  Address 0x1ffeba77d8 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 16
==11972==    at 0x109510: command_c (project2.c:161)
==11972==    by 0x1091A2: handle_command (project2.c:54)
==11972==    by 0x1091A2: main (project2.c:35)
==11972==  Address 0x1ffeadc4d0 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 16
==11972==    at 0x109515: command_c (project2.c:161)
==11972==    by 0x1091A2: handle_command (project2.c:54)
==11972==    by 0x1091A2: main (project2.c:35)
==11972==  Address 0x1ffeadc4c0 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 16
==11972==    at 0x109519: command_c (project2.c:161)
==11972==    by 0x1091A2: handle_command (project2.c:54)
==11972==    by 0x1091A2: main (project2.c:35)
==11972==  Address 0x1ffeadc4e0 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 16
==11972==    at 0x10951E: command_c (project2.c:161)
==11972==    by 0x1091A2: handle_command (project2.c:54)
==11972==    by 0x1091A2: main (project2.c:35)
==11972==  Address 0x1ffeadc4f0 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 16
==11972==    at 0x109528: command_c (project2.c:161)
==11972==    by 0x1091A2: handle_command (project2.c:54)
==11972==    by 0x1091A2: main (project2.c:35)
==11972==  Address 0x1ffeadc500 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 16
==11972==    at 0x10952D: command_c (project2.c:161)
==11972==    by 0x1091A2: handle_command (project2.c:54)
==11972==    by 0x1091A2: main (project2.c:35)
==11972==  Address 0x1ffeadc510 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 16
==11972==    at 0x109536: command_c (project2.c:161)
==11972==    by 0x1091A2: handle_command (project2.c:54)
==11972==    by 0x1091A2: main (project2.c:35)
==11972==  Address 0x1ffeadc520 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 16
==11972==    at 0x10953B: command_c (project2.c:161)
==11972==    by 0x1091A2: handle_command (project2.c:54)
==11972==    by 0x1091A2: main (project2.c:35)
==11972==  Address 0x1ffeadc550 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 16
==11972==    at 0x109543: command_c (project2.c:161)
==11972==    by 0x1091A2: handle_command (project2.c:54)
==11972==    by 0x1091A2: main (project2.c:35)
==11972==  Address 0x1ffeadc530 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 16
==11972==    at 0x109548: command_c (project2.c:161)
==11972==    by 0x1091A2: handle_command (project2.c:54)
==11972==    by 0x1091A2: main (project2.c:35)
==11972==  Address 0x1ffeadc540 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 8
==11972==    at 0x10A000: list_stops (project2.c:317)
==11972==    by 0x10A000: command_p (project2.c:126)
==11972==    by 0x10914A: handle_command (project2.c:57)
==11972==    by 0x10914A: main (project2.c:35)
==11972==  Address 0x1ffeae4208 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 8
==11972==    at 0x10A00C: list_stops (project2.c:317)
==11972==    by 0x10A00C: command_p (project2.c:126)
==11972==    by 0x10914A: handle_command (project2.c:57)
==11972==    by 0x10914A: main (project2.c:35)
==11972==  Address 0x1ffeae4200 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 8
==11972==    at 0x10A012: list_stops (project2.c:317)
==11972==    by 0x10A012: command_p (project2.c:126)
==11972==    by 0x10914A: handle_command (project2.c:57)
==11972==    by 0x10914A: main (project2.c:35)
==11972==  Address 0x1ffeae41f8 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 8
==11972==    at 0x10A015: list_stops (project2.c:317)
==11972==    by 0x10A015: command_p (project2.c:126)
==11972==    by 0x10914A: handle_command (project2.c:57)
==11972==    by 0x10914A: main (project2.c:35)
==11972==  Address 0x1ffeae41f0 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 8
==11972==    at 0x10A018: list_stops (project2.c:317)
==11972==    by 0x10A018: command_p (project2.c:126)
==11972==    by 0x10914A: handle_command (project2.c:57)
==11972==    by 0x10914A: main (project2.c:35)
==11972==  Address 0x1ffeae41e8 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 8
==11972==    at 0x10A01B: list_stops (project2.c:317)
==11972==    by 0x10A01B: command_p (project2.c:126)
==11972==    by 0x10914A: handle_command (project2.c:57)
==11972==    by 0x10914A: main (project2.c:35)
==11972==  Address 0x1ffeae41e0 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 8
==11972==    at 0x10A01E: list_stops (project2.c:317)
==11972==    by 0x10A01E: command_p (project2.c:126)
==11972==    by 0x10914A: handle_command (project2.c:57)
==11972==    by 0x10914A: main (project2.c:35)
==11972==  Address 0x1ffeae41d8 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 8
==11972==    at 0x10A021: list_stops (project2.c:317)
==11972==    by 0x10A021: command_p (project2.c:126)
==11972==    by 0x10914A: handle_command (project2.c:57)
==11972==    by 0x10914A: main (project2.c:35)
==11972==  Address 0x1ffeae41d0 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 8
==11972==    at 0x10A024: list_stops (project2.c:317)
==11972==    by 0x10A024: command_p (project2.c:126)
==11972==    by 0x10914A: handle_command (project2.c:57)
==11972==    by 0x10914A: main (project2.c:35)
==11972==  Address 0x1ffeae41c8 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 8
==11972==    at 0x10A027: list_stops (project2.c:317)
==11972==    by 0x10A027: command_p (project2.c:126)
==11972==    by 0x10914A: handle_command (project2.c:57)
==11972==    by 0x10914A: main (project2.c:35)
==11972==  Address 0x1ffeae41c0 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 1
==11972==    at 0x4839D03: strcmp (vg_replace_strmem.c:848)
==11972==    by 0x109854: add_routes_passing (project2.c:268)
==11972==    by 0x10A02D: list_stops (project2.c:317)
==11972==    by 0x10A02D: command_p (project2.c:126)
==11972==    by 0x10914A: handle_command (project2.c:57)
==11972==    by 0x10914A: main (project2.c:35)
==11972==  Address 0x1ffeadc4d5 is on thread 1's stack
==11972==  in frame #3, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 1
==11972==    at 0x4839D24: strcmp (vg_replace_strmem.c:848)
==11972==    by 0x109854: add_routes_passing (project2.c:268)
==11972==    by 0x10A02D: list_stops (project2.c:317)
==11972==    by 0x10A02D: command_p (project2.c:126)
==11972==    by 0x10914A: handle_command (project2.c:57)
==11972==    by 0x10914A: main (project2.c:35)
==11972==  Address 0x1ffeadc4d6 is on thread 1's stack
==11972==  in frame #3, created by main (project2.c:23)
==11972== 
==11972== Invalid write of size 8
==11972==    at 0x10A049: list_stops (project2.c:317)
==11972==    by 0x10A049: command_p (project2.c:126)
==11972==    by 0x10914A: handle_command (project2.c:57)
==11972==    by 0x10914A: main (project2.c:35)
==11972==  Address 0x1ffeae41d0 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid write of size 8
==11972==    at 0x10A053: list_stops (project2.c:317)
==11972==    by 0x10A053: command_p (project2.c:126)
==11972==    by 0x10914A: handle_command (project2.c:57)
==11972==    by 0x10914A: main (project2.c:35)
==11972==  Address 0x1ffeae41c0 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid write of size 8
==11972==    at 0x10A057: list_stops (project2.c:317)
==11972==    by 0x10A057: command_p (project2.c:126)
==11972==    by 0x10914A: handle_command (project2.c:57)
==11972==    by 0x10914A: main (project2.c:35)
==11972==  Address 0x1ffeae41e0 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid write of size 8
==11972==    at 0x10A064: list_stops (project2.c:317)
==11972==    by 0x10A064: command_p (project2.c:126)
==11972==    by 0x10914A: handle_command (project2.c:57)
==11972==    by 0x10914A: main (project2.c:35)
==11972==  Address 0x1ffeae41f0 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 8
==11972==    at 0x10A068: list_stops (project2.c:318)
==11972==    by 0x10A068: command_p (project2.c:126)
==11972==    by 0x10914A: handle_command (project2.c:57)
==11972==    by 0x10914A: main (project2.c:35)
==11972==  Address 0x1ffeae41f8 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid write of size 8
==11972==    at 0x10A07A: list_stops (project2.c:317)
==11972==    by 0x10A07A: command_p (project2.c:126)
==11972==    by 0x10914A: handle_command (project2.c:57)
==11972==    by 0x10914A: main (project2.c:35)
==11972==  Address 0x1ffeae4200 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== 
==11972== More than 100 errors detected.  Subsequent errors
==11972== will still be recorded, but in less detail than before.
==11972== Invalid read of size 4
==11972==    at 0x10A07E: list_stops (project2.c:318)
==11972==    by 0x10A07E: command_p (project2.c:126)
==11972==    by 0x10914A: handle_command (project2.c:57)
==11972==    by 0x10914A: main (project2.c:35)
==11972==  Address 0x1ffeae4208 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 8
==11972==    at 0x10A081: list_stops (project2.c:318)
==11972==    by 0x10A081: command_p (project2.c:126)
==11972==    by 0x10914A: handle_command (project2.c:57)
==11972==    by 0x10914A: main (project2.c:35)
==11972==  Address 0x1ffeae4200 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 1
==11972==    at 0x4838CC2: __strlen_sse2 (vg_replace_strmem.c:462)
==11972==    by 0x4A21B1E: vfprintf (vfprintf.c:1638)
==11972==    by 0x4A28735: printf (printf.c:33)
==11972==    by 0x10A08A: list_stops (project2.c:318)
==11972==    by 0x10A08A: command_p (project2.c:126)
==11972==    by 0x10914A: handle_command (project2.c:57)
==11972==    by 0x10914A: main (project2.c:35)
==11972==  Address 0x1ffeae41c0 is on thread 1's stack
==11972==  in frame #4, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 1
==11972==    at 0x4838CD4: __strlen_sse2 (vg_replace_strmem.c:462)
==11972==    by 0x4A21B1E: vfprintf (vfprintf.c:1638)
==11972==    by 0x4A28735: printf (printf.c:33)
==11972==    by 0x10A08A: list_stops (project2.c:318)
==11972==    by 0x10A08A: command_p (project2.c:126)
==11972==    by 0x10914A: handle_command (project2.c:57)
==11972==    by 0x10914A: main (project2.c:35)
==11972==  Address 0x1ffeae41c1 is on thread 1's stack
==11972==  in frame #4, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 1
==11972==    at 0x483D528: mempcpy (vg_replace_strmem.c:1536)
==11972==    by 0x4A4BB24: _IO_new_file_xsputn (fileops.c:1243)
==11972==    by 0x4A4BB24: _IO_file_xsputn@@GLIBC_2.2.5 (fileops.c:1204)
==11972==    by 0x4A2032A: vfprintf (vfprintf.c:1638)
==11972==    by 0x4A28735: printf (printf.c:33)
==11972==    by 0x10A08A: list_stops (project2.c:318)
==11972==    by 0x10A08A: command_p (project2.c:126)
==11972==    by 0x10914A: handle_command (project2.c:57)
==11972==    by 0x10914A: main (project2.c:35)
==11972==  Address 0x1ffeae41c0 is on thread 1's stack
==11972==  in frame #5, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 1
==11972==    at 0x483D536: mempcpy (vg_replace_strmem.c:1536)
==11972==    by 0x4A4BB24: _IO_new_file_xsputn (fileops.c:1243)
==11972==    by 0x4A4BB24: _IO_file_xsputn@@GLIBC_2.2.5 (fileops.c:1204)
==11972==    by 0x4A2032A: vfprintf (vfprintf.c:1638)
==11972==    by 0x4A28735: printf (printf.c:33)
==11972==    by 0x10A08A: list_stops (project2.c:318)
==11972==    by 0x10A08A: command_p (project2.c:126)
==11972==    by 0x10914A: handle_command (project2.c:57)
==11972==    by 0x10914A: main (project2.c:35)
==11972==  Address 0x1ffeae41c2 is on thread 1's stack
==11972==  in frame #5, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 1
==11972==    at 0x4839D03: strcmp (vg_replace_strmem.c:848)
==11972==    by 0x109866: add_routes_passing (project2.c:272)
==11972==    by 0x10A02D: list_stops (project2.c:317)
==11972==    by 0x10A02D: command_p (project2.c:126)
==11972==    by 0x10914A: handle_command (project2.c:57)
==11972==    by 0x10914A: main (project2.c:35)
==11972==  Address 0x1ffeadc508 is on thread 1's stack
==11972==  in frame #3, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 1
==11972==    at 0x4839D24: strcmp (vg_replace_strmem.c:848)
==11972==    by 0x109866: add_routes_passing (project2.c:272)
==11972==    by 0x10A02D: list_stops (project2.c:317)
==11972==    by 0x10A02D: command_p (project2.c:126)
==11972==    by 0x10914A: handle_command (project2.c:57)
==11972==    by 0x10914A: main (project2.c:35)
==11972==  Address 0x1ffeadc509 is on thread 1's stack
==11972==  in frame #3, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 4
==11972==    at 0x10986B: add_routes_passing (project2.c:267)
==11972==    by 0x10A02D: list_stops (project2.c:317)
==11972==    by 0x10A02D: command_p (project2.c:126)
==11972==    by 0x10914A: handle_command (project2.c:57)
==11972==    by 0x10914A: main (project2.c:35)
==11972==  Address 0x1ffeadc53c is on thread 1's stack
==11972==  in frame #2, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 4
==11972==    at 0x109874: add_routes_passing (project2.c:281)
==11972==    by 0x10A02D: list_stops (project2.c:317)
==11972==    by 0x10A02D: command_p (project2.c:126)
==11972==    by 0x10914A: handle_command (project2.c:57)
==11972==    by 0x10914A: main (project2.c:35)
==11972==  Address 0x1ffeadc540 is on thread 1's stack
==11972==  in frame #2, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 1
==11972==    at 0x4839D03: strcmp (vg_replace_strmem.c:848)
==11972==    by 0x1098A1: add_routes_passing (project2.c:282)
==11972==    by 0x10A02D: list_stops (project2.c:317)
==11972==    by 0x10A02D: command_p (project2.c:126)
==11972==    by 0x10914A: handle_command (project2.c:57)
==11972==    by 0x10914A: main (project2.c:35)
==11972==  Address 0x1ffeba7708 is on thread 1's stack
==11972==  in frame #3, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 1
==11972==    at 0x4839D24: strcmp (vg_replace_strmem.c:848)
==11972==    by 0x1098A1: add_routes_passing (project2.c:282)
==11972==    by 0x10A02D: list_stops (project2.c:317)
==11972==    by 0x10A02D: command_p (project2.c:126)
==11972==    by 0x10914A: handle_command (project2.c:57)
==11972==    by 0x10914A: main (project2.c:35)
==11972==  Address 0x1ffeba7709 is on thread 1's stack
==11972==  in frame #3, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 4
==11972==    at 0x109880: add_routes_passing (project2.c:286)
==11972==    by 0x10A02D: list_stops (project2.c:317)
==11972==    by 0x10A02D: command_p (project2.c:126)
==11972==    by 0x10914A: handle_command (project2.c:57)
==11972==    by 0x10914A: main (project2.c:35)
==11972==  Address 0x1ffeba773c is on thread 1's stack
==11972==  in frame #2, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 8
==11972==    at 0x10998D: command_i (project2.c:229)
==11972==    by 0x109187: handle_command (project2.c:63)
==11972==    by 0x109187: main (project2.c:35)
==11972==  Address 0x1ffeae4208 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 8
==11972==    at 0x109997: command_i (project2.c:229)
==11972==    by 0x109187: handle_command (project2.c:63)
==11972==    by 0x109187: main (project2.c:35)
==11972==  Address 0x1ffeae4200 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 8
==11972==    at 0x10999B: command_i (project2.c:229)
==11972==    by 0x109187: handle_command (project2.c:63)
==11972==    by 0x109187: main (project2.c:35)
==11972==  Address 0x1ffeae41f8 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 8
==11972==    at 0x10999F: command_i (project2.c:229)
==11972==    by 0x109187: handle_command (project2.c:63)
==11972==    by 0x109187: main (project2.c:35)
==11972==  Address 0x1ffeae41f0 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 8
==11972==    at 0x1099A3: command_i (project2.c:229)
==11972==    by 0x109187: handle_command (project2.c:63)
==11972==    by 0x109187: main (project2.c:35)
==11972==  Address 0x1ffeae41e8 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 8
==11972==    at 0x1099A7: command_i (project2.c:229)
==11972==    by 0x109187: handle_command (project2.c:63)
==11972==    by 0x109187: main (project2.c:35)
==11972==  Address 0x1ffeae41e0 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 8
==11972==    at 0x1099AB: command_i (project2.c:229)
==11972==    by 0x109187: handle_command (project2.c:63)
==11972==    by 0x109187: main (project2.c:35)
==11972==  Address 0x1ffeae41d8 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 8
==11972==    at 0x1099AF: command_i (project2.c:229)
==11972==    by 0x109187: handle_command (project2.c:63)
==11972==    by 0x109187: main (project2.c:35)
==11972==  Address 0x1ffeae41d0 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 8
==11972==    at 0x1099B3: command_i (project2.c:229)
==11972==    by 0x109187: handle_command (project2.c:63)
==11972==    by 0x109187: main (project2.c:35)
==11972==  Address 0x1ffeae41c8 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 8
==11972==    at 0x1099B7: command_i (project2.c:229)
==11972==    by 0x109187: handle_command (project2.c:63)
==11972==    by 0x109187: main (project2.c:35)
==11972==  Address 0x1ffeae41c0 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid write of size 8
==11972==    at 0x1099D0: command_i (project2.c:229)
==11972==    by 0x109187: handle_command (project2.c:63)
==11972==    by 0x109187: main (project2.c:35)
==11972==  Address 0x1ffeae41c0 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid write of size 8
==11972==    at 0x1099DD: command_i (project2.c:229)
==11972==    by 0x109187: handle_command (project2.c:63)
==11972==    by 0x109187: main (project2.c:35)
==11972==  Address 0x1ffeae41d0 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid write of size 8
==11972==    at 0x1099EB: command_i (project2.c:229)
==11972==    by 0x109187: handle_command (project2.c:63)
==11972==    by 0x109187: main (project2.c:35)
==11972==  Address 0x1ffeae41e0 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid write of size 8
==11972==    at 0x1099F9: command_i (project2.c:229)
==11972==    by 0x109187: handle_command (project2.c:63)
==11972==    by 0x109187: main (project2.c:35)
==11972==  Address 0x1ffeae41f0 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid write of size 8
==11972==    at 0x109A0B: command_i (project2.c:229)
==11972==    by 0x109187: handle_command (project2.c:63)
==11972==    by 0x109187: main (project2.c:35)
==11972==  Address 0x1ffeae4200 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 4
==11972==    at 0x109A10: command_i (project2.c:231)
==11972==    by 0x109187: handle_command (project2.c:63)
==11972==    by 0x109187: main (project2.c:35)
==11972==  Address 0x1ffeae4208 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 16
==11972==    at 0x109AB6: command_i (project2.c:235)
==11972==    by 0x109187: handle_command (project2.c:63)
==11972==    by 0x109187: main (project2.c:35)
==11972==  Address 0x1ffeadc4c0 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 16
==11972==    at 0x109AC3: command_i (project2.c:235)
==11972==    by 0x109187: handle_command (project2.c:63)
==11972==    by 0x109187: main (project2.c:35)
==11972==  Address 0x1ffeadc4d0 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 16
==11972==    at 0x109AD1: command_i (project2.c:235)
==11972==    by 0x109187: handle_command (project2.c:63)
==11972==    by 0x109187: main (project2.c:35)
==11972==  Address 0x1ffeadc4e0 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 16
==11972==    at 0x109ADF: command_i (project2.c:235)
==11972==    by 0x109187: handle_command (project2.c:63)
==11972==    by 0x109187: main (project2.c:35)
==11972==  Address 0x1ffeadc4f0 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 4
==11972==    at 0x109AE5: command_i (project2.c:235)
==11972==    by 0x109187: handle_command (project2.c:63)
==11972==    by 0x109187: main (project2.c:35)
==11972==  Address 0x1ffeadc53c is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 16
==11972==    at 0x109AF1: command_i (project2.c:236)
==11972==    by 0x109187: handle_command (project2.c:63)
==11972==    by 0x109187: main (project2.c:35)
==11972==  Address 0x1ffeadc500 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 16
==11972==    at 0x109AF7: command_i (project2.c:236)
==11972==    by 0x109187: handle_command (project2.c:63)
==11972==    by 0x109187: main (project2.c:35)
==11972==  Address 0x1ffeadc510 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 16
==11972==    at 0x109B05: command_i (project2.c:236)
==11972==    by 0x109187: handle_command (project2.c:63)
==11972==    by 0x109187: main (project2.c:35)
==11972==  Address 0x1ffeadc520 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 16
==11972==    at 0x109B18: check_first_and_last (project2.c:664)
==11972==    by 0x109B18: command_i (project2.c:236)
==11972==    by 0x109187: handle_command (project2.c:63)
==11972==    by 0x109187: main (project2.c:35)
==11972==  Address 0x1ffeadc530 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 16
==11972==    at 0x109B1E: check_first_and_last (project2.c:664)
==11972==    by 0x109B1E: command_i (project2.c:236)
==11972==    by 0x109187: handle_command (project2.c:63)
==11972==    by 0x109187: main (project2.c:35)
==11972==  Address 0x1ffeadc540 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 16
==11972==    at 0x109B2F: check_first_and_last (project2.c:664)
==11972==    by 0x109B2F: command_i (project2.c:236)
==11972==    by 0x109187: handle_command (project2.c:63)
==11972==    by 0x109187: main (project2.c:35)
==11972==  Address 0x1ffeadc550 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 4
==11972==    at 0x109BA5: command_i (project2.c:238)
==11972==    by 0x109187: handle_command (project2.c:63)
==11972==    by 0x109187: main (project2.c:35)
==11972==  Address 0x1ffeadc540 is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 1
==11972==    at 0x4A608D0: __strcmp_sse2_unaligned (strcmp-sse2-unaligned.S:24)
==11972==    by 0x109BDB: command_i (project2.c:239)
==11972==    by 0x109187: handle_command (project2.c:63)
==11972==    by 0x109187: main (project2.c:35)
==11972==  Address 0x1ffeae41c0 is on thread 1's stack
==11972==  in frame #2, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 1
==11972==    at 0x4839D03: strcmp (vg_replace_strmem.c:848)
==11972==    by 0x109BDB: command_i (project2.c:239)
==11972==    by 0x109187: handle_command (project2.c:63)
==11972==    by 0x109187: main (project2.c:35)
==11972==  Address 0x1ffeba7708 is on thread 1's stack
==11972==  in frame #2, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 1
==11972==    at 0x4839D20: strcmp (vg_replace_strmem.c:848)
==11972==    by 0x109BDB: command_i (project2.c:239)
==11972==    by 0x109187: handle_command (project2.c:63)
==11972==    by 0x109187: main (project2.c:35)
==11972==  Address 0x1ffeae41c1 is on thread 1's stack
==11972==  in frame #2, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 1
==11972==    at 0x4839D24: strcmp (vg_replace_strmem.c:848)
==11972==    by 0x109BDB: command_i (project2.c:239)
==11972==    by 0x109187: handle_command (project2.c:63)
==11972==    by 0x109187: main (project2.c:35)
==11972==  Address 0x1ffeba7709 is on thread 1's stack
==11972==  in frame #2, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 4
==11972==    at 0x109BB8: command_i (project2.c:245)
==11972==    by 0x109187: handle_command (project2.c:63)
==11972==    by 0x109187: main (project2.c:35)
==11972==  Address 0x1ffeba773c is on thread 1's stack
==11972==  in frame #1, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 1
==11972==    at 0x4A608D0: __strcmp_sse2_unaligned (strcmp-sse2-unaligned.S:24)
==11972==    by 0x109C8F: bubble_sort (project2.c:642)
==11972==    by 0x109C8F: command_i (project2.c:248)
==11972==    by 0x109187: handle_command (project2.c:63)
==11972==    by 0x109187: main (project2.c:35)
==11972==  Address 0x1ffeadc4c0 is on thread 1's stack
==11972==  in frame #2, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 1
==11972==    at 0x4839D03: strcmp (vg_replace_strmem.c:848)
==11972==    by 0x109C8F: bubble_sort (project2.c:642)
==11972==    by 0x109C8F: command_i (project2.c:248)
==11972==    by 0x109187: handle_command (project2.c:63)
==11972==    by 0x109187: main (project2.c:35)
==11972==  Address 0x1ffeadc4c0 is on thread 1's stack
==11972==  in frame #2, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 1
==11972==    at 0x4839D20: strcmp (vg_replace_strmem.c:848)
==11972==    by 0x109C8F: bubble_sort (project2.c:642)
==11972==    by 0x109C8F: command_i (project2.c:248)
==11972==    by 0x109187: handle_command (project2.c:63)
==11972==    by 0x109187: main (project2.c:35)
==11972==  Address 0x1ffeadc4c1 is on thread 1's stack
==11972==  in frame #2, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 1
==11972==    at 0x4839D24: strcmp (vg_replace_strmem.c:848)
==11972==    by 0x109C8F: bubble_sort (project2.c:642)
==11972==    by 0x109C8F: command_i (project2.c:248)
==11972==    by 0x109187: handle_command (project2.c:63)
==11972==    by 0x109187: main (project2.c:35)
==11972==  Address 0x1ffeadc4c1 is on thread 1's stack
==11972==  in frame #2, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 1
==11972==    at 0x4838CC2: __strlen_sse2 (vg_replace_strmem.c:462)
==11972==    by 0x4A41A4F: puts (ioputs.c:35)
==11972==    by 0x109D67: print_routes_passing (project2.c:686)
==11972==    by 0x109D67: command_i (project2.c:249)
==11972==    by 0x109187: handle_command (project2.c:63)
==11972==    by 0x109187: main (project2.c:35)
==11972==  Address 0x1ffeadc6a0 is on thread 1's stack
==11972==  in frame #3, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 1
==11972==    at 0x4838CD4: __strlen_sse2 (vg_replace_strmem.c:462)
==11972==    by 0x4A41A4F: puts (ioputs.c:35)
==11972==    by 0x109D67: print_routes_passing (project2.c:686)
==11972==    by 0x109D67: command_i (project2.c:249)
==11972==    by 0x109187: handle_command (project2.c:63)
==11972==    by 0x109187: main (project2.c:35)
==11972==  Address 0x1ffeadc6a1 is on thread 1's stack
==11972==  in frame #3, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 4
==11972==    at 0x10986B: add_routes_passing (project2.c:267)
==11972==    by 0x1099C6: command_i (project2.c:229)
==11972==    by 0x109187: handle_command (project2.c:63)
==11972==    by 0x109187: main (project2.c:35)
==11972==  Address 0x1ffeadc53c is on thread 1's stack
==11972==  in frame #2, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 4
==11972==    at 0x109874: add_routes_passing (project2.c:281)
==11972==    by 0x1099C6: command_i (project2.c:229)
==11972==    by 0x109187: handle_command (project2.c:63)
==11972==    by 0x109187: main (project2.c:35)
==11972==  Address 0x1ffeadc540 is on thread 1's stack
==11972==  in frame #2, created by main (project2.c:23)
==11972== 
==11972== Invalid read of size 4
==11972==    at 0x109880: add_routes_passing (project2.c:286)
==11972==    by 0x1099C6: command_i (project2.c:229)
==11972==    by 0x109187: handle_command (project2.c:63)
==11972==    by 0x109187: main (project2.c:35)
==11972==  Address 0x1ffeba773c is on thread 1's stack
==11972==  in frame #2, created by main (project2.c:23)
==11972== 
==11972== Warning: client switching stacks?  SP change: 0x1ffeada4c0 --> 0x1fff000b48
==11972==          to suppress, use: --max-stackframe=5400200 or greater
==11972== 
==11972== HEAP SUMMARY:
==11972==     in use at exit: 0 bytes in 0 blocks
==11972==   total heap usage: 2 allocs, 2 frees, 8,192 bytes allocated
==11972== 
==11972== All heap blocks were freed -- no leaks are possible
==11972== 
==11972== For counts of detected and suppressed errors, rerun with: -v
==11972== ERROR SUMMARY: 20313 errors from 155 contexts (suppressed: 0 from 0)

```


Your code will not be reevaluated if you submit before 2023-03-30 19:28:56 @ Lisbon, Portugal. You need to wait 10 minute(s).

