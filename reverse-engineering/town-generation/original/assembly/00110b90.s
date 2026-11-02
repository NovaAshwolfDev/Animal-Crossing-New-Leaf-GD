00110b90  stmdb sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,lr}
00110b94  mov r5,#0x0
00110b98  cpy r12,r5
00110b9c  cpy r6,r5
00110ba0  cpy r10,r5
00110ba4  ldmia r1,{r2,r4}
00110ba8  ldr r7,[0x110c44]
00110bac  ldr r3,[0x110c48]
00110bb0  mov r8,r4, asr #0x1f
00110bb4  umull lr,r11,r2,r7
00110bb8  mla r11,r5,r7,r11
00110bbc  mla lr,r2,r10,r11
00110bc0  str lr,[sp,#0x0]
00110bc4  umull r11,lr,r4,r7
00110bc8  ldr r1,[r1,#0x4]
00110bcc  mla r7,r8,r7,lr
00110bd0  ldr lr,[sp,#0x0]
00110bd4  mla r10,r4,r5,r7
00110bd8  adds r7,r11,lr
00110bdc  adc r9,r10,r5
00110be0  umull r10,r11,r2,r3
00110be4  mla r5,r5,r3,r11
00110be8  mla r2,r2,r12,r5
00110bec  umull r5,r11,r4,r3
00110bf0  mla r3,r8,r3,r11
00110bf4  mla r12,r4,r12,r3
00110bf8  adds r4,r10,r7
00110bfc  adc r2,r2,r6
00110c00  mov r4,r2, asr #0x1f
00110c04  adds r2,r2,r9
00110c08  adc r3,r4,r9, asr #0x1f
00110c0c  adds r2,r2,r5
00110c10  adc r3,r3,r12
00110c14  mov r5,r2, lsr #0x12
00110c18  mov r4,r3, lsl #0xe
00110c1c  mov r2,r3, asr #0x12
00110c20  mov r3,r1, lsr #0x1f
00110c24  orr r1,r5,r4
00110c28  adds r1,r1,r3
00110c2c  ldmia r0,{r3,r12}
00110c30  adc r2,r2,#0x0
00110c34  adds r1,r1,r3
00110c38  adc r2,r2,r12
00110c3c  stmia r0,{r1,r2}
00110c40  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,pc}
