0011ddac  ldr r2,[r0,#0x0]
0011ddb0  str r1,[r0,#0x0]
0011ddb4  str r0,[r1,#0x4]
0011ddb8  cmp r2,#0x0
0011ddbc  str r2,[r1,#0x0]
0011ddc0  strne r1,[r2,#0x4]
0011ddc4  bx lr
