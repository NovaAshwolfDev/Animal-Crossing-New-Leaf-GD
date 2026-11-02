007fdfb8  ldrh r0,[r0,#0x0]
007fdfbc  ldrh r1,[r1,#0x0]
007fdfc0  bic r0,r0,#0x8000
007fdfc4  bic r1,r1,#0x8000
007fdfc8  cmp r0,r1
007fdfcc  moveq r0,#0x1
007fdfd0  movne r0,#0x0
007fdfd4  bx lr
