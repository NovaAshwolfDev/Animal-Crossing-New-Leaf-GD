00627cc8  stmdb sp!,{r4,r5,r6,lr}
00627ccc  cpy r5,r0
00627cd0  bl 0x0063ac18
00627cd4  mov r4,#0x0
00627cd8  add r0,r4,r4, lsl #0x1
00627cdc  add r1,r0,r4, lsl #0x3
00627ce0  add r0,r5,r1, lsl #0x1
00627ce4  add r0,r0,#0x8
00627ce8  bl 0x002d5734
00627cec  add r4,r4,#0x1
00627cf0  cmp r4,#0x3
00627cf4  blt 0x00627cd8
00627cf8  mov r4,#0x0
00627cfc  add r0,r4,r4, lsl #0x1
00627d00  add r1,r0,r4, lsl #0x3
00627d04  add r0,r5,r1, lsl #0x1
00627d08  add r0,r0,#0x4a
00627d0c  bl 0x002d5734
00627d10  add r4,r4,#0x1
00627d14  cmp r4,#0x4
00627d18  blt 0x00627cfc
00627d1c  mov r0,#0x0
00627d20  strh r0,[r5,#0xa2]
00627d24  strb r0,[r5,#0xa4]
00627d28  mov r3,#0xff
00627d2c  strb r0,[r5,#0xa5]
00627d30  strb r3,[r5,#0xa6]
00627d34  strb r0,[r5,#0xa7]
00627d38  strb r0,[r5,#0xa8]
00627d3c  mov r2,#0x2
00627d40  strb r0,[r5,#0xa9]
00627d44  mov r1,#0x3
00627d48  strb r2,[r5,#0xaa]
00627d4c  strb r1,[r5,#0xab]
00627d50  ldmia sp!,{r4,r5,r6,pc}
