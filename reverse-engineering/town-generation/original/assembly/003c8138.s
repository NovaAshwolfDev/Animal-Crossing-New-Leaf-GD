003c8138  cmp r1,#0x2
003c813c  cmplt r2,#0x2
003c8140  addlt r0,r0,r2, lsl #0xb
003c8144  addlt r0,r0,r1, lsl #0xa
003c8148  movge r0,#0x0
003c814c  addlt r0,r0,#0x22
003c8150  bx lr
