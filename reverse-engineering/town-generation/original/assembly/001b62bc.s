001b62bc  stmdb sp!,{r4,r5,r6,r7,r8,lr}
001b62c0  cpy r6,r0
001b62c4  sub sp,sp,#0x8
001b62c8  cpy r4,r1
001b62cc  cpy r7,r3
001b62d0  cpy r8,r2
001b62d4  cpy r0,r2
001b62d8  bl 0x007fe108
001b62dc  cmp r0,#0x4e
001b62e0  beq 0x001b6320
001b62e4  cmp r4,#0x10
001b62e8  bcs 0x001b63c4
001b62ec  cpy r0,r8
001b62f0  bl 0x007fe014
001b62f4  add r5,r6,r4
001b62f8  cmp r0,#0x0
001b62fc  add r6,r6,r4, lsl #0x2
001b6300  beq 0x001b6350
001b6304  cpy r1,r8
001b6308  cpy r0,r6
001b630c  bl 0x00756eb0
001b6310  cpy r0,r6
001b6314  bl 0x00754ae4
001b6318  strb r7,[r5,#0x40]
001b631c  b 0x001b6420
001b6320  nop
001b6324  bl 0x00636e3c
001b6328  nop
001b632c  nop
001b6330  bl 0x006378a0
001b6334  ldr r1,[0x1b642c]
001b6338  add r0,r0,#0x4
001b633c  add r0,r0,r1
001b6340  bl 0x00627184
001b6344  nop
001b6348  nop
001b634c  b 0x001b63c4
001b6350  cpy r0,r8
001b6354  bl 0x007fecf4
001b6358  cmp r0,#0x0
001b635c  nop
001b6360  beq 0x001b63c8
001b6364  cpy r1,r8
001b6368  cpy r0,sp
001b636c  bl 0x00756da4
001b6370  cpy r0,sp
001b6374  nop
001b6378  bl 0x007fe108
001b637c  cmp r0,#0x2b
001b6380  cpy r4,r0
001b6384  cpy r0,sp
001b6388  beq 0x001b63a8
001b638c  bl 0x00754ae4
001b6390  cmp r4,#0x27
001b6394  cmpne r4,#0x24
001b6398  beq 0x001b63bc
001b639c  cmp r4,#0x3f
001b63a0  beq 0x001b63e4
001b63a4  b 0x001b6408
001b63a8  nop
001b63ac  bl 0x00802834
001b63b0  cmp r0,#0x0
001b63b4  nop
001b63b8  beq 0x001b63d0
001b63bc  cpy r0,sp
001b63c0  cpy r0,r0
001b63c4  mov r0,#0x0
001b63c8  add sp,sp,#0x8
001b63cc  ldmia sp!,{r4,r5,r6,r7,r8,pc}
001b63d0  cpy r0,sp
001b63d4  bl 0x00754ae4
001b63d8  nop
001b63dc  nop
001b63e0  b 0x001b6408
001b63e4  cpy r1,sp
001b63e8  add r0,sp,#0x4
001b63ec  bl 0x00754e70
001b63f0  add r1,sp,#0x4
001b63f4  cpy r0,sp
001b63f8  bl 0x00756eb0
001b63fc  add r0,sp,#0x4
001b6400  nop
001b6404  cpy r0,r0
001b6408  cpy r1,sp
001b640c  cpy r0,r6
001b6410  bl 0x00756eb0
001b6414  cpy r0,sp
001b6418  strb r7,[r5,#0x40]
001b641c  cpy r0,r0
001b6420  add sp,sp,#0x8
001b6424  mov r0,#0x1
001b6428  ldmia sp!,{r4,r5,r6,r7,r8,pc}
