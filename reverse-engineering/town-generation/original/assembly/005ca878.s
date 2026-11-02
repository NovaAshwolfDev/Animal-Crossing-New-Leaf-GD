005ca878  stmdb sp!,{r4,lr}
005ca87c  sub sp,sp,#0x8
005ca880  mov r12,#0x0
005ca884  cpy r4,r12
005ca888  stmia sp,{r4,r12}
005ca88c  bl 0x005ca678
005ca890  add sp,sp,#0x8
005ca894  ldmia sp!,{r4,pc}
