007ec67c  stmdb sp!,{r4,r5,r6,r7,r8,lr}
007ec680  cpy r5,r1
007ec684  cpy r7,r0
007ec688  ldr r0,[r0,#0x4]
007ec68c  cpy r6,r2
007ec690  cmp r0,#0x8
007ec694  mov r8,r0, lsr #0x3
007ec698  movcc r4,#0x0
007ec69c  bcc 0x007ec6b0
007ec6a0  mov r0,r5, lsr #0x3
007ec6a4  cpy r1,r8
007ec6a8  bl 0x00129b80
007ec6ac  cpy r4,r1
007ec6b0  ldr r0,[r7,#0x8]
007ec6b4  cmp r0,#0x8
007ec6b8  movcc r1,#0x0
007ec6bc  bcc 0x007ec6cc
007ec6c0  mov r1,r0, lsr #0x3
007ec6c4  mov r0,r6, lsr #0x3
007ec6c8  bl 0x00129b80
007ec6cc  rsb r0,r1,#0x0
007ec6d0  ldr r3,[0x7ec6f4]
007ec6d4  rsb r2,r4,#0x0
007ec6d8  add r0,r6,r0, lsl #0x3
007ec6dc  add r2,r5,r2, lsl #0x3
007ec6e0  add r0,r3,r0, lsl #0x5
007ec6e4  ldr r2,[r0,r2,lsl #0x2]
007ec6e8  mla r0,r1,r8,r4
007ec6ec  add r0,r2,r0, lsl #0x6
007ec6f0  ldmia sp!,{r4,r5,r6,r7,r8,pc}
