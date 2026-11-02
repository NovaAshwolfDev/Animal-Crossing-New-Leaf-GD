007fecf4  stmdb sp!,{r4,lr}
007fecf8  bl 0x005a2164
007fecfc  cmp r0,#0x0
007fed00  beq 0x007fed10
007fed04  ldrb r0,[r0,#0x1]
007fed08  mov r0,r0, lsl #0x1b
007fed0c  mov r0,r0, lsr #0x1f
007fed10  ldmia sp!,{r4,pc}
