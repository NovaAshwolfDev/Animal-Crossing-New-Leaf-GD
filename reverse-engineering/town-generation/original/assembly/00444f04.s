00444f04  stmdb sp!,{r4,r5,r6,lr}
00444f08  mov r4,#0x0
00444f0c  ldr r5,[0x444f64]
00444f10  ldrb r0,[r5,#0x0]
00444f14  cmp r0,#0x0
00444f18  beq 0x00444f5c
00444f1c  ldrb r0,[r5,#0x1]
00444f20  mov r6,#0x0
00444f24  cmp r0,#0x0
00444f28  beq 0x00444f40
00444f2c  bl 0x0044bac8
00444f30  movs r1,r0, lsr #0x1f
00444f34  strbeq r6,[r5,#0x2]
00444f38  strbeq r6,[r5,#0x1]
00444f3c  bne 0x00444f60
00444f40  nop
00444f44  bl 0x00446de0
00444f48  movs r1,r0, lsr #0x1f
00444f4c  cpy r4,r0
00444f50  bne 0x00444f60
00444f54  bl 0x00446ba0
00444f58  strb r6,[r5,#0x0]
00444f5c  cpy r0,r4
00444f60  ldmia sp!,{r4,r5,r6,pc}
