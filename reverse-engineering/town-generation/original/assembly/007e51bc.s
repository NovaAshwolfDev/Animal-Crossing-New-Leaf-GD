007e51bc  ldr r0,[r0,#0x0]
007e51c0  ldr r1,[r1,#0x0]
007e51c4  cmp r0,r1
007e51c8  moveq r0,#0x1
007e51cc  movne r0,#0x0
007e51d0  bx lr
