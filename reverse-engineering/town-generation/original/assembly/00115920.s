00115920  stmdb sp!,{r4,r5,r6,lr}
00115924  cpy r4,r3
00115928  cpy r5,r2
0011592c  cpy r3,r1
00115930  cpy r2,r0
00115934  cmp r4,#0x0
00115938  cpyne r12,r4
0011593c  cpyeq r12,r5
00115940  clz lr,r12
00115944  add r0,lr,#0x1
00115948  mov r12,r12, lsl r0
0011594c  rsbnes lr,lr,#0x3f
00115950  rsbeqs lr,lr,#0x1f
00115954  bmi 0x00115b70
00115958  cmp r3,#0x0
0011595c  clzne r1,r3
00115960  clzeq r1,r2
00115964  rsbnes r1,r1,#0x3f
00115968  rsbeqs r1,r1,#0x1f
0011596c  subs r6,r1,lr
00115970  bmi 0x00115b84
00115974  rsbpls r0,r6,#0x4
00115978  bpl 0x00115b90
0011597c  sub r0,lr,#0x20
00115980  cmp r0,#0x4
00115984  orrle r12,r12,r5, lsr r0
00115988  mov r12,r12, lsr #0x1c
0011598c  adr r1,0x115bd0
00115990  ldr r12,[r1,r12,lsl #0x2]
00115994  cmp lr,#0x1f
00115998  subhi lr,lr,#0x20
0011599c  rsb r6,lr,#0x20
001159a0  bhi 0x00115aa8
001159a4  umull r0,r1,r12,r5
001159a8  mov r1,r1, lsl r6
001159ac  orr r1,r1,r0, lsr lr
001159b0  mov r0,r0, lsl r6
001159b4  rsbs r0,r0,#0x0
001159b8  rsc r1,r1,#0x0
001159bc  umull r0,r1,r12,r1
001159c0  add r12,r12,r1
001159c4  umull r0,r1,r12,r5
001159c8  mov r1,r1, lsl r6
001159cc  orr r1,r1,r0, lsr lr
001159d0  mov r0,r0, lsl r6
001159d4  rsbs r0,r0,#0x0
001159d8  rsc r1,r1,#0x0
001159dc  cmp r3,#0x0
001159e0  umull r0,r1,r12,r1
001159e4  add r12,r12,r1
001159e8  beq 0x00115a0c
001159ec  umull r0,r1,r12,r5
001159f0  mov r1,r1, lsl r6
001159f4  orr r1,r1,r0, lsr lr
001159f8  mov r0,r0, lsl r6
001159fc  rsbs r0,r0,#0x0
00115a00  rsc r1,r1,#0x0
00115a04  umull r0,r1,r12,r1
00115a08  add r12,r12,r1
00115a0c  umull r1,r0,r12,r2
00115a10  mov r1,#0x0
00115a14  umlal r0,r1,r12,r3
00115a18  mov r0,r0, lsr lr
00115a1c  orr r0,r0,r1, lsl r6
00115a20  umull r6,r4,r0,r5
00115a24  mov r1,r1, lsr lr
00115a28  mla r4,r1,r5,r4
00115a2c  subs r2,r2,r6
00115a30  sbc r3,r3,r4
00115a34  cmp r3,#0x1
00115a38  cmpcc r2,r5
00115a3c  ldmiacc sp!,{r4,r5,r6,pc}
00115a40  umull r4,r6,r12,r2
00115a44  mov r4,#0x0
00115a48  umlal r6,r4,r12,r3
00115a4c  mov r3,#0x0
00115a50  rsb r12,lr,#0x20
00115a54  mov r6,r6, lsr lr
00115a58  orr r6,r6,r4, lsl r12
00115a5c  mov r4,r4, lsr lr
00115a60  umull lr,r12,r6,r5
00115a64  adds r0,r0,r6
00115a68  adc r1,r1,r4
00115a6c  sub r2,r2,lr
00115a70  cmp r2,r5
00115a74  ldmiacc sp!,{r4,r5,r6,pc}
00115a78  adds r0,r0,#0x1
00115a7c  adc r1,r1,#0x0
00115a80  sub r2,r2,r5
00115a84  subs r12,r2,r5
00115a88  cpycs r2,r12
00115a8c  adcs r0,r0,#0x0
00115a90  adc r1,r1,#0x0
00115a94  subs r12,r2,r5
00115a98  cpycs r2,r12
00115a9c  adcs r0,r0,#0x0
00115aa0  adc r1,r1,#0x0
00115aa4  ldmia sp!,{r4,r5,r6,pc}
00115aa8  umull r1,r0,r12,r5
00115aac  mov r1,#0x0
00115ab0  umlal r0,r1,r12,r4
00115ab4  mov r1,r1, lsl r6
00115ab8  orr r1,r1,r0, lsr lr
00115abc  mov r0,r0, lsl r6
00115ac0  rsbs r0,r0,#0x0
00115ac4  rsc r1,r1,#0x0
00115ac8  umull r0,r1,r12,r1
00115acc  add r12,r12,r1
00115ad0  umull r1,r0,r12,r5
00115ad4  mov r1,#0x0
00115ad8  umlal r0,r1,r12,r4
00115adc  mov r1,r1, lsl r6
00115ae0  orr r1,r1,r0, lsr lr
00115ae4  mov r0,r0, lsl r6
00115ae8  rsbs r0,r0,#0x0
00115aec  rsc r1,r1,#0x0
00115af0  umull r0,r1,r12,r1
00115af4  add r12,r12,r1
00115af8  sub r12,r12,#0x1
00115afc  umull r1,r0,r12,r2
00115b00  mov r1,#0x0
00115b04  umlal r0,r1,r12,r3
00115b08  mov r0,r1, lsr lr
00115b0c  umull r6,r1,r0,r5
00115b10  subs r2,r2,r6
00115b14  mla r1,r0,r4,r1
00115b18  sbc r3,r3,r1
00115b1c  cmp r3,r4
00115b20  cmpeq r2,r5
00115b24  movcc r1,#0x0
00115b28  ldmiacc sp!,{r4,r5,r6,pc}
00115b2c  umull r6,r1,r12,r2
00115b30  mov r6,#0x0
00115b34  umlal r1,r6,r12,r3
00115b38  mov r1,#0x0
00115b3c  mov r6,r6, lsr lr
00115b40  umull lr,r12,r6,r5
00115b44  add r0,r0,r6
00115b48  subs r2,r2,lr
00115b4c  mla lr,r6,r4,r12
00115b50  sbc r3,r3,lr
00115b54  cmp r3,r4
00115b58  cmpeq r2,r5
00115b5c  ldmiacc sp!,{r4,r5,r6,pc}
00115b60  add r0,r0,#0x1
00115b64  subs r2,r2,r5
00115b68  sbc r3,r3,r4
00115b6c  ldmia sp!,{r4,r5,r6,pc}
00115b70  stmdb sp!,{r2,r3}
00115b74  mov r1,#0x0
00115b78  mov r0,#0x0
00115b7c  bl 0x00125534
00115b80  ldmia sp!,{r2,r3,r4,r5,r6,pc}
00115b84  mov r1,#0x0
00115b88  mov r0,#0x0
00115b8c  ldmia sp!,{r4,r5,r6,pc}
00115b90  rsb lr,r6,#0x20
00115b94  mov r0,#0x0
00115b98  mov r1,#0x0
00115b9c  mov r4,r4, lsl r6
00115ba0  orr r4,r4,r5, lsr lr
00115ba4  mov r5,r5, lsl r6
00115ba8  subs lr,r2,r5
00115bac  sbcs r12,r3,r4
00115bb0  adc r0,r0,r0
00115bb4  cpycs r3,r12
00115bb8  cpycs r2,lr
00115bbc  subs r6,r6,#0x1
00115bc0  ldmiacc sp!,{r4,r5,r6,pc}
00115bc4  movs r4,r4, lsr #0x1
00115bc8  mov r5,r5, rrx
00115bcc  b 0x00115ba8
