0011b128  subs r3,r2,#0x20
0011b12c  bpl 0x0011b144
0011b130  rsb r3,r2,#0x20
0011b134  mov r0,r0, lsr r2
0011b138  orr r0,r0,r1, lsl r3
0011b13c  mov r1,r1, asr r2
0011b140  bx lr
0011b144  mov r0,r1, asr r3
0011b148  mov r1,r1, asr #0x1f
0011b14c  bx lr
