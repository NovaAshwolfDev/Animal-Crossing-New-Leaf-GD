00619e60  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,r11,lr}
00619e64  cmp r1,#0x0
00619e68  sub sp,sp,#0x314
00619e6c  cpy r5,r0
00619e70  cpyne r4,r0
00619e74  movne r6,#0x0
00619e78  beq 0x00619edc
00619e7c  cpy r0,r4
00619e80  bl 0x007f3734
00619e84  cmp r0,#0x0
00619e88  movne r0,#0x0
00619e8c  bne 0x00619e9c
00619e90  b 0x00619ec8
00619e94  nop
00619e98  bcs 0x00619ebc
00619e9c  rsb r2,r0,r0, lsl #0x4
00619ea0  add r1,r4,r2, lsl #0x4
00619ea4  add r1,r1,#0x800
00619ea8  adds r1,r1,#0xee
00619eac  beq 0x00619ebc
00619eb0  ldrb r2,[r1,#0xbd]
00619eb4  bic r2,r2,#0x8
00619eb8  strb r2,[r1,#0xbd]
00619ebc  add r0,r0,#0x1
00619ec0  cmp r0,#0x10
00619ec4  bcc 0x00619e94
00619ec8  add r6,r6,#0x1
00619ecc  add r4,r4,#0x2400
00619ed0  cmp r6,#0xa
00619ed4  add r4,r4,#0xf8
00619ed8  blt 0x00619e7c
00619edc  nop
00619ee0  bl 0x0063653c
