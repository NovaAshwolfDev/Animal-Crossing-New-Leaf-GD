0065be1c  mov r2,#0x0
0065be20  str r4,[sp,#-0x4]!
0065be24  stmia r0,{r1,r2}
0065be28  mov r12,#0x2
0065be2c  str r2,[r0,#0x8]
0065be30  str r2,[r0,#0xc]
0065be34  ldrh r2,[r1,#0x0]
0065be38  cmp r2,#0xd800
0065be3c  subcs r4,r2,#0xe000
0065be40  cmpcs r4,#0x2000
0065be44  cpy r3,r2
0065be48  bcc 0x0065be78
0065be4c  ldrh r3,[r1,#0x2]
0065be50  mov r12,#0x4
0065be54  orr r2,r3,r2, lsl #0x10
0065be58  mov r1,r2, lsr #0x6
0065be5c  add r4,r1,#0x10000
0065be60  mov r3,r2, lsl #0x16
0065be64  and r1,r1,#0xfc00
0065be68  and r4,r4,#0xf0000
0065be6c  mov r3,r3, lsr #0x16
0065be70  orr r1,r1,r4
0065be74  orr r3,r3,r1
0065be78  add r1,r0,#0x4
0065be7c  stmia r1,{r2,r3,r12}
0065be80  ldr r4,[sp],#0x4
0065be84  bx lr
