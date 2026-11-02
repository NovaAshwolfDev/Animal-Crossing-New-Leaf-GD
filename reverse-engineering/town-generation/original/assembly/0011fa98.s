0011fa98  ldr r1,[r0,#0x8]
0011fa9c  subs r1,r1,#0x1
0011faa0  str r1,[r0,#0x8]
0011faa4  bne 0x0011fab4
0011faa8  mov r1,#0x0
0011faac  str r1,[r0,#0x4]
0011fab0  b 0x00116594
0011fab4  bx lr
