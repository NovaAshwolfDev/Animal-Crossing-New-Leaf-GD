007aa580  cmp r1,#0x3
007aa584  ldrbeq r0,[r0,#0x0]
007aa588  beq 0x007aa5a4
007aa58c  cmp r1,#0x4
007aa590  ldrbeq r0,[r0,#0x1]
007aa594  beq 0x007aa5a4
007aa598  cmp r1,#0x5
007aa59c  ldrbeq r0,[r0,#0x2]
007aa5a0  movne r0,#0x1b
007aa5a4  ldr r1,[0x7aa5b8]
007aa5a8  mov r0,r0, lsl #0x1a
007aa5ac  mov r0,r0, lsr #0x1e
007aa5b0  ldr r0,[r1,r0,lsl #0x2]
007aa5b4  bx lr
