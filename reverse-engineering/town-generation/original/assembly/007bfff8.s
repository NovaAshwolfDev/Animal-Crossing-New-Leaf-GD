007bfff8  cmp r2,#0x60
007bfffc  rsbcc r2,r2,r2, lsl #0x3
007c0000  addcc r0,r0,r2, lsl #0x4
007c0004  cmp r1,#0x70
007c0008  addcc r0,r0,r1
007c000c  ldrb r0,[r0,#0x0]
007c0010  cmp r0,#0xff
007c0014  movne r0,#0x1
007c0018  moveq r0,#0x0
007c001c  bx lr
