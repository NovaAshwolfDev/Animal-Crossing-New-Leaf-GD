00119e54  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,r11,r12,lr}
00119e58  mov r4,#0x0
00119e5c  cpy r6,r4
00119e60  cpy r7,r4
00119e64  cpy r11,r0
00119e68  ldmia r0,{r12,lr}
00119e6c  mov r5,r3, asr #0x1f
00119e70  umull r10,r9,r12,r2
00119e74  mov r1,lr, asr #0x1f
00119e78  mla r0,r4,r2,r9
00119e7c  umull r9,r10,lr,r2
00119e80  mla r0,r12,r6,r0
00119e84  mla r2,r1,r2,r10
00119e88  adds r9,r9,r0
00119e8c  mla r2,lr,r4,r2
00119e90  adc r0,r2,r4
00119e94  umull r2,r6,r12,r3
00119e98  mla r4,r4,r3,r6
00119e9c  umull r6,r8,lr,r3
00119ea0  mla r4,r12,r5,r4
00119ea4  mla r1,r1,r3,r8
00119ea8  adds r2,r2,r9
00119eac  mla r1,lr,r5,r1
00119eb0  mov r5,r0, asr #0x1f
00119eb4  adc r2,r4,r7
00119eb8  adds r0,r0,r2
00119ebc  adc r2,r5,r2, asr #0x1f
00119ec0  adds r0,r0,r6
00119ec4  adc r1,r1,r2
00119ec8  cmp r3,#0x0
00119ecc  bge 0x00119ed8
00119ed0  adds r0,r0,r12
00119ed4  adc r1,r1,lr
00119ed8  ldr r2,[sp,#0x28]
00119edc  bl 0x0011b128
00119ee0  ldr r2,[r11,#0x4]
00119ee4  mov r2,r2, lsr #0x1f
00119ee8  adds r0,r0,r2
00119eec  adc r1,r1,#0x0
00119ef0  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,r11,r12,pc}
