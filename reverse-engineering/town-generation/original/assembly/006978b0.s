006978b0  cmp r1,#0x7
006978b4  cmpcc r2,#0x6
006978b8  addcs r0,r0,#0x4
006978bc  bcs 0x006978d0
006978c0  rsb r2,r2,r2, lsl #0x3
006978c4  add r0,r0,r2, lsl #0x1
006978c8  add r0,r0,r1, lsl #0x1
006978cc  add r0,r0,#0x4
006978d0  bx lr
