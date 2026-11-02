007dcdac  ldrb r0,[r0,#0x14]
007dcdb0  cmp r0,#0x4b
007dcdb4  bcs 0x007dcdc4
007dcdb8  cmp r0,#0x0
007dcdbc  movne r0,#0x1
007dcdc0  bne 0x007dcdc8
007dcdc4  mov r0,#0x0
007dcdc8  bx lr
