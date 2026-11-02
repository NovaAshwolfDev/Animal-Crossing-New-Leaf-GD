001b5c88  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,lr}
001b5c8c  mov r6,#0x0
001b5c90  cpy r5,r0
001b5c94  cpy r9,r6
001b5c98  add r7,r5,r6, lsl #0x2
001b5c9c  cpy r0,r7
001b5ca0  bl 0x00802710
001b5ca4  cmp r0,#0x0
001b5ca8  nop
001b5cac  beq 0x001b5d10
001b5cb0  add r4,r6,#0x1
001b5cb4  cmp r4,#0x10
001b5cb8  bcs 0x001b5cdc
001b5cbc  add r0,r5,r4, lsl #0x2
001b5cc0  bl 0x00802710
001b5cc4  cmp r0,#0x0
001b5cc8  nop
001b5ccc  beq 0x001b5ce0
001b5cd0  add r4,r4,#0x1
001b5cd4  cmp r4,#0x10
001b5cd8  bcc 0x001b5cbc
001b5cdc  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,pc}
001b5ce0  add r8,r5,r4, lsl #0x2
001b5ce4  cpy r1,r8
001b5ce8  cpy r0,r7
001b5cec  bl 0x00756eb0
001b5cf0  add r4,r4,r5
001b5cf4  add r0,r5,r6
001b5cf8  ldrb r1,[r4,#0x40]
001b5cfc  strb r1,[r0,#0x40]
001b5d00  ldr r1,[0x1b5d20]
001b5d04  cpy r0,r8
001b5d08  bl 0x00756eb0
001b5d0c  strb r9,[r4,#0x40]
001b5d10  add r6,r6,#0x1
001b5d14  cmp r6,#0x10
001b5d18  bcc 0x001b5c98
001b5d1c  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,pc}
