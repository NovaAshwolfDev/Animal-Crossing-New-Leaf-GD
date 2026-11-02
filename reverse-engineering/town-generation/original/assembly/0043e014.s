0043e014  stmdb sp!,{r4,r5,r6,r7,r8,r9}
0043e018  ldr r2,[r0,#0x0]
0043e01c  ldrb r3,[r0,#0x3]
0043e020  ldrb r12,[r0,#0x0]
0043e024  bic r2,r2,#0xff000000
0043e028  tst r12,#0xf
0043e02c  orr r3,r2,r3, lsl #0x18
0043e030  movne r7,#0x1
0043e034  mov r4,r3, lsr #0x8
0043e038  moveq r7,#0x0
0043e03c  cmp r4,#0x0
0043e040  add r12,r0,#0x4
0043e044  bne 0x0043e060
0043e048  ldr r0,[r12,#0x0]
0043e04c  ldrb r2,[r12,#0x3]
0043e050  add r12,r12,#0x4
0043e054  bic r0,r0,#0xff000000
0043e058  orrs r4,r0,r2, lsl #0x18
0043e05c  beq 0x0043e168
0043e060  ldrb r6,[r12],#0x1
0043e064  mov r8,#0x0
0043e068  tst r6,#0x80
0043e06c  beq 0x0043e11c
0043e070  ldrb r2,[r12,#0x0]
0043e074  cmp r7,#0x0
0043e078  mov r0,r2, lsr #0x4
0043e07c  addeq r5,r0,#0x3
0043e080  beq 0x0043e098
0043e084  cmp r0,#0x1
0043e088  beq 0x0043e12c
0043e08c  cmp r0,#0x0
0043e090  addne r5,r0,#0x1
0043e094  beq 0x0043e150
0043e098  ldrb r0,[r12],#0x1
0043e09c  cmp r5,r4
0043e0a0  ldrb r2,[r12],#0x1
0043e0a4  cpyhi r5,r4
0043e0a8  mov r0,r0, lsl #0x1c
0043e0ac  cmp r5,#0x0
0043e0b0  orr r0,r2,r0, lsr #0x14
0043e0b4  add r0,r0,#0x1
0043e0b8  sub r4,r4,r5
0043e0bc  sub r0,r1,r0
0043e0c0  beq 0x0043e100
0043e0c4  tst r5,#0x1
0043e0c8  sub r0,r0,#0x1
0043e0cc  sub r2,r1,#0x1
0043e0d0  beq 0x0043e0dc
0043e0d4  ldrb r3,[r0,#0x1]!
0043e0d8  strb r3,[r2,#0x1]!
0043e0dc  movs r3,r5, lsr #0x1
0043e0e0  beq 0x0043e0fc
0043e0e4  ldrb r9,[r0,#0x1]
0043e0e8  subs r3,r3,#0x1
0043e0ec  strb r9,[r2,#0x1]
0043e0f0  ldrb r9,[r0,#0x2]!
0043e0f4  strb r9,[r2,#0x2]!
0043e0f8  bne 0x0043e0e4
0043e0fc  add r1,r1,r5
0043e100  cmp r4,#0x0
0043e104  beq 0x0043e168
0043e108  add r8,r8,#0x1
0043e10c  cmp r8,#0x8
0043e110  mov r6,r6, lsl #0x1
0043e114  blt 0x0043e068
0043e118  b 0x0043e060
0043e11c  ldrb r0,[r12],#0x1
0043e120  sub r4,r4,#0x1
0043e124  strb r0,[r1],#0x1
0043e128  b 0x0043e100
0043e12c  mov r0,r2, lsl #0x1c
0043e130  ldrb r2,[r12,#0x1]
0043e134  ldrb r3,[r12,#0x2]!
0043e138  mov r0,r0, lsr #0x10
0043e13c  orr r0,r0,r2, lsl #0x4
0043e140  orr r0,r0,r3, lsr #0x4
0043e144  add r5,r0,#0x100
0043e148  add r5,r5,#0x11
0043e14c  b 0x0043e098
0043e150  mov r0,r2, lsl #0x1c
0043e154  ldrb r2,[r12,#0x1]!
0043e158  mov r0,r0, lsr #0x18
0043e15c  orr r0,r0,r2, lsr #0x4
0043e160  add r5,r0,#0x11
0043e164  b 0x0043e098
0043e168  ldmia sp!,{r4,r5,r6,r7,r8,r9}
0043e16c  bx lr
