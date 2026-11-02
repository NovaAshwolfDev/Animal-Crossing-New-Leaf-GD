007ead28  stmdb sp!,{r4,r5,r6,lr}
007ead2c  movs r5,r1
007ead30  cpy r4,r0
007ead34  moveq r2,#0x0
007ead38  beq 0x007ead80
007ead3c  bl 0x0063653c
007ead80  mov r0,#0x0
007ead84  add r1,r4,r2, lsl #0x7
007ead88  add r3,r1,r0, lsl #0x6
007ead8c  ldrb r3,[r3,#0x8]
007ead90  cmp r3,#0x21
007ead94  bcc 0x007eada0
007ead98  mov r0,#0x1
007ead9c  ldmia sp!,{r4,r5,r6,pc}
007eada0  add r0,r0,#0x1
007eada4  cmp r0,#0x2
007eada8  blt 0x007ead88
007eadac  add r2,r2,#0x1
007eadb0  cmp r2,#0x4
007eadb4  blt 0x007ead80
007eadb8  mov r0,#0x0
007eadbc  ldmia sp!,{r4,r5,r6,pc}
