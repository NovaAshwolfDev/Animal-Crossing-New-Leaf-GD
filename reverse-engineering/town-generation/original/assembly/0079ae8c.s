00290160  stmdb sp!,{r4,lr}
00290164  cpy r4,r0
00290168  cpy r0,r1
0029016c  bl 0x007fedc4
00290170  cmp r0,#0x0
00290174  blt 0x002901a0
00290178  mov r1,r0, asr #0x5
0029017c  cmp r1,#0x8e
00290180  and r0,r0,#0x1f
00290184  bcs 0x002901a0
00290188  ldr r2,[r4,r1,lsl #0x2]
0029018c  mov r3,#0x1
00290190  bic r0,r2,r3, lsl r0
00290194  str r0,[r4,r1,lsl #0x2]
00290198  cpy r0,r3
0029019c  ldmia sp!,{r4,pc}
002901a0  mov r0,#0x0
002901a4  ldmia sp!,{r4,pc}
0079ae8c  mov r3,#0x0
0079ae90  cpy r12,r3
0079ae94  stmdb sp!,{r4,r5}
0079ae98  ldr r2,[r0,r12,lsl #0x2]
0079ae9c  cmp r2,#0x0
0079aea0  beq 0x0079aeb4
0079aea4  tst r2,#0x1
0079aea8  addne r3,r3,#0x1
0079aeac  movs r2,r2, lsr #0x1
0079aeb0  bne 0x0079aea4
0079aeb4  add r12,r12,#0x1
0079aeb8  cmp r12,#0x8e
0079aebc  bcc 0x0079ae98
0079aec0  cmp r3,#0x1
0079aec4  movls r0,#0x0
0079aec8  bls 0x0079aed4
0079aecc  ldmia sp!,{r4,r5}
0079aed0  b 0x00290160
0079aed4  ldmia sp!,{r4,r5}
0079aed8  bx lr
