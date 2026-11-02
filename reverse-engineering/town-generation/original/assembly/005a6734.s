005a6734  stmdb sp!,{r4,r5,r6,lr}
005a6738  cpy r5,r0
005a673c  ldr r4,[r0,#0x0]
005a6740  cpy r6,r1
005a6744  cmp r4,#0x1
005a6748  ble 0x005a677c
005a674c  cpy r0,r6
005a6750  bl 0x005be58c
005a6754  umull r1,r0,r0,r4
005a6758  ldr r1,[r5,#0x8]
005a675c  sub r4,r4,#0x1
005a6760  cmp r4,#0x1
005a6764  ldr r3,[r1,r0,lsl #0x2]
005a6768  ldr r2,[r1,r4,lsl #0x2]
005a676c  str r3,[r1,r4,lsl #0x2]
005a6770  ldr r1,[r5,#0x8]
005a6774  str r2,[r1,r0,lsl #0x2]
005a6778  bgt 0x005a674c
005a677c  ldmia sp!,{r4,r5,r6,pc}
