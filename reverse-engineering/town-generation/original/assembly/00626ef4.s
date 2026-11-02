00626ef4  stmdb sp!,{r4,lr}
00626ef8  cpy r4,r0
00626efc  bl 0x00626fc4
00626f00  mov r1,#0xfe
00626f04  mov r0,#0x5
00626f08  strb r1,[r4,#0x59]
00626f0c  strb r0,[r4,#0x4f]
00626f10  ldmia sp!,{r4,pc}
