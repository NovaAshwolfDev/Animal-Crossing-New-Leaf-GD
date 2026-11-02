0079b55c  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,r11,lr}
0079b560  mov r4,#0x0
0079b564  cpy r8,r1
0079b568  sub sp,sp,#0xc
0079b56c  cpy r7,r0
0079b570  cpy r1,r4
0079b574  ldr r0,[r7,r1,lsl #0x2]
0079b578  cmp r0,#0x0
0079b57c  beq 0x0079b590
0079b580  tst r0,#0x1
0079b584  addne r4,r4,#0x1
0079b588  movs r0,r0, lsr #0x1
0079b58c  bne 0x0079b580
0079b590  add r1,r1,#0x1
0079b594  cmp r1,#0x8e
0079b598  bcc 0x0079b574
0079b59c  bl 0x00636e3c
0079b5a0  ldr r1,[0x79b75c]
0079b5a4  add r1,r1,r0
0079b5a8  cpy r0,sp
0079b5ac  bl 0x001b5c6c
0079b5b0  cpy r6,r8
0079b5b4  cpy r0,r4
0079b5b8  bl 0x0011df38
0079b5bc  cpy r1,r0
0079b5c0  cpy r0,r7
0079b5c4  bl 0x008072dc
0079b5c8  cpy r9,r0
0079b5cc  mov r1,#0x2000
0079b5d0  add r0,sp,#0x4
0079b5d4  bl 0x00756d40
0079b5d8  add r0,sp,#0x4
0079b5dc  nop
0079b5e0  bl 0x005a20f8
0079b5e4  ldr r11,[0x79b760]
0079b5e8  cpy r4,r0
0079b5ec  mov r5,#0x0
0079b5f0  mov r10,#0x1
0079b5f4  ldrb r1,[r4,#0xa]
0079b5f8  cmp r1,#0x93
0079b5fc  bcs 0x0079b610
0079b600  cmp r1,#0x3
0079b604  cmpne r1,#0x4
0079b608  cmpne r1,#0x5
0079b60c  beq 0x0079b6a0
0079b610  ldrb r0,[r4,#0xd]
0079b614  cmp r0,#0xae
0079b618  movcs r0,#0x0
0079b61c  cmp r0,r6
0079b620  beq 0x0079b638
0079b624  mov r0,r5, lsr #0x5
0079b628  and r1,r5,#0x1f
0079b62c  ldr r2,[r7,r0,lsl #0x2]
0079b630  bic r1,r2,r10, lsl r1
0079b634  str r1,[r7,r0,lsl #0x2]
0079b638  add r5,r5,#0x1
0079b63c  cmp r5,r11
0079b640  add r4,r4,#0x22
0079b644  bcc 0x0079b5f4
0079b648  mov r2,#0x0
0079b64c  cpy r1,r2
0079b650  ldr r0,[r7,r1,lsl #0x2]
0079b654  cmp r0,#0x0
0079b658  beq 0x0079b66c
0079b65c  tst r0,#0x1
0079b660  addne r2,r2,#0x1
0079b664  movs r0,r0, lsr #0x1
0079b668  bne 0x0079b65c
0079b66c  add r1,r1,#0x1
0079b670  cmp r1,#0x8e
0079b674  bcc 0x0079b650
0079b678  cmp r2,#0x0
0079b67c  beq 0x0079b728
0079b680  add r0,sp,#0x4
0079b684  cpy r0,r0
0079b688  cpy r0,sp
0079b68c  nop
0079b690  cpy r0,r0
0079b694  add sp,sp,#0xc
0079b698  mov r0,#0x1
0079b69c  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
0079b6a0  cmp r8,#0x5
0079b6a4  beq 0x0079b6dc
0079b6a8  cmp r8,#0x6
0079b6ac  beq 0x0079b6f0
0079b6b0  cmp r8,#0x7
0079b6b4  beq 0x0079b704
0079b6b8  cmp r8,#0x8
0079b6bc  cpyne r6,r8
0079b6c0  beq 0x0079b718
0079b6c4  ldrb r0,[r4,#0xd]
0079b6c8  cmp r0,#0xae
0079b6cc  movcs r0,#0x0
0079b6d0  cmp r0,r6
0079b6d4  beq 0x0079b638
0079b6d8  b 0x0079b624
0079b6dc  cpy r0,sp
0079b6e0  bl 0x007aa3fc
0079b6e4  nop
0079b6e8  nop
0079b6ec  b 0x0079b720
0079b6f0  cpy r0,sp
0079b6f4  bl 0x007aa4d4
0079b6f8  nop
0079b6fc  nop
0079b700  b 0x0079b720
0079b704  cpy r0,sp
0079b708  bl 0x007aa388
0079b70c  nop
0079b710  nop
0079b714  b 0x0079b720
0079b718  cpy r0,sp
0079b71c  bl 0x007aa460
0079b720  cpy r6,r0
0079b724  b 0x0079b6c4
0079b728  mov r0,r9, lsr #0x5
0079b72c  and r1,r9,#0x1f
0079b730  ldr r2,[r7,r0,lsl #0x2]
0079b734  orr r1,r2,r10, lsl r1
0079b738  str r1,[r7,r0,lsl #0x2]
0079b73c  add r0,sp,#0x4
0079b740  cpy r0,r0
0079b744  cpy r0,sp
0079b748  nop
0079b74c  cpy r0,r0
0079b750  add sp,sp,#0xc
0079b754  mov r0,#0x0
0079b758  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
