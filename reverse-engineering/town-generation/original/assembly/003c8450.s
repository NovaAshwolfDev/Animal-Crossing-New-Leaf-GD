003c8450  stmdb sp!,{r4,r5,r6,lr}
003c8454  cpy r5,r0
003c8458  mov r4,#0x0
003c845c  ldr r0,[0x3c8480]
003c8460  cpy r1,r4
003c8464  mul r0,r4,r0
003c8468  add r0,r5,r0, lsl #0x3
003c846c  bl 0x001ea91c
003c8470  add r4,r4,#0x1
003c8474  cmp r4,#0x4
003c8478  bcc 0x003c845c
003c847c  ldmia sp!,{r4,r5,r6,pc}
