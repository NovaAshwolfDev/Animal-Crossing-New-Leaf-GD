0061da90  stmdb sp!,{r4,r5,r6,r7,r8,lr}
0061da94  add r5,r0,#0x800
0061da98  cpy r6,r0
0061da9c  cpy r7,r1
0061daa0  add r5,r5,#0xee
0061daa4  mov r4,#0x0
0061daa8  cpy r1,r7
0061daac  cpy r0,r5
0061dab0  bl 0x007b8ef0
0061dab4  cmp r0,#0x0
0061dab8  nop
0061dabc  beq 0x0061dadc
0061dac0  cmp r4,#0x10
0061dac4  bcs 0x0061daec
0061dac8  rsb r0,r4,r4, lsl #0x4
0061dacc  add r0,r6,r0, lsl #0x4
0061dad0  add r0,r0,#0x800
0061dad4  add r0,r0,#0xee
0061dad8  ldmia sp!,{r4,r5,r6,r7,r8,pc}
0061dadc  add r4,r4,#0x1
0061dae0  cmp r4,#0x10
0061dae4  add r5,r5,#0xf0
0061dae8  bcc 0x0061daa8
0061daec  mov r0,#0x0
0061daf0  ldmia sp!,{r4,r5,r6,r7,r8,pc}
