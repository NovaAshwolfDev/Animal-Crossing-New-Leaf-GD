00798240  stmdb sp!,{r3,r4,r5,r6,r7,r8,r9,lr}
00798244  cpy r6,r1
00798248  cpy r8,r0
0079824c  mov r0,#0x5
00798250  bl 0x005a19a0
00798254  ldmia r0,{r0,r5}
00798258  uxth r1,r0
0079825c  cpy r7,r1
00798260  cpy r0,sp
00798264  bl 0x00756d40
00798268  cpy r0,sp
0079826c  bl 0x005a20f8
00798270  cpy r4,r0
00798274  bl 0x00636e3c
00798278  ldr r1,[0x798300]
0079827c  ldrb r0,[r0,r1]
00798280  movs r0,r0, lsr #0x4
00798284  moveq r3,#0x1
00798288  movne r3,#0x0
0079828c  cmp r5,#0x0
00798290  mov r0,#0x0
00798294  movhi r12,#0x1
00798298  bls 0x007982f4
0079829c  ldrb r1,[r4,#0x1d]
007982a0  mov r1,r1, lsr #0x4
007982a4  cmp r1,#0xe
007982a8  movcs r1,#0x0
007982ac  cmp r1,r6
007982b0  bne 0x007982e4
007982b4  cmp r3,#0x0
007982b8  bne 0x007982c8
007982bc  ldrb r1,[r4,#0x1f]
007982c0  movs r1,r1, lsl #0x19
007982c4  bmi 0x007982e4
007982c8  add r1,r7,r0
007982cc  sub r2,r1,#0x2000
007982d0  mov r1,r2, lsr #0x5
007982d4  and r2,r2,#0x1f
007982d8  ldr r9,[r8,r1,lsl #0x2]
007982dc  orr r2,r9,r12, lsl r2
007982e0  str r2,[r8,r1,lsl #0x2]
007982e4  add r0,r0,#0x1
007982e8  cmp r5,r0
007982ec  add r4,r4,#0x22
007982f0  bhi 0x0079829c
007982f4  cpy r0,sp
007982f8  cpy r0,r0
007982fc  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,pc}
