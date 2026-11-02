007fdfa0  ldrh r0,[r0,#0x0]
007fdfa4  bic r0,r0,#0x8000
007fdfa8  cmp r0,r1
007fdfac  moveq r0,#0x1
007fdfb0  movne r0,#0x0
007fdfb4  bx lr
