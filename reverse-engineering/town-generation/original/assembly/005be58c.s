005be58c  str r4,[sp,#-0x4]!
005be590  ldmia r0,{r1,r12}
005be594  ldr r2,[r0,#0xc]
005be598  ldr r3,[r0,#0x8]
005be59c  eor r1,r1,r1, lsl #0xb
005be5a0  eor r4,r2,r2, lsr #0x13
005be5a4  eor r1,r1,r1, lsr #0x8
005be5a8  eor r1,r1,r4
005be5ac  str r1,[r0,#0xc]
005be5b0  str r2,[r0,#0x8]
005be5b4  str r3,[r0,#0x4]
005be5b8  str r12,[r0,#0x0]
005be5bc  ldr r4,[sp],#0x4
005be5c0  cpy r0,r1
005be5c4  bx lr
