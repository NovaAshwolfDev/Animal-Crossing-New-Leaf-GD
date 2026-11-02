002d7f88  stmdb sp!,{r0,r1,r4,r5,r6,r7,r8,r9,r10,r11,lr}
002d7f8c  sub sp,sp,#0x294
002d7f90  mov r0,#0x1
002d7f94  cpy r10,r1
002d7f98  bl 0x0074702c
002d7f9c  cpy r9,r0
002d7fa0  ldr r0,[0x2d87b4]
002d7fa4  mov r7,#0x0
002d7fa8  add r0,r0,r10, lsl #0x2
002d7fac  str r0,[sp,#0x288]
002d7fb0  ldr r0,[0x2d87b8]
002d7fb4  ldr r0,[r0,#0x0]
002d7fb8  cmp r0,#0x0
002d7fbc  beq 0x002d7fd8
002d7fc0  ldr r8,[0x2d87b8]
002d7fc4  cmp r0,#0x1
002d7fc8  beq 0x002d8578
002d7fcc  cmp r0,#0x2
002d7fd0  beq 0x002d8724
002d7fd4  b 0x002d87a4
002d7fd8  ldr r0,[0x2d87b4]
002d7fdc  cmp r10,#0x4
002d7fe0  ldrcc r0,[sp,#0x288]
002d7fe4  ldr r1,[r0,#0x0]
002d7fe8  ldr r0,[0x2d87bc]
002d7fec  bl 0x005be4f0
002d7ff0  nop
002d7ff4  nop
002d7ff8  bl 0x00285eb8
002d7ffc  mov r0,#0x1
002d8000  nop
002d8004  bl 0x00285804
002d8008  nop
002d800c  nop
002d8010  bl 0x003c25c4
002d8014  ldr r0,[sp,#0x294]
002d8018  nop
002d801c  bl 0x00697944
002d8020  nop
002d8024  nop
002d8028  bl 0x00636e3c
002d802c  add r0,r0,#0x49000
002d8030  add r0,r0,#0x520
002d8034  bl 0x0063aa5c
002d8038  ldr r0,[0x2d87bc]
002d803c  mov r4,#0x3
002d8040  bl 0x005be58c
002d8044  umull r1,r0,r0,r4
002d8048  and r1,r0,#0xff
002d804c  ldr r0,[sp,#0x294]
002d8050  strb r1,[r0,#0x1]
002d8054  ldr r0,[0x2d87bc]
002d8058  nop
002d805c  bl 0x005be58c
002d8060  umull r1,r0,r0,r4
002d8064  and r1,r0,#0xff
002d8068  ldr r0,[sp,#0x294]
002d806c  strb r1,[r0,#0x2]
002d8070  ldr r1,[0x2d87c0]
002d8074  cmp r10,#0x4
002d8078  add r0,r1,#0x0
002d807c  add r0,r0,r10
002d8080  cpycc r1,r0
002d8084  ldrb r1,[r1,#0x0]
002d8088  cmp r1,#0x0
002d808c  ldr r1,[0x2d87c0]
002d8090  beq 0x002d8524
002d8094  cmp r10,#0x4
002d8098  ldr r3,[0x2d87c4]
002d809c  cpycc r1,r0
002d80a0  ldr r0,[sp,#0x294]
002d80a4  ldrb r2,[r1,#0x0]
002d80a8  add r1,r3,#0xfc
002d80ac  bl 0x00593474
002d80b0  mov r6,#0x0
002d80b4  mov r4,#0x0
002d80b8  cpy r2,r6
002d80bc  cpy r1,r4
002d80c0  cpy r0,r9
002d80c4  bl 0x007e23e0
002d80c8  movs r5,r0
002d80cc  nop
002d80d0  beq 0x002d80fc
002d80d4  ldr r0,[sp,#0x294]
002d80d8  cpy r2,r6
002d80dc  cpy r1,r4
002d80e0  bl 0x007f3690
002d80e4  nop
002d80e8  nop
002d80ec  ldrh r0,[r0,#0x0]
002d80f0  cpy r1,r0
002d80f4  cpy r0,r5
002d80f8  strh r1,[r0,#0x0]
002d80fc  add r4,r4,#0x1
002d8100  cmp r4,#0x7
002d8104  bcc 0x002d80b8
002d8108  add r6,r6,#0x1
002d810c  cmp r6,#0x6
002d8110  bcc 0x002d80b4
002d8114  mov r5,#0x0
002d8118  mov r4,#0x0
002d811c  cpy r1,r5
002d8120  cpy r0,r4
002d8124  bl 0x00697880
002d8128  cmp r0,#0x0
002d812c  nop
002d8130  beq 0x002d8170
002d8134  ldr r0,[sp,#0x294]
002d8138  cpy r2,r5
002d813c  cpy r1,r4
002d8140  bl 0x00697800
002d8144  cpy r6,r0
002d8148  add r2,r5,#0x1
002d814c  add r1,r4,#0x1
002d8150  cpy r0,r9
002d8154  bl 0x007e23e0
002d8158  cmp r0,#0x0
002d815c  nop
002d8160  beq 0x002d8170
002d8164  mov r2,#0x0
002d8168  cpy r1,r6
002d816c  bl 0x005dc588
002d8170  add r4,r4,#0x1
002d8174  cmp r4,#0x5
002d8178  bcc 0x002d811c
002d817c  add r5,r5,#0x1
002d8180  cmp r5,#0x4
002d8184  bcc 0x002d8118
002d8188  ldr r0,[sp,#0x294]
002d818c  bl 0x006978d4
002d8190  cpy r1,r0
002d8194  cpy r0,r9
002d8198  str r1,[r0,#0x28]
002d819c  mov r0,#0x1
002d81a0  nop
002d81a4  bl 0x007a14f4
002d81a8  ldr r0,[sp,#0x294]
002d81ac  mov r9,#0x1
002d81b0  cpy r11,sp
002d81b4  str r0,[sp,#0x25c]
002d81b8  mov r8,#0x1
002d81bc  ldr r0,[sp,#0x25c]
002d81c0  sub r2,r9,#0x1
002d81c4  sub r1,r8,#0x1
002d81c8  bl 0x006977dc
002d81cc  str r0,[sp,#0x274]
002d81d0  ldr r0,[sp,#0x25c]
002d81d4  cpy r2,r9
002d81d8  cpy r1,r8
002d81dc  bl 0x007f3690
002d81e0  nop
002d81e4  nop
002d81e8  ldrh r0,[r0,#0x0]
002d81ec  cpy r2,r0
002d81f0  mov r1,#0x258
002d81f4  cpy r0,sp
002d81f8  bl 0x0078cff4
002d81fc  subs r5,r0,#0x0
002d8200  mov r4,#0x0
002d8204  bls 0x002d8250
002d8208  add r0,r4,r4, lsl #0x1
002d820c  add r0,r11,r0, lsl #0x1
002d8210  ldrh r1,[r0,#0x0]
002d8214  ldrb r6,[r0,#0x4]
002d8218  ldrb r7,[r0,#0x5]
002d821c  add r0,sp,#0x28c
002d8220  bl 0x00756d40
002d8224  cpy r1,r0
002d8228  ldr r0,[sp,#0x274]
002d822c  cpy r3,r7
002d8230  cpy r2,r6
002d8234  bl 0x00797688
002d8238  add r0,sp,#0x28c
002d823c  nop
002d8240  cpy r0,r0
002d8244  add r4,r4,#0x1
002d8248  cmp r5,r4
002d824c  bhi 0x002d8208
002d8250  add r8,r8,#0x1
002d8254  cmp r8,#0x6
002d8258  bcc 0x002d81bc
002d825c  add r9,r9,#0x1
002d8260  cmp r9,#0x5
002d8264  bcc 0x002d81b8
002d8268  ldr r0,[sp,#0x294]
002d826c  mov r11,#0x0
002d8270  mov r8,#0x1
002d8274  add r9,sp,#0x8
002d8278  str r0,[sp,#0xb8]
002d827c  str r11,[sp,#0xc4]
002d8280  str r11,[sp,#0xb4]
002d8284  mov r7,#0x1
002d8288  ldr r0,[sp,#0xb8]
002d828c  cpy r2,r8
002d8290  cpy r1,r7
002d8294  bl 0x007f3690
002d8298  nop
002d829c  nop
002d82a0  ldrh r0,[r0,#0x0]
002d82a4  cpy r2,r0
002d82a8  mov r1,#0xa0
002d82ac  add r0,sp,#0x8
002d82b0  bl 0x001e9800
002d82b4  subs r5,r0,#0x0
002d82b8  mov r4,#0x0
002d82bc  bls 0x002d8308
002d82c0  add r2,r9,r4, lsl #0x2
002d82c4  cpy r3,r8
002d82c8  ldrb r1,[r2,#0x3]
002d82cc  ldrb r0,[r2,#0x2]
002d82d0  ldrh r2,[r2,#0x0]
002d82d4  strd r0,r1,[sp,#0x0]
002d82d8  and r6,r2,#0xff
002d82dc  cpy r2,r7
002d82e0  add r1,sp,#0xb4
002d82e4  add r0,sp,#0xc4
002d82e8  bl 0x00745ff8
002d82ec  ldr r0,[sp,#0xc4]
002d82f0  ldr r1,[sp,#0xb4]
002d82f4  cpy r2,r6
002d82f8  bl 0x002876dc
002d82fc  add r4,r4,#0x1
002d8300  cmp r5,r4
002d8304  bhi 0x002d82c0
002d8308  add r7,r7,#0x1
002d830c  cmp r7,#0x6
002d8310  bcc 0x002d8288
002d8314  add r8,r8,#0x1
002d8318  cmp r8,#0x5
002d831c  bcc 0x002d8284
002d8320  ldr r4,[0x2d87bc]
002d8324  cpy r0,sp
002d8328  cpy r0,r0
002d832c  cpy r2,r4
002d8330  mov r1,#0x0
002d8334  cpy r0,sp
002d8338  bl 0x001e6910
002d833c  cpy r0,sp
002d8340  nop
002d8344  cpy r0,r0
002d8348  mov r0,#0x0
002d834c  nop
002d8350  bl 0x00285cac
002d8354  cpy r5,r0
002d8358  cpy r1,r0
002d835c  mov r4,#0x0
002d8360  add r0,sp,#0x28
002d8364  bl 0x007acd50
002d8368  cpy r1,r5
002d836c  cpy r0,sp
002d8370  bl 0x007acdd0
002d8374  add r1,sp,#0x28
002d8378  cpy r0,sp
002d837c  bl 0x007acd1c
002d8380  cmp r0,#0x0
002d8384  nop
002d8388  beq 0x002d83c8
002d838c  cpy r0,sp
002d8390  add r0,r0,#0x8
002d8394  ldrb r0,[r0,#0x8]
002d8398  nop
002d839c  bl 0x0076994c
002d83a0  cmp r0,#0x0
002d83a4  addne r4,r4,#0x1
002d83a8  cpy r0,sp
002d83ac  bl 0x001cbd60
002d83b0  add r1,sp,#0x28
002d83b4  cpy r0,sp
002d83b8  bl 0x007acd1c
002d83bc  cmp r0,#0x0
002d83c0  nop
002d83c4  bne 0x002d838c
002d83c8  cpy r0,sp
002d83cc  cpy r0,r0
002d83d0  add r0,sp,#0x28
002d83d4  nop
002d83d8  cpy r0,r0
002d83dc  cmp r4,#0x1
002d83e0  moveq r6,#0x1
002d83e4  movne r6,#0x0
002d83e8  mov r4,#0x0
002d83ec  cpy r1,r5
002d83f0  add r0,sp,#0x8
002d83f4  bl 0x007acd50
002d83f8  cpy r1,r5
002d83fc  add r0,sp,#0x28
002d8400  bl 0x007acdd0
002d8404  add r1,sp,#0x8
002d8408  add r0,sp,#0x28
002d840c  bl 0x007acd1c
002d8410  cmp r0,#0x0
002d8414  nop
002d8418  beq 0x002d8458
002d841c  add r0,sp,#0x28
002d8420  add r0,r0,#0x8
002d8424  ldrb r0,[r0,#0x8]
002d8428  nop
002d842c  bl 0x00769928
002d8430  cmp r0,#0x0
002d8434  addne r4,r4,#0x1
002d8438  add r0,sp,#0x28
002d843c  bl 0x001cbd60
002d8440  add r1,sp,#0x8
002d8444  add r0,sp,#0x28
002d8448  bl 0x007acd1c
002d844c  cmp r0,#0x0
002d8450  nop
002d8454  bne 0x002d841c
002d8458  add r0,sp,#0x28
002d845c  cpy r0,r0
002d8460  add r0,sp,#0x8
002d8464  nop
002d8468  cpy r0,r0
002d846c  cmp r4,#0x1
002d8470  moveq r0,#0x1
002d8474  movne r0,#0x0
002d8478  and r6,r6,r0
002d847c  mov r4,#0x0
002d8480  cpy r1,r5
002d8484  add r0,sp,#0x18
002d8488  bl 0x007acd50
002d848c  cpy r1,r5
002d8490  cpy r0,sp
002d8494  bl 0x007acdd0
002d8498  add r1,sp,#0x18
002d849c  cpy r0,sp
002d84a0  bl 0x007acd1c
002d84a4  cmp r0,#0x0
002d84a8  nop
002d84ac  beq 0x002d84ec
002d84b0  cpy r0,sp
002d84b4  add r0,r0,#0x8
002d84b8  ldrb r0,[r0,#0x8]
002d84bc  nop
002d84c0  bl 0x00769904
002d84c4  cmp r0,#0x0
002d84c8  addne r4,r4,#0x1
002d84cc  cpy r0,sp
002d84d0  bl 0x001cbd60
002d84d4  add r1,sp,#0x18
002d84d8  cpy r0,sp
002d84dc  bl 0x007acd1c
002d84e0  cmp r0,#0x0
002d84e4  nop
002d84e8  bne 0x002d84b0
002d84ec  cpy r0,sp
002d84f0  cpy r0,r0
002d84f4  add r0,sp,#0x18
002d84f8  nop
002d84fc  cpy r0,r0
002d8500  cmp r4,#0x1
002d8504  moveq r0,#0x1
002d8508  movne r0,#0x0
002d850c  tst r0,r6
002d8510  beq 0x002d854c
002d8514  ldr r0,[0x2d87b8]
002d8518  mov r1,#0x1
002d851c  str r1,[r0,#0x0]
002d8520  b 0x002d856c
002d8524  cmp r10,#0x4
002d8528  ldr r3,[0x2d87c8]
002d852c  cpycs r0,r1
002d8530  ldrb r2,[r0,#0x0]
002d8534  ldr r0,[sp,#0x294]
002d8538  add r1,r3,#0x1f8
002d853c  bl 0x00593474
002d8540  nop
002d8544  nop
002d8548  b 0x002d80b0
002d854c  ldr r0,[0x2d87b8]
002d8550  str r11,[r0,#0x0]
002d8554  mvn r0,#0x80000000
002d8558  bl 0x0011df38
002d855c  ldr r1,[0x2d87b4]
002d8560  cmp r10,#0x4
002d8564  bcc 0x002d871c
002d8568  str r0,[r1,#0x0]
002d856c  add sp,sp,#0x29c
002d8570  mov r0,#0x0
002d8574  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
002d8578  ldr r1,[0x2d87bc]
002d857c  mov r0,#0x5
002d8580  bl 0x002865a8
002d8584  ldr r4,[0x2d87bc]
002d8588  cpy r0,sp
002d858c  cpy r0,r0
002d8590  cpy r1,r4
002d8594  cpy r0,sp
002d8598  bl 0x001e93ac
002d859c  cpy r0,sp
002d85a0  nop
002d85a4  cpy r0,r0
002d85a8  cpy r1,sp
002d85ac  add r0,sp,#0x4
002d85b0  str r7,[sp,#0x4]
002d85b4  str r7,[sp,#0x0]
002d85b8  bl 0x007a1d28
002d85bc  ldr r0,[sp,#0x4]
002d85c0  ldr r1,[sp,#0x0]
002d85c4  mov r2,#0x59
002d85c8  bl 0x002876dc
002d85cc  mov r0,#0x0
002d85d0  nop
002d85d4  bl 0x00285cac
002d85d8  cpy r5,r0
002d85dc  cpy r1,r0
002d85e0  mov r4,#0x0
002d85e4  add r0,sp,#0x20
002d85e8  bl 0x007acd50
002d85ec  cpy r1,r5
002d85f0  cpy r0,sp
002d85f4  bl 0x007acdd0
002d85f8  add r1,sp,#0x20
002d85fc  cpy r0,sp
002d8600  bl 0x007acd1c
002d8604  cmp r0,#0x0
002d8608  nop
002d860c  beq 0x002d864c
002d8610  cpy r0,sp
002d8614  add r0,r0,#0x8
002d8618  ldrb r0,[r0,#0x8]
002d861c  nop
002d8620  bl 0x00767cd4
002d8624  cmp r0,#0x0
002d8628  addne r4,r4,#0x1
002d862c  cpy r0,sp
002d8630  bl 0x001cbd60
002d8634  add r1,sp,#0x20
002d8638  cpy r0,sp
002d863c  bl 0x007acd1c
002d8640  cmp r0,#0x0
002d8644  nop
002d8648  bne 0x002d8610
002d864c  cpy r0,sp
002d8650  cpy r0,r0
002d8654  add r0,sp,#0x20
002d8658  nop
002d865c  cpy r0,r0
002d8660  cmp r4,#0x5
002d8664  moveq r6,#0x1
002d8668  movne r6,#0x0
002d866c  mov r4,#0x0
002d8670  cpy r1,r5
002d8674  add r0,sp,#0x20
002d8678  bl 0x007acd50
002d867c  cpy r1,r5
002d8680  add r0,sp,#0x8
002d8684  bl 0x007acdd0
002d8688  add r1,sp,#0x20
002d868c  add r0,sp,#0x8
002d8690  bl 0x007acd1c
002d8694  cmp r0,#0x0
002d8698  nop
002d869c  beq 0x002d86d4
002d86a0  add r0,sp,#0x8
002d86a4  add r0,r0,#0x8
002d86a8  ldrb r0,[r0,#0x8]
002d86ac  cmp r0,#0x5c
002d86b0  addeq r4,r4,#0x1
002d86b4  add r0,sp,#0x8
002d86b8  bl 0x001cbd60
002d86bc  add r1,sp,#0x20
002d86c0  add r0,sp,#0x8
002d86c4  bl 0x007acd1c
002d86c8  cmp r0,#0x0
002d86cc  nop
002d86d0  bne 0x002d86a0
002d86d4  add r0,sp,#0x8
002d86d8  cpy r0,r0
002d86dc  add r0,sp,#0x20
002d86e0  nop
002d86e4  cpy r0,r0
002d86e8  cmp r4,#0x1
002d86ec  moveq r0,#0x1
002d86f0  movne r0,#0x0
002d86f4  tst r0,r6
002d86f8  movne r0,#0x2
002d86fc  strne r0,[r8,#0x0]
002d8700  bne 0x002d856c
002d8704  mvn r0,#0x80000000
002d8708  str r7,[r8,#0x0]
002d870c  bl 0x0011df38
002d8710  ldr r1,[0x2d87b4]
002d8714  cmp r10,#0x4
002d8718  bcs 0x002d8568
002d871c  ldr r1,[sp,#0x288]
002d8720  b 0x002d8568
002d8724  ldr r1,[0x2d87cc]
002d8728  add r0,sp,#0x10
002d872c  bl 0x0060f010
002d8730  cpy r5,r0
002d8734  ldr r0,[0x2d87d0]
002d8738  ldr r4,[r0,#0x13c]
002d873c  cmp r4,#0x0
002d8740  beq 0x002d8770
002d8744  add r1,r4,#0xc
002d8748  cpy r0,r5
002d874c  bl 0x007e51bc
002d8750  cmp r0,#0x0
002d8754  nop
002d8758  beq 0x002d8764
002d875c  add r1,r4,#0x14
002d8760  b 0x002d8774
002d8764  ldr r4,[r4,#0x8]
002d8768  cmp r4,#0x0
002d876c  bne 0x002d8744
002d8770  cpy r1,r7
002d8774  cpy r0,r9
002d8778  bl 0x007a0858
002d877c  add r0,sp,#0x10
002d8780  nop
002d8784  cpy r0,r0
002d8788  nop
002d878c  nop
002d8790  bl 0x00636e3c
002d8794  ldr r1,[0x2d87d4]
002d8798  add r0,r0,r1
002d879c  ldr r1,[0x2d87bc]
002d87a0  bl 0x003c01a8
002d87a4  str r7,[r8,#0x0]
002d87a8  add sp,sp,#0x29c
002d87ac  mov r0,#0x1
002d87b0  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
