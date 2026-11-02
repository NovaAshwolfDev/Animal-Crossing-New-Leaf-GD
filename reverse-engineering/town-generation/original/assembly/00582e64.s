00582e64  ldr r1,[0x582e80]
00582e68  cmp r0,#0xa
00582e6c  addcc r0,r0,r0, lsl #0x2
00582e70  addcc r1,r1,#0xa8
00582e74  addcc r0,r1,r0, lsl #0x4
00582e78  movcs r0,#0x0
00582e7c  bx lr
