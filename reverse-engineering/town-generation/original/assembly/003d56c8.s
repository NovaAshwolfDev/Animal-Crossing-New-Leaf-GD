003d56c8  cpy r3,r1
003d56cc  ldr r1,[r0,#0xd8]
003d56d0  cmp r1,#0x0
003d56d4  ldrne r1,[r0,#0xf8]
003d56d8  cmpne r1,r2
003d56dc  bls 0x003d56f8
003d56e0  ldr r0,[r0,#0xd8]
003d56e4  add r1,r2,r2, lsl #0x2
003d56e8  mov r2,#0x28
003d56ec  add r1,r0,r1, lsl #0x3
003d56f0  cpy r0,r3
003d56f4  b 0x002febf4
003d56f8  bx lr
