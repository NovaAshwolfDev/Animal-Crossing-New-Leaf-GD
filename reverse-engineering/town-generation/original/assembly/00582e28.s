00582e28  stmdb sp!,{r4,r5,r6,lr}
00582e2c  cpy r5,r0
00582e30  ldr r4,[0x582e60]
00582e34  bl 0x00636e3c
00582e38  bl 0x006378a0
00582e3c  ldrh r1,[r5,#0x2c]
00582e40  add r0,r0,#0x4
00582e44  bl 0x007e6800
00582e48  cmp r0,#0xa
00582e4c  addcc r0,r0,r0, lsl #0x2
00582e50  addcc r1,r4,#0xa8
00582e54  addcc r0,r1,r0, lsl #0x4
00582e58  movcs r0,#0x0
00582e5c  ldmia sp!,{r4,r5,r6,pc}
