001b7e8c  stmdb sp!,{r4,r5,r6,r7,r8,r9,lr}
001b7e90  sub sp,sp,#0x7c
001b7e94  cpy r5,r0
001b7e98  bl 0x0074a424
001b7e9c  and r6,r0,#0xf
001b7ea0  mov r0,r0, lsr #0x4
001b7ea4  and r7,r0,#0xf
001b7ea8  mov r0,r0, lsl #0x18
001b7eac  mov r4,r0, lsr #0x1c
001b7eb0  bl 0x00644ee8
001b7eb4  ldr r9,[0x1b8284]
001b7eb8  cpy r2,r0
001b7ebc  ldr r0,[0x1b8288]
001b7ec0  ldr r1,[r9,#0x0]
001b7ec4  bl 0x00756f28
001b7ec8  ldr r0,[0x1b828c]
001b7ecc  mov r8,#0x0
001b7ed0  str r8,[sp,#0x0]
001b7ed4  ldr r1,[r9,#0x0]
001b7ed8  ldrh r2,[r0,#0x0]
001b7edc  cpy r3,r8
001b7ee0  add r0,r5,#0x2a
001b7ee4  bl 0x001b8a74
001b7ee8  ldr r1,[0x1b8288]
001b7eec  add r0,r5,#0x40
001b7ef0  bl 0x00756ef4
001b7ef4  ldr r0,[0x1b8290]
001b7ef8  cmp r4,#0x7
001b7efc  ldrcc pc,[pc,r4,lsl #0x2]
001b7f00  b 0x001b8274
001b7f20  add r3,sp,#0x4
001b7f24  add r1,sp,#0xc
001b7f28  mov r2,#0x1e
001b7f2c  stmia r3,{r1,r2}
001b7f30  add r1,sp,#0xb
001b7f34  strb r8,[r2,r1]
001b7f38  str r0,[sp,#0x0]
001b7f3c  cpy r1,sp
001b7f40  add r0,sp,#0x58
001b7f44  strb r8,[sp,#0xc]
001b7f48  bl 0x005ad830
001b7f4c  adr r1,0x1b8294
001b7f50  nop
001b7f54  bl 0x005a9cd4
001b7f58  strh r6,[sp,#0x34]
001b7f5c  add r6,sp,#0x34
001b7f60  cpy r4,r0
001b7f64  add r1,sp,#0x38
001b7f68  bl 0x005a9714
001b7f6c  cmp r0,#0x0
001b7f70  nop
001b7f74  beq 0x001b7f94
001b7f78  ldrb r0,[sp,#0x38]
001b7f7c  ldr r2,[r4,#0x4]
001b7f80  cmp r0,#0x0
001b7f84  moveq r1,#0x0
001b7f88  addne r1,sp,#0x38
001b7f8c  cpy r0,r6
001b7f90  bl 0x005a9b88
001b7f94  cpy r0,r4
001b7f98  bl 0x005a9c0c
001b7f9c  add r0,sp,#0x6c
001b7fa0  nop
001b7fa4  cpy r0,r0
001b7fa8  ldr r1,[sp,#0x0]
001b7fac  cpy r0,sp
001b7fb0  ldr r1,[r1,#0x8]
001b7fb4  blx r1
001b7fb8  ldr r1,[sp,#0x4]
001b7fbc  cpy r0,r5
001b7fc0  bl 0x001b848c
001b7fc4  and r0,r7,#0xff
001b7fc8  nop
001b7fcc  bl 0x0062d120
001b7fd0  add r1,r0,#0x5500
001b7fd4  add r1,r1,#0xa6
001b7fd8  add r0,r5,#0x2a
001b7fdc  bl 0x001b8a6c
001b7fe0  nop
001b7fe4  nop
001b7fe8  b 0x001b8274
001b7fec  add r3,sp,#0x4
001b7ff0  add r1,sp,#0xc
001b7ff4  mov r2,#0x1e
001b7ff8  stmia r3,{r1,r2}
001b7ffc  add r1,sp,#0xb
001b8000  strb r8,[r2,r1]
001b8004  str r0,[sp,#0x0]
001b8008  cpy r1,sp
001b800c  add r0,sp,#0x50
001b8010  strb r8,[sp,#0xc]
001b8014  bl 0x005ad830
001b8018  adr r1,0x1b8294
001b801c  nop
001b8020  bl 0x005a9cd4
001b8024  add r1,r6,#0xa
001b8028  str r1,[sp,#0x74]
001b802c  add r6,sp,#0x74
001b8030  cpy r4,r0
001b8034  add r1,sp,#0x30
001b8038  bl 0x005a9714
001b803c  cmp r0,#0x0
001b8040  nop
001b8044  beq 0x001b8064
001b8048  ldrb r0,[sp,#0x30]
001b804c  ldr r2,[r4,#0x4]
001b8050  cmp r0,#0x0
001b8054  moveq r1,#0x0
001b8058  addne r1,sp,#0x30
001b805c  cpy r0,r6
001b8060  bl 0x005a9a80
001b8064  cpy r0,r4
001b8068  bl 0x005a9c0c
001b806c  add r0,sp,#0x64
001b8070  nop
001b8074  cpy r0,r0
001b8078  ldr r1,[sp,#0x0]
001b807c  cpy r0,sp
001b8080  ldr r1,[r1,#0x8]
001b8084  blx r1
001b8088  ldr r1,[sp,#0x4]
001b808c  cpy r0,r5
001b8090  bl 0x001b848c
001b8094  nop
001b8098  nop
001b809c  b 0x001b8274
001b80a0  add r3,sp,#0x2c
001b80a4  add r1,sp,#0x34
001b80a8  mov r2,#0x1e
001b80ac  stmia r3,{r1,r2}
001b80b0  add r1,sp,#0x33
001b80b4  strb r8,[r2,r1]
001b80b8  str r0,[sp,#0x28]
001b80bc  add r1,sp,#0x28
001b80c0  add r0,sp,#0x58
001b80c4  strb r8,[sp,#0x34]
001b80c8  bl 0x005ad830
001b80cc  adr r1,0x1b8294
001b80d0  nop
001b80d4  bl 0x005a9cd4
001b80d8  mov r1,#0x13
001b80dc  str r1,[sp,#0x54]
001b80e0  add r6,sp,#0x54
001b80e4  cpy r4,r0
001b80e8  add r1,sp,#0x8
001b80ec  bl 0x005a9714
001b80f0  cmp r0,#0x0
001b80f4  nop
001b80f8  beq 0x001b8120
001b80fc  ldrb r0,[sp,#0x8]
001b8100  ldr r2,[r4,#0x4]
001b8104  cmp r0,#0x0
001b8108  bne 0x001b8114
001b810c  mov r1,#0x0
001b8110  b 0x001b8118
001b8114  add r1,sp,#0x8
001b8118  cpy r0,r6
001b811c  bl 0x005a9a80
001b8120  cpy r0,r4
001b8124  bl 0x005a9c0c
001b8128  add r0,sp,#0x6c
001b812c  nop
001b8130  cpy r0,r0
001b8134  ldr r1,[sp,#0x28]
001b8138  add r0,sp,#0x28
001b813c  ldr r1,[r1,#0x8]
001b8140  blx r1
001b8144  ldr r1,[sp,#0x2c]
001b8148  cpy r0,r5
001b814c  bl 0x001b848c
001b8150  nop
001b8154  nop
001b8158  b 0x001b8274
001b815c  add r3,sp,#0x2c
001b8160  add r1,sp,#0x34
001b8164  mov r2,#0x1e
001b8168  stmia r3,{r1,r2}
001b816c  add r1,sp,#0x33
001b8170  strb r8,[r2,r1]
001b8174  str r0,[sp,#0x28]
001b8178  add r1,sp,#0x28
001b817c  add r0,sp,#0x58
001b8180  strb r8,[sp,#0x34]
001b8184  bl 0x005ad830
001b8188  adr r1,0x1b8294
001b818c  nop
001b8190  bl 0x005a9cd4
001b8194  mov r1,#0x12
001b8198  str r1,[sp,#0x54]
001b819c  add r6,sp,#0x54
001b81a0  cpy r4,r0
001b81a4  add r1,sp,#0x8
001b81a8  bl 0x005a9714
001b81ac  cmp r0,#0x0
001b81b0  nop
001b81b4  beq 0x001b8120
001b81b8  ldrb r0,[sp,#0x8]
001b81bc  ldr r2,[r4,#0x4]
001b81c0  cmp r0,#0x0
001b81c4  bne 0x001b8114
001b81c8  b 0x001b810c
001b81cc  add r3,sp,#0x24
001b81d0  add r1,sp,#0x2c
001b81d4  mov r2,#0x1e
001b81d8  stmia r3,{r1,r2}
001b81dc  add r1,sp,#0x2b
001b81e0  strb r8,[r2,r1]
001b81e4  str r0,[sp,#0x20]
001b81e8  add r1,sp,#0x20
001b81ec  add r0,sp,#0x50
001b81f0  strb r8,[sp,#0x2c]
001b81f4  bl 0x005ad830
001b81f8  adr r1,0x1b8294
001b81fc  nop
001b8200  bl 0x005a9cd4
001b8204  mov r1,#0x14
001b8208  str r1,[sp,#0x74]
001b820c  add r6,sp,#0x74
001b8210  cpy r4,r0
001b8214  cpy r1,sp
001b8218  bl 0x005a9714
001b821c  cmp r0,#0x0
001b8220  nop
001b8224  beq 0x001b8244
001b8228  ldrb r0,[sp,#0x0]
001b822c  ldr r2,[r4,#0x4]
001b8230  cmp r0,#0x0
001b8234  moveq r1,#0x0
001b8238  cpyne r1,sp
001b823c  cpy r0,r6
001b8240  bl 0x005a9a80
001b8244  cpy r0,r4
001b8248  bl 0x005a9c0c
001b824c  add r0,sp,#0x64
001b8250  nop
001b8254  cpy r0,r0
001b8258  ldr r1,[sp,#0x20]
001b825c  add r0,sp,#0x20
001b8260  ldr r1,[r1,#0x8]
001b8264  blx r1
001b8268  ldr r1,[sp,#0x24]
001b826c  cpy r0,r5
001b8270  bl 0x001b848c
001b8274  add sp,sp,#0x7c
001b8278  cpy r0,r5
001b827c  ldmia sp!,{r4,r5,r6,r7,r8,r9,lr}
001b8280  b 0x001b6c20
