002d57dc  cmp r1,#0x4
002d57e0  movcs r0,#0x0
002d57e4  bcs 0x002d57f4
002d57e8  ldr r2,[0x2d57f8]
002d57ec  mul r1,r1,r2
002d57f0  add r0,r0,r1, lsl #0x4
002d57f4  bx lr
