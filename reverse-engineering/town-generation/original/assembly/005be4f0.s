005be4f0  ldr r2,[0x5be544]
005be4f4  eor r1,r1,r1, lsr #0x1e
005be4f8  str r4,[sp,#-0x4]!
005be4fc  mul r1,r1,r2
005be500  add r1,r1,#0x1
005be504  eor r3,r1,r1, lsr #0x1e
005be508  mul r2,r3,r2
005be50c  ldr r3,[0x5be544]
005be510  add r2,r2,#0x2
005be514  stmia r0,{r1,r2}
005be518  eor r12,r2,r2, lsr #0x1e
005be51c  mul r3,r12,r3
005be520  ldr r12,[0x5be544]
005be524  add r3,r3,#0x3
005be528  str r3,[r0,#0x8]!
005be52c  eor r4,r3,r3, lsr #0x1e
005be530  mul r12,r4,r12
005be534  add r1,r12,#0x4
005be538  str r1,[r0,#0x4]
005be53c  ldr r4,[sp],#0x4
005be540  bx lr
