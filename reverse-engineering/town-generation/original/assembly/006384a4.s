006384a4  and r2,r1,#0x7
006384a8  ldrb r1,[r0,#0x270]
006384ac  bic r1,r1,#0x7
006384b0  orr r1,r1,r2
006384b4  strb r1,[r0,#0x270]
006384b8  bx lr
