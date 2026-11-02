0080c1ac  and r1,r1,#0xff
0080c1b0  orr r1,r1,r1, lsl #0x8
0080c1b4  orr r1,r1,r1, lsl #0x10
0080c1b8  str r1,[r0,#0x0]
0080c1bc  str r1,[r0,#0x4]
0080c1c0  bx lr
