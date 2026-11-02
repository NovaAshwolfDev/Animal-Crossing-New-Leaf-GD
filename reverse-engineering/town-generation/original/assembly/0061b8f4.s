0061b8f4  stmdb sp!,{r0,r1,r4,r5,r6,r7,r8,r9,r10,r11,lr}
0061b8f8  sub sp,sp,#0x64
0061b8fc  cpy r10,r0
0061b900  bl 0x0061bdcc
0061b904  bl 0x00219120
0061b908  movs r1,r0
0061b90c  mov r2,#0x1
0061b910  movne r0,#0x0
0061b914  bne 0x0061b924
0061b918  b 0x0061b974
0061b91c  nop
0061b920  bhi 0x0061b964
0061b924  ldrb r12,[r1,r0,lsr #0x3]
0061b928  and r3,r0,#0x7
0061b92c  mov r3,r2, lsl r3
0061b930  tst r12,r3
0061b934  beq 0x0061b964
0061b938  cmp r0,#0x14c
0061b93c  bhi 0x0061b964
0061b940  mov r12,r0, lsr #0x3
0061b944  cmp r12,#0x2a
0061b948  bcs 0x0061b964
0061b94c  add r12,r12,r10
0061b950  add r12,r12,#0x18000
0061b954  add r12,r12,#0x4a0
0061b958  ldrb r4,[r12,#0x0]
0061b95c  orr r3,r3,r4
0061b960  strb r3,[r12,#0x0]
0061b964  add r0,r0,#0x1
0061b968  uxth r0,r0
0061b96c  cmp r0,#0x14c
0061b970  bls 0x0061b91c
0061b974  ldr r0,[0x61bdb0]
0061b978  mov r1,#0xa
0061b97c  add r3,sp,#0x4
0061b980  strb r2,[r0,#0x2]
0061b984  mov r0,#0x8
0061b988  str r0,[sp,#0x4]
0061b98c  mov r0,#0x0
0061b990  cpy r8,r0
0061b994  str r0,[sp,#0x8]
0061b998  str r0,[sp,#0xc]
0061b99c  add r0,sp,#0x50
0061b9a0  str r1,[sp,#0x58]
0061b9a4  stmia r0,{r3,r10}
0061b9a8  add r0,r10,#0x18000
0061b9ac  add r0,r0,#0x4a0
0061b9b0  str r0,[sp,#0x60]
0061b9b4  mov r11,#0x0
0061b9b8  add r0,sp,#0x54
0061b9bc  str r11,[sp,#0x30]
0061b9c0  str r11,[sp,#0x34]
0061b9c4  str r11,[sp,#0x38]
0061b9c8  str r11,[sp,#0x3c]
0061b9cc  str r11,[sp,#0x40]
0061b9d0  str r11,[sp,#0x44]
0061b9d4  str r11,[sp,#0x48]
0061b9d8  str r11,[sp,#0x4c]
0061b9dc  ldmia r0,{r4,r6}
0061b9e0  mov r7,#0x88
0061b9e4  cpy r5,r11
0061b9e8  cmp r6,#0x0
0061b9ec  addhi r9,sp,#0x30
0061b9f0  bls 0x0061ba48
0061b9f4  cpy r0,r4
0061b9f8  bl 0x007f3734
0061b9fc  cmp r0,#0x0
0061ba00  nop
0061ba04  beq 0x0061ba34
0061ba08  cpy r0,r4
0061ba0c  bl 0x007f37b0
0061ba10  cmp r0,#0x8
0061ba14  nop
0061ba18  bcs 0x0061ba34
0061ba1c  cpy r0,r4
0061ba20  bl 0x007f37b0
0061ba24  add r0,r9,r0, lsl #0x2
0061ba28  ldr r1,[r0,#0x0]
0061ba2c  add r1,r1,#0x1
0061ba30  str r1,[r0,#0x0]
0061ba34  add r5,r5,#0x1
0061ba38  add r4,r4,#0x2400
0061ba3c  cmp r5,r6
0061ba40  add r4,r4,#0xf8
0061ba44  bcc 0x0061b9f4
0061ba48  ldr r0,[sp,#0x50]
0061ba4c  add r4,sp,#0x30
0061ba50  mov r5,#0x8
0061ba54  mvn r1,#0x0
0061ba58  str r11,[r0,#0x4]
0061ba5c  mov r3,#0x0
0061ba60  mov r9,#0x1
0061ba64  str r11,[r0,#0x8]
0061ba68  cmp r7,#0x0
0061ba6c  beq 0x0061ba78
0061ba70  tst r7,r9, lsl r3
0061ba74  bne 0x0061bb04
0061ba78  ldr r2,[r4,#0x0]
0061ba7c  cmp r2,r1
0061ba80  bcs 0x0061bacc
0061ba84  mov r1,r9, lsl r3
0061ba88  add r2,r0,#0x4
0061ba8c  stmia r2,{r1,r11}
0061ba90  mov r2,#0x0
0061ba94  ldr r12,[r0,#0x0]
0061ba98  cmp r12,#0x0
0061ba9c  ble 0x0061bac4
0061baa0  tst r1,#0x1
0061baa4  beq 0x0061bab4
0061baa8  ldr r6,[r0,#0x8]
0061baac  add r6,r6,#0x1
0061bab0  str r6,[r0,#0x8]
0061bab4  add r2,r2,#0x1
0061bab8  cmp r12,r2
0061babc  mov r1,r1, lsr #0x1
0061bac0  bgt 0x0061baa0
0061bac4  ldr r1,[r4,#0x0]
0061bac8  b 0x0061bb04
0061bacc  nop
0061bad0  bne 0x0061bb04
0061bad4  ldr r12,[r0,#0x0]
0061bad8  cmp r12,r3
0061badc  bls 0x0061bb04
0061bae0  ldr r12,[r0,#0x4]
0061bae4  mov r2,r9, lsl r3
0061bae8  tst r12,r2
0061baec  bne 0x0061bb04
0061baf0  ldr r6,[r0,#0x8]
0061baf4  orr r2,r2,r12
0061baf8  add r12,r6,#0x1
0061bafc  add r6,r0,#0x4
0061bb00  stmia r6,{r2,r12}
0061bb04  add r3,r3,#0x1
0061bb08  cmp r5,r3
0061bb0c  add r4,r4,#0x4
0061bb10  bhi 0x0061ba68
0061bb14  ldr r0,[sp,#0xc]
0061bb18  cmp r0,#0x0
0061bb1c  bne 0x0061bb60
0061bb20  ldr r2,[sp,#0x4]
0061bb24  mov r0,#0x77
0061bb28  mov r1,#0x0
0061bb2c  cmp r2,#0x0
0061bb30  str r0,[sp,#0x8]
0061bb34  ble 0x0061bb60
0061bb38  tst r0,#0x1
0061bb3c  beq 0x0061bb4c
0061bb40  ldr r2,[sp,#0xc]
0061bb44  add r2,r2,#0x1
0061bb48  str r2,[sp,#0xc]
0061bb4c  ldr r2,[sp,#0x4]
0061bb50  add r1,r1,#0x1
0061bb54  mov r0,r0, lsr #0x1
0061bb58  cmp r2,r1
0061bb5c  bgt 0x0061bb38
0061bb60  ldr r4,[0x61bdb4]
0061bb64  ldr r1,[sp,#0x60]
0061bb68  mov r2,#0x1
0061bb6c  add r0,sp,#0x50
0061bb70  bl 0x0061cfd8
0061bb74  cmp r0,r4
0061bb78  cpy r11,r0
0061bb7c  beq 0x0061bd9c
0061bb80  mov r7,#0xa
0061bb84  mov r6,#0x1
0061bb88  cpy r5,r10
0061bb8c  mov r4,#0x0
0061bb90  cpy r0,r5
0061bb94  bl 0x007f3734
0061bb98  cmp r0,#0x0
0061bb9c  nop
0061bba0  beq 0x0061bbd8
0061bba4  cmp r6,#0x0
0061bba8  beq 0x0061bbbc
0061bbac  ldr r0,[0x61bdb8]
0061bbb0  ldrb r0,[r0,r5]
0061bbb4  cmp r0,#0x4
0061bbb8  beq 0x0061bbd8
0061bbbc  add r4,r4,#0x1
0061bbc0  add r5,r5,#0x2400
0061bbc4  cmp r4,r7
0061bbc8  add r5,r5,#0xf8
0061bbcc  bcc 0x0061bb90
0061bbd0  mov r7,#0x0
0061bbd4  b 0x0061bbec
0061bbd8  cmp r4,#0xa
0061bbdc  bcs 0x0061bd9c
0061bbe0  ldr r0,[0x61bdbc]
0061bbe4  mul r1,r4,r0
0061bbe8  add r7,r10,r1, lsl #0x3
0061bbec  cmp r7,#0x0
0061bbf0  beq 0x0061bd9c
0061bbf4  ldr r6,[sp,#0x68]
0061bbf8  mov r5,#0x0
0061bbfc  cpy r0,r7
0061bc00  strh r11,[sp,#0x1c]
0061bc04  bl 0x00620b00
0061bc08  ldr r1,[0x61bdc0]
0061bc0c  ldrh r0,[sp,#0x1c]
0061bc10  ldr r1,[r1,#0x4]
0061bc14  cmp r1,#0x0
0061bc18  beq 0x0061bc34
0061bc1c  cmp r0,#0x14c
0061bc20  bhi 0x0061bc34
0061bc24  add r3,r0,r0, lsl #0x1
0061bc28  add r2,r3,r0, lsl #0x3
0061bc2c  add r4,r1,r2, lsl #0x3
0061bc30  b 0x0061bc38
0061bc34  mov r4,#0x0
0061bc38  ldr r1,[0x61bdc4]
0061bc3c  ldr r1,[r1,#0x4]
0061bc40  cmp r1,#0x0
0061bc44  beq 0x0061bc58
0061bc48  cmp r0,#0x14c
0061bc4c  addls r0,r0,r0, lsl #0x4
0061bc50  addls r0,r1,r0, lsl #0x1
0061bc54  bls 0x0061bc5c
0061bc58  mov r0,#0x0
0061bc5c  cmp r4,#0x0
0061bc60  cmpne r0,#0x0
0061bc64  beq 0x0061bd6c
0061bc68  ldrb r0,[r0,#0x1c]
0061bc6c  cpy r3,r6
0061bc70  add r2,sp,#0x20
0061bc74  add r1,sp,#0x1c
0061bc78  mov r0,r0, lsr #0x4
0061bc7c  strb r0,[sp,#0x20]
0061bc80  cpy r0,r7
0061bc84  bl 0x00698008
0061bc88  nop
0061bc8c  nop
0061bc90  bl 0x0063653c
0061bd6c  cmp r11,#0x14c
0061bd70  bhi 0x0061bd9c
0061bd74  mov r0,r11, lsr #0x3
0061bd78  cmp r0,#0x2a
0061bd7c  and r1,r11,#0x7
0061bd80  bcs 0x0061bd9c
0061bd84  add r0,r0,r10
0061bd88  add r0,r0,#0x18000
0061bd8c  add r0,r0,#0x4a0
0061bd90  ldrb r2,[r0,#0x0]
0061bd94  orr r1,r2,r9, lsl r1
0061bd98  strb r1,[r0,#0x0]
0061bd9c  add r8,r8,#0x1
0061bda0  cmp r8,#0x5
0061bda4  bcc 0x0061b9b4
0061bda8  add sp,sp,#0x6c
0061bdac  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
