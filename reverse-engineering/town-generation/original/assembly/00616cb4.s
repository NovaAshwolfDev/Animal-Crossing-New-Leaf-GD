00616cb4  stmdb sp!,{r4,r5,r6,r7,r8,lr}
00616cb8  cpy r4,r0
00616cbc  cpy r8,r0
00616cc0  cpy r7,r1
00616cc4  mov r6,#0xa
00616cc8  mov r5,#0x0
00616ccc  cpy r0,r4
00616cd0  bl 0x007f3734
00616cd4  cmp r0,#0x0
00616cd8  nop
00616cdc  beq 0x00616d04
00616ce0  ldrh r0,[r4,#0x2c]
00616ce4  cmp r0,r7
00616ce8  bne 0x00616d04
00616cec  cmp r5,#0xa
00616cf0  bcs 0x00616d18
00616cf4  ldr r0,[0x616d20]
00616cf8  mul r0,r5,r0
00616cfc  add r0,r8,r0, lsl #0x3
00616d00  ldmia sp!,{r4,r5,r6,r7,r8,pc}
00616d04  add r5,r5,#0x1
00616d08  add r4,r4,#0x2400
00616d0c  cmp r5,r6
00616d10  add r4,r4,#0xf8
00616d14  bcc 0x00616ccc
00616d18  mov r0,#0x0
00616d1c  ldmia sp!,{r4,r5,r6,r7,r8,pc}
