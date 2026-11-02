00745de0  cmp r2,#0x0
00745de4  mvn r12,#0x0
00745de8  movge r2,r2, asr #0x4
00745dec  str r4,[sp,#-0x4]!
00745df0  bge 0x00745e04
00745df4  add r2,r2,#0x1
00745df8  mov r4,r2, asr #0x1f
00745dfc  add r2,r2,r4, lsr #0x1c
00745e00  add r2,r12,r2, asr #0x4
00745e04  cmp r3,#0x0
00745e08  str r2,[r0,#0x0]
00745e0c  movge r0,r3, asr #0x4
00745e10  bge 0x00745e24
00745e14  add r0,r3,#0x1
00745e18  mov r2,r0, asr #0x1f
00745e1c  add r0,r0,r2, lsr #0x1c
00745e20  add r0,r12,r0, asr #0x4
00745e24  str r0,[r1,#0x0]
00745e28  ldr r4,[sp],#0x4
00745e2c  bx lr
