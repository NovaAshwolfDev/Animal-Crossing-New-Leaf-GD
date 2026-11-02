001bc8c4  sub r0,r0,#0x9f
001bc8c8  cmp r0,#0x7
001bc8cc  ldrcc r1,[0x1bc8e0]
001bc8d0  movcs r0,#0x0
001bc8d4  addcc r0,r1,r0, lsl #0x1
001bc8d8  ldrhcc r0,[r0,#0x0]
001bc8dc  bx lr
