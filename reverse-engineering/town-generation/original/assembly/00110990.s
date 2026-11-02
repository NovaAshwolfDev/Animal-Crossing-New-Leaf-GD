00110990  ldr r12,[0x110afc]
00110994  sub r3,r3,#0x3c
00110998  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,r11}
0011099c  smull r4,r12,r12,r3
001109a0  mov r4,r12, asr #0xf
001109a4  sub r4,r4,r12, asr #0x1f
001109a8  ldr r12,[0x110b00]
001109ac  mla r12,r12,r4,r3
001109b0  cmp r12,#0x0
001109b4  bge 0x001109c4
001109b8  ldr r3,[0x110b00]
001109bc  sub r4,r4,#0x1
001109c0  sub r12,r12,r3
001109c4  ldr r6,[0x110b04]
001109c8  mov r11,#0x0
001109cc  cpy r5,r12
001109d0  cpy r7,r11
001109d4  smlal r7,r5,r6,r12
001109d8  cpy r8,r11
001109dc  cpy r3,r11
001109e0  cpy r9,r3
001109e4  mov r7,r5, asr #0xf
001109e8  sub r5,r7,r5, asr #0x1f
001109ec  cpy r7,r12
001109f0  smlal r8,r7,r6,r12
001109f4  ldr r8,[0x110b14]
001109f8  cpy r10,r3
001109fc  mov r6,r7, asr #0xf
00110a00  sub r6,r6,r7, asr #0x1f
00110a04  ldr r7,[0x110b08]
00110a08  mul r6,r6,r7
00110a0c  add r12,r12,r6, lsl #0x2
00110a10  ldr r6,[0x110b0c]
00110a14  smull r7,r6,r6,r12
00110a18  mov r7,r6, asr #0x7
00110a1c  sub r6,r7,r6, asr #0x1f
00110a20  ldr r7,[0x110b10]
00110a24  mla r12,r6,r7,r12
00110a28  cpy r7,r12
00110a2c  smlal r9,r7,r8,r12
00110a30  mov r9,r7, asr #0x8
00110a34  sub r7,r9,r7, asr #0x1f
00110a38  cpy r9,r12
00110a3c  smlal r10,r9,r8,r12
00110a40  cmp r7,#0x4
00110a44  cmpne r5,#0x4
00110a48  mov r8,r9, asr #0x8
00110a4c  sub r8,r8,r9, asr #0x1f
00110a50  mvn r9,#0x16c
00110a54  mla r8,r8,r9,r12
00110a58  ldr r9,[0x110b18]
00110a5c  add r12,r8,r8, lsl #0x2
00110a60  add r12,r12,#0x2
00110a64  smlal r3,r12,r9,r12
00110a68  mov r3,r12, asr #0x7
00110a6c  sub r3,r3,r12, asr #0x1f
00110a70  mov r12,#0x190
00110a74  mul r12,r4,r12
00110a78  add r4,r5,r5, lsl #0x3
00110a7c  add r4,r4,r5, lsl #0x4
00110a80  add r12,r12,r4, lsl #0x2
00110a84  add r12,r12,r6, lsl #0x2
00110a88  add r4,r3,r3, lsl #0x4
00110a8c  ldr r6,[0x110b1c]
00110a90  add r4,r4,r4, lsl #0x3
00110a94  add r4,r4,#0x2
00110a98  add r12,r12,r7
00110a9c  smull r6,r4,r6,r4
00110aa0  add r12,r12,#0x7d0
00110aa4  mov r6,r4, asr #0x1
00110aa8  sub r4,r6,r4, asr #0x1f
00110aac  sub r4,r8,r4
00110ab0  add r4,r4,#0x1
00110ab4  beq 0x00110ac8
00110ab8  cmp r3,#0x9
00110abc  addle r3,r3,#0x3
00110ac0  ble 0x00110adc
00110ac4  b 0x00110ad4
00110ac8  mov r3,#0xb
00110acc  mov r4,#0x1d
00110ad0  sub r12,r12,#0x1
00110ad4  sub r3,r3,#0x9
00110ad8  add r12,r12,#0x1
00110adc  cmp r0,#0x0
00110ae0  strne r12,[r0,#0x0]
00110ae4  cmp r1,#0x0
00110ae8  strne r3,[r1,#0x0]
00110aec  cmp r2,#0x0
00110af0  strne r4,[r2,#0x0]
00110af4  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,r11}
00110af8  bx lr
