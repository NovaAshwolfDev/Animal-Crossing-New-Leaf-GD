00287c70  stmdb sp!,{r4,r5,r6,r7,lr}
00287c74  cpy r6,r0
00287c78  sub sp,sp,#0x3c
00287c7c  ldr r0,[0x287ee8]
00287c80  ldr r1,[r0,#0x0]
00287c84  add r0,sp,#0x18
00287c88  bl 0x007acd50
00287c8c  ldr r0,[0x287ee8]
00287c90  ldr r1,[r0,#0x0]
00287c94  cpy r0,sp
00287c98  bl 0x007acdd0
00287c9c  add r1,sp,#0x18
00287ca0  cpy r0,sp
00287ca4  bl 0x007acd1c
00287ca8  cmp r0,#0x0
00287cac  beq 0x00287d20
00287cb0  cpy r0,sp
00287cb4  add r0,r0,#0x8
00287cb8  ldrb r4,[r0,#0x8]
00287cbc  cpy r0,sp
00287cc0  add r0,r0,#0x8
00287cc4  ldr r5,[r0,#0x4]
00287cc8  cpy r0,sp
00287ccc  add r0,r0,#0x8
00287cd0  ldr r1,[r0,#0x0]
00287cd4  cpy r2,r5
00287cd8  add r0,sp,#0x30
00287cdc  stmia r0,{r1,r2}
00287ce0  cpy r3,r6
00287ce4  mov r2,#0x1
00287ce8  cpy r1,r4
00287cec  bl 0x00592534
00287cf0  add r0,sp,#0x30
00287cf4  nop
00287cf8  cpy r0,r0
00287cfc  cpy r0,sp
00287d00  nop
00287d04  bl 0x001cbd60
00287d08  add r1,sp,#0x18
00287d0c  cpy r0,sp
00287d10  bl 0x007acd1c
00287d14  cmp r0,#0x0
00287d18  nop
00287d1c  bne 0x00287cb0
00287d20  cpy r0,sp
00287d24  cpy r0,r0
00287d28  add r0,sp,#0x18
00287d2c  nop
00287d30  cpy r0,r0
00287d34  nop
00287d38  nop
00287d3c  bl 0x0063653c
