0014d6bc  stmdb sp!,{r4,r5,r6}
0014d6c0  cmp r2,#0x0
0014d6c4  ldrhi r5,[0x14d720]
0014d6c8  ldrhi r4,[0x14d724]
0014d6cc  uxth r0,r0
0014d6d0  mov r12,#0x0
0014d6d4  bls 0x0014d718
0014d6d8  mov r3,#0x4
0014d6dc  tst r0,#0x8000
0014d6e0  eorne r0,r5,r0, lsl #0x1
0014d6e4  uxthne r0,r0
0014d6e8  andeq r0,r4,r0, lsl #0x1
0014d6ec  tst r0,#0x8000
0014d6f0  eorne r0,r5,r0, lsl #0x1
0014d6f4  uxthne r0,r0
0014d6f8  andeq r0,r4,r0, lsl #0x1
0014d6fc  subs r3,r3,#0x1
0014d700  bne 0x0014d6dc
0014d704  ldrb r3,[r1],#0x1
0014d708  add r12,r12,#0x1
0014d70c  cmp r12,r2
0014d710  eor r0,r0,r3
0014d714  bcc 0x0014d6d8
0014d718  ldmia sp!,{r4,r5,r6}
0014d71c  bx lr
