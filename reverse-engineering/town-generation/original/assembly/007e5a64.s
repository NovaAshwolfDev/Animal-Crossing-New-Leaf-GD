007e5a64  stmdb sp!,{r0,r1,r2,r3,r4,r5,r6,r7,r8,r9,r10,r11,lr}
007e5a68  sub sp,sp,#0x14
007e5a6c  cpy r6,r1
007e5a70  cpy r10,r0
007e5a74  add r0,sp,#0x48
007e5a78  cpy r11,r3
007e5a7c  ldmia r0,{r5,r9}
007e5a80  cpy r0,sp
007e5a84  bl 0x0080c060
007e5a88  ldr r0,[sp,#0x1c]
007e5a8c  mov r2,#0xa
007e5a90  cpy r1,r6
007e5a94  bl 0x00623f24
007e5a98  cmp r0,#0xa
007e5a9c  cpy r4,r0
007e5aa0  mov r7,#0x0
007e5aa4  bcs 0x007e5ac8
007e5aa8  ldr r1,[0x7e60a8]
007e5aac  mul r1,r4,r1
007e5ab0  adds r7,r6,r1, lsl #0x3
007e5ab4  beq 0x007e6090
007e5ab8  cpy r0,r7
007e5abc  bl 0x007f3768
007e5ac0  cmp r0,#0x0
007e5ac4  beq 0x007e6090
007e5ac8  cmp r7,#0x0
007e5acc  str r7,[sp,#0xc]
007e5ad0  beq 0x007e6090
007e5ad4  cmp r5,#0x0
007e5ad8  beq 0x007e5aec
007e5adc  bl 0x0062ef88
007e5ae0  nop
007e5ae4  nop
007e5ae8  b 0x007e5b00
007e5aec  nop
007e5af0  bl 0x00636e3c
007e5af4  ldr r1,[sp,#0x1c]
007e5af8  add r0,r0,#0x20
007e5afc  bl 0x002d59f8
007e5b00  cmp r0,#0x0
007e5b04  mov r8,#0x1
007e5b08  beq 0x007e5b74
007e5b0c  add r7,r0,#0x8800
007e5b10  add r7,r7,#0x2cc
007e5b14  cpy r0,r7
007e5b18  bl 0x007eb480
007e5b1c  cmp r0,#0x0
007e5b20  nop
007e5b24  beq 0x007e5b74
007e5b28  ldrb r0,[r7,#0x9]
007e5b2c  cmp r0,#0x3
007e5b30  bcs 0x007e5b74
007e5b34  ldr r1,[sp,#0x1c]
007e5b38  cpy r0,r7
007e5b3c  bl 0x007ebc30
007e5b40  cmp r0,#0x0
007e5b44  nop
007e5b48  beq 0x007e5b74
007e5b4c  ldrb r0,[r7,#0x8]
007e5b50  cpy r1,sp
007e5b54  cmp r0,#0x21
007e5b58  bcs 0x007e5b74
007e5b5c  mov r2,r0, lsr #0x3
007e5b60  add r1,r1,r2
007e5b64  and r0,r0,#0x7
007e5b68  ldrb r2,[r1,#0x0]
007e5b6c  orr r0,r2,r8, lsl r0
007e5b70  strb r0,[r1,#0x0]
007e5b74  ldr r1,[sp,#0x1c]
007e5b78  cpy r0,r6
007e5b7c  bl 0x007e5994
007e5b80  cmp r0,#0x3
007e5b84  add r1,r6,#0x17000
007e5b88  beq 0x007e5bcc
007e5b8c  ldrb r2,[r1,#0x2ff]
007e5b90  cmp r2,#0x4
007e5b94  bcs 0x007e5bcc
007e5b98  rsb r2,r9,#0x0
007e5b9c  tst r0,r2
007e5ba0  bne 0x007e5bcc
007e5ba4  ldrb r0,[r1,#0x2fe]
007e5ba8  cpy r2,sp
007e5bac  cmp r0,#0x21
007e5bb0  bcs 0x007e5bcc
007e5bb4  mov r12,r0, lsr #0x3
007e5bb8  add r2,r2,r12
007e5bbc  and r0,r0,#0x7
007e5bc0  ldrb r12,[r2,#0x0]
007e5bc4  orr r0,r12,r8, lsl r0
007e5bc8  strb r0,[r2,#0x0]
007e5bcc  ldrb r0,[r1,#0x262]
007e5bd0  tst r0,#0xf
007e5bd4  ldreq r0,[0x7e60ac]
007e5bd8  ldrsbeq r0,[r0,r6]
007e5bdc  mvnne r0,#0x0
007e5be0  cmp r0,r4
007e5be4  bne 0x007e5bf4
007e5be8  ldrb r0,[sp,#0x2]
007e5bec  orr r0,r0,#0x8
007e5bf0  strb r0,[sp,#0x2]
007e5bf4  nop
007e5bf8  bl 0x006a908c
007e5bfc  cmp r0,#0x0
007e5c00  nop
007e5c04  beq 0x007e6090
007e5c08  cmp r5,#0x0
007e5c0c  beq 0x007e5c20
007e5c10  bl 0x0062ef88
007e5c14  nop
007e5c18  nop
007e5c1c  b 0x007e5c38
007e5c20  nop
007e5c24  bl 0x00636e3c
007e5c28  ldr r1,[sp,#0x1c]
007e5c2c  cpy r2,r11
007e5c30  add r0,r0,#0x20
007e5c34  bl 0x002d5d30
007e5c38  cmp r0,#0x0
007e5c3c  beq 0x007e5d34
007e5c40  ldr r1,[sp,#0x1c]
007e5c44  cpy r2,r11
007e5c48  bl 0x007581d8
007e5c4c  cmp r0,#0x0
007e5c50  str r0,[sp,#0x8]
007e5c54  beq 0x007e5d34
007e5c58  bl 0x007eb480
007e5c5c  cmp r0,#0x0
007e5c60  nop
007e5c64  beq 0x007e5d34
007e5c68  cmp r9,#0x0
007e5c6c  beq 0x007e5d0c
007e5c70  ldr r0,[sp,#0x8]
007e5c74  mov r1,#0x0
007e5c78  bl 0x007ec4f4
007e5c7c  ldr r7,[sp,#0x1c]
007e5c80  cpy r11,r0
007e5c84  ldrh r0,[r0,#0x2c]
007e5c88  ldrh r1,[r7,#0x2c]
007e5c8c  cmp r0,r1
007e5c90  bne 0x007e5d34
007e5c94  ldrh r0,[r11,#0x0]
007e5c98  ldrh r1,[r7,#0x0]
007e5c9c  cmp r0,r1
007e5ca0  bne 0x007e5d34
007e5ca4  ldrb r0,[r11,#0x14]
007e5ca8  ldrb r1,[r7,#0x14]
007e5cac  cmp r0,r1
007e5cb0  bne 0x007e5d34
007e5cb4  mov r2,#0x12
007e5cb8  add r1,r7,#0x2
007e5cbc  add r0,r11,#0x2
007e5cc0  blx 0x001011c4
007e5cc4  cmp r0,#0x0
007e5cc8  nop
007e5ccc  bne 0x007e5d34
007e5cd0  ldrh r0,[r11,#0x16]!
007e5cd4  ldrh r1,[r7,#0x16]!
007e5cd8  cmp r0,r1
007e5cdc  bne 0x007e5d34
007e5ce0  ldrb r0,[r11,#0x14]
007e5ce4  ldrb r1,[r7,#0x14]
007e5ce8  cmp r0,r1
007e5cec  bne 0x007e5d34
007e5cf0  mov r2,#0x12
007e5cf4  add r1,r7,#0x2
007e5cf8  add r0,r11,#0x2
007e5cfc  blx 0x001011c4
007e5d00  cmp r0,#0x0
007e5d04  nop
007e5d08  bne 0x007e5d34
007e5d0c  ldr r0,[sp,#0x8]
007e5d10  cpy r1,sp
007e5d14  ldrb r0,[r0,#0x8]
007e5d18  cmp r0,#0x21
007e5d1c  bcs 0x007e5d34
007e5d20  and r2,r0,#0x7
007e5d24  add r0,r1,r0, lsr #0x3
007e5d28  ldrb r1,[r0,#0x0]
007e5d2c  orr r1,r1,r8, lsl r2
007e5d30  strb r1,[r0,#0x0]
007e5d34  cmp r5,#0x0
007e5d38  beq 0x007e5d4c
007e5d3c  bl 0x0062ef88
007e5d40  nop
007e5d44  nop
007e5d48  b 0x007e5d60
007e5d4c  nop
007e5d50  bl 0x00636e3c
007e5d54  ldr r1,[sp,#0x1c]
007e5d58  add r0,r0,#0x20
007e5d5c  bl 0x002d5ab4
007e5d60  cmp r0,#0x0
007e5d64  beq 0x007e5dc0
007e5d68  add r7,r0,#0x8000
007e5d6c  add r7,r7,#0xa10
007e5d70  cpy r0,r7
007e5d74  bl 0x007eb480
007e5d78  cmp r0,#0x0
007e5d7c  nop
007e5d80  beq 0x007e5dc0
007e5d84  ldrb r0,[r7,#0x9]
007e5d88  cmp r0,#0x0
007e5d8c  bne 0x007e5dc0
007e5d90  ldrsb r0,[r7,#0xf]
007e5d94  cmp r0,r4
007e5d98  bne 0x007e5dc0
007e5d9c  ldrb r0,[r7,#0x8]
007e5da0  cpy r1,sp
007e5da4  cmp r0,#0x21
007e5da8  bcs 0x007e5dc0
007e5dac  and r2,r0,#0x7
007e5db0  add r0,r1,r0, lsr #0x3
007e5db4  ldrb r1,[r0,#0x0]
007e5db8  orr r1,r1,r8, lsl r2
007e5dbc  strb r1,[r0,#0x0]
007e5dc0  cmp r5,#0x0
007e5dc4  beq 0x007e5dd8
007e5dc8  bl 0x0062ef88
007e5dcc  nop
007e5dd0  nop
007e5dd4  b 0x007e5dec
007e5dd8  nop
007e5ddc  bl 0x00636e3c
007e5de0  ldr r1,[sp,#0x1c]
007e5de4  add r0,r0,#0x20
007e5de8  bl 0x002d5b8c
007e5dec  cmp r0,#0x0
007e5df0  beq 0x007e5e4c
007e5df4  add r7,r0,#0x8000
007e5df8  add r7,r7,#0xa20
007e5dfc  cpy r0,r7
007e5e00  bl 0x007eb480
007e5e04  cmp r0,#0x0
007e5e08  nop
007e5e0c  beq 0x007e5e4c
007e5e10  ldrb r0,[r7,#0x9]
007e5e14  cmp r0,#0x2
007e5e18  bcs 0x007e5e4c
007e5e1c  ldrsb r0,[r7,#0xf]
007e5e20  cmp r0,r4
007e5e24  bne 0x007e5e4c
007e5e28  ldrb r0,[r7,#0x8]
007e5e2c  cpy r1,sp
007e5e30  cmp r0,#0x21
007e5e34  bcs 0x007e5e4c
007e5e38  and r2,r0,#0x7
007e5e3c  add r0,r1,r0, lsr #0x3
007e5e40  ldrb r1,[r0,#0x0]
007e5e44  orr r1,r1,r8, lsl r2
007e5e48  strb r1,[r0,#0x0]
007e5e4c  cmp r5,#0x0
007e5e50  beq 0x007e5e64
007e5e54  bl 0x0062ef88
007e5e58  nop
007e5e5c  nop
007e5e60  b 0x007e5e78
007e5e64  nop
007e5e68  bl 0x00636e3c
007e5e6c  ldr r1,[sp,#0x1c]
007e5e70  add r0,r0,#0x20
007e5e74  bl 0x002d5c64
007e5e78  cmp r0,#0x0
007e5e7c  beq 0x007e5ed8
007e5e80  add r7,r0,#0x8000
007e5e84  add r7,r7,#0xa30
007e5e88  cpy r0,r7
007e5e8c  bl 0x007eb480
007e5e90  cmp r0,#0x0
007e5e94  nop
007e5e98  beq 0x007e5ed8
007e5e9c  ldrsb r0,[r7,#0x14]
007e5ea0  cmp r0,r4
007e5ea4  bne 0x007e5ed8
007e5ea8  ldrb r0,[r7,#0x9]
007e5eac  cmp r0,#0x0
007e5eb0  bne 0x007e5ed8
007e5eb4  ldrb r0,[r7,#0x8]
007e5eb8  cpy r1,sp
007e5ebc  cmp r0,#0x21
007e5ec0  bcs 0x007e5ed8
007e5ec4  and r2,r0,#0x7
007e5ec8  add r0,r1,r0, lsr #0x3
007e5ecc  ldrb r1,[r0,#0x0]
007e5ed0  orr r1,r1,r8, lsl r2
007e5ed4  strb r1,[r0,#0x0]
007e5ed8  cmp r5,#0x0
007e5edc  beq 0x007e5ef0
007e5ee0  bl 0x0062ef88
007e5ee4  nop
007e5ee8  nop
007e5eec  b 0x007e5f04
007e5ef0  nop
007e5ef4  bl 0x00636e3c
007e5ef8  ldr r1,[sp,#0x1c]
007e5efc  add r0,r0,#0x20
007e5f00  bl 0x002d5924
007e5f04  cmp r0,#0x0
007e5f08  beq 0x007e5fa4
007e5f0c  add r5,r0,#0x8a00
007e5f10  add r5,r5,#0xbe
007e5f14  cpy r0,r5
007e5f18  bl 0x007eb480
007e5f1c  cmp r0,#0x0
007e5f20  nop
007e5f24  beq 0x007e5fa4
007e5f28  ldrsb r0,[r5,#0xb]
007e5f2c  cmp r0,r4
007e5f30  bne 0x007e5f74
007e5f34  cpy r0,r5
007e5f38  bl 0x007eb480
007e5f3c  cmp r0,#0x0
007e5f40  ldrbne r0,[r5,#0x9]
007e5f44  cmpne r0,#0x3
007e5f48  beq 0x007e5f74
007e5f4c  ldrb r0,[r5,#0x8]
007e5f50  cpy r1,sp
007e5f54  cmp r0,#0x21
007e5f58  bcs 0x007e5fa4
007e5f5c  and r3,r0,#0x7
007e5f60  add r0,r1,r0, lsr #0x3
007e5f64  ldrb r1,[r0,#0x0]
007e5f68  orr r1,r1,r8, lsl r3
007e5f6c  strb r1,[r0,#0x0]
007e5f70  b 0x007e5fa4
007e5f74  cmp r9,#0x0
007e5f78  ldrsbeq r0,[r5,#0xc]
007e5f7c  cmpeq r0,r4
007e5f80  bne 0x007e5fa4
007e5f84  ldrb r0,[r5,#0x9]
007e5f88  cmp r0,#0x1
007e5f8c  cmpne r0,#0x2
007e5f90  bne 0x007e5fa4
007e5f94  ldrb r0,[r5,#0x8]
007e5f98  cpy r1,sp
007e5f9c  cmp r0,#0x21
007e5fa0  bcc 0x007e5f5c
007e5fa4  ldr r1,[sp,#0x1c]
007e5fa8  cpy r0,r6
007e5fac  bl 0x007e5844
007e5fb0  cmp r0,#0x21
007e5fb4  cpyne r1,sp
007e5fb8  bcs 0x007e5fd0
007e5fbc  and r3,r0,#0x7
007e5fc0  add r0,r1,r0, lsr #0x3
007e5fc4  ldrb r1,[r0,#0x0]
007e5fc8  orr r1,r1,r8, lsl r3
007e5fcc  strb r1,[r0,#0x0]
007e5fd0  nop
007e5fd4  bl 0x0062ef88
007e5fd8  movs r7,r0
007e5fdc  nop
007e5fe0  beq 0x007e6068
007e5fe4  cpy r2,r0
007e5fe8  add r0,r6,#0x17000
007e5fec  add r0,r0,#0x30c
007e5ff0  ldr r1,[sp,#0x1c]
007e5ff4  cpy r8,r0
007e5ff8  bl 0x007eade0
007e5ffc  movs r5,r0
007e6000  nop
007e6004  beq 0x007e6018
007e6008  bl 0x007eb480
007e600c  cmp r0,#0x0
007e6010  nop
007e6014  bne 0x007e6034
007e6018  ldr r2,[sp,#0xc]
007e601c  cpy r1,r7
007e6020  cpy r0,r8
007e6024  bl 0x007eafb4
007e6028  cmp r0,#0x0
007e602c  nop
007e6030  beq 0x007e6068
007e6034  ldr r0,[sp,#0x50]
007e6038  cmp r0,#0x0
007e603c  beq 0x007e605c
007e6040  cmp r5,#0x0
007e6044  beq 0x007e6068
007e6048  cpy r0,r5
007e604c  bl 0x007eaaa8
007e6050  cmp r0,#0x0
007e6054  nop
007e6058  beq 0x007e6068
007e605c  ldrb r0,[sp,#0x0]
007e6060  orr r0,r0,#0x8
007e6064  strb r0,[sp,#0x0]
007e6068  ldr r0,[0x7e60b0]
007e606c  add r0,r0,r6
007e6070  ldrsb r0,[r0,#0xb]
007e6074  cmn r0,#0x1
007e6078  beq 0x007e6090
007e607c  cmp r0,r4
007e6080  bne 0x007e6090
007e6084  ldrb r0,[sp,#0x1]
007e6088  orr r0,r0,#0x20
007e608c  strb r0,[sp,#0x1]
007e6090  ldr r0,[sp,#0x0]
007e6094  str r0,[r10,#0x0]
007e6098  ldrb r0,[sp,#0x4]
007e609c  strb r0,[r10,#0x4]
007e60a0  add sp,sp,#0x24
007e60a4  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
