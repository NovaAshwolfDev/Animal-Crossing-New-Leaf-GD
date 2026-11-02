007dcca4  ldr r2,[0x7dccfc]
007dcca8  ldrb r1,[r0,#0xa]
007dccac  ldr r2,[r2,#0x4]
007dccb0  cmp r1,#0x93
007dccb4  movcs r1,#0x0
007dccb8  cmp r2,#0x0
007dccbc  beq 0x007dccd0
007dccc0  cmp r1,#0x93
007dccc4  addcc r1,r1,r1, lsl #0x1
007dccc8  addcc r1,r1,r2
007dcccc  bcc 0x007dccd4
007dccd0  mov r1,#0x0
007dccd4  cmp r1,#0x0
007dccd8  moveq r0,#0x1
007dccdc  beq 0x007dccf8
007dcce0  ldrb r1,[r1,#0x1]
007dcce4  movs r1,r1, lsr #0x7
007dcce8  ldrbne r0,[r0,#0x1f]
007dccec  movne r0,r0, lsl #0x1e
007dccf0  movne r0,r0, lsr #0x1f
007dccf4  moveq r0,#0x0
007dccf8  bx lr
