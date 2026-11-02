00692aa4  and r2,r2,#0xf
00692aa8  and r12,r1,#0xf
00692aac  add r1,r2,r2, lsl #0x2
00692ab0  add r2,r12,r12, lsl #0x2
00692ab4  add r0,r0,r1, lsl #0x5
00692ab8  add r0,r0,r2, lsl #0x1
00692abc  add r0,r0,#0x1c
00692ac0  cpy r1,r3
00692ac4  cpy r0,r0
00692ac8  ldrh r2,[r1,#0x0]
00692acc  strh r2,[r0,#0x0]
00692ad0  ldrh r2,[r1,#0x2]
00692ad4  strh r2,[r0,#0x2]
00692ad8  ldrh r2,[r1,#0x4]
00692adc  strh r2,[r0,#0x4]
00692ae0  ldrh r2,[r1,#0x6]
00692ae4  strh r2,[r0,#0x6]
00692ae8  ldrb r2,[r1,#0x8]
00692aec  strb r2,[r0,#0x8]
00692af0  ldrb r1,[r1,#0x9]
00692af4  strb r1,[r0,#0x9]
00692af8  bx lr
