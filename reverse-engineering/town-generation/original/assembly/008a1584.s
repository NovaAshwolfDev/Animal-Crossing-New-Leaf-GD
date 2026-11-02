008a1584  stmdb sp!,{r4,r5,r6,r7,r8,lr}
008a1588  mov r6,#0x0
008a158c  cpy r4,r0
008a1590  str r6,[r0,#0x0]
008a1594  str r6,[r0,#0x4]
008a1598  str r6,[r0,#0x8]
008a159c  str r6,[r0,#0xc]!
008a15a0  adds r2,r4,#0x14
008a15a4  str r6,[r0,#0x4]
008a15a8  cpy r0,r4
008a15ac  mov r1,#0x100
008a15b0  beq 0x008a15f4
008a15b4  mov r12,#0x2
008a15b8  mov r3,#0x0
008a15bc  mov r5,#0xff
008a15c0  str r2,[r0,#0xc]
008a15c4  add r8,r12,r3
008a15c8  subs r5,r5,#0x1
008a15cc  add r8,r2,r8, lsl #0x2
008a15d0  str r8,[r2,r3,lsl #0x2]
008a15d4  add r3,r3,r12
008a15d8  bne 0x008a15c4
008a15dc  sub r3,r1,#0x1
008a15e0  mul r12,r12,r3
008a15e4  str r6,[r2,r12,lsl #0x2]
008a15e8  str r2,[r0,#0x10]
008a15ec  add r2,r2,r1, lsl #0x3
008a15f0  bl 0x005a6780
008a15f4  cpy r0,r4
008a15f8  ldmia sp!,{r4,r5,r6,r7,r8,pc}
