00768c80  stmdb sp!,{r4,r5,r6,r7,r8,lr}
00768c84  sub sp,sp,#0x30
00768c88  mov r6,#0xf8
00768c8c  mov r0,#0x0
00768c90  bl 0x00285cac
00768c94  ldr r8,[0x768d54]
00768c98  cpy r7,r0
00768c9c  mov r5,#0x0
00768ca0  cpy r1,r7
00768ca4  ldrb r4,[r8,r5]
00768ca8  add r0,sp,#0x18
00768cac  bl 0x007acd50
00768cb0  cpy r1,r7
00768cb4  cpy r0,sp
00768cb8  bl 0x007acdd0
00768cbc  add r1,sp,#0x18
00768cc0  cpy r0,sp
00768cc4  bl 0x007acd1c
00768cc8  cmp r0,#0x0
00768ccc  nop
00768cd0  beq 0x00768d28
00768cd4  cpy r0,sp
00768cd8  add r0,r0,#0x8
00768cdc  ldrb r0,[r0,#0x8]
00768ce0  cmp r4,r0
00768ce4  cpy r0,sp
00768ce8  bne 0x00768d08
00768cec  cpy r0,r0
00768cf0  add r0,sp,#0x18
00768cf4  nop
00768cf8  cpy r0,r0
00768cfc  ldrb r6,[r8,r5]
00768d00  nop
00768d04  b 0x00768d48
00768d08  nop
00768d0c  bl 0x001cbd60
00768d10  add r1,sp,#0x18
00768d14  cpy r0,sp
00768d18  bl 0x007acd1c
00768d1c  cmp r0,#0x0
00768d20  nop
00768d24  bne 0x00768cd4
00768d28  cpy r0,sp
00768d2c  cpy r0,r0
00768d30  add r0,sp,#0x18
00768d34  nop
00768d38  cpy r0,r0
00768d3c  add r5,r5,#0x1
00768d40  cmp r5,#0x4
00768d44  bcc 0x00768ca0
00768d48  add sp,sp,#0x30
00768d4c  cpy r0,r6
00768d50  ldmia sp!,{r4,r5,r6,r7,r8,pc}
