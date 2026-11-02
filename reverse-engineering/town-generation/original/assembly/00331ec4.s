00331ec4  stmdb sp!,{r4,r5,r6,lr}
00331ec8  mov r4,#0x0
00331ecc  sub sp,sp,#0x238
00331ed0  cpy r5,r0
00331ed4  cpy r6,r4
00331ed8  ldr r1,[0x331fb0]
00331edc  add r0,r5,r4, lsl #0x2
00331ee0  bl 0x00756eb0
00331ee4  add r0,r5,r4
00331ee8  add r4,r4,#0x1
00331eec  cmp r4,#0x7
00331ef0  strb r6,[r0,#0x1c]
00331ef4  blt 0x00331ed8
00331ef8  cpy r0,sp
00331efc  bl 0x0079c070
00331f00  mov r3,#0x0
00331f04  mov r2,#0x2d
00331f08  mov r1,#0xc
00331f0c  cpy r0,sp
00331f10  bl 0x0079822c
00331f14  cpy r2,sp
00331f18  mov r1,#0x3
00331f1c  cpy r0,r5
00331f20  bl 0x001aea7c
00331f24  cpy r0,sp
00331f28  nop
00331f2c  cpy r0,r0
00331f30  cpy r0,sp
00331f34  nop
00331f38  bl 0x0079c070
00331f3c  mov r3,#0x0
00331f40  mov r2,#0x2d
00331f44  mov r1,#0xd
00331f48  cpy r0,sp
00331f4c  bl 0x0079822c
00331f50  cpy r2,sp
00331f54  mov r1,#0x3
00331f58  add r0,r5,#0xc
00331f5c  bl 0x001aea7c
00331f60  cpy r0,sp
00331f64  nop
00331f68  cpy r0,r0
00331f6c  cpy r0,sp
00331f70  nop
00331f74  bl 0x0079c070
00331f78  mov r3,#0x0
00331f7c  mov r2,#0x2d
00331f80  mov r1,#0x19
00331f84  cpy r0,sp
00331f88  bl 0x0079822c
00331f8c  cpy r2,sp
00331f90  mov r1,#0x1
00331f94  add r0,r5,#0x18
00331f98  bl 0x001aea7c
00331f9c  cpy r0,sp
00331fa0  nop
00331fa4  cpy r0,r0
00331fa8  add sp,sp,#0x238
00331fac  ldmia sp!,{r4,r5,r6,pc}
