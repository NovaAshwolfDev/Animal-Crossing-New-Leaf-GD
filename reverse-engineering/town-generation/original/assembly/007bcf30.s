007bcf30  stmdb sp!,{r4,r5,r6,lr}
007bcf34  cpy r5,r0
007bcf38  mov r4,#0x0
007bcf3c  add r0,r4,r4, lsl #0x2
007bcf40  add r0,r5,r0, lsl #0x7
007bcf44  bl 0x007ecc40
007bcf48  cmp r0,#0x0
007bcf4c  nop
007bcf50  beq 0x007bcf5c
007bcf54  cpy r0,r4
007bcf58  ldmia sp!,{r4,r5,r6,pc}
007bcf5c  add r4,r4,#0x1
007bcf60  cmp r4,#0xa
007bcf64  bcc 0x007bcf3c
007bcf68  mvn r0,#0x0
007bcf6c  ldmia sp!,{r4,r5,r6,pc}
