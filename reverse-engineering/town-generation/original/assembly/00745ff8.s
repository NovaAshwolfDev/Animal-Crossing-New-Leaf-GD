00745ff8  str r4,[sp,#-0x4]!
00745ffc  ldmib sp,{r4,r12}
00746000  add r2,r4,r2, lsl #0x4
00746004  add r3,r12,r3, lsl #0x4
00746008  str r2,[r0,#0x0]
0074600c  str r3,[r1,#0x0]
00746010  ldr r4,[sp],#0x4
00746014  bx lr
