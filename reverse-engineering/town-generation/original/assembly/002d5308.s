002d5308  stmdb sp!,{r4,r5,r6,r7,r8,lr}
002d530c  cpy r6,r0
002d5310  mov r4,#0x0
002d5314  mvn r7,#0x0
002d5318  rsb r0,r4,r4, lsl #0x4
002d531c  add r0,r0,r4, lsl #0x8
002d5320  mov r1,#0x16
002d5324  add r5,r6,r0, lsl #0x3
002d5328  cpy r0,r5
002d532c  bl 0x001b7e8c
002d5330  add r4,r4,#0x1
002d5334  str r7,[r5,#0x870]
002d5338  cmp r4,#0x8
002d533c  str r7,[r5,#0x874]
002d5340  bcc 0x002d5318
002d5344  ldmia sp!,{r4,r5,r6,r7,r8,pc}
