00768acc  stmdb sp!,{r4,r5,r6,r7,r8,lr}
00768ad0  sub sp,sp,#0x30
00768ad4  mov r6,#0xf8
00768ad8  mov r0,#0x0
00768adc  bl 0x00285cac
00768ae0  ldr r8,[0x768ba0]
00768ae4  cpy r7,r0
00768ae8  mov r5,#0x0
00768aec  cpy r1,r7
00768af0  ldrb r4,[r8,r5]
00768af4  add r0,sp,#0x18
00768af8  bl 0x007acd50
00768afc  cpy r1,r7
00768b00  cpy r0,sp
00768b04  bl 0x007acdd0
00768b08  add r1,sp,#0x18
00768b0c  cpy r0,sp
00768b10  bl 0x007acd1c
00768b14  cmp r0,#0x0
00768b18  nop
00768b1c  beq 0x00768b74
00768b20  cpy r0,sp
00768b24  add r0,r0,#0x8
00768b28  ldrb r0,[r0,#0x8]
00768b2c  cmp r4,r0
00768b30  cpy r0,sp
00768b34  bne 0x00768b54
00768b38  cpy r0,r0
00768b3c  add r0,sp,#0x18
00768b40  nop
00768b44  cpy r0,r0
00768b48  ldrb r6,[r8,r5]
00768b4c  nop
00768b50  b 0x00768b94
00768b54  nop
00768b58  bl 0x001cbd60
00768b5c  add r1,sp,#0x18
00768b60  cpy r0,sp
00768b64  bl 0x007acd1c
00768b68  cmp r0,#0x0
00768b6c  nop
00768b70  bne 0x00768b20
00768b74  cpy r0,sp
00768b78  cpy r0,r0
00768b7c  add r0,sp,#0x18
00768b80  nop
00768b84  cpy r0,r0
00768b88  add r5,r5,#0x1
00768b8c  cmp r5,#0x4
00768b90  bcc 0x00768aec
00768b94  add sp,sp,#0x30
00768b98  cpy r0,r6
00768b9c  ldmia sp!,{r4,r5,r6,r7,r8,pc}
