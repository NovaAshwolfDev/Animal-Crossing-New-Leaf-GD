007aa548  cmp r1,#0x3
007aa54c  ldrbeq r0,[r0,#0x0]
007aa550  beq 0x007aa56c
007aa554  cmp r1,#0x4
007aa558  ldrbeq r0,[r0,#0x1]
007aa55c  beq 0x007aa56c
007aa560  cmp r1,#0x5
007aa564  ldrbeq r0,[r0,#0x2]
007aa568  movne r0,#0x1b
007aa56c  ldr r1,[0x7aa57c]
007aa570  mov r0,r0, lsr #0x6
007aa574  ldr r0,[r1,r0,lsl #0x2]
007aa578  bx lr
