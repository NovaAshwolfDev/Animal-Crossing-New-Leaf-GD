001bc8a4  sub r0,r0,#0xa6
001bc8a8  cmp r0,#0x6
001bc8ac  ldrcc r1,[0x1bc8c0]
001bc8b0  movcs r0,#0x0
001bc8b4  addcc r0,r1,r0, lsl #0x1
001bc8b8  ldrhcc r0,[r0,#0x0]
001bc8bc  bx lr
