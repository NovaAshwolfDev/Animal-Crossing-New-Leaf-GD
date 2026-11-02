00627ba8  stmdb sp!,{r4,r5,r6,lr}
00627bac  cpy r5,r0
00627bb0  bl 0x0063aca4
00627bb4  mov r4,#0x0
00627bb8  add r0,r4,r4, lsl #0x1
00627bbc  add r1,r0,r4, lsl #0x3
00627bc0  add r0,r5,r1, lsl #0x1
00627bc4  add r0,r0,#0x8
00627bc8  bl 0x002d5734
00627bcc  add r4,r4,#0x1
00627bd0  cmp r4,#0x3
00627bd4  blt 0x00627bb8
00627bd8  mov r4,#0x0
00627bdc  add r0,r4,r4, lsl #0x1
00627be0  add r1,r0,r4, lsl #0x3
00627be4  add r0,r5,r1, lsl #0x1
00627be8  add r0,r0,#0x4a
00627bec  bl 0x002d5734
00627bf0  add r4,r4,#0x1
00627bf4  cmp r4,#0x4
00627bf8  blt 0x00627bdc
00627bfc  mov r0,#0x0
00627c00  strh r0,[r5,#0xa2]
00627c04  strb r0,[r5,#0xa4]
00627c08  mov r12,#0xff
00627c0c  strb r0,[r5,#0xa5]
00627c10  strb r12,[r5,#0xa6]
00627c14  mov r3,#0xfc
00627c18  strb r0,[r5,#0xa7]
00627c1c  strb r3,[r5,#0xa8]
00627c20  mov r2,#0x2
00627c24  strb r0,[r5,#0xa9]
00627c28  mov r1,#0x3
00627c2c  strb r2,[r5,#0xaa]
00627c30  strb r1,[r5,#0xab]
00627c34  ldmia sp!,{r4,r5,r6,pc}
