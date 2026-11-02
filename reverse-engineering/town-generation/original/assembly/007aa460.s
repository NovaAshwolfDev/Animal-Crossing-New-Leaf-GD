007aa460  cmp r1,#0x3
007aa464  ldrbeq r0,[r0,#0x0]
007aa468  beq 0x007aa484
007aa46c  cmp r1,#0x4
007aa470  ldrbeq r0,[r0,#0x1]
007aa474  beq 0x007aa484
007aa478  cmp r1,#0x5
007aa47c  ldrbeq r0,[r0,#0x2]
007aa480  movne r0,#0x1b
007aa484  and r1,r0,#0x3
007aa488  cmp r1,#0x3
007aa48c  moveq r0,#0x17
007aa490  beq 0x007aa4d0
007aa494  mov r0,r0, lsr #0x2
007aa498  and r1,r0,#0x3
007aa49c  cmp r1,#0x3
007aa4a0  moveq r0,#0x16
007aa4a4  beq 0x007aa4d0
007aa4a8  mov r0,r0, lsr #0x2
007aa4ac  and r1,r0,#0x3
007aa4b0  cmp r1,#0x3
007aa4b4  moveq r0,#0x15
007aa4b8  beq 0x007aa4d0
007aa4bc  mov r0,r0, lsl #0x1c
007aa4c0  mov r0,r0, lsr #0x1e
007aa4c4  cmp r0,#0x3
007aa4c8  moveq r0,#0x14
007aa4cc  movne r0,#0x0
007aa4d0  bx lr
