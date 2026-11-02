0057fe0c  stmdb sp!,{r4,lr}
0057fe10  bl 0x005ee3a4
0057fe14  cmp r0,#0x25
0057fe18  cmpne r0,#0x7
0057fe1c  moveq r0,#0x1
0057fe20  movne r0,#0x0
0057fe24  ldmia sp!,{r4,pc}
