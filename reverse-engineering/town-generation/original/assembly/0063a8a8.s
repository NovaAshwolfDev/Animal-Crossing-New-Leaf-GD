0063a8a8  stmdb sp!,{r4,r5,r6,r7,r8,lr}
0063a8ac  cpy r5,r0
0063a8b0  cpy r6,r1
0063a8b4  cpy r7,r2
0063a8b8  cpy r8,r3
0063a8bc  mov r4,#0x0
0063a8c0  add r0,r5,r4, lsl #0x2
0063a8c4  add r0,r0,#0x8
0063a8c8  bl 0x007b6e30
0063a8cc  cmp r0,#0x0
0063a8d0  nop
0063a8d4  beq 0x0063a904
0063a8d8  add r0,r5,r4, lsl #0x2
0063a8dc  add r0,r0,#0x8
0063a8e0  cpy r3,r8
0063a8e4  cpy r2,r7
0063a8e8  cpy r1,r6
0063a8ec  bl 0x00294318
0063a8f0  ldrb r0,[r5,#0x4]
0063a8f4  add r0,r0,#0x1
0063a8f8  strb r0,[r5,#0x4]
0063a8fc  cpy r0,r4
0063a900  ldmia sp!,{r4,r5,r6,r7,r8,pc}
0063a904  add r4,r4,#0x1
0063a908  cmp r4,#0x38
0063a90c  bcc 0x0063a8c0
0063a910  mov r0,#0x0
0063a914  ldmia sp!,{r4,r5,r6,r7,r8,pc}
