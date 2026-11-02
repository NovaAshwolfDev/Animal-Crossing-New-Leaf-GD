007581d8  stmdb sp!,{r4,lr}
007581dc  cpy r4,r0
007581e0  bl 0x00804038
007581e4  cmp r0,#0x0
007581e8  addne r0,r4,#0x8800
007581ec  addne r0,r0,#0x248
007581f0  ldmia sp!,{r4,pc}
