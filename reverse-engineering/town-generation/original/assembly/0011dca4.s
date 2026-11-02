0011dca4  ldr r3,[0x11dcec]
0011dca8  stmdb sp!,{r4,lr}
0011dcac  mov r12,r1, asr #0x1f
0011dcb0  mov r2,#0x0
0011dcb4  umull lr,r4,r1,r3
0011dcb8  mla r12,r12,r3,r4
0011dcbc  mla r12,r1,r2,r12
0011dcc0  mov r2,#0x3
0011dcc4  umlal lr,r12,r2,r0
0011dcc8  umull r1,r2,r1,r2
0011dccc  umull r2,r0,r0,r3
0011dcd0  mov r2,#0x0
0011dcd4  adds r0,r0,r2
0011dcd8  adc r1,r1,r2
0011dcdc  adds r0,r0,lr
0011dce0  ldmia sp!,{r4,lr}
0011dce4  adc r1,r1,r12
0011dce8  b 0x0011690c
