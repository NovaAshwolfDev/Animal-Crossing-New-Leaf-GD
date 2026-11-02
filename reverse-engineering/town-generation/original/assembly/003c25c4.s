003c25c4  str r4,[sp,#-0x4]!
003c25c8  mov r12,#0xff
003c25cc  mov r4,#0x0
003c25d0  mov r2,#0x0
003c25d4  rsb r1,r4,r4, lsl #0x3
003c25d8  add r3,r0,r1, lsl #0x4
003c25dc  cpy r1,r2
003c25e0  strb r12,[r3,r2]
003c25e4  add r2,r2,#0x1
003c25e8  add r1,r1,#0x2
003c25ec  strb r12,[r3,r2]
003c25f0  cmp r1,#0x70
003c25f4  add r2,r2,#0x1
003c25f8  blt 0x003c25e0
003c25fc  add r4,r4,#0x1
003c2600  cmp r4,#0x60
003c2604  blt 0x003c25d0
003c2608  ldr r4,[sp],#0x4
003c260c  bx lr
