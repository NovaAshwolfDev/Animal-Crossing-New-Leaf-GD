00656200  stmdb sp!,{r4,lr}
00656204  bl 0x0066ffa0
00656208  ldr r2,[0x65621c]
0065620c  mov r1,#0x0
00656210  str r2,[r0,#0x0]
00656214  strb r1,[r0,#0x60]
00656218  ldmia sp!,{r4,pc}
