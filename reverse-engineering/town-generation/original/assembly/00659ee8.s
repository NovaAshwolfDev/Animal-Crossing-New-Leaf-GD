00659ee8  stmdb sp!,{r4,lr}
00659eec  cpy r4,r0
00659ef0  bl 0x005cc158
00659ef4  ldmia r0,{r1,r2}
00659ef8  ldr r0,[r0,#0x8]
00659efc  str r0,[r4,#0x8]
00659f00  stmia r4,{r1,r2}
00659f04  ldmia sp!,{r4,pc}
