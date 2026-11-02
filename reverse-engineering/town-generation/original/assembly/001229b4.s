001229b4  stmdb sp!,{r4,r5}
001229b8  ldr r4,[sp,#0x8]
001229bc  ldr r5,[sp,#0xc]
001229c0  swi 0x22
001229c4  ldmia sp!,{r4,r5}
001229c8  bx lr
