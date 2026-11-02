00756d40  stmdb sp!,{r4,lr}
00756d44  cpy r4,r0
00756d48  mov r2,#0x0
00756d4c  bic r0,r1,#0x8000
00756d50  strh r2,[r4,#0x2]
00756d54  strh r0,[r4,#0x0]
00756d58  mov r0,r0, lsl #0x11
00756d5c  mov r0,r0, lsr #0x1e
00756d60  cmp r0,#0x2
00756d64  bcs 0x00756d98
00756d68  ldr r1,[0x756da0]
00756d6c  add r0,r1,r0, lsl #0x3
00756d70  ldr r1,[r0,#0x4]
00756d74  tst r1,#0x1
00756d78  add r2,r4,r1, asr #0x1
00756d7c  ldreq r1,[r0,#0x0]
00756d80  beq 0x00756d90
00756d84  ldr r1,[r2,#0x0]
00756d88  ldr r0,[r0,#0x0]
00756d8c  ldr r1,[r1,r0]
00756d90  cpy r0,r2
00756d94  blx r1
00756d98  cpy r0,r4
00756d9c  ldmia sp!,{r4,pc}
