001cd81c  stmdb sp!,{r4,r5,r6,lr}
001cd820  cpy r4,r0
001cd824  cpy r5,r1
001cd828  cpy r0,r1
001cd82c  bl 0x00687d50
001cd830  cmp r0,#0x0
001cd834  ldrne r0,[r4,#0xd8]
001cd838  cmpne r0,#0x0
001cd83c  ldrne r0,[r4,#0xd8]
001cd840  moveq r0,#0x0
001cd844  addne r1,r5,r5, lsl #0x2
001cd848  addne r0,r0,r1, lsl #0x9
001cd84c  ldmia sp!,{r4,r5,r6,pc}
