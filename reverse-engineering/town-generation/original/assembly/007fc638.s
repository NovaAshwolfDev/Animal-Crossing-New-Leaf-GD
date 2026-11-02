007fc638  stmdb sp!,{r4,lr}
007fc63c  cpy r4,r0
007fc640  bl 0x007ec67c
007fc644  ldr r1,[r4,#0x0]
007fc648  ldrb r0,[r1,r0]
007fc64c  ldmia sp!,{r4,pc}
