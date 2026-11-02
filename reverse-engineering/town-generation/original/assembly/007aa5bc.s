007aa5bc  cmp r1,#0x3
007aa5c0  ldrbeq r0,[r0,#0x0]
007aa5c4  beq 0x007aa5e0
007aa5c8  cmp r1,#0x4
007aa5cc  ldrbeq r0,[r0,#0x1]
007aa5d0  beq 0x007aa5e0
007aa5d4  cmp r1,#0x5
007aa5d8  ldrbeq r0,[r0,#0x2]
007aa5dc  movne r0,#0x1b
007aa5e0  ldr r1,[0x7aa5f4]
007aa5e4  mov r0,r0, lsl #0x1c
007aa5e8  mov r0,r0, lsr #0x1e
007aa5ec  ldr r0,[r1,r0,lsl #0x2]
007aa5f0  bx lr
