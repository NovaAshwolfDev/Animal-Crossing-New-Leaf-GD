006977dc  cmp r1,#0x5
006977e0  cmpcc r2,#0x4
006977e4  addcs r0,r0,#0x58
006977e8  bcs 0x006977fc
006977ec  add r2,r2,r2, lsl #0x2
006977f0  add r0,r0,r2, lsl #0xa
006977f4  add r0,r0,r1, lsl #0xa
006977f8  add r0,r0,#0x58
006977fc  bx lr
