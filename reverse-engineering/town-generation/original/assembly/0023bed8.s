0023bed8  add r0,r0,#0x5400
0023bedc  add r0,r0,#0x2f8
0023bee0  stmdb sp!,{r4,r5}
0023bee4  ldrb r3,[r0,#0x0]
0023bee8  movs r3,r3, lsl #0x1b
0023beec  bpl 0x0023bf7c
0023bef0  cmp r1,#0x0
0023bef4  ble 0x0023bf7c
0023bef8  ldrb r3,[r0,#0xe]
0023befc  movs r3,r3, lsl #0x1c
0023bf00  bmi 0x0023bf7c
0023bf04  ldrb r12,[r0,#0x1b]
0023bf08  ldrb r3,[r0,#0x1a]
0023bf0c  ldrb r4,[r0,#0x19]
0023bf10  and r12,r12,#0x7
0023bf14  mov r5,r3, lsr #0x1
0023bf18  add r12,r5,r12, lsl #0x7
0023bf1c  movs r4,r4, lsr #0x7
0023bf20  add r1,r1,r12
0023bf24  beq 0x0023bf64
0023bf28  cmp r2,#0x0
0023bf2c  addne r1,r1,#0x2
0023bf30  cmp r1,#0x64
0023bf34  movhi r1,#0x64
0023bf38  ldrb r12,[r0,#0x1b]
0023bf3c  bic r2,r3,#0xfe
0023bf40  and r4,r1,#0x380
0023bf44  orr r1,r2,r1, lsl #0x1
0023bf48  bic r3,r12,#0x7
0023bf4c  orr r2,r3,r4, lsr #0x7
0023bf50  strb r1,[r0,#0x1a]
0023bf54  strb r2,[r0,#0x1b]
0023bf58  ldmia sp!,{r4,r5}
0023bf5c  mov r0,#0x1
0023bf60  bx lr
0023bf64  cmp r2,#0x0
0023bf68  beq 0x0023bf7c
0023bf6c  cmp r1,#0x32
0023bf70  movhi r1,#0x32
0023bf74  bls 0x0023bf30
0023bf78  b 0x0023bf38
0023bf7c  ldmia sp!,{r4,r5}
0023bf80  mov r0,#0x0
0023bf84  bx lr
