00301bac  add r3,r0,#0x1
00301bb0  b 0x00301bc4
00301bb4  ldrb r1,[r0],#0x1
00301bb8  cmp r1,#0x0
00301bbc  subeq r0,r0,r3
00301bc0  bxeq lr
00301bc4  tst r0,#0x3
00301bc8  ldreq r2,[0x301c08]
00301bcc  bne 0x00301bb4
00301bd0  ldr r1,[r0],#0x4
00301bd4  uqsub8 r1,r2,r1
00301bd8  cmp r1,#0x0
00301bdc  beq 0x00301bd0
00301be0  movs r2,r1, lsl #0x18
00301be4  sub r0,r0,r3
00301be8  subne r0,r0,#0x3
00301bec  bxne lr
00301bf0  movs r2,r1, lsl #0x10
00301bf4  subne r0,r0,#0x2
00301bf8  bxne lr
00301bfc  movs r1,r1, lsl #0x8
00301c00  subne r0,r0,#0x1
00301c04  bx lr
