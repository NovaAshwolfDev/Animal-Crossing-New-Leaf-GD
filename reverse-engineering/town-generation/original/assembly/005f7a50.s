005f7a50  ldr r3,[0x5f7ac4]
005f7a54  mov r0,#0x0
005f7a58  mov r2,#0x98
005f7a5c  stmdb sp!,{r4,lr}
005f7a60  add r1,r0,r0, lsl #0x2
005f7a64  add r1,r1,r3
005f7a68  add r0,r0,#0x1
005f7a6c  cmp r0,#0x20
005f7a70  strb r2,[r1,#0x2]
005f7a74  blt 0x005f7a60
005f7a78  ldr r3,[0x5f7ac8]
005f7a7c  mov r0,#0x0
005f7a80  cpy r2,r0
005f7a84  add r1,r0,r0, lsl #0x1
005f7a88  add r1,r1,r0, lsl #0x3
005f7a8c  add r0,r0,#0x1
005f7a90  add r1,r3,r1, lsl #0x1
005f7a94  cmp r0,#0x20
005f7a98  strb r2,[r1,#0x10]
005f7a9c  strb r2,[r1,#0x11]
005f7aa0  blt 0x005f7a84
005f7aa4  ldr r0,[0x5f7acc]
005f7aa8  mov r1,#0x500
005f7aac  bl 0x002fff30
005f7ab0  ldr r0,[0x5f7ad0]
005f7ab4  mvn r1,#0x0
005f7ab8  str r1,[r0,#0x10]
005f7abc  str r1,[r0,#0x14]
005f7ac0  ldmia sp!,{r4,pc}
