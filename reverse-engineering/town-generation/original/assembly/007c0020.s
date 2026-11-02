007c0020  rsb r12,r2,r2, lsl #0x3
007c0024  cmp r2,#0x60
007c0028  cpy r3,r0
007c002c  add r12,r0,r12, lsl #0x4
007c0030  cpycc r3,r12
007c0034  cmp r1,#0x70
007c0038  addcc r3,r3,r1
007c003c  str r4,[sp,#-0x4]!
007c0040  ldrb r3,[r3,#0x0]
007c0044  cmp r3,#0xff
007c0048  mvncs r0,#0x0
007c004c  bcs 0x007c0064
007c0050  cmp r2,#0x60
007c0054  cpycc r0,r12
007c0058  cmp r1,#0x70
007c005c  addcc r0,r0,r1
007c0060  ldrb r0,[r0,#0x0]
007c0064  ldr r4,[sp],#0x4
007c0068  bx lr
