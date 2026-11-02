0079ae5c  stmdb sp!,{r4,lr}
0079ae60  cpy r4,r0
0079ae64  cpy r0,r1
0079ae68  bl 0x00802674
0079ae6c  sub r0,r0,#0x2000
0079ae70  and r2,r0,#0x1f
0079ae74  mov r1,r0, lsr #0x5
0079ae78  mov r3,#0x1
0079ae7c  ldr r0,[r4,r1,lsl #0x2]
0079ae80  orr r2,r0,r3, lsl r2
0079ae84  str r2,[r4,r1,lsl #0x2]
0079ae88  ldmia sp!,{r4,pc}
