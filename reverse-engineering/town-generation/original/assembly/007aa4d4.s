007aa4d4  cmp r1,#0x3
007aa4d8  ldrbeq r0,[r0,#0x0]
007aa4dc  beq 0x007aa4f8
007aa4e0  cmp r1,#0x4
007aa4e4  ldrbeq r0,[r0,#0x1]
007aa4e8  beq 0x007aa4f8
007aa4ec  cmp r1,#0x5
007aa4f0  ldrbeq r0,[r0,#0x2]
007aa4f4  movne r0,#0x1b
007aa4f8  and r1,r0,#0x3
007aa4fc  cmp r1,#0x1
007aa500  moveq r0,#0x17
007aa504  beq 0x007aa544
007aa508  mov r0,r0, lsr #0x2
007aa50c  and r1,r0,#0x3
007aa510  cmp r1,#0x1
007aa514  moveq r0,#0x16
007aa518  beq 0x007aa544
007aa51c  mov r0,r0, lsr #0x2
007aa520  and r1,r0,#0x3
007aa524  cmp r1,#0x1
007aa528  moveq r0,#0x15
007aa52c  beq 0x007aa544
007aa530  mov r0,r0, lsl #0x1c
007aa534  mov r0,r0, lsr #0x1e
007aa538  cmp r0,#0x1
007aa53c  moveq r0,#0x14
007aa540  movne r0,#0x0
007aa544  bx lr
