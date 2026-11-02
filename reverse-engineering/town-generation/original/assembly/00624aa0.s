00624aa0  cmp r1,#0x8
00624aa4  bcs 0x00624abc
00624aa8  mov r2,r1, lsr #0x1
00624aac  rsb r3,r2,#0x0
00624ab0  add r2,r0,r2, lsl #0x7
00624ab4  add r0,r1,r3, lsl #0x1
00624ab8  add r0,r2,r0, lsl #0x6
00624abc  ldrb r1,[r0,#0x9]
00624ac0  cmp r1,#0x7
00624ac4  ldrcc pc,[pc,r1,lsl #0x2]
00624ac8  bx lr
00624ae8  mov r1,#0x3
00624aec  b 0x00624af4
00624af0  mov r1,#0x7
00624af4  strb r1,[r0,#0x9]
00624af8  bx lr
00624afc  mov r1,#0x8
00624b00  strb r1,[r0,#0x9]
00624b04  bx lr
00624b08  nop
00624b0c  cpy r0,r0
