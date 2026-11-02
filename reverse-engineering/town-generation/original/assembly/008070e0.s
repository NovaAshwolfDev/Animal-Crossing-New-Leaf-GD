008070e0  stmdb sp!,{r4,lr}
008070e4  cpy r4,r0
008070e8  cpy r0,r1
008070ec  bl 0x007fedc4
008070f0  cmp r0,#0x0
008070f4  blt 0x00807118
008070f8  mov r1,r0, asr #0x5
008070fc  cmp r1,#0x8e
00807100  and r0,r0,#0x1f
00807104  bcs 0x00807118
00807108  ldr r1,[r4,r1,lsl #0x2]
0080710c  mov r0,r1, lsr r0
00807110  and r0,r0,#0x1
00807114  ldmia sp!,{r4,pc}
00807118  mov r0,#0x0
0080711c  ldmia sp!,{r4,pc}
