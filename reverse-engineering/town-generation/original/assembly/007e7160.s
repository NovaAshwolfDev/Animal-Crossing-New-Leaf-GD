007e7160  stmdb sp!,{r4,r5,r6,r7,r8,lr}
007e7164  add r5,r0,#0x800
007e7168  cpy r6,r0
007e716c  cpy r7,r1
007e7170  add r5,r5,#0xee
007e7174  mov r4,#0x0
007e7178  cpy r1,r7
007e717c  cpy r0,r5
007e7180  bl 0x007b8ef0
007e7184  cmp r0,#0x0
007e7188  nop
007e718c  beq 0x007e71ac
007e7190  cmp r4,#0x10
007e7194  bcs 0x007e71bc
007e7198  rsb r0,r4,r4, lsl #0x4
007e719c  add r0,r6,r0, lsl #0x4
007e71a0  add r0,r0,#0x800
007e71a4  add r0,r0,#0xee
007e71a8  ldmia sp!,{r4,r5,r6,r7,r8,pc}
007e71ac  add r4,r4,#0x1
007e71b0  cmp r4,#0x10
007e71b4  add r5,r5,#0xf0
007e71b8  bcc 0x007e7178
007e71bc  mov r0,#0x0
007e71c0  ldmia sp!,{r4,r5,r6,r7,r8,pc}
