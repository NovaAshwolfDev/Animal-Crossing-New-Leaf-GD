00122a0c  stmdb sp!,{r4,lr}
00122a10  cpy r4,r0
00122a14  ldr r0,[r0,#0xc]
00122a18  cmp r0,#0x0
00122a1c  blne 0x00125b7c
00122a20  cpy r0,r4
00122a24  ldmia sp!,{r4,lr}
00122a28  b 0x00125b7c
