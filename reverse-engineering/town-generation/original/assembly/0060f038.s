0060f038  cmp r0,r1
0060f03c  beq 0x0060f050
0060f040  ldr r2,[r1,#0x0]
0060f044  mov r1,#0x0
0060f048  str r2,[r0,#0x0]
0060f04c  strb r1,[r0,#0x4]
0060f050  bx lr
