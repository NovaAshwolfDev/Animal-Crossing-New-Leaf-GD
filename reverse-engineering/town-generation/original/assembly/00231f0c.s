00231f0c  stmdb sp!,{r4,r5,r6,r7,r8,r9,lr}
00231f10  sub sp,sp,#0x14
00231f14  cpy r7,r0
00231f18  mov r0,#0x0
00231f1c  cpy r8,r1
00231f20  cpy r5,r0
00231f24  cpy r4,r0
00231f28  cpy r9,sp
00231f2c  str r0,[sp,#0x0]
00231f30  str r0,[sp,#0x4]
00231f34  str r0,[sp,#0x8]
00231f38  str r0,[sp,#0xc]
00231f3c  uxth r6,r4
00231f40  cpy r0,r6
00231f44  bl 0x00687d78
00231f48  cmp r7,r0
00231f4c  nop
00231f50  bne 0x00231f68
00231f54  cmp r5,#0x7
00231f58  bge 0x00231f68
00231f5c  add r0,r9,r5, lsl #0x1
00231f60  add r5,r5,#0x1
00231f64  strh r6,[r0,#0x0]
00231f68  add r4,r4,#0x1
00231f6c  cmp r4,#0x164
00231f70  blt 0x00231f3c
00231f74  cpy r0,r8
00231f78  bl 0x005be58c
00231f7c  umull r1,r0,r0,r5
00231f80  add r0,r9,r0, lsl #0x1
00231f84  ldrh r0,[r0,#0x0]
00231f88  add sp,sp,#0x14
00231f8c  ldmia sp!,{r4,r5,r6,r7,r8,r9,pc}
