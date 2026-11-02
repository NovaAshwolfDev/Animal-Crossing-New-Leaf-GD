0023d63c  stmdb sp!,{r4,r5,r6,r7,lr}
0023d640  cpy r4,r0
0023d644  sub sp,sp,#0xc
0023d648  add r0,r0,#0x4c
0023d64c  bl 0x001ebfe0
0023d650  ldr r6,[0x23d8f4]
0023d654  mov r5,#0x0
0023d658  add r7,r6,#0x6
0023d65c  cpy r0,sp
0023d660  bl 0x00756dbc
0023d664  cpy r1,r5
0023d668  add r0,r4,#0x4c
0023d66c  bl 0x001ebfc8
0023d670  nop
0023d674  nop
0023d678  bl 0x007aac1c
0023d67c  cmp r0,#0x0
0023d680  nop
0023d684  beq 0x0023d884
0023d688  cpy r1,r5
0023d68c  add r0,r4,#0x4c
0023d690  bl 0x001ebfc8
0023d694  ldrb r0,[r0,#0x69]
0023d698  cmp r0,#0xc
0023d69c  ldrcc pc,[pc,r0,lsl #0x2]
0023d6a0  b 0x0023d764
0023d6d4  ldr r1,[0x23d8f8]
0023d6d8  add r0,sp,#0x4
0023d6dc  bl 0x00756d40
0023d6e0  cpy r1,r0
0023d6e4  cpy r0,sp
0023d6e8  bl 0x00756eb0
0023d6ec  add r0,sp,#0x4
0023d6f0  nop
0023d6f4  cpy r0,r0
0023d6f8  nop
0023d6fc  nop
0023d700  b 0x0023d8b0
0023d704  ldr r1,[0x23d8fc]
0023d708  add r0,sp,#0x4
0023d70c  bl 0x00756d40
0023d710  cpy r1,r0
0023d714  cpy r0,sp
0023d718  bl 0x00756eb0
0023d71c  add r0,sp,#0x4
0023d720  nop
0023d724  cpy r0,r0
0023d728  nop
0023d72c  nop
0023d730  b 0x0023d8b0
0023d734  ldr r1,[0x23d900]
0023d738  add r0,sp,#0x4
0023d73c  bl 0x00756d40
0023d740  cpy r1,r0
0023d744  cpy r0,sp
0023d748  bl 0x00756eb0
0023d74c  add r0,sp,#0x4
0023d750  nop
0023d754  cpy r0,r0
0023d758  nop
0023d75c  nop
0023d760  b 0x0023d8b0
0023d764  cpy r1,r7
0023d768  add r0,sp,#0x4
0023d76c  bl 0x00756d40
0023d770  cpy r1,r0
0023d774  cpy r0,sp
0023d778  bl 0x00756eb0
0023d77c  add r0,sp,#0x4
0023d780  nop
0023d784  cpy r0,r0
0023d788  nop
0023d78c  nop
0023d790  b 0x0023d8b0
0023d794  ldr r1,[0x23d904]
0023d798  add r0,sp,#0x4
0023d79c  bl 0x00756d40
0023d7a0  cpy r1,r0
0023d7a4  cpy r0,sp
0023d7a8  bl 0x00756eb0
0023d7ac  add r0,sp,#0x4
0023d7b0  nop
0023d7b4  cpy r0,r0
0023d7b8  nop
0023d7bc  nop
0023d7c0  b 0x0023d8b0
0023d7c4  ldr r1,[0x23d908]
0023d7c8  add r0,sp,#0x4
0023d7cc  bl 0x00756d40
0023d7d0  cpy r1,r0
0023d7d4  cpy r0,sp
0023d7d8  bl 0x00756eb0
0023d7dc  add r0,sp,#0x4
0023d7e0  nop
0023d7e4  cpy r0,r0
0023d7e8  nop
0023d7ec  nop
0023d7f0  b 0x0023d8b0
0023d7f4  ldr r1,[0x23d90c]
0023d7f8  add r0,sp,#0x4
0023d7fc  bl 0x00756d40
0023d800  cpy r1,r0
0023d804  cpy r0,sp
0023d808  bl 0x00756eb0
0023d80c  add r0,sp,#0x4
0023d810  nop
0023d814  cpy r0,r0
0023d818  nop
0023d81c  nop
0023d820  b 0x0023d8b0
0023d824  ldr r1,[0x23d910]
0023d828  add r0,sp,#0x4
0023d82c  bl 0x00756d40
0023d830  cpy r1,r0
0023d834  cpy r0,sp
0023d838  bl 0x00756eb0
0023d83c  add r0,sp,#0x4
0023d840  nop
0023d844  cpy r0,r0
0023d848  nop
0023d84c  nop
0023d850  b 0x0023d8b0
0023d854  ldr r1,[0x23d914]
0023d858  add r0,sp,#0x4
0023d85c  bl 0x00756d40
0023d860  cpy r1,r0
0023d864  cpy r0,sp
0023d868  bl 0x00756eb0
0023d86c  add r0,sp,#0x4
0023d870  nop
0023d874  cpy r0,r0
0023d878  nop
0023d87c  nop
0023d880  b 0x0023d8b0
0023d884  cmp r5,#0x4
0023d888  bge 0x0023d764
0023d88c  cpy r1,r6
0023d890  add r0,sp,#0x4
0023d894  bl 0x00756d40
0023d898  cpy r1,r0
0023d89c  cpy r0,sp
0023d8a0  bl 0x00756eb0
0023d8a4  add r0,sp,#0x4
0023d8a8  nop
0023d8ac  cpy r0,r0
0023d8b0  cpy r3,r5
0023d8b4  mov r2,#0x0
0023d8b8  mov r1,#0x2
0023d8bc  cpy r0,sp
0023d8c0  bl 0x007558d8
0023d8c4  add r0,r4,r5, lsl #0x2
0023d8c8  add r0,r0,#0x14
0023d8cc  cpy r1,sp
0023d8d0  bl 0x00756eb0
0023d8d4  cpy r0,sp
0023d8d8  nop
0023d8dc  cpy r0,r0
0023d8e0  add r5,r5,#0x1
0023d8e4  cmp r5,#0x8
0023d8e8  blt 0x0023d65c
0023d8ec  add sp,sp,#0xc
0023d8f0  ldmia sp!,{r4,r5,r6,r7,pc}
