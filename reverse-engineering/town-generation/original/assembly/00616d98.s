00616d98  stmdb sp!,{r4,r5,r6,r7,r8,lr}
00616d9c  cpy r6,r0
00616da0  cpy r7,r2
00616da4  cpy r4,r1
00616da8  cpy r0,r1
00616dac  bl 0x007f2db0
00616db0  cmp r0,#0xa
00616db4  cpy r5,r0
00616db8  bcs 0x00616e74
00616dbc  ldr r0,[r4,#0x0]
00616dc0  mov r8,#0x1
00616dc4  cmp r5,r0
00616dc8  bcs 0x00616dec
00616dcc  ldr r0,[r4,#0x4]
00616dd0  mov r1,r8, lsl r5
00616dd4  tst r0,r1
00616dd8  beq 0x00616dec
00616ddc  ldr r2,[r4,#0x8]
00616de0  bic r0,r0,r1
00616de4  sub r1,r2,#0x1
00616de8  strd r0,r1,[r4,#0x4]
00616dec  cpy r0,r4
00616df0  bl 0x007f2db0
00616df4  cmp r0,#0xa
00616df8  nop
00616dfc  bcs 0x00616e74
00616e00  ldr r1,[r4,#0x0]
00616e04  cmp r0,r1
00616e08  bcs 0x00616e30
00616e0c  ldr r1,[r4,#0x4]
00616e10  mov r2,r8, lsl r0
00616e14  tst r1,r2
00616e18  beq 0x00616e30
00616e1c  ldr r3,[r4,#0x8]
00616e20  bic r1,r1,r2
00616e24  add r4,r4,#0x4
00616e28  sub r2,r3,#0x1
00616e2c  stmia r4,{r1,r2}
00616e30  cmp r7,#0x0
00616e34  ldr r1,[0x616e78]
00616e38  cpy r2,r1
00616e3c  mul r1,r5,r1
00616e40  mul r2,r0,r2
00616e44  add r1,r6,r1, lsl #0x3
00616e48  addeq r1,r1,#0x2400
00616e4c  add r2,r6,r2, lsl #0x3
00616e50  addeq r1,r1,#0xf3
00616e54  addeq r2,r2,#0x2400
00616e58  addeq r2,r2,#0xf3
00616e5c  addne r1,r1,#0x2400
00616e60  addne r1,r1,#0xf4
00616e64  addne r2,r2,#0x2400
00616e68  addne r2,r2,#0xf4
00616e6c  strb r0,[r1,#0x0]
00616e70  strb r5,[r2,#0x0]
00616e74  ldmia sp!,{r4,r5,r6,r7,r8,pc}
