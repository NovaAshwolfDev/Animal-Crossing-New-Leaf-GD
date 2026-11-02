00230a40  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,lr}
00230a44  cpy r6,r0
00230a48  cpy r7,r1
00230a4c  ldr r0,[r0,#0xd8]
00230a50  cmp r0,#0x0
00230a54  beq 0x00230ae8
00230a58  ldr r12,[r6,#0xd8]
00230a5c  ldr r1,[r6,#0xd8]
00230a60  cmp r3,#0x0
00230a64  add r4,r12,r3
00230a68  mov r0,#0x0
00230a6c  ldrb r4,[r4,#0x2]
00230a70  ldrh r1,[r1,#0x0]
00230a74  add r5,r4,r4, lsl #0x1
00230a78  add r1,r1,#0x2
00230a7c  mov r8,r5, lsl #0x1
00230a80  beq 0x00230ab8
00230a84  add r12,r12,#0x1
00230a88  tst r3,#0x1
00230a8c  ldrbne r0,[r12,#0x1]!
00230a90  movs r3,r3, lsr #0x1
00230a94  mov r5,#0x0
00230a98  beq 0x00230ab4
00230a9c  ldrb r9,[r12,#0x1]
00230aa0  ldrb r10,[r12,#0x2]!
00230aa4  subs r3,r3,#0x1
00230aa8  add r0,r0,r9
00230aac  add r5,r5,r10
00230ab0  bne 0x00230a9c
00230ab4  add r0,r0,r5
00230ab8  add r3,r4,r4, lsl #0x1
00230abc  cmp r2,r3, lsl #0x1
00230ac0  bcc 0x00230ae8
00230ac4  ldr r2,[r6,#0xd8]
00230ac8  add r0,r0,r0, lsl #0x1
00230acc  add r0,r1,r0, lsl #0x1
00230ad0  add r1,r2,r0
00230ad4  cpy r2,r8
00230ad8  cpy r0,r7
00230adc  bl 0x001151b0
00230ae0  cpy r0,r4
00230ae4  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,pc}
00230ae8  mov r0,#0x0
00230aec  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,pc}
