001bc904  sub r0,r0,#0xc4
001bc908  cmp r0,#0x4
001bc90c  ldrcc r1,[0x1bc920]
001bc910  movcs r0,#0x0
001bc914  addcc r0,r1,r0, lsl #0x1
001bc918  ldrhcc r0,[r0,#0x0]
001bc91c  bx lr
