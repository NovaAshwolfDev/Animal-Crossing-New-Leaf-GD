007fe150  stmdb sp!,{r4,lr}
007fe154  bl 0x005a20f8
007fe158  cmp r0,#0x0
007fe15c  moveq r0,#0x3
007fe160  beq 0x007fe17c
007fe164  ldrb r0,[r0,#0x1e]
007fe168  mov r1,#0x3
007fe16c  mov r0,r0, lsl #0x1a
007fe170  cmp r1,r0, lsr #0x1e
007fe174  movhi r0,r0, lsr #0x1e
007fe178  movls r0,#0x0
007fe17c  ldmia sp!,{r4,pc}
