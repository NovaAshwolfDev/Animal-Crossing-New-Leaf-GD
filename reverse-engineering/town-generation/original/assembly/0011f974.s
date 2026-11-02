0011f974  stmdb sp!,{r4,lr}
0011f978  cpy r4,r0
0011f97c  bl 0x00110670
0011f980  mov r0,#0x0
0011f984  str r0,[r4,#0x4]
0011f988  str r0,[r4,#0x8]
0011f98c  ldmia sp!,{r4,pc}
