00746028  stmdb sp!,{r4,r5,r6,r7}
0074602c  add r5,sp,#0x10
00746030  mvn r6,#0x0
00746034  ldmia r5,{r4,r12}
00746038  add r5,r4,#0x1
0074603c  cmp r4,#0x0
00746040  mov r7,r5, asr #0x1f
00746044  add r5,r5,r7, lsr #0x1c
00746048  movge r7,r4, asr #0x4
0074604c  addlt r7,r6,r5, asr #0x4
00746050  str r7,[r0,#0x0]
00746054  add r7,r12,#0x1
00746058  cmp r12,#0x0
0074605c  mov r0,r7, asr #0x1f
00746060  movge r6,r12, asr #0x4
00746064  add r0,r7,r0, lsr #0x1c
00746068  addlt r6,r6,r0, asr #0x4
0074606c  cmp r4,#0x0
00746070  str r6,[r1,#0x0]
00746074  andge r1,r4,#0xf
00746078  bge 0x0074608c
0074607c  bic r5,r5,#0xf
00746080  add r1,r4,#0x1
00746084  sub r1,r1,r5
00746088  add r1,r1,#0xf
0074608c  cmp r12,#0x0
00746090  andge r0,r12,#0xf
00746094  str r1,[r2,#0x0]
00746098  bge 0x007460ac
0074609c  bic r1,r0,#0xf
007460a0  add r0,r12,#0x1
007460a4  sub r0,r0,r1
007460a8  add r0,r0,#0xf
007460ac  str r0,[r3,#0x0]
007460b0  ldmia sp!,{r4,r5,r6,r7}
007460b4  bx lr
