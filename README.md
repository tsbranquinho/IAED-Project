# Projecto 2 - IAED 2022/2023

## Enunciado

O enunciado do projecto está disponível em [enunciado.md](enunciado.md). 

## Data de entrega: 14 de abril de 2023, às 19h59

Informações detalhadas sobre o processo de submissão estão disponíveis em [informacoes.md](informacoes.md).



# Evaluation

2023-04-04T23:58:26

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


## Test 14: [- Time Limit Exceeded-].

## Test 15: [- Time Limit Exceeded-].

## Test 16: [- Time Limit Exceeded-].

## Test 17: [- Time Limit Exceeded-].

## Test 18: [- Wrong Answer-].


## Test 19: [- Wrong Answer-].


## Test 20: [- Wrong Answer-].


## Test 21: [- Wrong Answer-].


## Test 22: [+ Accepted+].
## Test 23: [- Output Limit Exceeded-].

## Test 24: [- Wrong Answer-].


## Test 25: [- Wrong Answer-].


## Test 26: [- Wrong Answer-].


## Test 27: [- Wrong Answer-].


## Test 28: [- Memory Limit Exceeded-].

## Test 29: [- Memory Limit Exceeded-].

## Test 30: [- Memory Limit Exceeded-].

## Test 31: [- Memory Limit Exceeded-].

## Test 32: [- Wrong Answer-].




## Number of passed tests: 2/32


## Valgrind Output:


```
==28390== Memcheck, a memory error detector
==28390== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28390== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==28390== Command: ./proj.out
==28390== 
==28390== Warning: client switching stacks?  SP change: 0x1fff000b48 --> 0x1ffeacc4b0
==28390==          to suppress, use: --max-stackframe=5457560 or greater
==28390== Invalid write of size 4
==28390==    at 0x109104: main (project2.c:20)
==28390==  Address 0x1ffeacc4b4 is on thread 1's stack
==28390==  in frame #0, created by main (project2.c:17)
==28390== 
==28390== Invalid write of size 4
==28390==    at 0x10911C: main (project2.c:21)
==28390==  Address 0x1ffeacc4b8 is on thread 1's stack
==28390==  in frame #0, created by main (project2.c:17)
==28390== 
==28390== Invalid write of size 4
==28390==    at 0x109124: main (project2.c:22)
==28390==  Address 0x1ffeacc4bc is on thread 1's stack
==28390==  in frame #0, created by main (project2.c:17)
==28390== 
==28390== Invalid write of size 8
==28390==    at 0x109137: getchar (stdio.h:49)
==28390==    by 0x109137: main (project2.c:27)
==28390==  Address 0x1ffeacc4a8 is on thread 1's stack
==28390==  in frame #0, created by main (stdio.h:17)
==28390== 
==28390== Invalid read of size 8
==28390==    at 0x4A4D90C: _IO_default_uflow (genops.c:366)
==28390==    by 0x10913B: getchar (stdio.h:49)
==28390==    by 0x10913B: main (project2.c:27)
==28390==  Address 0x1ffeacc4a8 is on thread 1's stack
==28390==  in frame #0, created by _IO_default_uflow (genops.c:361)
==28390== 
==28390== Invalid write of size 1
==28390==    at 0x483A114: memcpy@GLIBC_2.2.5 (vg_replace_strmem.c:1033)
==28390==    by 0x4A410F3: _IO_getline_info (iogetline.c:96)
==28390==    by 0x4A4011A: fgets (iofgets.c:53)
==28390==    by 0x109159: main (project2.c:29)
==28390==  Address 0x1ffead41c0 is on thread 1's stack
==28390==  in frame #3, created by main (project2.c:17)
==28390== 
==28390== Invalid write of size 1
==28390==    at 0x4A40192: fgets (iofgets.c:60)
==28390==    by 0x109159: main (project2.c:29)
==28390==  Address 0x1ffead41ce is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 4
==28390==    at 0x109180: handle_command (project2.c:60)
==28390==    by 0x109180: main (project2.c:32)
==28390==  Address 0x1ffeacc4b4 is on thread 1's stack
==28390==  in frame #0, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 1
==28390==    at 0x4838CC2: __strlen_sse2 (vg_replace_strmem.c:462)
==28390==    by 0x10A2BF: parser (project2.c:81)
==28390==    by 0x10A2BF: command_p (project2.c:144)
==28390==    by 0x1091A1: handle_command (project2.c:60)
==28390==    by 0x1091A1: main (project2.c:32)
==28390==  Address 0x1ffead41c0 is on thread 1's stack
==28390==  in frame #2, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 1
==28390==    at 0x4838CD4: __strlen_sse2 (vg_replace_strmem.c:462)
==28390==    by 0x10A2BF: parser (project2.c:81)
==28390==    by 0x10A2BF: command_p (project2.c:144)
==28390==    by 0x1091A1: handle_command (project2.c:60)
==28390==    by 0x1091A1: main (project2.c:32)
==28390==  Address 0x1ffead41c1 is on thread 1's stack
==28390==  in frame #2, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 1
==28390==    at 0x10A2F6: parser (project2.c:88)
==28390==    by 0x10A2F6: command_p (project2.c:144)
==28390==    by 0x1091A1: handle_command (project2.c:60)
==28390==    by 0x1091A1: main (project2.c:32)
==28390==  Address 0x1ffead41c0 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 1
==28390==    at 0x10A36D: parser (project2.c:92)
==28390==    by 0x10A36D: command_p (project2.c:144)
==28390==    by 0x1091A1: handle_command (project2.c:60)
==28390==    by 0x1091A1: main (project2.c:32)
==28390==  Address 0x1ffead41c1 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 4
==28390==    at 0x10A3B0: command_p (project2.c:158)
==28390==    by 0x1091A1: handle_command (project2.c:60)
==28390==    by 0x1091A1: main (project2.c:32)
==28390==  Address 0x1ffeacc4b8 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid write of size 1
==28390==    at 0x4838DC8: strcpy (vg_replace_strmem.c:512)
==28390==    by 0x10A6B2: create_stop (project2.c:333)
==28390==    by 0x10A6B2: command_p (project2.c:160)
==28390==    by 0x1091A1: handle_command (project2.c:60)
==28390==    by 0x1091A1: main (project2.c:32)
==28390==  Address 0x1ffeae41c0 is on thread 1's stack
==28390==  in frame #2, created by main (project2.c:17)
==28390== 
==28390== Invalid write of size 1
==28390==    at 0x4838DD7: strcpy (vg_replace_strmem.c:512)
==28390==    by 0x10A6B2: create_stop (project2.c:333)
==28390==    by 0x10A6B2: command_p (project2.c:160)
==28390==    by 0x1091A1: handle_command (project2.c:60)
==28390==    by 0x1091A1: main (project2.c:32)
==28390==  Address 0x1ffeae41c8 is on thread 1's stack
==28390==  in frame #2, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 4
==28390==    at 0x10A6BE: create_stop (project2.c:334)
==28390==    by 0x10A6BE: command_p (project2.c:160)
==28390==    by 0x1091A1: handle_command (project2.c:60)
==28390==    by 0x1091A1: main (project2.c:32)
==28390==  Address 0x1ffeacc4b8 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 4
==28390==    at 0x10A6D2: create_stop (project2.c:335)
==28390==    by 0x10A6D2: command_p (project2.c:160)
==28390==    by 0x1091A1: handle_command (project2.c:60)
==28390==    by 0x1091A1: main (project2.c:32)
==28390==  Address 0x1ffeacc4b8 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid write of size 8
==28390==    at 0x10A6DF: create_stop (project2.c:334)
==28390==    by 0x10A6DF: command_p (project2.c:160)
==28390==    by 0x1091A1: handle_command (project2.c:60)
==28390==    by 0x1091A1: main (project2.c:32)
==28390==  Address 0x1ffeae41f8 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 4
==28390==    at 0x10A6F7: create_stop (project2.c:336)
==28390==    by 0x10A6F7: command_p (project2.c:160)
==28390==    by 0x1091A1: handle_command (project2.c:60)
==28390==    by 0x1091A1: main (project2.c:32)
==28390==  Address 0x1ffeacc4b8 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid write of size 8
==28390==    at 0x10A6FE: create_stop (project2.c:335)
==28390==    by 0x10A6FE: command_p (project2.c:160)
==28390==    by 0x1091A1: handle_command (project2.c:60)
==28390==    by 0x1091A1: main (project2.c:32)
==28390==  Address 0x1ffeae4200 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid write of size 4
==28390==    at 0x10A70C: create_stop (project2.c:336)
==28390==    by 0x10A70C: command_p (project2.c:160)
==28390==    by 0x1091A1: handle_command (project2.c:60)
==28390==    by 0x1091A1: main (project2.c:32)
==28390==  Address 0x1ffeae4208 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 4
==28390==    at 0x10A714: create_stop (project2.c:337)
==28390==    by 0x10A714: command_p (project2.c:160)
==28390==    by 0x1091A1: handle_command (project2.c:60)
==28390==    by 0x1091A1: main (project2.c:32)
==28390==  Address 0x1ffeacc4b8 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid write of size 8
==28390==    at 0x483A080: memcpy@GLIBC_2.2.5 (vg_replace_strmem.c:1033)
==28390==    by 0x4A410F3: _IO_getline_info (iogetline.c:96)
==28390==    by 0x4A4011A: fgets (iofgets.c:53)
==28390==    by 0x109159: main (project2.c:29)
==28390==  Address 0x1ffead41c0 is on thread 1's stack
==28390==  in frame #3, created by main (project2.c:17)
==28390== 
==28390== Invalid write of size 2
==28390==    at 0x483A0DB: memcpy@GLIBC_2.2.5 (vg_replace_strmem.c:1033)
==28390==    by 0x4A410F3: _IO_getline_info (iogetline.c:96)
==28390==    by 0x4A4011A: fgets (iofgets.c:53)
==28390==    by 0x109159: main (project2.c:29)
==28390==  Address 0x1ffead41c8 is on thread 1's stack
==28390==  in frame #3, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 1
==28390==    at 0x4A608D0: __strcmp_sse2_unaligned (strcmp-sse2-unaligned.S:24)
==28390==    by 0x10A3EF: check_stop (project2.c:368)
==28390==    by 0x10A3EF: command_p (project2.c:158)
==28390==    by 0x1091A1: handle_command (project2.c:60)
==28390==    by 0x1091A1: main (project2.c:32)
==28390==  Address 0x1ffeae41c0 is on thread 1's stack
==28390==  in frame #2, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 1
==28390==    at 0x4839D20: strcmp (vg_replace_strmem.c:848)
==28390==    by 0x10A3EF: check_stop (project2.c:368)
==28390==    by 0x10A3EF: command_p (project2.c:158)
==28390==    by 0x1091A1: handle_command (project2.c:60)
==28390==    by 0x1091A1: main (project2.c:32)
==28390==  Address 0x1ffeae41c1 is on thread 1's stack
==28390==  in frame #2, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 1
==28390==    at 0x4838CC2: __strlen_sse2 (vg_replace_strmem.c:462)
==28390==    by 0x109587: parser (project2.c:81)
==28390==    by 0x109587: command_c (project2.c:179)
==28390==    by 0x10921C: handle_command (project2.c:57)
==28390==    by 0x10921C: main (project2.c:32)
==28390==  Address 0x1ffead41c0 is on thread 1's stack
==28390==  in frame #2, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 1
==28390==    at 0x4838CD4: __strlen_sse2 (vg_replace_strmem.c:462)
==28390==    by 0x109587: parser (project2.c:81)
==28390==    by 0x109587: command_c (project2.c:179)
==28390==    by 0x10921C: handle_command (project2.c:57)
==28390==    by 0x10921C: main (project2.c:32)
==28390==  Address 0x1ffead41c1 is on thread 1's stack
==28390==  in frame #2, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 1
==28390==    at 0x1095B3: parser (project2.c:88)
==28390==    by 0x1095B3: command_c (project2.c:179)
==28390==    by 0x10921C: handle_command (project2.c:57)
==28390==    by 0x10921C: main (project2.c:32)
==28390==  Address 0x1ffead41c0 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 1
==28390==    at 0x10963B: parser (project2.c:92)
==28390==    by 0x10963B: command_c (project2.c:179)
==28390==    by 0x10921C: handle_command (project2.c:57)
==28390==    by 0x10921C: main (project2.c:32)
==28390==  Address 0x1ffead41c1 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 4
==28390==    at 0x1098ED: command_c (project2.c:190)
==28390==    by 0x10921C: handle_command (project2.c:57)
==28390==    by 0x10921C: main (project2.c:32)
==28390==  Address 0x1ffeacc4b4 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid write of size 1
==28390==    at 0x4838DC8: strcpy (vg_replace_strmem.c:512)
==28390==    by 0x109ADB: create_route (project2.c:387)
==28390==    by 0x109ADB: command_c (project2.c:192)
==28390==    by 0x10921C: handle_command (project2.c:57)
==28390==    by 0x10921C: main (project2.c:32)
==28390==  Address 0x1ffeacc4c0 is on thread 1's stack
==28390==  in frame #2, created by main (project2.c:17)
==28390== 
==28390== Invalid write of size 1
==28390==    at 0x4838DD7: strcpy (vg_replace_strmem.c:512)
==28390==    by 0x109ADB: create_route (project2.c:387)
==28390==    by 0x109ADB: command_c (project2.c:192)
==28390==    by 0x10921C: handle_command (project2.c:57)
==28390==    by 0x10921C: main (project2.c:32)
==28390==  Address 0x1ffeacc4c9 is on thread 1's stack
==28390==  in frame #2, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 4
==28390==    at 0x109AE5: create_route (project2.c:388)
==28390==    by 0x109AE5: command_c (project2.c:192)
==28390==    by 0x10921C: handle_command (project2.c:57)
==28390==    by 0x10921C: main (project2.c:32)
==28390==  Address 0x1ffeacc4b4 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid write of size 4
==28390==    at 0x109AF0: create_route (project2.c:388)
==28390==    by 0x109AF0: command_c (project2.c:192)
==28390==    by 0x10921C: handle_command (project2.c:57)
==28390==    by 0x10921C: main (project2.c:32)
==28390==  Address 0x1ffeacc558 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 4
==28390==    at 0x109AFC: create_route (project2.c:389)
==28390==    by 0x109AFC: command_c (project2.c:192)
==28390==    by 0x10921C: handle_command (project2.c:57)
==28390==    by 0x10921C: main (project2.c:32)
==28390==  Address 0x1ffeacc4b4 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid write of size 8
==28390==    at 0x109B0A: create_route (project2.c:389)
==28390==    by 0x109B0A: command_c (project2.c:192)
==28390==    by 0x10921C: handle_command (project2.c:57)
==28390==    by 0x10921C: main (project2.c:32)
==28390==  Address 0x1ffeacc548 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid write of size 4
==28390==    at 0x109B11: create_route (project2.c:391)
==28390==    by 0x109B11: command_c (project2.c:192)
==28390==    by 0x10921C: handle_command (project2.c:57)
==28390==    by 0x10921C: main (project2.c:32)
==28390==  Address 0x1ffeacc53c is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 4
==28390==    at 0x109B18: create_route (project2.c:393)
==28390==    by 0x109B18: command_c (project2.c:192)
==28390==    by 0x10921C: handle_command (project2.c:57)
==28390==    by 0x10921C: main (project2.c:32)
==28390==  Address 0x1ffeacc4b4 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 1
==28390==    at 0x4A608D0: __strcmp_sse2_unaligned (strcmp-sse2-unaligned.S:24)
==28390==    by 0x10993A: get_stops_route (project2.c:408)
==28390==    by 0x10993A: command_c (project2.c:190)
==28390==    by 0x10921C: handle_command (project2.c:57)
==28390==    by 0x10921C: main (project2.c:32)
==28390==  Address 0x1ffeacc4c0 is on thread 1's stack
==28390==  in frame #2, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 1
==28390==    at 0x4839D20: strcmp (vg_replace_strmem.c:848)
==28390==    by 0x10993A: get_stops_route (project2.c:408)
==28390==    by 0x10993A: command_c (project2.c:190)
==28390==    by 0x10921C: handle_command (project2.c:57)
==28390==    by 0x10921C: main (project2.c:32)
==28390==  Address 0x1ffeacc4c1 is on thread 1's stack
==28390==  in frame #2, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 4
==28390==    at 0x1091BC: handle_command (project2.c:64)
==28390==    by 0x1091BC: main (project2.c:32)
==28390==  Address 0x1ffeacc4b8 is on thread 1's stack
==28390==  in frame #0, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 4
==28390==    at 0x1091C4: handle_command (project2.c:64)
==28390==    by 0x1091C4: main (project2.c:32)
==28390==  Address 0x1ffeacc4b4 is on thread 1's stack
==28390==  in frame #0, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 1
==28390==    at 0x4838CC2: __strlen_sse2 (vg_replace_strmem.c:462)
==28390==    by 0x10B0C9: parser (project2.c:81)
==28390==    by 0x10B0C9: command_l (project2.c:224)
==28390==    by 0x1091D2: handle_command (project2.c:64)
==28390==    by 0x1091D2: main (project2.c:32)
==28390==  Address 0x1ffead41c0 is on thread 1's stack
==28390==  in frame #2, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 1
==28390==    at 0x4838CD4: __strlen_sse2 (vg_replace_strmem.c:462)
==28390==    by 0x10B0C9: parser (project2.c:81)
==28390==    by 0x10B0C9: command_l (project2.c:224)
==28390==    by 0x1091D2: handle_command (project2.c:64)
==28390==    by 0x1091D2: main (project2.c:32)
==28390==  Address 0x1ffead41c1 is on thread 1's stack
==28390==  in frame #2, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 1
==28390==    at 0x10B102: parser (project2.c:88)
==28390==    by 0x10B102: command_l (project2.c:224)
==28390==    by 0x1091D2: handle_command (project2.c:64)
==28390==    by 0x1091D2: main (project2.c:32)
==28390==  Address 0x1ffead41c0 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 1
==28390==    at 0x10B174: parser (project2.c:92)
==28390==    by 0x10B174: command_l (project2.c:224)
==28390==    by 0x1091D2: handle_command (project2.c:64)
==28390==    by 0x1091D2: main (project2.c:32)
==28390==  Address 0x1ffead41c1 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 1
==28390==    at 0x10B483: parser (project2.c:116)
==28390==    by 0x10B483: command_l (project2.c:224)
==28390==    by 0x1091D2: handle_command (project2.c:64)
==28390==    by 0x1091D2: main (project2.c:32)
==28390==  Address 0x1ffead41cb is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 1
==28390==    at 0x4839D03: strcmp (vg_replace_strmem.c:848)
==28390==    by 0x10AF0A: find_route (project2.c:628)
==28390==    by 0x10AF0A: is_valid_connection (project2.c:593)
==28390==    by 0x10B1BD: command_l (project2.c:225)
==28390==    by 0x1091D2: handle_command (project2.c:64)
==28390==    by 0x1091D2: main (project2.c:32)
==28390==  Address 0x1ffeacc4c0 is on thread 1's stack
==28390==  in frame #3, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 1
==28390==    at 0x4839D24: strcmp (vg_replace_strmem.c:848)
==28390==    by 0x10AF0A: find_route (project2.c:628)
==28390==    by 0x10AF0A: is_valid_connection (project2.c:593)
==28390==    by 0x10B1BD: command_l (project2.c:225)
==28390==    by 0x1091D2: handle_command (project2.c:64)
==28390==    by 0x1091D2: main (project2.c:32)
==28390==  Address 0x1ffeacc4c1 is on thread 1's stack
==28390==  in frame #3, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 1
==28390==    at 0x4839D03: strcmp (vg_replace_strmem.c:848)
==28390==    by 0x10AF5C: find_stops (project2.c:650)
==28390==    by 0x10AF5C: is_valid_connection (project2.c:599)
==28390==    by 0x10B1BD: command_l (project2.c:225)
==28390==    by 0x1091D2: handle_command (project2.c:64)
==28390==    by 0x1091D2: main (project2.c:32)
==28390==  Address 0x1ffeae41c0 is on thread 1's stack
==28390==  in frame #3, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 1
==28390==    at 0x4839D24: strcmp (vg_replace_strmem.c:848)
==28390==    by 0x10AF5C: find_stops (project2.c:650)
==28390==    by 0x10AF5C: is_valid_connection (project2.c:599)
==28390==    by 0x10B1BD: command_l (project2.c:225)
==28390==    by 0x1091D2: handle_command (project2.c:64)
==28390==    by 0x1091D2: main (project2.c:32)
==28390==  Address 0x1ffeae41c1 is on thread 1's stack
==28390==  in frame #3, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 1
==28390==    at 0x4839D03: strcmp (vg_replace_strmem.c:848)
==28390==    by 0x10AF6F: find_stops (project2.c:653)
==28390==    by 0x10AF6F: is_valid_connection (project2.c:599)
==28390==    by 0x10B1BD: command_l (project2.c:225)
==28390==    by 0x1091D2: handle_command (project2.c:64)
==28390==    by 0x1091D2: main (project2.c:32)
==28390==  Address 0x1ffeae41c0 is on thread 1's stack
==28390==  in frame #3, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 1
==28390==    at 0x4839D24: strcmp (vg_replace_strmem.c:848)
==28390==    by 0x10AF6F: find_stops (project2.c:653)
==28390==    by 0x10AF6F: is_valid_connection (project2.c:599)
==28390==    by 0x10B1BD: command_l (project2.c:225)
==28390==    by 0x1091D2: handle_command (project2.c:64)
==28390==    by 0x1091D2: main (project2.c:32)
==28390==  Address 0x1ffeae41c1 is on thread 1's stack
==28390==  in frame #3, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 4
==28390==    at 0x10AF92: is_valid_connection (project2.c:602)
==28390==    by 0x10B1BD: command_l (project2.c:225)
==28390==    by 0x1091D2: handle_command (project2.c:64)
==28390==    by 0x1091D2: main (project2.c:32)
==28390==  Address 0x1ffeacc53c is on thread 1's stack
==28390==  in frame #2, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 1
==28390==    at 0x4A608D0: __strcmp_sse2_unaligned (strcmp-sse2-unaligned.S:24)
==28390==    by 0x10B20D: command_l (project2.c:229)
==28390==    by 0x1091D2: handle_command (project2.c:64)
==28390==    by 0x1091D2: main (project2.c:32)
==28390==  Address 0x1ffeacc4c0 is on thread 1's stack
==28390==  in frame #2, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 1
==28390==    at 0x4839D20: strcmp (vg_replace_strmem.c:848)
==28390==    by 0x10B20D: command_l (project2.c:229)
==28390==    by 0x1091D2: handle_command (project2.c:64)
==28390==    by 0x1091D2: main (project2.c:32)
==28390==  Address 0x1ffeacc4c1 is on thread 1's stack
==28390==  in frame #2, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 4
==28390==    at 0x10B21F: create_connection (project2.c:512)
==28390==    by 0x10B21F: command_l (project2.c:230)
==28390==    by 0x1091D2: handle_command (project2.c:64)
==28390==    by 0x1091D2: main (project2.c:32)
==28390==  Address 0x1ffeacc4bc is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid write of size 1
==28390==    at 0x4838DC8: strcpy (vg_replace_strmem.c:512)
==28390==    by 0x10B235: create_connection (project2.c:512)
==28390==    by 0x10B235: command_l (project2.c:230)
==28390==    by 0x1091D2: handle_command (project2.c:64)
==28390==    by 0x1091D2: main (project2.c:32)
==28390==  Address 0x1ffeba76c0 is on thread 1's stack
==28390==  in frame #2, created by main (project2.c:17)
==28390== 
==28390== Invalid write of size 1
==28390==    at 0x4838DD7: strcpy (vg_replace_strmem.c:512)
==28390==    by 0x10B235: create_connection (project2.c:512)
==28390==    by 0x10B235: command_l (project2.c:230)
==28390==    by 0x1091D2: handle_command (project2.c:64)
==28390==    by 0x1091D2: main (project2.c:32)
==28390==  Address 0x1ffeba76c9 is on thread 1's stack
==28390==  in frame #2, created by main (project2.c:17)
==28390== 
==28390== Invalid write of size 1
==28390==    at 0x4838DC8: strcpy (vg_replace_strmem.c:512)
==28390==    by 0x10B242: create_connection (project2.c:513)
==28390==    by 0x10B242: command_l (project2.c:230)
==28390==    by 0x1091D2: handle_command (project2.c:64)
==28390==    by 0x1091D2: main (project2.c:32)
==28390==  Address 0x1ffeba76d5 is on thread 1's stack
==28390==  in frame #2, created by main (project2.c:17)
==28390== 
==28390== Invalid write of size 1
==28390==    at 0x4838DD7: strcpy (vg_replace_strmem.c:512)
==28390==    by 0x10B242: create_connection (project2.c:513)
==28390==    by 0x10B242: command_l (project2.c:230)
==28390==    by 0x1091D2: handle_command (project2.c:64)
==28390==    by 0x1091D2: main (project2.c:32)
==28390==  Address 0x1ffeba76dd is on thread 1's stack
==28390==  in frame #2, created by main (project2.c:17)
==28390== 
==28390== Invalid write of size 1
==28390==    at 0x4838DC8: strcpy (vg_replace_strmem.c:512)
==28390==    by 0x10B24F: create_connection (project2.c:514)
==28390==    by 0x10B24F: command_l (project2.c:230)
==28390==    by 0x1091D2: handle_command (project2.c:64)
==28390==    by 0x1091D2: main (project2.c:32)
==28390==  Address 0x1ffeba7708 is on thread 1's stack
==28390==  in frame #2, created by main (project2.c:17)
==28390== 
==28390== Invalid write of size 1
==28390==    at 0x4838DD7: strcpy (vg_replace_strmem.c:512)
==28390==    by 0x10B24F: create_connection (project2.c:514)
==28390==    by 0x10B24F: command_l (project2.c:230)
==28390==    by 0x1091D2: handle_command (project2.c:64)
==28390==    by 0x1091D2: main (project2.c:32)
==28390==  Address 0x1ffeba7710 is on thread 1's stack
==28390==  in frame #2, created by main (project2.c:17)
==28390== 
==28390== Invalid write of size 8
==28390==    at 0x10B261: create_connection (project2.c:515)
==28390==    by 0x10B261: command_l (project2.c:230)
==28390==    by 0x1091D2: handle_command (project2.c:64)
==28390==    by 0x1091D2: main (project2.c:32)
==28390==  Address 0x1ffeba7748 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 8
==28390==    at 0x10B273: create_connection (project2.c:518)
==28390==    by 0x10B273: command_l (project2.c:230)
==28390==    by 0x1091D2: handle_command (project2.c:64)
==28390==    by 0x1091D2: main (project2.c:32)
==28390==  Address 0x1ffeacc548 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 8
==28390==    at 0x10B27C: create_connection (project2.c:518)
==28390==    by 0x10B27C: command_l (project2.c:230)
==28390==    by 0x1091D2: handle_command (project2.c:64)
==28390==    by 0x1091D2: main (project2.c:32)
==28390==  Address 0x1ffeba7748 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid write of size 8
==28390==    at 0x10B285: create_connection (project2.c:516)
==28390==    by 0x10B285: command_l (project2.c:230)
==28390==    by 0x1091D2: handle_command (project2.c:64)
==28390==    by 0x1091D2: main (project2.c:32)
==28390==  Address 0x1ffeba7750 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 4
==28390==    at 0x10B28E: command_l (project2.c:231)
==28390==    by 0x1091D2: handle_command (project2.c:64)
==28390==    by 0x1091D2: main (project2.c:32)
==28390==  Address 0x1ffeacc558 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 8
==28390==    at 0x10B295: create_connection (project2.c:519)
==28390==    by 0x10B295: command_l (project2.c:230)
==28390==    by 0x1091D2: handle_command (project2.c:64)
==28390==    by 0x1091D2: main (project2.c:32)
==28390==  Address 0x1ffeacc550 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid write of size 8
==28390==    at 0x10B29E: create_connection (project2.c:518)
==28390==    by 0x10B29E: command_l (project2.c:230)
==28390==    by 0x1091D2: handle_command (project2.c:64)
==28390==    by 0x1091D2: main (project2.c:32)
==28390==  Address 0x1ffeacc548 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid write of size 8
==28390==    at 0x10B2A7: create_connection (project2.c:519)
==28390==    by 0x10B2A7: command_l (project2.c:230)
==28390==    by 0x1091D2: handle_command (project2.c:64)
==28390==    by 0x1091D2: main (project2.c:32)
==28390==  Address 0x1ffeacc550 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid write of size 4
==28390==    at 0x10B54D: add_route_information (project2.c:531)
==28390==    by 0x10B54D: command_l (project2.c:232)
==28390==    by 0x1091D2: handle_command (project2.c:64)
==28390==    by 0x1091D2: main (project2.c:32)
==28390==  Address 0x1ffeacc558 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid write of size 1
==28390==    at 0x4838DC8: strcpy (vg_replace_strmem.c:512)
==28390==    by 0x10B55C: add_route_information (project2.c:532)
==28390==    by 0x10B55C: command_l (project2.c:232)
==28390==    by 0x1091D2: handle_command (project2.c:64)
==28390==    by 0x1091D2: main (project2.c:32)
==28390==  Address 0x1ffeacc4d5 is on thread 1's stack
==28390==  in frame #2, created by main (project2.c:17)
==28390== 
==28390== Invalid write of size 1
==28390==    at 0x4838DD7: strcpy (vg_replace_strmem.c:512)
==28390==    by 0x10B55C: add_route_information (project2.c:532)
==28390==    by 0x10B55C: command_l (project2.c:232)
==28390==    by 0x1091D2: handle_command (project2.c:64)
==28390==    by 0x1091D2: main (project2.c:32)
==28390==  Address 0x1ffeacc4dd is on thread 1's stack
==28390==  in frame #2, created by main (project2.c:17)
==28390== 
==28390== Invalid write of size 1
==28390==    at 0x4838DC8: strcpy (vg_replace_strmem.c:512)
==28390==    by 0x10B56D: add_route_information (project2.c:533)
==28390==    by 0x10B56D: command_l (project2.c:232)
==28390==    by 0x1091D2: handle_command (project2.c:64)
==28390==    by 0x1091D2: main (project2.c:32)
==28390==  Address 0x1ffeacc508 is on thread 1's stack
==28390==  in frame #2, created by main (project2.c:17)
==28390== 
==28390== Invalid write of size 1
==28390==    at 0x4838DD7: strcpy (vg_replace_strmem.c:512)
==28390==    by 0x10B56D: add_route_information (project2.c:533)
==28390==    by 0x10B56D: command_l (project2.c:232)
==28390==    by 0x1091D2: handle_command (project2.c:64)
==28390==    by 0x1091D2: main (project2.c:32)
==28390==  Address 0x1ffeacc510 is on thread 1's stack
==28390==  in frame #2, created by main (project2.c:17)
==28390== 
==28390== Invalid write of size 8
==28390==    at 0x10B56E: add_route_information (project2.c:534)
==28390==    by 0x10B56E: command_l (project2.c:232)
==28390==    by 0x1091D2: handle_command (project2.c:64)
==28390==    by 0x1091D2: main (project2.c:32)
==28390==  Address 0x1ffeacc53c is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 4
==28390==    at 0x10B37D: command_l (project2.c:246)
==28390==    by 0x1091D2: handle_command (project2.c:64)
==28390==    by 0x1091D2: main (project2.c:32)
==28390==  Address 0x1ffeacc4bc is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 1
==28390==    at 0x4A608D0: __strcmp_sse2_unaligned (strcmp-sse2-unaligned.S:24)
==28390==    by 0x10AFA6: is_valid_connection (project2.c:603)
==28390==    by 0x10B1BD: command_l (project2.c:225)
==28390==    by 0x1091D2: handle_command (project2.c:64)
==28390==    by 0x1091D2: main (project2.c:32)
==28390==  Address 0x1ffeacc508 is on thread 1's stack
==28390==  in frame #3, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 1
==28390==    at 0x4839D20: strcmp (vg_replace_strmem.c:848)
==28390==    by 0x10AFA6: is_valid_connection (project2.c:603)
==28390==    by 0x10B1BD: command_l (project2.c:225)
==28390==    by 0x1091D2: handle_command (project2.c:64)
==28390==    by 0x1091D2: main (project2.c:32)
==28390==  Address 0x1ffeacc509 is on thread 1's stack
==28390==  in frame #3, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 1
==28390==    at 0x4839D03: strcmp (vg_replace_strmem.c:848)
==28390==    by 0x10B2CC: command_l (project2.c:234)
==28390==    by 0x1091D2: handle_command (project2.c:64)
==28390==    by 0x1091D2: main (project2.c:32)
==28390==  Address 0x1ffeacc508 is on thread 1's stack
==28390==  in frame #2, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 1
==28390==    at 0x4839D24: strcmp (vg_replace_strmem.c:848)
==28390==    by 0x10B2CC: command_l (project2.c:234)
==28390==    by 0x1091D2: handle_command (project2.c:64)
==28390==    by 0x1091D2: main (project2.c:32)
==28390==  Address 0x1ffeacc509 is on thread 1's stack
==28390==  in frame #2, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 4
==28390==    at 0x10B2D2: command_l (project2.c:234)
==28390==    by 0x1091D2: handle_command (project2.c:64)
==28390==    by 0x1091D2: main (project2.c:32)
==28390==  Address 0x1ffeacc4bc is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid write of size 4
==28390==    at 0x10B2D8: change_route_information (project2.c:550)
==28390==    by 0x10B2D8: command_l (project2.c:236)
==28390==    by 0x1091D2: handle_command (project2.c:64)
==28390==    by 0x1091D2: main (project2.c:32)
==28390==  Address 0x1ffeacc558 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid write of size 1
==28390==    at 0x4838DC8: strcpy (vg_replace_strmem.c:512)
==28390==    by 0x10B2FF: change_route_information (project2.c:552)
==28390==    by 0x10B2FF: command_l (project2.c:236)
==28390==    by 0x1091D2: handle_command (project2.c:64)
==28390==    by 0x1091D2: main (project2.c:32)
==28390==  Address 0x1ffeacc508 is on thread 1's stack
==28390==  in frame #2, created by main (project2.c:17)
==28390== 
==28390== Invalid write of size 1
==28390==    at 0x4838DD7: strcpy (vg_replace_strmem.c:512)
==28390==    by 0x10B2FF: change_route_information (project2.c:552)
==28390==    by 0x10B2FF: command_l (project2.c:236)
==28390==    by 0x1091D2: handle_command (project2.c:64)
==28390==    by 0x1091D2: main (project2.c:32)
==28390==  Address 0x1ffeacc510 is on thread 1's stack
==28390==  in frame #2, created by main (project2.c:17)
==28390== 
==28390== Invalid write of size 4
==28390==    at 0x10B304: change_route_information (project2.c:553)
==28390==    by 0x10B304: command_l (project2.c:236)
==28390==    by 0x1091D2: handle_command (project2.c:64)
==28390==    by 0x1091D2: main (project2.c:32)
==28390==  Address 0x1ffeacc540 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 1
==28390==    at 0x4A608D0: __strcmp_sse2_unaligned (strcmp-sse2-unaligned.S:24)
==28390==    by 0x10B354: change_route_information (project2.c:556)
==28390==    by 0x10B354: command_l (project2.c:236)
==28390==    by 0x1091D2: handle_command (project2.c:64)
==28390==    by 0x1091D2: main (project2.c:32)
==28390==  Address 0x1ffeba7708 is on thread 1's stack
==28390==  in frame #2, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 1
==28390==    at 0x4839D20: strcmp (vg_replace_strmem.c:848)
==28390==    by 0x10B354: change_route_information (project2.c:556)
==28390==    by 0x10B354: command_l (project2.c:236)
==28390==    by 0x1091D2: handle_command (project2.c:64)
==28390==    by 0x1091D2: main (project2.c:32)
==28390==  Address 0x1ffeba7709 is on thread 1's stack
==28390==  in frame #2, created by main (project2.c:17)
==28390== 
==28390== Invalid write of size 4
==28390==    at 0x10B362: change_route_information (project2.c:561)
==28390==    by 0x10B362: command_l (project2.c:236)
==28390==    by 0x1091D2: handle_command (project2.c:64)
==28390==    by 0x1091D2: main (project2.c:32)
==28390==  Address 0x1ffeba773c is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid write of size 4
==28390==    at 0x10B36B: change_route_information (project2.c:562)
==28390==    by 0x10B36B: command_l (project2.c:236)
==28390==    by 0x1091D2: handle_command (project2.c:64)
==28390==    by 0x1091D2: main (project2.c:32)
==28390==  Address 0x1ffeba77d8 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 4
==28390==    at 0x109965: command_c (project2.c:185)
==28390==    by 0x10921C: handle_command (project2.c:57)
==28390==    by 0x10921C: main (project2.c:32)
==28390==  Address 0x1ffeacc4b4 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 16
==28390==    at 0x109988: command_c (project2.c:186)
==28390==    by 0x10921C: handle_command (project2.c:57)
==28390==    by 0x10921C: main (project2.c:32)
==28390==  Address 0x1ffeacc4d0 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 16
==28390==    at 0x10998D: command_c (project2.c:186)
==28390==    by 0x10921C: handle_command (project2.c:57)
==28390==    by 0x10921C: main (project2.c:32)
==28390==  Address 0x1ffeacc4c0 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 16
==28390==    at 0x109991: command_c (project2.c:186)
==28390==    by 0x10921C: handle_command (project2.c:57)
==28390==    by 0x10921C: main (project2.c:32)
==28390==  Address 0x1ffeacc4e0 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 16
==28390==    at 0x109996: command_c (project2.c:186)
==28390==    by 0x10921C: handle_command (project2.c:57)
==28390==    by 0x10921C: main (project2.c:32)
==28390==  Address 0x1ffeacc4f0 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 16
==28390==    at 0x1099A0: command_c (project2.c:186)
==28390==    by 0x10921C: handle_command (project2.c:57)
==28390==    by 0x10921C: main (project2.c:32)
==28390==  Address 0x1ffeacc500 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 16
==28390==    at 0x1099A5: command_c (project2.c:186)
==28390==    by 0x10921C: handle_command (project2.c:57)
==28390==    by 0x10921C: main (project2.c:32)
==28390==  Address 0x1ffeacc510 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 16
==28390==    at 0x1099AF: command_c (project2.c:186)
==28390==    by 0x10921C: handle_command (project2.c:57)
==28390==    by 0x10921C: main (project2.c:32)
==28390==  Address 0x1ffeacc520 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== 
==28390== More than 100 errors detected.  Subsequent errors
==28390== will still be recorded, but in less detail than before.
==28390== Invalid read of size 16
==28390==    at 0x1099B4: command_c (project2.c:186)
==28390==    by 0x10921C: handle_command (project2.c:57)
==28390==    by 0x10921C: main (project2.c:32)
==28390==  Address 0x1ffeacc550 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 16
==28390==    at 0x1099BC: command_c (project2.c:186)
==28390==    by 0x10921C: handle_command (project2.c:57)
==28390==    by 0x10921C: main (project2.c:32)
==28390==  Address 0x1ffeacc530 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 16
==28390==    at 0x1099C1: command_c (project2.c:186)
==28390==    by 0x10921C: handle_command (project2.c:57)
==28390==    by 0x10921C: main (project2.c:32)
==28390==  Address 0x1ffeacc540 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 4
==28390==    at 0x109AA8: command_c (project2.c:185)
==28390==    by 0x10921C: handle_command (project2.c:57)
==28390==    by 0x10921C: main (project2.c:32)
==28390==  Address 0x1ffeacc4b4 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 4
==28390==    at 0x10A592: command_p (project2.c:148)
==28390==    by 0x1091A1: handle_command (project2.c:60)
==28390==    by 0x1091A1: main (project2.c:32)
==28390==  Address 0x1ffeacc4b8 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 8
==28390==    at 0x10A5C0: list_stops (project2.c:351)
==28390==    by 0x10A5C0: command_p (project2.c:148)
==28390==    by 0x1091A1: handle_command (project2.c:60)
==28390==    by 0x1091A1: main (project2.c:32)
==28390==  Address 0x1ffeae4208 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 8
==28390==    at 0x10A5C6: list_stops (project2.c:351)
==28390==    by 0x10A5C6: command_p (project2.c:148)
==28390==    by 0x1091A1: handle_command (project2.c:60)
==28390==    by 0x1091A1: main (project2.c:32)
==28390==  Address 0x1ffeae4200 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 8
==28390==    at 0x10A5C9: list_stops (project2.c:351)
==28390==    by 0x10A5C9: command_p (project2.c:148)
==28390==    by 0x1091A1: handle_command (project2.c:60)
==28390==    by 0x1091A1: main (project2.c:32)
==28390==  Address 0x1ffeae41f8 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 8
==28390==    at 0x10A5CC: list_stops (project2.c:351)
==28390==    by 0x10A5CC: command_p (project2.c:148)
==28390==    by 0x1091A1: handle_command (project2.c:60)
==28390==    by 0x1091A1: main (project2.c:32)
==28390==  Address 0x1ffeae41f0 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 8
==28390==    at 0x10A5CF: list_stops (project2.c:351)
==28390==    by 0x10A5CF: command_p (project2.c:148)
==28390==    by 0x1091A1: handle_command (project2.c:60)
==28390==    by 0x1091A1: main (project2.c:32)
==28390==  Address 0x1ffeae41e8 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 8
==28390==    at 0x10A5D2: list_stops (project2.c:351)
==28390==    by 0x10A5D2: command_p (project2.c:148)
==28390==    by 0x1091A1: handle_command (project2.c:60)
==28390==    by 0x1091A1: main (project2.c:32)
==28390==  Address 0x1ffeae41e0 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 8
==28390==    at 0x10A5D5: list_stops (project2.c:351)
==28390==    by 0x10A5D5: command_p (project2.c:148)
==28390==    by 0x1091A1: handle_command (project2.c:60)
==28390==    by 0x1091A1: main (project2.c:32)
==28390==  Address 0x1ffeae41d8 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 8
==28390==    at 0x10A5D8: list_stops (project2.c:351)
==28390==    by 0x10A5D8: command_p (project2.c:148)
==28390==    by 0x1091A1: handle_command (project2.c:60)
==28390==    by 0x1091A1: main (project2.c:32)
==28390==  Address 0x1ffeae41d0 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 8
==28390==    at 0x10A5DB: list_stops (project2.c:351)
==28390==    by 0x10A5DB: command_p (project2.c:148)
==28390==    by 0x1091A1: handle_command (project2.c:60)
==28390==    by 0x1091A1: main (project2.c:32)
==28390==  Address 0x1ffeae41c8 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 8
==28390==    at 0x10A5DE: list_stops (project2.c:351)
==28390==    by 0x10A5DE: command_p (project2.c:148)
==28390==    by 0x1091A1: handle_command (project2.c:60)
==28390==    by 0x1091A1: main (project2.c:32)
==28390==  Address 0x1ffeae41c0 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 1
==28390==    at 0x4839D03: strcmp (vg_replace_strmem.c:848)
==28390==    by 0x109BEC: add_routes_passing (project2.c:301)
==28390==    by 0x10A5F3: list_stops (project2.c:351)
==28390==    by 0x10A5F3: command_p (project2.c:148)
==28390==    by 0x1091A1: handle_command (project2.c:60)
==28390==    by 0x1091A1: main (project2.c:32)
==28390==  Address 0x1ffeacc4d5 is on thread 1's stack
==28390==  in frame #3, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 1
==28390==    at 0x4839D24: strcmp (vg_replace_strmem.c:848)
==28390==    by 0x109BEC: add_routes_passing (project2.c:301)
==28390==    by 0x10A5F3: list_stops (project2.c:351)
==28390==    by 0x10A5F3: command_p (project2.c:148)
==28390==    by 0x1091A1: handle_command (project2.c:60)
==28390==    by 0x1091A1: main (project2.c:32)
==28390==  Address 0x1ffeacc4d6 is on thread 1's stack
==28390==  in frame #3, created by main (project2.c:17)
==28390== 
==28390== Invalid write of size 8
==28390==    at 0x10A610: list_stops (project2.c:351)
==28390==    by 0x10A610: command_p (project2.c:148)
==28390==    by 0x1091A1: handle_command (project2.c:60)
==28390==    by 0x1091A1: main (project2.c:32)
==28390==  Address 0x1ffeae41c0 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid write of size 8
==28390==    at 0x10A61D: list_stops (project2.c:351)
==28390==    by 0x10A61D: command_p (project2.c:148)
==28390==    by 0x1091A1: handle_command (project2.c:60)
==28390==    by 0x1091A1: main (project2.c:32)
==28390==  Address 0x1ffeae41d0 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid write of size 8
==28390==    at 0x10A62A: list_stops (project2.c:351)
==28390==    by 0x10A62A: command_p (project2.c:148)
==28390==    by 0x1091A1: handle_command (project2.c:60)
==28390==    by 0x1091A1: main (project2.c:32)
==28390==  Address 0x1ffeae41e0 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid write of size 8
==28390==    at 0x10A637: list_stops (project2.c:351)
==28390==    by 0x10A637: command_p (project2.c:148)
==28390==    by 0x1091A1: handle_command (project2.c:60)
==28390==    by 0x1091A1: main (project2.c:32)
==28390==  Address 0x1ffeae41f0 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 8
==28390==    at 0x10A63B: list_stops (project2.c:352)
==28390==    by 0x10A63B: command_p (project2.c:148)
==28390==    by 0x1091A1: handle_command (project2.c:60)
==28390==    by 0x1091A1: main (project2.c:32)
==28390==  Address 0x1ffeae41f8 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid write of size 8
==28390==    at 0x10A64D: list_stops (project2.c:351)
==28390==    by 0x10A64D: command_p (project2.c:148)
==28390==    by 0x1091A1: handle_command (project2.c:60)
==28390==    by 0x1091A1: main (project2.c:32)
==28390==  Address 0x1ffeae4200 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 4
==28390==    at 0x10A651: list_stops (project2.c:352)
==28390==    by 0x10A651: command_p (project2.c:148)
==28390==    by 0x1091A1: handle_command (project2.c:60)
==28390==    by 0x1091A1: main (project2.c:32)
==28390==  Address 0x1ffeae4208 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 8
==28390==    at 0x10A654: list_stops (project2.c:352)
==28390==    by 0x10A654: command_p (project2.c:148)
==28390==    by 0x1091A1: handle_command (project2.c:60)
==28390==    by 0x1091A1: main (project2.c:32)
==28390==  Address 0x1ffeae4200 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 1
==28390==    at 0x4838CC2: __strlen_sse2 (vg_replace_strmem.c:462)
==28390==    by 0x4A21B1E: vfprintf (vfprintf.c:1638)
==28390==    by 0x4A28735: printf (printf.c:33)
==28390==    by 0x10A65D: list_stops (project2.c:352)
==28390==    by 0x10A65D: command_p (project2.c:148)
==28390==    by 0x1091A1: handle_command (project2.c:60)
==28390==    by 0x1091A1: main (project2.c:32)
==28390==  Address 0x1ffeae41c0 is on thread 1's stack
==28390==  in frame #4, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 1
==28390==    at 0x4838CD4: __strlen_sse2 (vg_replace_strmem.c:462)
==28390==    by 0x4A21B1E: vfprintf (vfprintf.c:1638)
==28390==    by 0x4A28735: printf (printf.c:33)
==28390==    by 0x10A65D: list_stops (project2.c:352)
==28390==    by 0x10A65D: command_p (project2.c:148)
==28390==    by 0x1091A1: handle_command (project2.c:60)
==28390==    by 0x1091A1: main (project2.c:32)
==28390==  Address 0x1ffeae41c1 is on thread 1's stack
==28390==  in frame #4, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 1
==28390==    at 0x483D528: mempcpy (vg_replace_strmem.c:1536)
==28390==    by 0x4A4BB24: _IO_new_file_xsputn (fileops.c:1243)
==28390==    by 0x4A4BB24: _IO_file_xsputn@@GLIBC_2.2.5 (fileops.c:1204)
==28390==    by 0x4A2032A: vfprintf (vfprintf.c:1638)
==28390==    by 0x4A28735: printf (printf.c:33)
==28390==    by 0x10A65D: list_stops (project2.c:352)
==28390==    by 0x10A65D: command_p (project2.c:148)
==28390==    by 0x1091A1: handle_command (project2.c:60)
==28390==    by 0x1091A1: main (project2.c:32)
==28390==  Address 0x1ffeae41c0 is on thread 1's stack
==28390==  in frame #5, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 1
==28390==    at 0x483D536: mempcpy (vg_replace_strmem.c:1536)
==28390==    by 0x4A4BB24: _IO_new_file_xsputn (fileops.c:1243)
==28390==    by 0x4A4BB24: _IO_file_xsputn@@GLIBC_2.2.5 (fileops.c:1204)
==28390==    by 0x4A2032A: vfprintf (vfprintf.c:1638)
==28390==    by 0x4A28735: printf (printf.c:33)
==28390==    by 0x10A65D: list_stops (project2.c:352)
==28390==    by 0x10A65D: command_p (project2.c:148)
==28390==    by 0x1091A1: handle_command (project2.c:60)
==28390==    by 0x1091A1: main (project2.c:32)
==28390==  Address 0x1ffeae41c2 is on thread 1's stack
==28390==  in frame #5, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 1
==28390==    at 0x4839D03: strcmp (vg_replace_strmem.c:848)
==28390==    by 0x109BFE: add_routes_passing (project2.c:305)
==28390==    by 0x10A5F3: list_stops (project2.c:351)
==28390==    by 0x10A5F3: command_p (project2.c:148)
==28390==    by 0x1091A1: handle_command (project2.c:60)
==28390==    by 0x1091A1: main (project2.c:32)
==28390==  Address 0x1ffeacc508 is on thread 1's stack
==28390==  in frame #3, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 1
==28390==    at 0x4839D24: strcmp (vg_replace_strmem.c:848)
==28390==    by 0x109BFE: add_routes_passing (project2.c:305)
==28390==    by 0x10A5F3: list_stops (project2.c:351)
==28390==    by 0x10A5F3: command_p (project2.c:148)
==28390==    by 0x1091A1: handle_command (project2.c:60)
==28390==    by 0x1091A1: main (project2.c:32)
==28390==  Address 0x1ffeacc509 is on thread 1's stack
==28390==  in frame #3, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 4
==28390==    at 0x109C03: add_routes_passing (project2.c:300)
==28390==    by 0x10A5F3: list_stops (project2.c:351)
==28390==    by 0x10A5F3: command_p (project2.c:148)
==28390==    by 0x1091A1: handle_command (project2.c:60)
==28390==    by 0x1091A1: main (project2.c:32)
==28390==  Address 0x1ffeacc53c is on thread 1's stack
==28390==  in frame #2, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 4
==28390==    at 0x109C0C: add_routes_passing (project2.c:314)
==28390==    by 0x10A5F3: list_stops (project2.c:351)
==28390==    by 0x10A5F3: command_p (project2.c:148)
==28390==    by 0x1091A1: handle_command (project2.c:60)
==28390==    by 0x1091A1: main (project2.c:32)
==28390==  Address 0x1ffeacc540 is on thread 1's stack
==28390==  in frame #2, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 1
==28390==    at 0x4839D03: strcmp (vg_replace_strmem.c:848)
==28390==    by 0x109C39: add_routes_passing (project2.c:315)
==28390==    by 0x10A5F3: list_stops (project2.c:351)
==28390==    by 0x10A5F3: command_p (project2.c:148)
==28390==    by 0x1091A1: handle_command (project2.c:60)
==28390==    by 0x1091A1: main (project2.c:32)
==28390==  Address 0x1ffeba7708 is on thread 1's stack
==28390==  in frame #3, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 1
==28390==    at 0x4839D24: strcmp (vg_replace_strmem.c:848)
==28390==    by 0x109C39: add_routes_passing (project2.c:315)
==28390==    by 0x10A5F3: list_stops (project2.c:351)
==28390==    by 0x10A5F3: command_p (project2.c:148)
==28390==    by 0x1091A1: handle_command (project2.c:60)
==28390==    by 0x1091A1: main (project2.c:32)
==28390==  Address 0x1ffeba7709 is on thread 1's stack
==28390==  in frame #3, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 4
==28390==    at 0x109C18: add_routes_passing (project2.c:319)
==28390==    by 0x10A5F3: list_stops (project2.c:351)
==28390==    by 0x10A5F3: command_p (project2.c:148)
==28390==    by 0x1091A1: handle_command (project2.c:60)
==28390==    by 0x1091A1: main (project2.c:32)
==28390==  Address 0x1ffeba773c is on thread 1's stack
==28390==  in frame #2, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 4
==28390==    at 0x1091E0: handle_command (project2.c:68)
==28390==    by 0x1091E0: main (project2.c:32)
==28390==  Address 0x1ffeacc4b4 is on thread 1's stack
==28390==  in frame #0, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 4
==28390==    at 0x1091E5: handle_command (project2.c:68)
==28390==    by 0x1091E5: main (project2.c:32)
==28390==  Address 0x1ffeacc4b8 is on thread 1's stack
==28390==  in frame #0, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 8
==28390==    at 0x109D1F: command_i (project2.c:261)
==28390==    by 0x1091FD: handle_command (project2.c:68)
==28390==    by 0x1091FD: main (project2.c:32)
==28390==  Address 0x1ffeae4208 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 8
==28390==    at 0x109D29: command_i (project2.c:261)
==28390==    by 0x1091FD: handle_command (project2.c:68)
==28390==    by 0x1091FD: main (project2.c:32)
==28390==  Address 0x1ffeae4200 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 8
==28390==    at 0x109D2D: command_i (project2.c:261)
==28390==    by 0x1091FD: handle_command (project2.c:68)
==28390==    by 0x1091FD: main (project2.c:32)
==28390==  Address 0x1ffeae41f8 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 8
==28390==    at 0x109D31: command_i (project2.c:261)
==28390==    by 0x1091FD: handle_command (project2.c:68)
==28390==    by 0x1091FD: main (project2.c:32)
==28390==  Address 0x1ffeae41f0 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 8
==28390==    at 0x109D35: command_i (project2.c:261)
==28390==    by 0x1091FD: handle_command (project2.c:68)
==28390==    by 0x1091FD: main (project2.c:32)
==28390==  Address 0x1ffeae41e8 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 8
==28390==    at 0x109D39: command_i (project2.c:261)
==28390==    by 0x1091FD: handle_command (project2.c:68)
==28390==    by 0x1091FD: main (project2.c:32)
==28390==  Address 0x1ffeae41e0 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 8
==28390==    at 0x109D3D: command_i (project2.c:261)
==28390==    by 0x1091FD: handle_command (project2.c:68)
==28390==    by 0x1091FD: main (project2.c:32)
==28390==  Address 0x1ffeae41d8 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 8
==28390==    at 0x109D41: command_i (project2.c:261)
==28390==    by 0x1091FD: handle_command (project2.c:68)
==28390==    by 0x1091FD: main (project2.c:32)
==28390==  Address 0x1ffeae41d0 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 8
==28390==    at 0x109D45: command_i (project2.c:261)
==28390==    by 0x1091FD: handle_command (project2.c:68)
==28390==    by 0x1091FD: main (project2.c:32)
==28390==  Address 0x1ffeae41c8 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 8
==28390==    at 0x109D49: command_i (project2.c:261)
==28390==    by 0x1091FD: handle_command (project2.c:68)
==28390==    by 0x1091FD: main (project2.c:32)
==28390==  Address 0x1ffeae41c0 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid write of size 8
==28390==    at 0x109D66: command_i (project2.c:261)
==28390==    by 0x1091FD: handle_command (project2.c:68)
==28390==    by 0x1091FD: main (project2.c:32)
==28390==  Address 0x1ffeae41c0 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid write of size 8
==28390==    at 0x109D73: command_i (project2.c:261)
==28390==    by 0x1091FD: handle_command (project2.c:68)
==28390==    by 0x1091FD: main (project2.c:32)
==28390==  Address 0x1ffeae41d0 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid write of size 8
==28390==    at 0x109D81: command_i (project2.c:261)
==28390==    by 0x1091FD: handle_command (project2.c:68)
==28390==    by 0x1091FD: main (project2.c:32)
==28390==  Address 0x1ffeae41e0 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid write of size 8
==28390==    at 0x109D8F: command_i (project2.c:261)
==28390==    by 0x1091FD: handle_command (project2.c:68)
==28390==    by 0x1091FD: main (project2.c:32)
==28390==  Address 0x1ffeae41f0 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid write of size 8
==28390==    at 0x109DA1: command_i (project2.c:261)
==28390==    by 0x1091FD: handle_command (project2.c:68)
==28390==    by 0x1091FD: main (project2.c:32)
==28390==  Address 0x1ffeae4200 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 4
==28390==    at 0x109DA6: command_i (project2.c:263)
==28390==    by 0x1091FD: handle_command (project2.c:68)
==28390==    by 0x1091FD: main (project2.c:32)
==28390==  Address 0x1ffeae4208 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 16
==28390==    at 0x109E3E: command_i (project2.c:267)
==28390==    by 0x1091FD: handle_command (project2.c:68)
==28390==    by 0x1091FD: main (project2.c:32)
==28390==  Address 0x1ffeacc4c0 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 16
==28390==    at 0x109E53: command_i (project2.c:267)
==28390==    by 0x1091FD: handle_command (project2.c:68)
==28390==    by 0x1091FD: main (project2.c:32)
==28390==  Address 0x1ffeacc4d0 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 16
==28390==    at 0x109E59: command_i (project2.c:267)
==28390==    by 0x1091FD: handle_command (project2.c:68)
==28390==    by 0x1091FD: main (project2.c:32)
==28390==  Address 0x1ffeacc4e0 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 4
==28390==    at 0x109E67: command_i (project2.c:267)
==28390==    by 0x1091FD: handle_command (project2.c:68)
==28390==    by 0x1091FD: main (project2.c:32)
==28390==  Address 0x1ffeacc53c is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 16
==28390==    at 0x109E77: check_first_and_last (project2.c:703)
==28390==    by 0x109E77: command_i (project2.c:268)
==28390==    by 0x1091FD: handle_command (project2.c:68)
==28390==    by 0x1091FD: main (project2.c:32)
==28390==  Address 0x1ffeacc4f0 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 16
==28390==    at 0x109E7D: check_first_and_last (project2.c:703)
==28390==    by 0x109E7D: command_i (project2.c:268)
==28390==    by 0x1091FD: handle_command (project2.c:68)
==28390==    by 0x1091FD: main (project2.c:32)
==28390==  Address 0x1ffeacc500 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 16
==28390==    at 0x109E8B: check_first_and_last (project2.c:703)
==28390==    by 0x109E8B: command_i (project2.c:268)
==28390==    by 0x1091FD: handle_command (project2.c:68)
==28390==    by 0x1091FD: main (project2.c:32)
==28390==  Address 0x1ffeacc510 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 16
==28390==    at 0x109E91: check_first_and_last (project2.c:703)
==28390==    by 0x109E91: command_i (project2.c:268)
==28390==    by 0x1091FD: handle_command (project2.c:68)
==28390==    by 0x1091FD: main (project2.c:32)
==28390==  Address 0x1ffeacc520 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 16
==28390==    at 0x109E9F: check_first_and_last (project2.c:703)
==28390==    by 0x109E9F: command_i (project2.c:268)
==28390==    by 0x1091FD: handle_command (project2.c:68)
==28390==    by 0x1091FD: main (project2.c:32)
==28390==  Address 0x1ffeacc530 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 16
==28390==    at 0x109EA5: check_first_and_last (project2.c:703)
==28390==    by 0x109EA5: command_i (project2.c:268)
==28390==    by 0x1091FD: handle_command (project2.c:68)
==28390==    by 0x1091FD: main (project2.c:32)
==28390==  Address 0x1ffeacc540 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 16
==28390==    at 0x109EB6: check_first_and_last (project2.c:703)
==28390==    by 0x109EB6: command_i (project2.c:268)
==28390==    by 0x1091FD: handle_command (project2.c:68)
==28390==    by 0x1091FD: main (project2.c:32)
==28390==  Address 0x1ffeacc550 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 4
==28390==    at 0x109F29: command_i (project2.c:270)
==28390==    by 0x1091FD: handle_command (project2.c:68)
==28390==    by 0x1091FD: main (project2.c:32)
==28390==  Address 0x1ffeacc540 is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 1
==28390==    at 0x4A608D0: __strcmp_sse2_unaligned (strcmp-sse2-unaligned.S:24)
==28390==    by 0x109F62: command_i (project2.c:271)
==28390==    by 0x1091FD: handle_command (project2.c:68)
==28390==    by 0x1091FD: main (project2.c:32)
==28390==  Address 0x1ffeae41c0 is on thread 1's stack
==28390==  in frame #2, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 1
==28390==    at 0x4839D03: strcmp (vg_replace_strmem.c:848)
==28390==    by 0x109F62: command_i (project2.c:271)
==28390==    by 0x1091FD: handle_command (project2.c:68)
==28390==    by 0x1091FD: main (project2.c:32)
==28390==  Address 0x1ffeba7708 is on thread 1's stack
==28390==  in frame #2, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 1
==28390==    at 0x4839D20: strcmp (vg_replace_strmem.c:848)
==28390==    by 0x109F62: command_i (project2.c:271)
==28390==    by 0x1091FD: handle_command (project2.c:68)
==28390==    by 0x1091FD: main (project2.c:32)
==28390==  Address 0x1ffeae41c1 is on thread 1's stack
==28390==  in frame #2, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 1
==28390==    at 0x4839D24: strcmp (vg_replace_strmem.c:848)
==28390==    by 0x109F62: command_i (project2.c:271)
==28390==    by 0x1091FD: handle_command (project2.c:68)
==28390==    by 0x1091FD: main (project2.c:32)
==28390==  Address 0x1ffeba7709 is on thread 1's stack
==28390==  in frame #2, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 4
==28390==    at 0x109F40: command_i (project2.c:277)
==28390==    by 0x1091FD: handle_command (project2.c:68)
==28390==    by 0x1091FD: main (project2.c:32)
==28390==  Address 0x1ffeba773c is on thread 1's stack
==28390==  in frame #1, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 1
==28390==    at 0x4A608D0: __strcmp_sse2_unaligned (strcmp-sse2-unaligned.S:24)
==28390==    by 0x10A017: bubble_sort (project2.c:681)
==28390==    by 0x10A017: command_i (project2.c:280)
==28390==    by 0x1091FD: handle_command (project2.c:68)
==28390==    by 0x1091FD: main (project2.c:32)
==28390==  Address 0x1ffeacc4c0 is on thread 1's stack
==28390==  in frame #2, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 1
==28390==    at 0x4839D03: strcmp (vg_replace_strmem.c:848)
==28390==    by 0x10A017: bubble_sort (project2.c:681)
==28390==    by 0x10A017: command_i (project2.c:280)
==28390==    by 0x1091FD: handle_command (project2.c:68)
==28390==    by 0x1091FD: main (project2.c:32)
==28390==  Address 0x1ffeacc4c0 is on thread 1's stack
==28390==  in frame #2, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 1
==28390==    at 0x4839D20: strcmp (vg_replace_strmem.c:848)
==28390==    by 0x10A017: bubble_sort (project2.c:681)
==28390==    by 0x10A017: command_i (project2.c:280)
==28390==    by 0x1091FD: handle_command (project2.c:68)
==28390==    by 0x1091FD: main (project2.c:32)
==28390==  Address 0x1ffeacc4c1 is on thread 1's stack
==28390==  in frame #2, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 1
==28390==    at 0x4839D24: strcmp (vg_replace_strmem.c:848)
==28390==    by 0x10A017: bubble_sort (project2.c:681)
==28390==    by 0x10A017: command_i (project2.c:280)
==28390==    by 0x1091FD: handle_command (project2.c:68)
==28390==    by 0x1091FD: main (project2.c:32)
==28390==  Address 0x1ffeacc4c1 is on thread 1's stack
==28390==  in frame #2, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 1
==28390==    at 0x4838CC2: __strlen_sse2 (vg_replace_strmem.c:462)
==28390==    by 0x4A41A4F: puts (ioputs.c:35)
==28390==    by 0x10A0F3: print_routes_passing (project2.c:725)
==28390==    by 0x10A0F3: command_i (project2.c:281)
==28390==    by 0x1091FD: handle_command (project2.c:68)
==28390==    by 0x1091FD: main (project2.c:32)
==28390==  Address 0x1ffeacc6a0 is on thread 1's stack
==28390==  in frame #3, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 1
==28390==    at 0x4838CD4: __strlen_sse2 (vg_replace_strmem.c:462)
==28390==    by 0x4A41A4F: puts (ioputs.c:35)
==28390==    by 0x10A0F3: print_routes_passing (project2.c:725)
==28390==    by 0x10A0F3: command_i (project2.c:281)
==28390==    by 0x1091FD: handle_command (project2.c:68)
==28390==    by 0x1091FD: main (project2.c:32)
==28390==  Address 0x1ffeacc6a1 is on thread 1's stack
==28390==  in frame #3, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 4
==28390==    at 0x109C03: add_routes_passing (project2.c:300)
==28390==    by 0x109D5C: command_i (project2.c:261)
==28390==    by 0x1091FD: handle_command (project2.c:68)
==28390==    by 0x1091FD: main (project2.c:32)
==28390==  Address 0x1ffeacc53c is on thread 1's stack
==28390==  in frame #2, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 4
==28390==    at 0x109C0C: add_routes_passing (project2.c:314)
==28390==    by 0x109D5C: command_i (project2.c:261)
==28390==    by 0x1091FD: handle_command (project2.c:68)
==28390==    by 0x1091FD: main (project2.c:32)
==28390==  Address 0x1ffeacc540 is on thread 1's stack
==28390==  in frame #2, created by main (project2.c:17)
==28390== 
==28390== Invalid read of size 4
==28390==    at 0x109C18: add_routes_passing (project2.c:319)
==28390==    by 0x109D5C: command_i (project2.c:261)
==28390==    by 0x1091FD: handle_command (project2.c:68)
==28390==    by 0x1091FD: main (project2.c:32)
==28390==  Address 0x1ffeba773c is on thread 1's stack
==28390==  in frame #2, created by main (project2.c:17)
==28390== 
==28390== Warning: client switching stacks?  SP change: 0x1ffeacc4b0 --> 0x1fff000b48
==28390==          to suppress, use: --max-stackframe=5457560 or greater
==28390== 
==28390== HEAP SUMMARY:
==28390==     in use at exit: 1,441,770 bytes in 22 blocks
==28390==   total heap usage: 401 allocs, 379 frees, 12,658,979 bytes allocated
==28390== 
==28390== LEAK SUMMARY:
==28390==    definitely lost: 1,441,770 bytes in 22 blocks
==28390==    indirectly lost: 0 bytes in 0 blocks
==28390==      possibly lost: 0 bytes in 0 blocks
==28390==    still reachable: 0 bytes in 0 blocks
==28390==         suppressed: 0 bytes in 0 blocks
==28390== Rerun with --leak-check=full to see details of leaked memory
==28390== 
==28390== For counts of detected and suppressed errors, rerun with: -v
==28390== ERROR SUMMARY: 20727 errors from 180 contexts (suppressed: 0 from 0)

```


Your code will not be reevaluated if you submit before 2023-04-05 00:08:26 @ Lisbon, Portugal. You need to wait 10 minute(s).

