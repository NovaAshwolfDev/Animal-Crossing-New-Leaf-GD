007ce0d4  stmdb sp!,{r4,r5,r6,lr}
007ce0d8  cpy r5,r1
007ce0dc  ldr r0,[r0,#0x0]
007ce0e0  ldrh r3,[r0,#0x10]
007ce0e4  ldr r1,[r0,#0xc]
007ce0e8  add r4,r0,r3, lsl #0x4
007ce0ec  ldr r3,[r4,#0xc]!
007ce0f0  cmp r1,r3
007ce0f4  bls 0x007ce14c
007ce0f8  ldr r1,[r4,#0x0]
007ce0fc  cpy r3,r4
007ce100  mov r12,r1, lsr #0x3
007ce104  cmp r12,r2
007ce108  and r1,r1,#0x7
007ce10c  bcs 0x007ce130
007ce110  ldrsb r12,[r5,r12]
007ce114  mov r1,r12, asr r1
007ce118  tst r1,#0x1
007ce11c  beq 0x007ce130
007ce120  ldrh r1,[r3,#0x6]
007ce124  add r1,r0,r1, lsl #0x4
007ce128  add r4,r1,#0xc
007ce12c  b 0x007ce13c
007ce130  ldrh r1,[r3,#0x4]
007ce134  add r1,r0,r1, lsl #0x4
007ce138  add r4,r1,#0xc
007ce13c  ldr r1,[r3,#0x0]
007ce140  ldr r3,[r4,#0x0]
007ce144  cmp r1,r3
007ce148  bhi 0x007ce0f8
007ce14c  ldr r1,[r4,#0x8]
007ce150  cmp r1,#0x0
007ce154  addne r0,r4,#0x8
007ce158  addne r1,r1,r0
007ce15c  beq 0x007ce174
007ce160  cpy r0,r5
007ce164  bl 0x00301f24
007ce168  cmp r0,#0x0
007ce16c  cpyeq r0,r4
007ce170  beq 0x007ce178
007ce174  mov r0,#0x0
007ce178  ldmia sp!,{r4,r5,r6,pc}
