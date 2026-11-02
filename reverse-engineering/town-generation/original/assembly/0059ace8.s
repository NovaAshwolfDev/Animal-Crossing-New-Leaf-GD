0059ace8  ldr r2,[r1,#0x0]
0059acec  ldr r1,[r1,#0x4]
0059acf0  mvn r3,#0x0
0059acf4  cmp r2,#0x0
0059acf8  addlt r2,r2,#0x1
0059acfc  mov r12,r2, asr #0x1f
0059ad00  add r2,r2,r12, lsr #0x1c
0059ad04  movge r2,r2, asr #0x4
0059ad08  addlt r2,r3,r2, asr #0x4
0059ad0c  cmp r1,#0x0
0059ad10  blt 0x0059ad24
0059ad14  mov r3,r1, asr #0x1f
0059ad18  add r1,r1,r3, lsr #0x1c
0059ad1c  mov r1,r1, asr #0x4
0059ad20  b 0x0059ad34
0059ad24  add r1,r1,#0x1
0059ad28  mov r12,r1, asr #0x1f
0059ad2c  add r1,r1,r12, lsr #0x1c
0059ad30  add r1,r3,r1, asr #0x4
0059ad34  str r1,[r0,#0x4]
0059ad38  str r2,[r0,#0x0]
0059ad3c  bx lr
