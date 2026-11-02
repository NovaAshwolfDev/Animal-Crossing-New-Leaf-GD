0011edc4  ldr r1,[0x11edec]
0011edc8  mov r2,#0x1
0011edcc  ldr r1,[r1,#0x10]
0011edd0  cmp r1,#0x0
0011edd4  addne r1,r1,#0xc4
0011edd8  ldreq r1,[0x11edf0]
0011eddc  ldr r1,[r1,#0x0]
0011ede0  ands r0,r1,r2, lsl r0
0011ede4  movne r0,#0x1
0011ede8  bx lr
