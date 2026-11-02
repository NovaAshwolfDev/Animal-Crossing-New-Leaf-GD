007c40a4  cmp r1,#0x10
007c40a8  addcc r0,r0,r1
007c40ac  ldrbcc r0,[r0,#0x40]
007c40b0  movcs r0,#0x0
007c40b4  bx lr
