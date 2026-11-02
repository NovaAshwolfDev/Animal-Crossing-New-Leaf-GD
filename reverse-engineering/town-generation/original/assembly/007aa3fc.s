007aa3fc  cmp r1,#0x3
007aa400  ldrbeq r0,[r0,#0x0]
007aa404  beq 0x007aa420
007aa408  cmp r1,#0x4
007aa40c  ldrbeq r0,[r0,#0x1]
007aa410  beq 0x007aa420
007aa414  cmp r1,#0x5
007aa418  ldrbeq r0,[r0,#0x2]
007aa41c  movne r0,#0x1b
007aa420  tst r0,#0x3
007aa424  moveq r0,#0x17
007aa428  beq 0x007aa45c
007aa42c  mov r0,r0, lsr #0x2
007aa430  tst r0,#0x3
007aa434  moveq r0,#0x16
007aa438  beq 0x007aa45c
007aa43c  mov r0,r0, lsr #0x2
007aa440  tst r0,#0x3
007aa444  moveq r0,#0x15
007aa448  beq 0x007aa45c
007aa44c  mov r0,r0, lsl #0x1c
007aa450  movs r0,r0, lsr #0x1e
007aa454  moveq r0,#0x14
007aa458  movne r0,#0x0
007aa45c  bx lr
