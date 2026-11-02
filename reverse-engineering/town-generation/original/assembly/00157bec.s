00157bec  cmp r2,#0x0
00157bf0  mov r3,#0x0
00157bf4  bxle lr
00157bf8  str r4,[sp,#-0x4]!
00157bfc  add r12,r1,r3, lsl #0x1
00157c00  add r4,r0,r3, lsl #0x1
00157c04  ldrh r12,[r12,#0x0]
00157c08  cmp r12,#0x0
00157c0c  strh r12,[r4,#0x0]
00157c10  beq 0x00157c28
00157c14  add r3,r3,#0x1
00157c18  cmp r2,r3
00157c1c  bgt 0x00157bfc
00157c20  ldr r4,[sp],#0x4
00157c24  bx lr
00157c28  add r1,r3,#0x1
00157c2c  sub r3,r2,r1
00157c30  cmp r3,#0x0
00157c34  ble 0x00157c20
00157c38  add r0,r0,r1, lsl #0x1
00157c3c  sub r0,r0,#0x2
00157c40  tst r3,#0x1
00157c44  mov r2,#0x0
00157c48  strhne r2,[r0,#0x2]!
00157c4c  movs r1,r3, asr #0x1
00157c50  beq 0x00157c20
00157c54  strh r2,[r0,#0x2]
00157c58  subs r1,r1,#0x1
00157c5c  strh r2,[r0,#0x4]!
00157c60  bne 0x00157c54
00157c64  ldr r4,[sp],#0x4
00157c68  bx lr
