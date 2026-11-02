007e23e0  stmdb sp!,{r4,r5,r6,r7,lr}
007e23e4  sub sp,sp,#0xc
007e23e8  cpy r4,r0
007e23ec  cpy r7,r1
007e23f0  cpy r6,r2
007e23f4  cpy r0,sp
007e23f8  stmia r0,{r1,r2}
007e23fc  cpy r1,r0
007e2400  cpy r0,r4
007e2404  bl 0x007dca50
007e2408  cpy r5,r0
007e240c  cpy r0,sp
007e2410  cpy r0,r0
007e2414  cmp r5,#0x0
007e2418  ldrne r0,[r4,#0x20]
007e241c  cmpne r0,#0x0
007e2420  moveq r0,#0x0
007e2424  beq 0x007e2440
007e2428  cpy r0,r4
007e242c  bl 0x007dca3c
007e2430  mla r0,r6,r0,r7
007e2434  ldr r1,[r4,#0x20]
007e2438  add r0,r0,r0, lsl #0x1
007e243c  add r0,r1,r0, lsl #0x2
007e2440  add sp,sp,#0xc
007e2444  ldmia sp!,{r4,r5,r6,r7,pc}
