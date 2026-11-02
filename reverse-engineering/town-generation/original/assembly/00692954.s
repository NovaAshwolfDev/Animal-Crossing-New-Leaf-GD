00692954  ldrb r3,[r0,#0x9]
00692958  and r2,r1,#0x3
0069295c  and r1,r3,#0xfc
00692960  add r1,r1,r2
00692964  strb r1,[r0,#0x9]
00692968  bx lr
