007aa5f8  cmp r1,#0x3
007aa5fc  ldrbeq r0,[r0,#0x0]
007aa600  beq 0x007aa61c
007aa604  cmp r1,#0x4
007aa608  ldrbeq r0,[r0,#0x1]
007aa60c  beq 0x007aa61c
007aa610  cmp r1,#0x5
007aa614  ldrbeq r0,[r0,#0x2]
007aa618  movne r0,#0x1b
007aa61c  ldr r1,[0x7aa62c]
007aa620  and r0,r0,#0x3
007aa624  ldr r0,[r1,r0,lsl #0x2]
007aa628  bx lr
