007fe014  ldrh r0,[r0,#0x0]
007fe018  and r0,r0,#0x6000
007fe01c  cmp r0,#0x4000
007fe020  moveq r0,#0x1
007fe024  movne r0,#0x0
007fe028  bx lr
