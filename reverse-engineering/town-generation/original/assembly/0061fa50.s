0061fa50  stmdb sp!,{r4,r5,r6,r7,r8,lr}
0061fa54  cpy r5,r0
0061fa58  mov r6,#0x0
0061fa5c  add r0,r5,r6, lsl #0x2
0061fa60  add r0,r0,#0x800
0061fa64  add r0,r0,#0xd6
0061fa68  cpy r7,r0
0061fa6c  bl 0x00802710
0061fa70  cmp r0,#0x0
0061fa74  nop
0061fa78  beq 0x0061fad8
0061fa7c  add r4,r6,#0x1
0061fa80  cmp r4,#0x4
0061fa84  bge 0x0061fab0
0061fa88  add r0,r5,r4, lsl #0x2
0061fa8c  add r0,r0,#0x800
0061fa90  add r0,r0,#0xd6
0061fa94  bl 0x00802710
0061fa98  cmp r0,#0x0
0061fa9c  nop
0061faa0  beq 0x0061fab4
0061faa4  add r4,r4,#0x1
0061faa8  cmp r4,#0x4
0061faac  blt 0x0061fa88
0061fab0  ldmia sp!,{r4,r5,r6,r7,r8,pc}
0061fab4  add r0,r5,r4, lsl #0x2
0061fab8  add r4,r0,#0x800
0061fabc  add r4,r4,#0xd6
0061fac0  cpy r1,r4
0061fac4  cpy r0,r7
0061fac8  bl 0x00756eb0
0061facc  ldr r1,[0x61fae8]
0061fad0  cpy r0,r4
0061fad4  bl 0x00756eb0
0061fad8  add r6,r6,#0x1
0061fadc  cmp r6,#0x3
0061fae0  blt 0x0061fa5c
0061fae4  ldmia sp!,{r4,r5,r6,r7,r8,pc}
