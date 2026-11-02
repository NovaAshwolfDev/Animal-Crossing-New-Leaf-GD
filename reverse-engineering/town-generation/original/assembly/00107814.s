00107814  cpy r0,r0
00107818  stmdb sp!,{r3,lr}
0010781c  mov r0,#0x0
00107820  strb r0,[sp,#0x0]
00107824  cpy r0,sp
00107828  bl 0x0010b570
0010782c  ldrb r0,[sp,#0x0]
00107830  ldmia sp!,{r3,pc}
