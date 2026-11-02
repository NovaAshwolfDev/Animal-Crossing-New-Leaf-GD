0063ae74  ldr r1,[0x63ae90]
0063ae78  cmp r0,#0xfd
0063ae7c  movcs r0,#0x0
0063ae80  ldrb r0,[r1,r0]
0063ae84  and r0,r0,#0x2
0063ae88  mov r0,r0, lsr #0x1
0063ae8c  bx lr
