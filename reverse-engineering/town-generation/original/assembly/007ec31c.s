007ec31c  cmp r1,#0x8
007ec320  ldrbcc r0,[r0,#0x24]
007ec324  movcc r0,r0, lsr r1
007ec328  andcc r0,r0,#0x1
007ec32c  movcs r0,#0x0
007ec330  bx lr
