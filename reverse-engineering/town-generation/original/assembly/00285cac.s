00285cac  ldr r1,[0x285cc0]
00285cb0  cmp r0,#0xc
00285cb4  addcc r1,r1,r0, lsl #0x2
00285cb8  ldr r0,[r1,#0x0]
00285cbc  bx lr
