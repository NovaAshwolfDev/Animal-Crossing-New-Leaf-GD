001bc884  sub r0,r0,#0xb2
001bc888  cmp r0,#0x8
001bc88c  ldrcc r1,[0x1bc8a0]
001bc890  movcs r0,#0x0
001bc894  addcc r0,r1,r0, lsl #0x1
001bc898  ldrhcc r0,[r0,#0x0]
001bc89c  bx lr
