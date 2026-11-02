007af40c  stmdb sp!,{r4,r5,r6,lr}
007af410  cpy r5,r0
007af414  mov r4,#0x0
007af418  add r0,r4,r4, lsl #0x2
007af41c  add r0,r5,r0, lsl #0x7
007af420  bl 0x007ecc40
007af424  cmp r0,#0x0
007af428  nop
007af42c  beq 0x007af438
007af430  cpy r0,r4
007af434  ldmia sp!,{r4,r5,r6,pc}
007af438  add r4,r4,#0x1
007af43c  cmp r4,#0x50
007af440  bcc 0x007af418
007af444  mvn r0,#0x0
007af448  ldmia sp!,{r4,r5,r6,pc}
