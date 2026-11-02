007e71c4  stmdb sp!,{r4,r5,r6,r7,r8,lr}
007e71c8  add r5,r0,#0x800
007e71cc  cpy r6,r0
007e71d0  cpy r7,r1
007e71d4  add r5,r5,#0xee
007e71d8  mov r4,#0x0
007e71dc  cpy r1,r7
007e71e0  cpy r0,r5
007e71e4  bl 0x007b8ef0
007e71e8  cmp r0,#0x0
007e71ec  nop
007e71f0  beq 0x007e7210
007e71f4  cmp r4,#0x10
007e71f8  bcs 0x007e7220
007e71fc  rsb r0,r4,r4, lsl #0x4
007e7200  add r0,r6,r0, lsl #0x4
007e7204  add r0,r0,#0x800
007e7208  add r0,r0,#0xee
007e720c  ldmia sp!,{r4,r5,r6,r7,r8,pc}
007e7210  add r4,r4,#0x1
007e7214  cmp r4,#0x10
007e7218  add r5,r5,#0xf0
007e721c  bcc 0x007e71dc
007e7220  mov r0,#0x0
007e7224  ldmia sp!,{r4,r5,r6,r7,r8,pc}
