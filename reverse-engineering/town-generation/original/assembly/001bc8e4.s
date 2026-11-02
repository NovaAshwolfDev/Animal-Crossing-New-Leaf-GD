001bc8e4  sub r0,r0,#0xac
001bc8e8  cmp r0,#0x6
001bc8ec  ldrcc r1,[0x1bc900]
001bc8f0  movcs r0,#0x0
001bc8f4  addcc r0,r1,r0, lsl #0x1
001bc8f8  ldrhcc r0,[r0,#0x0]
001bc8fc  bx lr
