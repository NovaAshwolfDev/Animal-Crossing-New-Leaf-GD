002d5348  stmdb sp!,{r4,r5,r6,r7,r8,lr}
002d534c  cpy r6,r0
002d5350  mov r4,#0x0
002d5354  mvn r7,#0x0
002d5358  rsb r0,r4,r4, lsl #0x4
002d535c  add r0,r0,r4, lsl #0x8
002d5360  add r5,r6,r0, lsl #0x3
002d5364  cpy r0,r5
002d5368  bl 0x001b8448
002d536c  add r4,r4,#0x1
002d5370  str r7,[r5,#0x870]
002d5374  cmp r4,#0x8
002d5378  str r7,[r5,#0x874]
002d537c  bcc 0x002d5358
002d5380  ldmia sp!,{r4,r5,r6,r7,r8,pc}
