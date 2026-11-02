001b6c20  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,r11,lr}
001b6c24  sub sp,sp,#0x44
001b6c28  mov r12,#0x0
001b6c2c  cpy r4,r0
001b6c30  str r12,[sp,#0x0]
001b6c34  str r12,[sp,#0x4]
001b6c38  str r12,[sp,#0x8]
001b6c3c  str r12,[sp,#0xc]
001b6c40  str r12,[sp,#0x10]
001b6c44  str r12,[sp,#0x14]
001b6c48  str r12,[sp,#0x18]
001b6c4c  str r12,[sp,#0x1c]
001b6c50  ldrb r0,[r0,#0x69]
001b6c54  ldr r1,[0x1b70b0]
001b6c58  ldr r5,[0x1b70b4]
001b6c5c  cmp r0,#0x8
001b6c60  add r1,r1,r0, lsl #0x1
001b6c64  ldrh r1,[r1,#0x0]
001b6c68  str r1,[sp,#0x20]
001b6c6c  beq 0x001b6dd8
001b6c70  cmp r0,#0x6
001b6c74  movcs r2,#0x0
001b6c78  cpycs r3,sp
001b6c7c  bcs 0x001b6e94
001b6c80  mov r8,#0x0
001b6c84  mov r7,#0x180
001b6c88  cpy r6,sp
001b6c8c  and r2,r8,#0xff
001b6c90  add r1,sp,#0x28
001b6c94  cpy r0,r4
001b6c98  bl 0x007aa6d4
001b6c9c  cmp r0,#0x0
001b6ca0  nop
001b6ca4  beq 0x001b6dc8
001b6ca8  ldr r0,[sp,#0x30]
001b6cac  cmp r0,#0x0
001b6cb0  mov r0,#0x0
001b6cb4  bls 0x001b6d48
001b6cb8  ldr r1,[sp,#0x2c]
001b6cbc  mov r1,r1, lsl #0x1e
001b6cc0  mov lr,r1, lsr #0x17
001b6cc4  ldr r1,[sp,#0x34]
001b6cc8  cmp r1,#0x0
001b6ccc  movhi r2,r0, lsl #0x1d
001b6cd0  mov r1,#0x0
001b6cd4  movhi r2,r2, lsr #0x1b
001b6cd8  bls 0x001b6d38
001b6cdc  ldr r3,[sp,#0x28]
001b6ce0  add r3,r3,r1
001b6ce4  and r12,r3,#0x1f
001b6ce8  and r3,r0,#0x1f
001b6cec  add r12,lr,r12, lsl #0x2
001b6cf0  add r3,r12,r3, lsr #0x3
001b6cf4  add r1,r1,#0x1
001b6cf8  add r3,r4,r3, lsl #0x2
001b6cfc  ldr r3,[r3,#0x6c]
001b6d00  mov r3,r3, lsr r2
001b6d04  and r3,r3,#0xf
001b6d08  cmp r3,#0xf
001b6d0c  moveq r3,#0x0
001b6d10  add r3,r3,r4
001b6d14  ldrb r3,[r3,#0x58]
001b6d18  ldrb r3,[r5,r3]
001b6d1c  add r3,r6,r3, lsl #0x1
001b6d20  ldrh r12,[r3,#0x0]
001b6d24  add r12,r12,#0x1
001b6d28  strh r12,[r3,#0x0]
001b6d2c  ldr r3,[sp,#0x34]
001b6d30  cmp r3,r1
001b6d34  bhi 0x001b6cdc
001b6d38  ldr r1,[sp,#0x30]
001b6d3c  add r0,r0,#0x1
001b6d40  cmp r1,r0
001b6d44  bhi 0x001b6cc4
001b6d48  ldrb r0,[sp,#0x39]
001b6d4c  cmp r0,#0x0
001b6d50  movne r0,#0x0
001b6d54  beq 0x001b6dc8
001b6d58  mov r2,r0, lsl #0x1d
001b6d5c  mov r1,#0x0
001b6d60  mov r2,r2, lsr #0x1b
001b6d64  ldr r3,[sp,#0x3c]
001b6d68  and r12,r0,#0x1f
001b6d6c  add r3,r3,r1
001b6d70  and r3,r3,#0x1f
001b6d74  add r1,r1,#0x1
001b6d78  add r3,r7,r3, lsl #0x2
001b6d7c  add r3,r3,r12, lsr #0x3
001b6d80  add r3,r4,r3, lsl #0x2
001b6d84  ldr r3,[r3,#0x6c]
001b6d88  mov r3,r3, lsr r2
001b6d8c  and r3,r3,#0xf
001b6d90  cmp r3,#0xf
001b6d94  moveq r3,#0x0
001b6d98  add r3,r3,r4
001b6d9c  cmp r1,#0x10
001b6da0  ldrb r3,[r3,#0x58]
001b6da4  ldrb r3,[r5,r3]
001b6da8  add r3,r6,r3, lsl #0x1
001b6dac  ldrh r12,[r3,#0x0]
001b6db0  add r12,r12,#0x1
001b6db4  strh r12,[r3,#0x0]
001b6db8  bcc 0x001b6d64
001b6dbc  add r0,r0,#0x1
001b6dc0  cmp r0,#0x20
001b6dc4  bcc 0x001b6d58
001b6dc8  add r8,r8,#0x1
001b6dcc  cmp r8,#0x4
001b6dd0  bcc 0x001b6c8c
001b6dd4  b 0x001b6efc
001b6dd8  ldr r11,[0x1b70b8]
001b6ddc  mov r1,#0x0
001b6de0  mov lr,#0x1
001b6de4  cpy r3,sp
001b6de8  ldr r0,[0x1b70bc]
001b6dec  mov r2,#0x0
001b6df0  add r6,r0,r1, lsl #0x1
001b6df4  mov r0,r1, lsl #0x1e
001b6df8  mov r9,r0, lsr #0x17
001b6dfc  and r7,r2,#0x1f
001b6e00  add r12,r2,r1, lsl #0x5
001b6e04  add r8,r9,r7, lsl #0x2
001b6e08  ldr r7,[r11,r12,lsl #0x2]
001b6e0c  mov r0,#0x0
001b6e10  ldrb r12,[r6,#0x0]
001b6e14  add r12,r12,r0
001b6e18  cmp r12,#0x34
001b6e1c  bcs 0x001b6e6c
001b6e20  tst r7,lr, lsl r0
001b6e24  bne 0x001b6e6c
001b6e28  and r12,r0,#0x1f
001b6e2c  add r10,r8,r12, lsr #0x3
001b6e30  mov r12,r12, lsl #0x1d
001b6e34  add r10,r4,r10, lsl #0x2
001b6e38  mov r12,r12, lsr #0x1b
001b6e3c  ldr r10,[r10,#0x6c]
001b6e40  mov r12,r10, lsr r12
001b6e44  and r12,r12,#0xf
001b6e48  cmp r12,#0xf
001b6e4c  moveq r12,#0x0
001b6e50  add r12,r12,r4
001b6e54  ldrb r12,[r12,#0x58]
001b6e58  ldrb r12,[r5,r12]
001b6e5c  add r12,r3,r12, lsl #0x1
001b6e60  ldrh r10,[r12,#0x0]
001b6e64  add r10,r10,#0x1
001b6e68  strh r10,[r12,#0x0]
001b6e6c  add r0,r0,#0x1
001b6e70  cmp r0,#0x20
001b6e74  bcc 0x001b6e10
001b6e78  add r2,r2,#0x1
001b6e7c  cmp r2,#0x20
001b6e80  bcc 0x001b6dfc
001b6e84  add r1,r1,#0x1
001b6e88  cmp r1,#0x4
001b6e8c  bcc 0x001b6de8
001b6e90  b 0x001b6efc
001b6e94  and r1,r2,#0x1f
001b6e98  mov r0,#0x0
001b6e9c  add lr,r12,r1, lsl #0x2
001b6ea0  and r1,r0,#0x1f
001b6ea4  add r0,r0,#0x1
001b6ea8  add r6,lr,r1, lsr #0x3
001b6eac  mov r1,r1, lsl #0x1d
001b6eb0  add r6,r4,r6, lsl #0x2
001b6eb4  mov r1,r1, lsr #0x1b
001b6eb8  ldr r6,[r6,#0x6c]
001b6ebc  mov r1,r6, lsr r1
001b6ec0  and r1,r1,#0xf
001b6ec4  cmp r1,#0xf
001b6ec8  moveq r1,#0x0
001b6ecc  add r1,r1,r4
001b6ed0  cmp r0,#0x20
001b6ed4  ldrb r1,[r1,#0x58]
001b6ed8  ldrb r1,[r5,r1]
001b6edc  add r1,r3,r1, lsl #0x1
001b6ee0  ldrh r6,[r1,#0x0]
001b6ee4  add r6,r6,#0x1
001b6ee8  strh r6,[r1,#0x0]
001b6eec  bcc 0x001b6ea0
001b6ef0  add r2,r2,#0x1
001b6ef4  cmp r2,#0x20
001b6ef8  bcc 0x001b6e94
001b6efc  mov r0,#0x0
001b6f00  cpy r12,sp
001b6f04  cpy r2,r0
001b6f08  cpy r3,r0
001b6f0c  mov lr,#0xf
001b6f10  cpy r1,r12
001b6f14  add r6,r1,r0, lsl #0x1
001b6f18  ldrh r5,[r12],#0x2
001b6f1c  ldrh r6,[r6,#0x0]
001b6f20  cmp r5,r6
001b6f24  andhi r0,r3,#0xff
001b6f28  subs lr,lr,#0x1
001b6f2c  add r3,r3,#0x1
001b6f30  bne 0x001b6f14
001b6f34  cpy lr,r1
001b6f38  mov r3,#0x0
001b6f3c  mov r12,#0xf
001b6f40  cmp r3,r0
001b6f44  beq 0x001b6f5c
001b6f48  add r5,r1,r2, lsl #0x1
001b6f4c  ldrh r6,[lr,#0x0]
001b6f50  ldrh r5,[r5,#0x0]
001b6f54  cmp r6,r5
001b6f58  andhi r2,r3,#0xff
001b6f5c  subs r12,r12,#0x1
001b6f60  add lr,lr,#0x2
001b6f64  add r3,r3,#0x1
001b6f68  bne 0x001b6f40
001b6f6c  vldr.32 s0,[sp,#0x20]
001b6f70  vldr.32 s1,[pc,#0x148]
001b6f74  ldr r12,[0x1b70c4]
001b6f78  vcvt.f32.u32 s2,s0
001b6f7c  vcvt.f32.u32 s0,s0
001b6f80  add lr,r1,r0, lsl #0x1
001b6f84  ldrh r5,[lr,#0x0]
001b6f88  vmul.f32 s2,s2,s1
001b6f8c  vmul.f32 s1,s0,s1
001b6f90  vcvt.u32.f32 s0,s2
001b6f94  vcvt.f32.u32 s2,s0
001b6f98  vsub.f32 s2,s1,s2
001b6f9c  vmov r3,s2
001b6fa0  vldr.32 s2,[pc,#0x120]
001b6fa4  cmp r3,r12
001b6fa8  vcvtle.f32.u32 s1,s0
001b6fac  vldr.32 s0,[sp,#0x20]
001b6fb0  vcvt.f32.u32 s3,s0
001b6fb4  vcvt.f32.u32 s0,s0
001b6fb8  vmul.f32 s3,s3,s2
001b6fbc  vmul.f32 s2,s0,s2
001b6fc0  vcvt.u32.f32 s0,s3
001b6fc4  vcvt.f32.u32 s3,s0
001b6fc8  vsub.f32 s3,s2,s3
001b6fcc  vmov r3,s3
001b6fd0  cmp r3,r12
001b6fd4  vcvtle.f32.u32 s2,s0
001b6fd8  vmov s0,r5
001b6fdc  mov r3,#0xf0
001b6fe0  vcvt.f32.u32 s0,s0
001b6fe4  vcmpe.f32 s0,s1
001b6fe8  vmrs apsr,fpscr
001b6fec  blt 0x001b700c
001b6ff0  ldrb r1,[r4,#0x67]
001b6ff4  and r2,r3,r0, lsl #0x4
001b6ff8  and r1,r1,#0xf0
001b6ffc  orr r1,r1,r0
001b7000  and r0,r1,#0xf
001b7004  orr r0,r0,r2
001b7008  b 0x001b7098
001b700c  vmov s0,r5
001b7010  vcvt.f32.u32 s0,s0
001b7014  vcmpe.f32 s0,s2
001b7018  vmrs apsr,fpscr
001b701c  blt 0x001b70a4
001b7020  ldrb r5,[r4,#0x67]
001b7024  and r6,r0,#0xf
001b7028  vldr.32 s1,[pc,#0x9c]
001b702c  and r0,r5,#0xf0
001b7030  orr r0,r0,r6
001b7034  strb r0,[r4,#0x67]
001b7038  ldrh r5,[lr,#0x0]
001b703c  ldr lr,[sp,#0x20]
001b7040  add r1,r1,r2, lsl #0x1
001b7044  and r0,r0,#0xf
001b7048  sub lr,lr,r5
001b704c  vmov s0,lr
001b7050  ldrh r1,[r1,#0x0]
001b7054  vcvt.f32.s32 s2,s0
001b7058  vcvt.f32.s32 s0,s0
001b705c  vmul.f32 s2,s2,s1
001b7060  vmul.f32 s1,s0,s1
001b7064  vcvt.u32.f32 s0,s2
001b7068  vcvt.f32.u32 s2,s0
001b706c  vsub.f32 s2,s1,s2
001b7070  vmov lr,s2
001b7074  cmp lr,r12
001b7078  vcvtle.f32.u32 s1,s0
001b707c  vmov s0,r1
001b7080  vcvt.f32.u32 s0,s0
001b7084  vcmpe.f32 s0,s1
001b7088  vmrs apsr,fpscr
001b708c  andge r1,r3,r2, lsl #0x4
001b7090  orrge r0,r0,r1
001b7094  orrlt r0,r0,#0xc0
001b7098  strb r0,[r4,#0x67]
001b709c  add sp,sp,#0x44
001b70a0  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
001b70a4  ldrb r0,[r4,#0x67]
001b70a8  mov r0,#0xcc
001b70ac  b 0x001b7098
