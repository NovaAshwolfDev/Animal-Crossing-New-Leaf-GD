007b7d30  stmdb sp!,{r4,lr}
007b7d34  cpy r4,r0
007b7d38  bl 0x005c62d8
007b7d3c  vldr.32 s1,[r4,#0x10]
007b7d40  ldr r2,[r4,#0x4]
007b7d44  mov r0,#0x0
007b7d48  vcvt.f32.s32 s1,s1
007b7d4c  cmp r2,#0x0
007b7d50  ldrgt r3,[r4,#0xc]
007b7d54  movgt lr,#0x1
007b7d58  vmul.f32 s0,s0,s1
007b7d5c  vcvt.s32.f32 s0,s0
007b7d60  vmov r1,s0
007b7d64  ble 0x007b7d94
007b7d68  mov r12,r0, asr #0x5
007b7d6c  and r4,r0,#0x1f
007b7d70  ldr r12,[r3,r12,lsl #0x2]
007b7d74  tst r12,lr, lsl r4
007b7d78  beq 0x007b7d88
007b7d7c  cmp r1,#0x0
007b7d80  subne r1,r1,#0x1
007b7d84  beq 0x007b7d98
007b7d88  add r0,r0,#0x1
007b7d8c  cmp r2,r0
007b7d90  bgt 0x007b7d68
007b7d94  mvn r0,#0x0
007b7d98  ldmia sp!,{r4,pc}
