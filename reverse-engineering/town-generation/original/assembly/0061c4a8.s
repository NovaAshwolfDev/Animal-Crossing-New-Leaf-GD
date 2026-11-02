0061c4a8  stmdb sp!,{r4,r5,r6,r7,r8,lr}
0061c4ac  cpy r4,r0
0061c4b0  add r0,r0,#0x17000
0061c4b4  cpy r6,r1
0061c4b8  ldrb r1,[r0,#0x262]
0061c4bc  add r0,r4,#0x10000
0061c4c0  add r0,r0,#0x7200
0061c4c4  tst r1,#0xf
0061c4c8  andne r1,r1,#0xf
0061c4cc  cmpne r1,#0x1
0061c4d0  bne 0x0061c534
0061c4d4  ldrsb r0,[r0,#0x5e]
0061c4d8  cmp r0,#0xa
0061c4dc  bcs 0x0061c534
0061c4e0  ldr r1,[0x61c644]
0061c4e4  mov r7,#0x0
0061c4e8  mul r1,r0,r1
0061c4ec  adds r0,r4,r1, lsl #0x3
0061c4f0  beq 0x0061c534
0061c4f4  bl 0x007f3768
0061c4f8  cmp r0,#0x0
0061c4fc  beq 0x0061c534
0061c500  add r5,r4,#0x17000
0061c504  add r5,r5,#0x1b8
0061c508  ldrb r0,[r5,#0xaa]
0061c50c  and r0,r0,#0xf
0061c510  cmp r0,#0x1
0061c514  beq 0x0061c53c
0061c518  ldrb r1,[r5,#0xab]
0061c51c  ldrb r0,[r5,#0xa7]
0061c520  cpy r4,r1
0061c524  cmp r0,#0x0
0061c528  subne r4,r1,#0x1
0061c52c  beq 0x0061c558
0061c530  b 0x0061c578
0061c534  mov r0,#0x0
0061c538  ldmia sp!,{r4,r5,r6,r7,r8,pc}
0061c53c  cpy r0,r5
0061c540  bl 0x006276cc
0061c544  cpy r1,r6
0061c548  cpy r0,r5
0061c54c  bl 0x00627cc8
0061c550  mov r0,#0x0
0061c554  ldmia sp!,{r4,r5,r6,r7,r8,pc}
0061c558  cpy r0,r5
0061c55c  bl 0x007eb870
0061c560  cmp r0,#0x0
0061c564  nop
0061c568  beq 0x0061c578
0061c56c  bl 0x007b8ee0
0061c570  cmp r0,#0x0
0061c574  subne r4,r4,#0x1
0061c578  cmp r4,#0x0
0061c57c  bge 0x0061c594
0061c580  mov r1,#0x1
0061c584  mov r0,#0x3
0061c588  strb r1,[r5,#0xaa]
0061c58c  strb r0,[r5,#0xab]
0061c590  b 0x0061c5a0
0061c594  cpy r0,r5
0061c598  strb r4,[r5,#0xab]
0061c59c  bl 0x00627d9c
0061c5a0  nop
0061c5a4  bl 0x00636e3c
0061c5a8  nop
0061c5ac  nop
0061c5b0  bl 0x006378a0
0061c5b4  add r6,r0,#0x4
0061c5b8  mov r4,#0x0
0061c5bc  cmp r4,#0xa
0061c5c0  cpycs r5,r7
0061c5c4  bcs 0x0061c5ec
0061c5c8  ldr r1,[0x61c644]
0061c5cc  mul r1,r4,r1
0061c5d0  adds r5,r6,r1, lsl #0x3
0061c5d4  beq 0x0061c630
0061c5d8  cpy r0,r5
0061c5dc  bl 0x007f3768
0061c5e0  cmp r0,#0x0
0061c5e4  nop
0061c5e8  beq 0x0061c630
0061c5ec  cmp r5,#0x0
0061c5f0  movne r0,#0x0
0061c5f4  bne 0x0061c604
0061c5f8  b 0x0061c630
0061c5fc  nop
0061c600  bcs 0x0061c624
0061c604  rsb r2,r0,r0, lsl #0x4
0061c608  add r1,r5,r2, lsl #0x4
0061c60c  add r1,r1,#0x800
0061c610  adds r1,r1,#0xee
0061c614  beq 0x0061c624
0061c618  ldrb r2,[r1,#0xbc]
0061c61c  bic r2,r2,#0x10
0061c620  strb r2,[r1,#0xbc]
0061c624  add r0,r0,#0x1
0061c628  cmp r0,#0x10
0061c62c  bcc 0x0061c5fc
0061c630  add r4,r4,#0x1
0061c634  cmp r4,#0xa
0061c638  blt 0x0061c5bc
0061c63c  mov r0,#0x1
0061c640  ldmia sp!,{r4,r5,r6,r7,r8,pc}
