0010de90  stmdb sp!,{r4,r5,r6,r7,r8,lr}
0010de94  sub sp,sp,#0x10
0010de98  cpy r6,r0
0010de9c  ldr r2,[0x10e00c]
0010dea0  ldrd r0,r1,[r1,#0x0]
0010dea4  mov r3,#0x0
0010dea8  adds r0,r0,r2
0010deac  ldr r2,[0x10e010]
0010deb0  adc r1,r1,r2
0010deb4  ldr r2,[0x10e014]
0010deb8  bl 0x0010f710
0010debc  ldr r1,[0x10e018]
0010dec0  cpy r4,r2
0010dec4  add r2,sp,#0x8
0010dec8  adds r5,r0,r1
0010decc  cpy r3,r5
0010ded0  add r1,sp,#0x4
0010ded4  cpy r0,sp
0010ded8  bl 0x00110990
0010dedc  ldr r0,[sp,#0x4]
0010dee0  bic r1,r8,#0xff
0010dee4  ldr r3,[0x10e01c]
0010dee8  and r0,r0,#0xff
0010deec  orr r0,r0,r1
0010def0  ldr r1,[sp,#0x8]
0010def4  bic r0,r0,#0xff00
0010def8  add r12,r5,#0x6
0010defc  cpy r5,r12
0010df00  mov r1,r1, lsl #0x8
0010df04  and r1,r1,#0xff00
0010df08  orr r2,r0,r1
0010df0c  mov r1,#0x0
0010df10  cpy r8,r1
0010df14  smlal r8,r5,r3,r12
0010df18  bic r2,r2,#0xff0000
0010df1c  ldr r0,[sp,#0x0]
0010df20  mov r8,r5, asr #0x2
0010df24  sub r5,r8,r5, asr #0x1f
0010df28  cpy r8,r1
0010df2c  sub r5,r5,r5, lsl #0x3
0010df30  add r12,r12,r5
0010df34  add r12,r12,#0x7
0010df38  cpy r5,r12
0010df3c  smlal r8,r5,r3,r12
0010df40  cpy r8,r1
0010df44  mov r3,r5, asr #0x2
0010df48  sub r3,r3,r5, asr #0x1f
0010df4c  sub r3,r3,r3, lsl #0x3
0010df50  add r3,r3,r12
0010df54  ldr r12,[0x10e020]
0010df58  mov r3,r3, lsl #0x10
0010df5c  and r3,r3,#0xff0000
0010df60  orr r3,r3,r2
0010df64  smull r12,r2,r12,r4
0010df68  bic r3,r3,#0xff000000
0010df6c  mov r12,r2, asr #0x14
0010df70  sub r2,r12,r2, asr #0x1f
0010df74  ldr r12,[0x10e024]
0010df78  orr r3,r3,r2, lsl #0x18
0010df7c  smull r12,r2,r12,r4
0010df80  mov r12,r2, asr #0xe
0010df84  sub r2,r12,r2, asr #0x1f
0010df88  ldr r12,[0x10e028]
0010df8c  cpy r5,r2
0010df90  smlal r8,r5,r12,r2
0010df94  mov r8,r5, asr #0x5
0010df98  sub r5,r8,r5, asr #0x1f
0010df9c  sub r5,r5,r5, lsl #0x4
0010dfa0  add r2,r2,r5, lsl #0x2
0010dfa4  bic r5,r7,#0xff
0010dfa8  ldr r7,[0x10e02c]
0010dfac  and r2,r2,#0xff
0010dfb0  orr r5,r5,r2
0010dfb4  smull r7,r2,r7,r4
0010dfb8  mov r7,r2, asr #0x6
0010dfbc  sub r2,r7,r2, asr #0x1f
0010dfc0  cpy r7,r2
0010dfc4  smlal r1,r7,r12,r2
0010dfc8  bic r12,r5,#0xff00
0010dfcc  mov r1,r7, asr #0x5
0010dfd0  sub r1,r1,r7, asr #0x1f
0010dfd4  sub r1,r1,r1, lsl #0x4
0010dfd8  add r1,r2,r1, lsl #0x2
0010dfdc  mov r1,r1, lsl #0x8
0010dfe0  and r1,r1,#0xff00
0010dfe4  orr r1,r1,r12
0010dfe8  mvn r12,#0x7c
0010dfec  uxth r1,r1
0010dff0  mul r12,r2,r12
0010dff4  add r2,r4,r12, lsl #0x3
0010dff8  orr r1,r1,r2, lsl #0x10
0010dffc  str r1,[r6,#0x8]
0010e000  stmia r6,{r0,r3}
0010e004  add sp,sp,#0x10
0010e008  ldmia sp!,{r4,r5,r6,r7,r8,pc}
