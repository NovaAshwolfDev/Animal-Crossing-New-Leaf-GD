0063ae38  stmdb sp!,{r0,r1,r2,r3,r4,lr}
0063ae3c  cpy r4,r0
0063ae40  bl 0x0080c0b0
0063ae44  add r1,sp,#0x8
0063ae48  add sp,sp,#0x10
0063ae4c  cpy r0,r4
0063ae50  ldmia sp!,{r4,lr}
0063ae54  b 0x0011a3e0
