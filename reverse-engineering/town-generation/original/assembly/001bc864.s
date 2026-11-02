001bc864  sub r0,r0,#0xbe
001bc868  cmp r0,#0x6
001bc86c  ldrcc r1,[0x1bc880]
001bc870  movcs r0,#0x0
001bc874  addcc r0,r1,r0, lsl #0x1
001bc878  ldrhcc r0,[r0,#0x0]
001bc87c  bx lr
