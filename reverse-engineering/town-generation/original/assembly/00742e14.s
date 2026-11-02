00742e14  stmdb sp!,{r4,r5,r6,lr}
00742e18  cpy r4,r0
00742e1c  cpy r5,r3
00742e20  bl 0x007ec67c
00742e24  ldr r1,[r4,#0x0]
00742e28  strb r5,[r1,r0]
00742e2c  ldmia sp!,{r4,r5,r6,pc}
