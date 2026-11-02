003c25a8  cmp r2,#0x60
003c25ac  rsbcc r2,r2,r2, lsl #0x3
003c25b0  addcc r0,r0,r2, lsl #0x4
003c25b4  cmp r1,#0x70
003c25b8  addcc r0,r0,r1
003c25bc  strb r3,[r0,#0x0]
003c25c0  bx lr
