006a908c  ldr r0,[0x6a90ac]
006a9090  stmdb sp!,{r4,lr}
006a9094  ldr r0,[r0,#0x0]
006a9098  bl 0x007f3a98
006a909c  cmp r0,#0x0
006a90a0  moveq r0,#0x1
006a90a4  movne r0,#0x0
006a90a8  ldmia sp!,{r4,pc}
