0023d9a0  stmdb sp!,{r4,lr}
0023d9a4  cpy r4,r0
0023d9a8  mov r0,#0x0
0023d9ac  strb r0,[r4,#0x8]
0023d9b0  bl 0x005cc158
0023d9b4  ldr r1,[r0,#0x0]
0023d9b8  ldr r2,[0x23d9fc]
0023d9bc  ldr r0,[r0,#0x4]
0023d9c0  cmp r1,r2
0023d9c4  sxtble r1,r0
0023d9c8  cmple r1,#0x1
0023d9cc  bne 0x0023d9f4
0023d9d0  mov r1,r0, lsl #0x10
0023d9d4  mov r1,r1, asr #0x18
0023d9d8  cmp r1,#0x1
0023d9dc  movle r0,r0, asr #0x18
0023d9e0  cmple r0,#0x6
0023d9e4  bge 0x0023d9f4
0023d9e8  ldrb r0,[r4,#0x8]
0023d9ec  orr r0,r0,#0x1
0023d9f0  strb r0,[r4,#0x8]
0023d9f4  ldmia sp!,{r4,lr}
0023d9f8  b 0x005cb800
