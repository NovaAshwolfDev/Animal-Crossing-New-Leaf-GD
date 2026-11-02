0075e9ac  cmn r0,#0x1
0075e9b0  bxeq lr
0075e9b4  cmp r0,#0x40
0075e9b8  movge r0,#0x0
0075e9bc  bxge lr
0075e9c0  stmdb sp!,{r4,lr}
0075e9c4  cpy r4,r0
0075e9c8  bl 0x00699e40
0075e9cc  add r1,r4,r4, lsl #0x2
0075e9d0  add r0,r0,r1, lsl #0x2
0075e9d4  ldrh r0,[r0,#0x14]
0075e9d8  sxtb r0,r0
0075e9dc  ldmia sp!,{r4,pc}
