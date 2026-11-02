007aa388  cmp r1,#0x3
007aa38c  ldrbeq r0,[r0,#0x0]
007aa390  beq 0x007aa3ac
007aa394  cmp r1,#0x4
007aa398  ldrbeq r0,[r0,#0x1]
007aa39c  beq 0x007aa3ac
007aa3a0  cmp r1,#0x5
007aa3a4  ldrbeq r0,[r0,#0x2]
007aa3a8  movne r0,#0x1b
007aa3ac  and r1,r0,#0x3
007aa3b0  cmp r1,#0x2
007aa3b4  moveq r0,#0x17
007aa3b8  beq 0x007aa3f8
007aa3bc  mov r0,r0, lsr #0x2
007aa3c0  and r1,r0,#0x3
007aa3c4  cmp r1,#0x2
007aa3c8  moveq r0,#0x16
007aa3cc  beq 0x007aa3f8
007aa3d0  mov r0,r0, lsr #0x2
007aa3d4  and r1,r0,#0x3
007aa3d8  cmp r1,#0x2
007aa3dc  moveq r0,#0x15
007aa3e0  beq 0x007aa3f8
007aa3e4  mov r0,r0, lsl #0x1c
007aa3e8  mov r0,r0, lsr #0x1e
007aa3ec  cmp r0,#0x2
007aa3f0  moveq r0,#0x14
007aa3f4  movne r0,#0x0
007aa3f8  bx lr
