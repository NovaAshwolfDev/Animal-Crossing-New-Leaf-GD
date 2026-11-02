008a38a8  and r3,r1,#0x7
008a38ac  str r4,[sp,#-0x4]!
008a38b0  cmp r2,#0x0
008a38b4  mov r4,#0x1
008a38b8  mov r2,r4, lsl r3
008a38bc  add r0,r0,r1, lsr #0x3
008a38c0  beq 0x008a38dc
008a38c4  cmp r1,#0x1c
008a38c8  ldrbcc r1,[r0,#0x0]
008a38cc  orrcc r1,r1,r2
008a38d0  bcc 0x008a38ec
008a38d4  ldr r4,[sp],#0x4
008a38d8  bx lr
008a38dc  cmp r1,#0x1c
008a38e0  ldrbcc r1,[r0,#0x0]
008a38e4  biccc r1,r1,r2
008a38e8  bcs 0x008a38d4
008a38ec  strb r1,[r0,#0x0]
008a38f0  ldr r4,[sp],#0x4
008a38f4  bx lr
