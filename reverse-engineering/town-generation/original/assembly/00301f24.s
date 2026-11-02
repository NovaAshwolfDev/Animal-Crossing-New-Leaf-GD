00301f24  tst r0,#0x3
00301f28  tsteq r1,#0x3
00301f2c  bne 0x00301fac
00301f30  stmdb sp!,{lr}
00301f34  ldr lr,[0x301fdc]
00301f38  ldr r2,[r0],#0x4
00301f3c  ldr r3,[r1],#0x4
00301f40  sub r12,r2,lr
00301f44  bic r12,r12,r2
00301f48  ands r12,r12,lr, lsl #0x7
00301f4c  cmpeq r2,r3
00301f50  bne 0x00301f70
00301f54  ldr r2,[r0],#0x4
00301f58  ldr r3,[r1],#0x4
00301f5c  sub r12,r2,lr
00301f60  bic r12,r12,r2
00301f64  ands r12,r12,lr, lsl #0x7
00301f68  cmpeq r2,r3
00301f6c  beq 0x00301f38
00301f70  ldmia sp!,{lr}
00301f74  mov r0,r3, lsl #0x18
00301f78  subs r0,r0,r2, lsl #0x18
00301f7c  tsteq r12,#0xff0
00301f80  bne 0x00301fa4
00301f84  mov r0,r3, lsl #0x10
00301f88  subs r0,r0,r2, lsl #0x10
00301f8c  tsteq r12,#0xff00
00301f90  bne 0x00301fa4
00301f94  mov r0,r3, lsl #0x8
00301f98  subs r0,r0,r2, lsl #0x8
00301f9c  tsteq r12,#0xff0000
00301fa0  subeqs r0,r3,r2
00301fa4  movne r0,r0, rrx
00301fa8  bx lr
00301fac  ldrb r2,[r0],#0x1
00301fb0  ldrb r3,[r1],#0x1
00301fb4  cmp r2,#0x1
00301fb8  cmpcs r2,r3
00301fbc  bne 0x00301fd4
00301fc0  ldrb r2,[r0],#0x1
00301fc4  ldrb r3,[r1],#0x1
00301fc8  cmp r2,#0x1
00301fcc  cmpcs r2,r3
00301fd0  beq 0x00301fac
00301fd4  sub r0,r2,r3
00301fd8  bx lr
