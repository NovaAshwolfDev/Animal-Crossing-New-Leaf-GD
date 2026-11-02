003c8120  cmp r1,#0x2
003c8124  cmplt r2,#0x2
003c8128  addlt r0,r0,r2, lsl #0xb
003c812c  addlt r0,r0,r1, lsl #0xa
003c8130  add r0,r0,#0x22
003c8134  bx lr
