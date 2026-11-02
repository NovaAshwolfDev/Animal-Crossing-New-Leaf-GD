001bc924  sub r0,r0,#0xbb
001bc928  cmp r0,#0x3
001bc92c  ldrcc r1,[0x1bc940]
001bc930  movcs r0,#0x0
001bc934  addcc r0,r1,r0, lsl #0x1
001bc938  ldrhcc r0,[r0,#0x0]
001bc93c  bx lr
