00104df8  stmdb sp!,{r4,lr}
00104dfc  bl 0x00107664
00104e00  ands r1,r0,#0x80000000
00104e04  bpl 0x00104e1c
00104e08  cpy r1,pc
00104e0c  movs r2,r0, lsr #0x1f
00104e10  beq 0x00104e1c
00104e14  ldmia sp!,{r4,lr}
00104e18  b 0x00116b58
00104e1c  ldmia sp!,{r4,pc}
