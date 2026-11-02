0074a424  stmdb sp!,{r4,r5,r6,r7,r8,lr}
0074a428  cpy r4,r0
0074a42c  mov r7,#0x0
0074a430  and r0,r7,#0xff
0074a434  bl 0x0062d120
0074a438  movs r6,r0
0074a43c  movne r5,#0x0
0074a440  beq 0x0074a480
0074a444  cpy r1,r5
0074a448  add r0,r6,#0x2c
0074a44c  bl 0x0023bcf8
0074a450  cmp r0,r4
0074a454  nop
0074a458  bne 0x0074a470
0074a45c  mov r0,#0x0
0074a460  orr r0,r0,r7, lsl #0x4
0074a464  uxth r0,r0
0074a468  orr r0,r0,r5
0074a46c  ldmia sp!,{r4,r5,r6,r7,r8,pc}
0074a470  add r0,r5,#0x1
0074a474  uxth r5,r0
0074a478  cmp r5,#0xa
0074a47c  bcc 0x0074a444
0074a480  add r0,r7,#0x1
0074a484  uxth r7,r0
0074a488  cmp r7,#0x8
0074a48c  bcc 0x0074a430
0074a490  bl 0x00636e3c
0074a494  ldr r7,[0x74a624]
0074a498  mov r5,#0x0
0074a49c  add r0,r0,r7
0074a4a0  add r6,r0,#0x9c
0074a4a4  cpy r1,r5
0074a4a8  add r0,r6,#0x4c
0074a4ac  bl 0x001ebfc8
0074a4b0  cmp r0,r4
0074a4b4  nop
0074a4b8  bne 0x0074a4c4
0074a4bc  orr r0,r5,#0x200
0074a4c0  ldmia sp!,{r4,r5,r6,r7,r8,pc}
0074a4c4  add r0,r5,#0x1
0074a4c8  uxth r5,r0
0074a4cc  cmp r5,#0x8
0074a4d0  bcc 0x0074a4a4
0074a4d4  bl 0x00636e3c
0074a4d8  add r0,r0,r7
0074a4dc  add r2,r0,#0x4000
0074a4e0  add r2,r2,#0x650
0074a4e4  mov r0,#0x0
0074a4e8  rsb r1,r0,r0, lsl #0x4
0074a4ec  add r1,r1,r1, lsl #0x3
0074a4f0  add r1,r2,r1, lsl #0x4
0074a4f4  add r1,r1,#0x7c
0074a4f8  cmp r1,r4
0074a4fc  bne 0x0074a508
0074a500  orr r0,r0,#0x300
0074a504  ldmia sp!,{r4,r5,r6,r7,r8,pc}
0074a508  add r0,r0,#0x1
0074a50c  uxth r0,r0
0074a510  cmp r0,#0x8
0074a514  bcc 0x0074a4e8
0074a518  bl 0x00636e3c
0074a51c  add r0,r0,#0x49000
0074a520  add r0,r0,#0x520
0074a524  add r0,r0,#0xf0
0074a528  cpy r2,r0
0074a52c  mov r0,#0x0
0074a530  rsb r1,r0,r0, lsl #0x4
0074a534  add r1,r1,r0, lsl #0x8
0074a538  add r1,r2,r1, lsl #0x3
0074a53c  cmp r1,r4
0074a540  bne 0x0074a54c
0074a544  orr r0,r0,#0x600
0074a548  ldmia sp!,{r4,r5,r6,r7,r8,pc}
0074a54c  add r0,r0,#0x1
0074a550  uxth r0,r0
0074a554  cmp r0,#0x8
0074a558  bcc 0x0074a530
0074a55c  mov r5,#0x0
0074a560  nop
0074a564  bl 0x00636e3c
0074a568  nop
0074a56c  nop
0074a570  bl 0x006378a0
0074a574  cpy r1,r5
0074a578  add r0,r0,#0x4
0074a57c  bl 0x006138d4
0074a580  cmp r0,#0x0
0074a584  nop
0074a588  beq 0x0074a5a8
0074a58c  add r0,r0,#0x30
0074a590  cmp r0,r4
0074a594  bne 0x0074a5a8
0074a598  mov r0,#0x100
0074a59c  orr r0,r0,r5, lsl #0x4
0074a5a0  uxth r0,r0
0074a5a4  ldmia sp!,{r4,r5,r6,r7,r8,pc}
0074a5a8  add r0,r5,#0x1
0074a5ac  uxth r5,r0
0074a5b0  cmp r5,#0xa
0074a5b4  bcc 0x0074a560
0074a5b8  ldr r6,[0x74a628]
0074a5bc  mov r5,#0x0
0074a5c0  nop
0074a5c4  bl 0x00636e3c
0074a5c8  and r1,r5,#0xff
0074a5cc  add r0,r0,r6
0074a5d0  bl 0x00757510
0074a5d4  nop
0074a5d8  nop
0074a5dc  add r0,r0,#0x304
0074a5e0  cmp r0,r4
0074a5e4  nop
0074a5e8  bne 0x0074a5fc
0074a5ec  mov r0,#0x400
0074a5f0  orr r0,r0,r5, lsl #0x4
0074a5f4  uxth r0,r0
0074a5f8  ldmia sp!,{r4,r5,r6,r7,r8,pc}
0074a5fc  add r5,r5,#0x1
0074a600  cmp r5,#0x4
0074a604  bcc 0x0074a5c0
0074a608  bl 0x00636e3c
0074a60c  ldr r1,[0x74a62c]
0074a610  add r0,r0,r1
0074a614  cmp r0,r4
0074a618  ldrne r0,[0x74a630]
0074a61c  moveq r0,#0x500
0074a620  ldmia sp!,{r4,r5,r6,r7,r8,pc}
