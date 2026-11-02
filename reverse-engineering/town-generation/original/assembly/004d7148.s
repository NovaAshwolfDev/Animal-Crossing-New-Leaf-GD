004d7148  ldr r2,[0x4d71b8]
004d714c  stmdb sp!,{r4,r5,r6}
004d7150  mov r6,#0x0
004d7154  ldrb r2,[r2,#0x0]
004d7158  cmp r2,#0x0
004d715c  ldrne r12,[0x4d71bc]
004d7160  moveq r0,#0x0
004d7164  movne r2,#0x0
004d7168  beq 0x004d71b0
004d716c  add r3,r2,r2, lsl #0x1
004d7170  add r3,r12,r3, lsl #0x2
004d7174  ldr r5,[r3,#0x0]
004d7178  ldr r4,[r3,#0x4]
004d717c  eor r5,r5,r0
004d7180  eor r4,r4,r1
004d7184  orrs r4,r4,r5
004d7188  bne 0x004d71a0
004d718c  ldr r3,[r3,#0x8]
004d7190  cmp r3,#0x7
004d7194  beq 0x004d71a0
004d7198  mov r6,#0x1
004d719c  b 0x004d71ac
004d71a0  add r2,r2,#0x1
004d71a4  cmp r2,#0x3e8
004d71a8  bcc 0x004d716c
004d71ac  cpy r0,r6
004d71b0  ldmia sp!,{r4,r5,r6}
004d71b4  bx lr
