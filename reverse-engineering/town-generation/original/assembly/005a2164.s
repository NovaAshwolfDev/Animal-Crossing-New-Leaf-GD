005a2164  stmdb sp!,{r4,lr}
005a2168  bl 0x007fedc4
005a216c  cmp r0,#0x0
005a2170  blt 0x005a21c8
005a2174  ldr r1,[0x5a21d0]
005a2178  ldr r1,[r1,#0x4]
005a217c  cmp r1,#0x0
005a2180  ldrne r2,[0x5a21d4]
005a2184  cmpne r2,r0
005a2188  addhi r0,r0,r0, lsl #0x4
005a218c  movls r0,#0x0
005a2190  addhi r0,r1,r0, lsl #0x1
005a2194  cmp r0,#0x0
005a2198  beq 0x005a21c8
005a219c  ldr r1,[0x5a21d8]
005a21a0  ldrb r0,[r0,#0xa]
005a21a4  ldr r1,[r1,#0x4]
005a21a8  cmp r0,#0x93
005a21ac  movcs r0,#0x0
005a21b0  cmp r1,#0x0
005a21b4  beq 0x005a21c8
005a21b8  cmp r0,#0x93
005a21bc  addcc r0,r0,r0, lsl #0x1
005a21c0  addcc r0,r0,r1
005a21c4  bcc 0x005a21cc
005a21c8  mov r0,#0x0
005a21cc  ldmia sp!,{r4,pc}
