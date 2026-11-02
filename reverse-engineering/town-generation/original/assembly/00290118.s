00290118  stmdb sp!,{r4,lr}
0029011c  cpy r4,r0
00290120  cpy r0,r1
00290124  bl 0x007fedc4
00290128  cmp r0,#0x0
0029012c  blt 0x00290158
00290130  mov r1,r0, asr #0x5
00290134  cmp r1,#0x8e
00290138  and r0,r0,#0x1f
0029013c  bcs 0x00290158
00290140  ldr r2,[r4,r1,lsl #0x2]
00290144  mov r3,#0x1
00290148  orr r0,r2,r3, lsl r0
0029014c  str r0,[r4,r1,lsl #0x2]
00290150  cpy r0,r3
00290154  ldmia sp!,{r4,pc}
00290158  mov r0,#0x0
0029015c  ldmia sp!,{r4,pc}
