00116c18  cmp r1,#0x2
00116c1c  sub r12,r2,#0x1
00116c20  ldr r2,[0x116d04]
00116c24  sub r0,r0,#0x7d0
00116c28  addle r3,r1,#0x9
00116c2c  subgt r3,r1,#0x3
00116c30  suble r0,r0,#0x1
00116c34  stmdb sp!,{r4,r5,r6,r7}
00116c38  cmp r0,#0x0
00116c3c  mov r1,#0x1
00116c40  bge 0x00116c88
00116c44  smull r5,r1,r2,r0
00116c48  mvn r4,#0x18
00116c4c  mov r5,r1, asr #0x7
00116c50  sub r5,r5,r1, asr #0x1f
00116c54  mul r4,r5,r4
00116c58  adds r4,r0,r4, lsl #0x4
00116c5c  beq 0x00116cfc
00116c60  mov r6,r1, asr #0x5
00116c64  mvn r5,#0x18
00116c68  sub r1,r6,r1, asr #0x1f
00116c6c  cpy r4,r0
00116c70  mul r1,r1,r5
00116c74  adds r1,r0,r1, lsl #0x2
00116c78  beq 0x00116c88
00116c7c  tst r4,#0x3
00116c80  movne r1,#0x0
00116c84  beq 0x00116cfc
00116c88  smull r4,r2,r2,r0
00116c8c  add r3,r3,r3, lsl #0x4
00116c90  ldr r4,[0x116d0c]
00116c94  add r3,r3,r3, lsl #0x3
00116c98  add r7,r3,#0x2
00116c9c  mov r3,r2, asr #0x5
00116ca0  ldr r6,[0x116d08]
00116ca4  sub r3,r3,r2, asr #0x1f
00116ca8  smull r2,r4,r4,r7
00116cac  mvn r5,#0x18
00116cb0  mul r2,r3,r6
00116cb4  mul r3,r3,r5
00116cb8  ldr r5,[0x116d10]
00116cbc  add r0,r0,r3, lsl #0x2
00116cc0  mov r3,r2, asr #0x1f
00116cc4  mul r0,r0,r5
00116cc8  add r5,r2,r3, lsr #0x1e
00116ccc  mov r2,r4, asr #0x1
00116cd0  mov r5,r5, asr #0x2
00116cd4  mov r3,r0, asr #0x1f
00116cd8  sub r2,r2,r4, asr #0x1f
00116cdc  add r0,r0,r3, lsr #0x1e
00116ce0  add r0,r5,r0, asr #0x2
00116ce4  add r0,r0,r2
00116ce8  add r0,r0,r12
00116cec  add r0,r0,r1
00116cf0  ldmia sp!,{r4,r5,r6,r7}
00116cf4  add r0,r0,#0x3b
00116cf8  bx lr
00116cfc  mov r1,#0x1
00116d00  b 0x00116c88
