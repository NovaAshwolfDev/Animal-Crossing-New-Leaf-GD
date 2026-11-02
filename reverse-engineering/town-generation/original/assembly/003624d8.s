003624d8  cmp r1,#0x10
003624dc  bcs 0x003624ec
003624e0  ldr r2,[0x3624f0]
003624e4  mul r1,r1,r2
003624e8  add r0,r0,r1, lsl #0x3
003624ec  bx lr
