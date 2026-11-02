00697eec  stmdb sp!,{r4,r5,r6,lr}
00697ef0  cpy r4,r0
00697ef4  cpy r5,r1
00697ef8  mov r0,#0x10000
00697efc  bl 0x0011df38
00697f00  strh r0,[r4,#0x4]
00697f04  mov r0,#0x1a
00697f08  bl 0x0011df38
00697f0c  cpy r2,r0
00697f10  ldrh r0,[r4,#0x4]
00697f14  ldr r1,[0x697f58]
00697f18  and r2,r2,#0xff
00697f1c  strb r2,[r4,#0x6]
00697f20  add r0,r0,r1
00697f24  adds r0,r0,r5
00697f28  mov r1,#0x0
00697f2c  add r2,r2,#0x4
00697f30  bl 0x00300d80
00697f34  adds r0,r0,r1
00697f38  str r0,[r4,#0x0]
00697f3c  mov r2,r0, lsr #0x10
00697f40  add r1,r0,r0, lsr #0x18
00697f44  add r2,r2,r0, lsr #0x8
00697f48  add r1,r1,r2
00697f4c  add r1,r1,#0xba
00697f50  strb r1,[r4,#0x7]
00697f54  ldmia sp!,{r4,r5,r6,pc}
