00404d30  stmdb sp!,{r3,r4,r5,r6,r7,r8,r9,lr}
00404d34  cpy r4,r1
00404d38  cmp r4,#0x10
00404d3c  cpy r5,r0
00404d40  ldr r7,[sp,#0x20]
00404d44  cpy r1,r2
00404d48  cpy r8,r3
00404d4c  movcs r0,#0x0
00404d50  bcs 0x00404e58
00404d54  cpy r0,sp
00404d58  bl 0x00756da4
00404d5c  cpy r0,sp
00404d60  bl 0x007fe108
00404d64  cmp r0,#0x31
00404d68  beq 0x00404dc8
00404d6c  cmp r0,#0x56
00404d70  beq 0x00404d80
00404d74  cmp r0,#0x57
00404d78  bne 0x00404de0
00404d7c  b 0x00404da4
00404d80  cpy r0,sp
00404d84  bl 0x007fe108
00404d88  cpy r1,r0
00404d8c  mov r2,#0x54
00404d90  cpy r0,sp
00404d94  bl 0x007549e8
00404d98  nop
00404d9c  nop
00404da0  b 0x00404de0
00404da4  cpy r0,sp
00404da8  bl 0x007fe108
00404dac  cpy r1,r0
00404db0  mov r2,#0x55
00404db4  cpy r0,sp
00404db8  bl 0x007549e8
00404dbc  nop
00404dc0  nop
00404dc4  b 0x00404de0
00404dc8  cpy r0,sp
00404dcc  bl 0x007fe108
00404dd0  cpy r1,r0
00404dd4  mov r2,#0x2f
00404dd8  cpy r0,sp
00404ddc  bl 0x007549e8
00404de0  cpy r0,sp
00404de4  bl 0x007553f4
00404de8  cmp r0,#0x0
00404dec  cpy r0,sp
00404df0  beq 0x00404e5c
00404df4  bl 0x005a2164
00404df8  cmp r0,#0x0
00404dfc  nop
00404e00  beq 0x00404e14
00404e04  ldrb r0,[r0,#0x2]
00404e08  movs r0,r0, lsr #0x7
00404e0c  movne r6,#0x1
00404e10  bne 0x00404e18
00404e14  mov r6,#0x0
00404e18  add r0,r5,r4, lsl #0x2
00404e1c  cpy r1,sp
00404e20  bl 0x00756eb0
00404e24  cmp r6,#0x0
00404e28  add r0,r5,r4
00404e2c  movne r1,#0x2
00404e30  strbne r1,[r0,#0x40]
00404e34  strbeq r8,[r0,#0x40]
00404e38  cmp r7,#0x0
00404e3c  beq 0x00404e4c
00404e40  cpy r1,sp
00404e44  cpy r0,r7
00404e48  bl 0x00756eb0
00404e4c  cpy r0,sp
00404e50  cpy r0,r0
00404e54  mov r0,#0x1
00404e58  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,pc}
00404e5c  nop
00404e60  cpy r0,r0
00404e64  mov r0,#0x0
00404e68  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,pc}
