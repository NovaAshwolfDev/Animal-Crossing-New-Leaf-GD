007f3690  cmp r1,#0x7
007f3694  cmpcc r2,#0x6
007f3698  addcs r0,r0,#0x4
007f369c  bcs 0x007f36b0
007f36a0  rsb r2,r2,r2, lsl #0x3
007f36a4  add r0,r0,r2, lsl #0x1
007f36a8  add r0,r0,r1, lsl #0x1
007f36ac  add r0,r0,#0x4
007f36b0  bx lr
