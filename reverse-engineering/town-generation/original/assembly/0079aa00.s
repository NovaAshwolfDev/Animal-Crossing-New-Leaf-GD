0079aa00  stmdb sp!,{r0,r1,r2,r3,r4,r5,r6,r7,r8,r9,r10,r11,lr}
0079aa04  sub sp,sp,#0x1c
0079aa08  cpy r5,r2
0079aa0c  cpy r9,r0
0079aa10  cpy r11,r3
0079aa14  ldr r0,[sp,#0x20]
0079aa18  bl 0x005a19a0
0079aa1c  ldmia r0,{r0,r6}
0079aa20  uxth r10,r0
0079aa24  cpy r1,r10
0079aa28  add r0,sp,#0x8
0079aa2c  bl 0x00756d40
0079aa30  add r0,sp,#0x8
0079aa34  bl 0x005a20f8
0079aa38  cpy r4,r0
0079aa3c  bl 0x00636e3c
0079aa40  ldr r1,[0x79ae54]
0079aa44  ldrb r0,[r0,r1]
0079aa48  sub r1,r11,#0x1
0079aa4c  tst r1,r0, lsr #0x4
0079aa50  moveq r7,#0x1
0079aa54  movne r7,#0x0
0079aa58  bl 0x00636e3c
0079aa5c  ldr r1,[0x79ae58]
0079aa60  add r1,r1,r0
0079aa64  add r0,sp,#0x4
0079aa68  bl 0x001b5c6c
0079aa6c  ldr r1,[sp,#0x20]
0079aa70  add r0,sp,#0x4
0079aa74  bl 0x007aa548
0079aa78  str r0,[sp,#0x0]
0079aa7c  ldr r1,[sp,#0x20]
0079aa80  add r0,sp,#0x4
0079aa84  bl 0x007aa580
0079aa88  str r0,[sp,#0xc]
0079aa8c  ldr r1,[sp,#0x20]
0079aa90  add r0,sp,#0x4
0079aa94  bl 0x007aa5bc
0079aa98  str r0,[sp,#0x10]
0079aa9c  ldr r1,[sp,#0x20]
0079aaa0  add r0,sp,#0x4
0079aaa4  bl 0x007aa5f8
0079aaa8  cmp r5,#0x2
0079aaac  str r0,[sp,#0x14]
0079aab0  beq 0x0079aadc
0079aab4  cmp r6,#0x0
0079aab8  mov r5,#0x0
0079aabc  movhi r8,#0x1
0079aac0  bls 0x0079ad0c
0079aac4  cpy r0,r4
0079aac8  bl 0x007dcca4
0079aacc  cmp r0,#0x0
0079aad0  nop
0079aad4  beq 0x0079ac0c
0079aad8  b 0x0079acfc
0079aadc  ldr r1,[sp,#0x20]
0079aae0  add r0,sp,#0x4
0079aae4  bl 0x007aa460
0079aae8  cmp r6,#0x0
0079aaec  cpy r8,r0
0079aaf0  mov r5,#0x0
0079aaf4  bls 0x0079ad0c
0079aaf8  ldrb r0,[r4,#0xd]
0079aafc  cmp r0,#0xae
0079ab00  movcs r0,#0x0
0079ab04  cmp r0,r8
0079ab08  beq 0x0079abf8
0079ab0c  cpy r0,r4
0079ab10  bl 0x007dcca4
0079ab14  cmp r0,#0x0
0079ab18  nop
0079ab1c  bne 0x0079abf8
0079ab20  cmp r7,#0x0
0079ab24  bne 0x0079ab34
0079ab28  ldrb r0,[r4,#0x1f]
0079ab2c  movs r0,r0, lsl #0x19
0079ab30  bmi 0x0079abf8
0079ab34  ldrb r0,[r4,#0xd]
0079ab38  cmp r0,#0xae
0079ab3c  bcs 0x0079ab48
0079ab40  cmp r0,#0x14
0079ab44  beq 0x0079ab7c
0079ab48  cmp r0,#0xae
0079ab4c  bcs 0x0079ab58
0079ab50  cmp r0,#0x15
0079ab54  beq 0x0079ab94
0079ab58  cmp r0,#0xae
0079ab5c  bcs 0x0079ab68
0079ab60  cmp r0,#0x16
0079ab64  beq 0x0079abac
0079ab68  cmp r0,#0xae
0079ab6c  bcs 0x0079abf8
0079ab70  cmp r0,#0x17
0079ab74  bne 0x0079abf8
0079ab78  b 0x0079abc4
0079ab7c  mov r0,#0x64
0079ab80  bl 0x0011df38
0079ab84  ldr r1,[sp,#0x0]
0079ab88  cmp r0,r1
0079ab8c  bcs 0x0079abf8
0079ab90  b 0x0079abd8
0079ab94  mov r0,#0x64
0079ab98  bl 0x0011df38
0079ab9c  ldr r1,[sp,#0xc]
0079aba0  cmp r0,r1
0079aba4  bcs 0x0079abf8
0079aba8  b 0x0079abd8
0079abac  mov r0,#0x64
0079abb0  bl 0x0011df38
0079abb4  ldr r1,[sp,#0x10]
0079abb8  cmp r0,r1
0079abbc  bcs 0x0079abf8
0079abc0  b 0x0079abd8
0079abc4  mov r0,#0x64
0079abc8  bl 0x0011df38
0079abcc  ldr r1,[sp,#0x14]
0079abd0  cmp r0,r1
0079abd4  bcs 0x0079abf8
0079abd8  add r0,r10,r5
0079abdc  sub r0,r0,#0x2000
0079abe0  mov r1,#0x1
0079abe4  mov r3,r0, lsr #0x5
0079abe8  and r0,r0,#0x1f
0079abec  ldr r2,[r9,r3,lsl #0x2]
0079abf0  orr r0,r2,r1, lsl r0
0079abf4  str r0,[r9,r3,lsl #0x2]
0079abf8  add r5,r5,#0x1
0079abfc  cmp r6,r5
0079ac00  add r4,r4,#0x22
0079ac04  bhi 0x0079aaf8
0079ac08  b 0x0079ad0c
0079ac0c  cmp r7,#0x0
0079ac10  bne 0x0079ac20
0079ac14  ldrb r0,[r4,#0x1f]
0079ac18  movs r0,r0, lsl #0x19
0079ac1c  bmi 0x0079acfc
0079ac20  ldrb r0,[r4,#0xd]
0079ac24  cmp r0,#0xae
0079ac28  bcs 0x0079ac34
0079ac2c  cmp r0,#0x14
0079ac30  beq 0x0079ac68
0079ac34  cmp r0,#0xae
0079ac38  bcs 0x0079ac44
0079ac3c  cmp r0,#0x15
0079ac40  beq 0x0079ac80
0079ac44  cmp r0,#0xae
0079ac48  bcs 0x0079ac54
0079ac4c  cmp r0,#0x16
0079ac50  beq 0x0079ac98
0079ac54  cmp r0,#0xae
0079ac58  bcs 0x0079acfc
0079ac5c  cmp r0,#0x17
0079ac60  bne 0x0079acfc
0079ac64  b 0x0079accc
0079ac68  mov r0,#0x64
0079ac6c  bl 0x0011df38
0079ac70  ldr r1,[sp,#0x0]
0079ac74  cmp r0,r1
0079ac78  bcs 0x0079acfc
0079ac7c  b 0x0079acac
0079ac80  mov r0,#0x64
0079ac84  bl 0x0011df38
0079ac88  ldr r1,[sp,#0xc]
0079ac8c  cmp r0,r1
0079ac90  bcs 0x0079acfc
0079ac94  b 0x0079acac
0079ac98  mov r0,#0x64
0079ac9c  bl 0x0011df38
0079aca0  ldr r1,[sp,#0x10]
0079aca4  cmp r0,r1
0079aca8  bcs 0x0079acfc
0079acac  add r0,r10,r5
0079acb0  sub r1,r0,#0x2000
0079acb4  mov r0,r1, lsr #0x5
0079acb8  and r1,r1,#0x1f
0079acbc  ldr r2,[r9,r0,lsl #0x2]
0079acc0  orr r1,r2,r8, lsl r1
0079acc4  str r1,[r9,r0,lsl #0x2]
0079acc8  b 0x0079acfc
0079accc  mov r0,#0x64
0079acd0  bl 0x0011df38
0079acd4  ldr r1,[sp,#0x14]
0079acd8  cmp r0,r1
0079acdc  bcs 0x0079acfc
0079ace0  add r0,r10,r5
0079ace4  sub r0,r0,#0x2000
0079ace8  mov r2,r0, lsr #0x5
0079acec  and r0,r0,#0x1f
0079acf0  ldr r1,[r9,r2,lsl #0x2]
0079acf4  orr r0,r1,r8, lsl r0
0079acf8  str r0,[r9,r2,lsl #0x2]
0079acfc  add r5,r5,#0x1
0079ad00  cmp r6,r5
0079ad04  add r4,r4,#0x22
0079ad08  bhi 0x0079aac4
0079ad0c  mov r2,#0x0
0079ad10  cpy r1,r2
0079ad14  ldr r0,[r9,r1,lsl #0x2]
0079ad18  cmp r0,#0x0
0079ad1c  beq 0x0079ad30
0079ad20  tst r0,#0x1
0079ad24  addne r2,r2,#0x1
0079ad28  movs r0,r0, lsr #0x1
0079ad2c  bne 0x0079ad20
0079ad30  add r1,r1,#0x1
0079ad34  cmp r1,#0x8e
0079ad38  bcc 0x0079ad14
0079ad3c  cmp r2,#0x0
0079ad40  beq 0x0079ad64
0079ad44  add r0,sp,#0x4
0079ad48  cpy r0,r0
0079ad4c  add r0,sp,#0x8
0079ad50  nop
0079ad54  cpy r0,r0
0079ad58  add sp,sp,#0x2c
0079ad5c  mov r0,#0x1
0079ad60  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
0079ad64  ldr r1,[sp,#0x20]
0079ad68  add r0,sp,#0x4
0079ad6c  bl 0x007aa3fc
0079ad70  cpy r2,r0
0079ad74  ldr r1,[sp,#0x20]
0079ad78  mov r3,#0x1
0079ad7c  cpy r0,r9
0079ad80  str r11,[sp,#0x0]
0079ad84  bl 0x0079a704
0079ad88  mov r2,#0x0
0079ad8c  cpy r1,r2
0079ad90  ldr r0,[r9,r1,lsl #0x2]
0079ad94  cmp r0,#0x0
0079ad98  beq 0x0079adac
0079ad9c  tst r0,#0x1
0079ada0  addne r2,r2,#0x1
0079ada4  movs r0,r0, lsr #0x1
0079ada8  bne 0x0079ad9c
0079adac  add r1,r1,#0x1
0079adb0  cmp r1,#0x8e
0079adb4  bcc 0x0079ad90
0079adb8  cmp r2,#0x0
0079adbc  bne 0x0079ae34
0079adc0  add r0,sp,#0x8
0079adc4  bl 0x005a20f8
0079adc8  cmp r6,#0x0
0079adcc  cpy r5,r0
0079add0  mov r4,#0x0
0079add4  bls 0x0079ae34
0079add8  cpy r0,r5
0079addc  bl 0x007dcca4
0079ade0  cmp r0,#0x0
0079ade4  nop
0079ade8  bne 0x0079ae24
0079adec  cmp r7,#0x0
0079adf0  bne 0x0079ae00
0079adf4  ldrb r0,[r5,#0x1f]
0079adf8  movs r0,r0, lsl #0x19
0079adfc  bmi 0x0079ae24
0079ae00  add r0,r10,r4
0079ae04  sub r1,r0,#0x2000
0079ae08  mov r2,#0x1
0079ae0c  mov r0,r1, lsr #0x5
0079ae10  and r1,r1,#0x1f
0079ae14  ldr r3,[r9,r0,lsl #0x2]
0079ae18  orr r1,r3,r2, lsl r1
0079ae1c  str r1,[r9,r0,lsl #0x2]
0079ae20  b 0x0079ae34
0079ae24  add r4,r4,#0x1
0079ae28  cmp r6,r4
0079ae2c  add r5,r5,#0x22
0079ae30  bhi 0x0079add8
0079ae34  add r0,sp,#0x4
0079ae38  cpy r0,r0
0079ae3c  add r0,sp,#0x8
0079ae40  nop
0079ae44  cpy r0,r0
0079ae48  add sp,sp,#0x2c
0079ae4c  mov r0,#0x0
0079ae50  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
