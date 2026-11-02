0023bcf8  cmp r1,#0xa
0023bcfc  bcs 0x0023bd0c
0023bd00  rsb r1,r1,r1, lsl #0x4
0023bd04  add r1,r1,r1, lsl #0x3
0023bd08  add r0,r0,r1, lsl #0x4
0023bd0c  bx lr
