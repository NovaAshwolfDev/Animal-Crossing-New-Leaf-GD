002d1660  str r4,[sp,#-0x4]!
002d1664  ldr r2,[r0,#0xc]
002d1668  mov r3,r1, asr #0x5
002d166c  and r12,r1,#0x1f
002d1670  mov r4,#0x1
002d1674  ldr r3,[r2,r3,lsl #0x2]
002d1678  mov r12,r4, lsl r12
002d167c  tst r3,r12
002d1680  beq 0x002d169c
002d1684  mov r1,r1, asr #0x5
002d1688  bic r3,r3,r12
002d168c  str r3,[r2,r1,lsl #0x2]
002d1690  ldr r1,[r0,#0x10]
002d1694  sub r1,r1,#0x1
002d1698  str r1,[r0,#0x10]
002d169c  ldr r4,[sp],#0x4
002d16a0  bx lr
