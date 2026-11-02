00636f48  stmdb sp!,{r4,lr}
00636f4c  cpy r4,r0
00636f50  mov r0,#0xf8
00636f54  mov r1,#0x0
00636f58  strh r0,[r4,#0x4]
00636f5c  strb r1,[r4,#0x6]
00636f60  ldmia sp!,{r4,pc}
