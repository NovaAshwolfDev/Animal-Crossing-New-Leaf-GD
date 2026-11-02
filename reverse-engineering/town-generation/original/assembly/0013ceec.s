0013ceec  stmdb sp!,{r4,r5,r6,r7,r8,lr}
0013cef0  cpy r5,r1
0013cef4  cpy r7,r2
0013cef8  ldr r2,[r1],#0xc
0013cefc  cpy r4,r0
0013cf00  cpy r6,r3
0013cf04  and r2,r2,#0xff
0013cf08  str r2,[r4,#0x0]
0013cf0c  ldrh r2,[r5,#0x30]
0013cf10  mov r8,#0x0
0013cf14  add r0,r0,#0x108
0013cf18  mov r2,r2, lsl #0x1b
0013cf1c  mov r2,r2, lsr #0x1c
0013cf20  str r2,[r4,#0x4]
0013cf24  ldrh r2,[r5,#0x30]
0013cf28  mov r2,r2, lsl #0x18
0013cf2c  mov r2,r2, lsr #0x1d
0013cf30  str r2,[r4,#0x8]
0013cf34  ldrh r2,[r5,#0x30]
0013cf38  mov r2,r2, lsl #0x14
0013cf3c  mov r2,r2, lsr #0x1c
0013cf40  str r2,[r4,#0xc]
0013cf44  ldrh r2,[r5,#0x30]
0013cf48  mov r2,r2, lsr #0xc
0013cf4c  str r2,[r4,#0x10]
0013cf50  ldrh r2,[r5,#0x32]
0013cf54  and r2,r2,#0xff
0013cf58  str r2,[r4,#0x14]
0013cf5c  ldrh r2,[r5,#0x32]
0013cf60  mov r2,r2, lsl #0x15
0013cf64  mov r2,r2, lsr #0x1d
0013cf68  str r2,[r4,#0x18]
0013cf6c  ldrh r2,[r5,#0x32]
0013cf70  mov r2,r2, lsl #0x14
0013cf74  mov r2,r2, lsr #0x1f
0013cf78  str r2,[r4,#0x1c]
0013cf7c  ldrh r2,[r5,#0x34]
0013cf80  and r2,r2,#0x3f
0013cf84  str r2,[r4,#0x20]
0013cf88  ldrh r2,[r5,#0x34]
0013cf8c  mov r2,r2, lsl #0x17
0013cf90  mov r2,r2, lsr #0x1d
0013cf94  str r2,[r4,#0x24]
0013cf98  ldrh r2,[r5,#0x34]
0013cf9c  mov r2,r2, lsl #0x13
0013cfa0  mov r2,r2, lsr #0x1c
0013cfa4  str r2,[r4,#0x28]
0013cfa8  ldrh r2,[r5,#0x34]
0013cfac  mov r2,r2, lsr #0xd
0013cfb0  str r2,[r4,#0x2c]
0013cfb4  ldrh r2,[r5,#0x36]
0013cfb8  and r2,r2,#0x1f
0013cfbc  str r2,[r4,#0x30]
0013cfc0  ldrh r2,[r5,#0x36]
0013cfc4  mov r2,r2, lsl #0x17
0013cfc8  mov r2,r2, lsr #0x1c
0013cfcc  str r2,[r4,#0x34]
0013cfd0  ldrh r2,[r5,#0x36]
0013cfd4  mov r2,r2, lsl #0x12
0013cfd8  mov r2,r2, lsr #0x1b
0013cfdc  str r2,[r4,#0x38]
0013cfe0  ldrh r2,[r5,#0x38]
0013cfe4  and r2,r2,#0x1f
0013cfe8  str r2,[r4,#0x3c]
0013cfec  ldrh r2,[r5,#0x38]
0013cff0  mov r2,r2, lsl #0x18
0013cff4  mov r2,r2, lsr #0x1d
0013cff8  str r2,[r4,#0x40]
0013cffc  ldrh r2,[r5,#0x38]
0013d000  mov r2,r2, lsl #0x14
0013d004  mov r2,r2, lsr #0x1c
0013d008  str r2,[r4,#0x44]
0013d00c  ldrh r2,[r5,#0x38]
0013d010  mov r2,r2, lsl #0x11
0013d014  mov r2,r2, lsr #0x1d
0013d018  str r2,[r4,#0x48]
0013d01c  ldrh r2,[r5,#0x3a]
0013d020  and r2,r2,#0x1f
0013d024  str r2,[r4,#0x4c]
0013d028  ldrh r2,[r5,#0x3a]
0013d02c  mov r2,r2, lsl #0x17
0013d030  mov r2,r2, lsr #0x1c
0013d034  str r2,[r4,#0x50]
0013d038  ldrh r2,[r5,#0x3a]
0013d03c  mov r2,r2, lsl #0x12
0013d040  mov r2,r2, lsr #0x1b
0013d044  str r2,[r4,#0x54]
0013d048  ldrh r2,[r5,#0x3c]
0013d04c  and r2,r2,#0x1f
0013d050  str r2,[r4,#0x58]
0013d054  ldrh r2,[r5,#0x3c]
0013d058  mov r2,r2, lsl #0x17
0013d05c  mov r2,r2, lsr #0x1c
0013d060  str r2,[r4,#0x5c]
0013d064  ldrh r2,[r5,#0x3c]
0013d068  mov r2,r2, lsl #0x12
0013d06c  mov r2,r2, lsr #0x1b
0013d070  str r2,[r4,#0x60]
0013d074  ldrh r2,[r5,#0x3e]
0013d078  and r2,r2,#0x3f
0013d07c  str r2,[r4,#0x64]
0013d080  ldrh r2,[r5,#0x3e]
0013d084  mov r2,r2, lsl #0x17
0013d088  mov r2,r2, lsr #0x1d
0013d08c  str r2,[r4,#0x68]
0013d090  ldrh r2,[r5,#0x3e]
0013d094  mov r2,r2, lsl #0x13
0013d098  mov r2,r2, lsr #0x1c
0013d09c  str r2,[r4,#0x6c]
0013d0a0  ldrh r2,[r5,#0x3e]
0013d0a4  mov r2,r2, lsr #0xd
0013d0a8  str r2,[r4,#0x70]
0013d0ac  ldrh r2,[r5,#0x40]
0013d0b0  and r2,r2,#0x1f
0013d0b4  str r2,[r4,#0x74]
0013d0b8  ldrh r2,[r5,#0x40]
0013d0bc  mov r2,r2, lsl #0x18
0013d0c0  mov r2,r2, lsr #0x1d
0013d0c4  str r2,[r4,#0x78]
0013d0c8  ldrh r2,[r5,#0x42]
0013d0cc  and r2,r2,#0x7
0013d0d0  str r2,[r4,#0x7c]
0013d0d4  ldrh r2,[r5,#0x42]
0013d0d8  mov r2,r2, lsl #0x1a
0013d0dc  mov r2,r2, lsr #0x1d
0013d0e0  str r2,[r4,#0x80]
0013d0e4  ldrh r2,[r5,#0x42]
0013d0e8  mov r2,r2, lsl #0x16
0013d0ec  mov r2,r2, lsr #0x1c
0013d0f0  str r2,[r4,#0x84]
0013d0f4  ldrh r2,[r5,#0x42]
0013d0f8  mov r2,r2, lsl #0x11
0013d0fc  mov r2,r2, lsr #0x1b
0013d100  str r2,[r4,#0x88]
0013d104  ldrh r2,[r5,#0x44]
0013d108  and r2,r2,#0xf
0013d10c  str r2,[r4,#0x8c]
0013d110  ldrh r2,[r5,#0x44]
0013d114  mov r2,r2, lsl #0x19
0013d118  mov r2,r2, lsr #0x1d
0013d11c  str r2,[r4,#0x90]
0013d120  ldrh r2,[r5,#0x44]
0013d124  mov r2,r2, lsl #0x15
0013d128  mov r2,r2, lsr #0x1c
0013d12c  str r2,[r4,#0x94]
0013d130  ldrh r2,[r5,#0x44]
0013d134  mov r2,r2, lsr #0xb
0013d138  str r2,[r4,#0x98]
0013d13c  ldrh r2,[r5,#0x46]
0013d140  and r2,r2,#0x1
0013d144  str r2,[r4,#0x9c]
0013d148  ldrh r2,[r5,#0x46]
0013d14c  add r12,r4,#0x118
0013d150  mov r2,r2, lsl #0x1b
0013d154  mov r2,r2, lsr #0x1c
0013d158  str r2,[r4,#0xa0]
0013d15c  ldrh r2,[r5,#0x46]
0013d160  mov r2,r2, lsl #0x16
0013d164  mov r2,r2, lsr #0x1b
0013d168  str r2,[r4,#0xa4]
0013d16c  ldrh r2,[r5,#0x46]
0013d170  mov r2,r2, lsl #0x11
0013d174  mov r2,r2, lsr #0x1b
0013d178  str r2,[r4,#0xa8]
0013d17c  ldrb r2,[r5,#0x2e]
0013d180  str r2,[r4,#0xac]
0013d184  ldrb r2,[r5,#0x2f]
0013d188  str r2,[r4,#0xb0]
0013d18c  ldrh r2,[r5,#0x18]
0013d190  and r2,r2,#0x1
0013d194  str r2,[r4,#0xe0]
0013d198  ldrh r2,[r5,#0x18]
0013d19c  mov r2,r2, lsl #0x12
0013d1a0  mov r2,r2, lsr #0x1c
0013d1a4  str r2,[r4,#0xec]
0013d1a8  ldrh r2,[r5,#0x18]
0013d1ac  and r2,r2,#0x4000
0013d1b0  mov r2,r2, lsr #0xe
0013d1b4  strb r2,[r4,#0xf0]
0013d1b8  ldr r2,[r5,#0x0]
0013d1bc  and r2,r2,#0x100
0013d1c0  mov r2,r2, lsr #0x8
0013d1c4  strb r2,[r4,#0xf1]
0013d1c8  ldr r2,[r5,#0x0]
0013d1cc  and r2,r2,#0x200
0013d1d0  mov r2,r2, lsr #0x9
0013d1d4  strb r2,[r4,#0xf2]
0013d1d8  ldrh r2,[r5,#0x30]
0013d1dc  and r2,r2,#0x1
0013d1e0  strb r2,[r4,#0xf3]
0013d1e4  ldr r2,[r5,#0x0]
0013d1e8  mov r2,r2, lsl #0x14
0013d1ec  mov r2,r2, lsr #0x1e
0013d1f0  str r2,[r4,#0xf4]
0013d1f4  ldr r2,[r5,#0x0]
0013d1f8  mov r2,r2, lsl #0x12
0013d1fc  mov r2,r2, lsr #0x1e
0013d200  str r2,[r4,#0xf8]
0013d204  ldr r2,[r5,#0x0]
0013d208  mov r2,r2, lsl #0xc
0013d20c  mov r2,r2, lsr #0x1c
0013d210  str r2,[r4,#0xfc]
0013d214  ldr r2,[r5,#0x0]
0013d218  mov r2,r2, lsl #0x8
0013d21c  mov r2,r2, lsr #0x1c
0013d220  str r2,[r4,#0x100]
0013d224  ldr r2,[r5,#0x0]
0013d228  mov r2,r2, lsl #0x1
0013d22c  mov r2,r2, lsr #0x1d
0013d230  str r2,[r4,#0x104]
0013d234  ldr r2,[r5,#0x0]
0013d238  mov r2,r2, lsl #0x4
0013d23c  mov r2,r2, lsr #0x1c
0013d240  str r2,[r4,#0x114]
0013d244  ldrd r2,r3,[r5,#0x4]
0013d248  stmia r12,{r2,r3}
0013d24c  ldr r2,[r5,#0x1a]
0013d250  str r2,[r4,#0xb4]
0013d254  ldr r2,[r5,#0x1e]
0013d258  str r2,[r4,#0xb8]
0013d25c  ldr r2,[r5,#0x22]
0013d260  str r2,[r4,#0xbc]
0013d264  ldr r2,[r5,#0x26]
0013d268  str r2,[r4,#0xc0]
0013d26c  ldr r2,[r5,#0x2a]
0013d270  str r2,[r4,#0xc4]
0013d274  strh r8,[r4,#0xc8]
0013d278  bl 0x0080c0d4
0013d27c  cmp r7,#0x0
0013d280  streq r8,[r4,#0xe4]
0013d284  streq r8,[r4,#0xe8]
0013d288  beq 0x0013d2ac
0013d28c  ldrh r0,[r5,#0x18]
0013d290  mov r0,r0, lsl #0x1b
0013d294  mov r0,r0, lsr #0x1c
0013d298  str r0,[r4,#0xe4]
0013d29c  ldrh r0,[r5,#0x18]
0013d2a0  mov r0,r0, lsl #0x16
0013d2a4  mov r0,r0, lsr #0x1b
0013d2a8  str r0,[r4,#0xe8]
0013d2ac  cmp r6,#0x0
0013d2b0  beq 0x0013d2e0
0013d2b4  ldr r0,[r6,#0x0]
0013d2b8  str r0,[r4,#0xca]
0013d2bc  ldr r0,[r6,#0x4]
0013d2c0  str r0,[r4,#0xce]
0013d2c4  ldr r0,[r6,#0x8]
0013d2c8  str r0,[r4,#0xd2]
0013d2cc  ldr r0,[r6,#0xc]
0013d2d0  str r0,[r4,#0xd6]
0013d2d4  ldr r0,[r6,#0x10]
0013d2d8  str r0,[r4,#0xda]
0013d2dc  b 0x0013d2f4
0013d2e0  str r8,[r4,#0xca]
0013d2e4  str r8,[r4,#0xce]
0013d2e8  str r8,[r4,#0xd2]
0013d2ec  str r8,[r4,#0xd6]
0013d2f0  str r8,[r4,#0xda]
0013d2f4  strh r8,[r4,#0xde]
0013d2f8  ldmia sp!,{r4,r5,r6,r7,r8,pc}
