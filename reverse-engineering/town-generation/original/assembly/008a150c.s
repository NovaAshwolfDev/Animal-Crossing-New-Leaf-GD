008a150c  stmdb sp!,{r4,r5,r6,r7,r8,lr}
008a1510  mov r6,#0x0
008a1514  cpy r4,r0
008a1518  str r6,[r0,#0x0]
008a151c  str r6,[r0,#0x4]
008a1520  str r6,[r0,#0x8]
008a1524  str r6,[r0,#0xc]!
008a1528  adds r2,r4,#0x14
008a152c  str r6,[r0,#0x4]
008a1530  cpy r0,r4
008a1534  mov r1,#0x14
008a1538  beq 0x008a157c
008a153c  mov r12,#0x2
008a1540  mov r3,#0x0
008a1544  mov r5,#0x13
008a1548  str r2,[r0,#0xc]
008a154c  add r8,r12,r3
008a1550  subs r5,r5,#0x1
008a1554  add r8,r2,r8, lsl #0x2
008a1558  str r8,[r2,r3,lsl #0x2]
008a155c  add r3,r3,r12
008a1560  bne 0x008a154c
008a1564  sub r3,r1,#0x1
008a1568  mul r12,r12,r3
008a156c  str r6,[r2,r12,lsl #0x2]
008a1570  str r2,[r0,#0x10]
008a1574  add r2,r2,r1, lsl #0x3
008a1578  bl 0x005a6780
008a157c  cpy r0,r4
008a1580  ldmia sp!,{r4,r5,r6,r7,r8,pc}
