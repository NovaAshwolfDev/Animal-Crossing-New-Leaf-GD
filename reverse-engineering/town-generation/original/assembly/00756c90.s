00756c90  stmdb sp!,{r4,r5,r6,lr}
00756c94  cpy r4,r0
00756c98  ldr r6,[0x756d28]
00756c9c  mov r0,#0x0
00756ca0  cpy r5,r2
00756ca4  strh r6,[r4,#0x0]
00756ca8  strh r0,[r4,#0x2]
00756cac  cpy r0,r1
00756cb0  bl 0x005a19a0
00756cb4  ldr r1,[r0,#0x4]
00756cb8  cmp r1,r5
00756cbc  bls 0x00756ccc
00756cc0  ldrh r0,[r0,#0x0]
00756cc4  add r0,r0,r5
00756cc8  uxth r6,r0
00756ccc  ldrh r0,[r4,#0x0]
00756cd0  bic r1,r6,#0x8000
00756cd4  and r0,r0,#0x8000
00756cd8  orr r0,r0,r1
00756cdc  strh r0,[r4,#0x0]
00756ce0  mov r0,r0, lsl #0x11
00756ce4  mov r0,r0, lsr #0x1e
00756ce8  cmp r0,#0x2
00756cec  bcs 0x00756d20
00756cf0  ldr r1,[0x756d2c]
00756cf4  add r0,r1,r0, lsl #0x3
00756cf8  ldr r1,[r0,#0x4]
00756cfc  tst r1,#0x1
00756d00  add r2,r4,r1, asr #0x1
00756d04  ldreq r1,[r0,#0x0]
00756d08  beq 0x00756d18
00756d0c  ldr r1,[r2,#0x0]
00756d10  ldr r0,[r0,#0x0]
00756d14  ldr r1,[r1,r0]
00756d18  cpy r0,r2
00756d1c  blx r1
00756d20  cpy r0,r4
00756d24  ldmia sp!,{r4,r5,r6,pc}
