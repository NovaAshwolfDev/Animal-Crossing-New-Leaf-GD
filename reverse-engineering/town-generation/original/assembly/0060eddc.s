0060eddc  stmdb sp!,{r4,lr}
0060ede0  cpy r4,r0
0060ede4  cpy r0,r1
0060ede8  str r1,[r4,#0x4]
0060edec  bl 0x00140080
0060edf0  str r0,[r4,#0x0]
0060edf4  ldmia sp!,{r4,pc}
