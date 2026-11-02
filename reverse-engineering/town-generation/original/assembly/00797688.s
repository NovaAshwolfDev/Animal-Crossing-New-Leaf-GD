00797688  stmdb sp!,{r4,r5,r6,r7,r8,lr}
0079768c  cpy r6,r0
00797690  cpy r7,r1
00797694  cpy r4,r2
00797698  cpy r5,r3
0079769c  cpy r1,r3
007976a0  cpy r0,r2
007976a4  bl 0x005dc594
007976a8  cmp r0,#0x0
007976ac  beq 0x007976c4
007976b0  add r0,r6,r5, lsl #0x6
007976b4  add r0,r0,r4, lsl #0x2
007976b8  cpy r1,r7
007976bc  ldmia sp!,{r4,r5,r6,r7,r8,lr}
007976c0  b 0x00756eb0
007976c4  ldmia sp!,{r4,r5,r6,r7,r8,pc}
