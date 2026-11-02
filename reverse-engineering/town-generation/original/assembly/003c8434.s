003c8434  cmp r1,#0x4
003c8438  bcs 0x003c8448
003c843c  ldr r2,[0x3c844c]
003c8440  smulbb r1,r1,r2
003c8444  add r0,r0,r1, lsl #0x3
003c8448  bx lr
