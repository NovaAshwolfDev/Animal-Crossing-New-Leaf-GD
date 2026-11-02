007b8ef0  ldrh r2,[r0,#0x0]
007b8ef4  ldrh r3,[r1,#0x0]
007b8ef8  cmp r2,r3
007b8efc  bne 0x007b8f14
007b8f00  ldrb r2,[r0,#0x14]
007b8f04  ldrb r3,[r1,#0x14]
007b8f08  mov r2,r2, lsl #0x1f
007b8f0c  cmp r2,r3, lsl #0x1f
007b8f10  beq 0x007b8f1c
007b8f14  mov r0,#0x0
007b8f18  bx lr
007b8f1c  add r1,r1,#0x2
007b8f20  add r0,r0,#0x2
007b8f24  stmdb sp!,{r4,lr}
007b8f28  bl 0x007b19c8
007b8f2c  cmp r0,#0x0
007b8f30  movne r0,#0x1
007b8f34  ldmia sp!,{r4,pc}
