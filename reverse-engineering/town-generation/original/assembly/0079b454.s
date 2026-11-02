0079b454  stmdb sp!,{r3,r4,r5,r6,r7,r8,r9,lr}
0079b458  cpy r4,r0
0079b45c  cpy r0,r1
0079b460  bl 0x005a19a0
0079b464  ldmia r0,{r0,r5}
0079b468  mvn r2,#0x0
0079b46c  mov r1,r0, lsr #0x10
0079b470  uxth r6,r0
0079b474  sub r0,r6,#0x2000
0079b478  sub r1,r1,#0x2000
0079b47c  mov r3,r0, asr #0x5
0079b480  and r0,r0,#0x1f
0079b484  ldr r7,[r4,r3,lsl #0x2]
0079b488  mov r8,r2, lsl r0
0079b48c  mov r0,r1, asr #0x5
0079b490  and r12,r1,#0x1f
0079b494  orr r1,r7,r8
0079b498  str r1,[r4,r3,lsl #0x2]
0079b49c  add r1,r3,#0x1
0079b4a0  cmp r1,r0
0079b4a4  bcs 0x0079b4b8
0079b4a8  str r2,[r4,r1,lsl #0x2]
0079b4ac  add r1,r1,#0x1
0079b4b0  cmp r1,r0
0079b4b4  bcc 0x0079b4a8
0079b4b8  cmp r3,r0
0079b4bc  rsb r3,r12,#0x1f
0079b4c0  ldr r1,[r4,r0,lsl #0x2]
0079b4c4  mov r2,r2, lsr r3
0079b4c8  orrne r1,r1,r2
0079b4cc  andeq r1,r1,r2
0079b4d0  str r1,[r4,r0,lsl #0x2]
0079b4d4  bl 0x00636e3c
0079b4d8  ldr r1,[0x79b558]
0079b4dc  ldrb r0,[r0,r1]
0079b4e0  movs r0,r0, lsr #0x4
0079b4e4  bne 0x0079b554
0079b4e8  cpy r1,r6
0079b4ec  cpy r0,sp
0079b4f0  bl 0x00756d40
0079b4f4  cpy r0,sp
0079b4f8  nop
0079b4fc  bl 0x005a20f8
0079b500  cmp r5,#0x0
0079b504  cpy r1,r0
0079b508  mov r0,#0x0
0079b50c  movhi r12,#0x1
0079b510  bls 0x0079b54c
0079b514  ldrb r2,[r1,#0x1f]
0079b518  movs r2,r2, lsl #0x19
0079b51c  bpl 0x0079b53c
0079b520  add r2,r6,r0
0079b524  sub r3,r2,#0x2000
0079b528  mov r2,r3, lsr #0x5
0079b52c  and r3,r3,#0x1f
0079b530  ldr r7,[r4,r2,lsl #0x2]
0079b534  bic r3,r7,r12, lsl r3
0079b538  str r3,[r4,r2,lsl #0x2]
0079b53c  add r0,r0,#0x1
0079b540  cmp r5,r0
0079b544  add r1,r1,#0x22
0079b548  bhi 0x0079b514
0079b54c  cpy r0,sp
0079b550  cpy r0,r0
0079b554  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,pc}
