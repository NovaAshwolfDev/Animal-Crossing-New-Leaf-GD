0043e170  cpy r1,r0
0043e174  ldr r0,[r0,#0x0]
0043e178  ldrb r2,[r1,#0x3]
0043e17c  bic r0,r0,#0xff000000
0043e180  orr r0,r0,r2, lsl #0x18
0043e184  movs r0,r0, lsr #0x8
0043e188  bne 0x0043e19c
0043e18c  ldr r0,[r1,#0x4]
0043e190  ldrb r1,[r1,#0x7]
0043e194  bic r0,r0,#0xff000000
0043e198  orr r0,r0,r1, lsl #0x18
0043e19c  bx lr
