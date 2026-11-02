0061dc68  stmdb sp!,{r4,r5,r6,r7,r8,lr}
0061dc6c  cpy r6,r0
0061dc70  cpy r4,r1
0061dc74  cpy r0,r1
0061dc78  bl 0x00802710
0061dc7c  cmp r0,#0x0
0061dc80  bne 0x0061dcf4
0061dc84  cpy r0,r4
0061dc88  bl 0x00802674
0061dc8c  add r5,r6,#0x800
0061dc90  cpy r7,r0
0061dc94  add r5,r5,#0xd6
0061dc98  mov r4,#0x0
0061dc9c  cpy r1,r7
0061dca0  cpy r0,r5
0061dca4  bl 0x007fdfa0
0061dca8  cmp r0,#0x0
0061dcac  nop
0061dcb0  beq 0x0061dce4
0061dcb4  cmp r4,#0x4
0061dcb8  bcs 0x0061dcf4
0061dcbc  add r0,r6,r4, lsl #0x2
0061dcc0  add r0,r0,#0x800
0061dcc4  ldr r1,[0x61dcfc]
0061dcc8  add r0,r0,#0xd6
0061dccc  bl 0x00756eb0
0061dcd0  cpy r0,r6
0061dcd4  nop
0061dcd8  bl 0x0061fa50
0061dcdc  mov r0,#0x1
0061dce0  ldmia sp!,{r4,r5,r6,r7,r8,pc}
0061dce4  add r4,r4,#0x1
0061dce8  cmp r4,#0x4
0061dcec  add r5,r5,#0x4
0061dcf0  blt 0x0061dc9c
0061dcf4  mov r0,#0x0
0061dcf8  ldmia sp!,{r4,r5,r6,r7,r8,pc}
