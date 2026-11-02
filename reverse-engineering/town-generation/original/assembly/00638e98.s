00638e98  add r1,r1,#0xaa
00638e9c  mov r2,#0xc1
00638ea0  stmdb sp!,{r4,lr}
00638ea4  bl 0x0066c09c
00638ea8  ldr r1,[0x638eb4]
00638eac  str r1,[r0,#0x0]
00638eb0  ldmia sp!,{r4,pc}
