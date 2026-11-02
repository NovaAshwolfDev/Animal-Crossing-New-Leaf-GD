001e9800  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,lr}
001e9804  cpy r6,r0
001e9808  ldr r5,[0x1e98a4]
001e980c  ldr r0,[r5,#0xd8]
001e9810  cmp r0,#0x0
001e9814  beq 0x001e989c
001e9818  ldr r3,[r5,#0xd8]
001e981c  mov r0,#0x0
001e9820  ldr r12,[r5,#0xd8]
001e9824  add r4,r3,r2
001e9828  cmp r2,#0x0
001e982c  ldrb r4,[r4,#0x2]
001e9830  ldrh r12,[r12,#0x0]
001e9834  mov r7,r4, lsl #0x2
001e9838  add r8,r12,#0x2
001e983c  beq 0x001e9874
001e9840  add r3,r3,#0x1
001e9844  tst r2,#0x1
001e9848  ldrbne r0,[r3,#0x1]!
001e984c  movs r2,r2, lsr #0x1
001e9850  mov r12,#0x0
001e9854  beq 0x001e9870
001e9858  ldrb r9,[r3,#0x1]
001e985c  ldrb r10,[r3,#0x2]!
001e9860  subs r2,r2,#0x1
001e9864  add r0,r0,r9
001e9868  add r12,r12,r10
001e986c  bne 0x001e9858
001e9870  add r0,r0,r12
001e9874  cmp r1,r4, lsl #0x2
001e9878  bcc 0x001e989c
001e987c  ldr r1,[r5,#0xd8]
001e9880  add r0,r8,r0, lsl #0x2
001e9884  cpy r2,r7
001e9888  add r1,r1,r0
001e988c  cpy r0,r6
001e9890  bl 0x002febf4
001e9894  cpy r0,r4
001e9898  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,pc}
001e989c  mov r0,#0x0
001e98a0  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,pc}
