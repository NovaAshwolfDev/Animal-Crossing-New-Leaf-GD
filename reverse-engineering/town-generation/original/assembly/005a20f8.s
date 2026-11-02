005a20f8  stmdb sp!,{r4,lr}
005a20fc  bl 0x007fedc4
005a2100  cmp r0,#0x0
005a2104  blt 0x005a2128
005a2108  ldr r1,[0x5a2130]
005a210c  ldr r1,[r1,#0x4]
005a2110  cmp r1,#0x0
005a2114  ldrne r2,[0x5a2134]
005a2118  cmpne r2,r0
005a211c  addhi r0,r0,r0, lsl #0x4
005a2120  addhi r0,r1,r0, lsl #0x1
005a2124  bhi 0x005a212c
005a2128  mov r0,#0x0
005a212c  ldmia sp!,{r4,pc}
