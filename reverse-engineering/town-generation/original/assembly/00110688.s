00110688  stmdb sp!,{r4,r5,r6,lr}
0011068c  cpy r5,r0
00110690  ldr r0,[r0,#0x0]
00110694  cmp r0,#0x0
00110698  ldreq r4,[0x1106c4]
0011069c  beq 0x001106bc
001106a0  swi 0x23
001106a4  cpy r4,r0
001106a8  movs r0,r0, lsr #0x1f
001106ac  blne 0x0011afc4
001106b0  ldr r0,[0x1106c8]
001106b4  ldr r0,[r0,#0x0]
001106b8  str r0,[r5,#0x0]
001106bc  cpy r0,r4
001106c0  ldmia sp!,{r4,r5,r6,pc}
