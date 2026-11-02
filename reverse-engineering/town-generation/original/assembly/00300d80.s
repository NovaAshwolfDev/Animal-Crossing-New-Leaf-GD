00300d80  subs r3,r2,#0x20
00300d84  bpl 0x00300d9c
00300d88  rsb r3,r2,#0x20
00300d8c  mov r1,r1, lsl r2
00300d90  orr r1,r1,r0, lsr r3
00300d94  mov r0,r0, lsl r2
00300d98  bx lr
00300d9c  mov r1,r0, lsl r3
00300da0  mov r0,#0x0
00300da4  bx lr
