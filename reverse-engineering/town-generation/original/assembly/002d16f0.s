002d16f0  ldr r3,[0x2d1724]
002d16f4  str r1,[r0,#0x4]
002d16f8  mov r12,r1, asr #0x1f
002d16fc  str r3,[r0,#0x0]
002d1700  ands r3,r1,#0x1f
002d1704  add r1,r1,r12, lsr #0x1b
002d1708  movne r3,#0x1
002d170c  add r1,r3,r1, asr #0x5
002d1710  str r1,[r0,#0x8]
002d1714  mvn r1,#0x0
002d1718  str r1,[r0,#0x10]
002d171c  str r2,[r0,#0xc]
002d1720  bx lr
