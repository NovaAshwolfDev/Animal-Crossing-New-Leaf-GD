0059adbc  str r4,[sp,#-0x4]!
0059adc0  ldr r12,[r1,#0x0]
0059adc4  ldr r1,[r1,#0x4]
0059adc8  ldr r4,[r2,#0x4]
0059adcc  ldr r3,[r2,#0x0]
0059add0  add r1,r4,r1, lsl #0x4
0059add4  add r2,r3,r12, lsl #0x4
0059add8  str r1,[r0,#0x4]
0059addc  str r2,[r0,#0x0]
0059ade0  ldr r4,[sp],#0x4
0059ade4  bx lr
