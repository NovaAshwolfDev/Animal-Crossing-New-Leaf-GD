007ff8b8  stmdb sp!,{r4,lr}
007ff8bc  ldrh r1,[r0,#0x0]
007ff8c0  and r1,r1,#0x6000
007ff8c4  cmp r1,#0x4000
007ff8c8  beq 0x007ff8e8
007ff8cc  bl 0x005a2164
007ff8d0  cmp r0,#0x0
007ff8d4  beq 0x007ff8f0
007ff8d8  ldrb r0,[r0,#0x1]
007ff8dc  mov r0,r0, lsl #0x1b
007ff8e0  movs r0,r0, lsr #0x1f
007ff8e4  beq 0x007ff8f0
007ff8e8  mov r0,#0x1
007ff8ec  ldmia sp!,{r4,pc}
007ff8f0  mov r0,#0x0
007ff8f4  ldmia sp!,{r4,pc}
