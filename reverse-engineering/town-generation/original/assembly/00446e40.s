00446e40  stmdb sp!,{r4,lr}
00446e44  bl 0x001110ec
00446e48  movs r1,r0, lsr #0x1f
00446e4c  bne 0x00446e70
00446e50  ldr r0,[0x446e74]
00446e54  bl 0x00301bac
00446e58  cpy r2,r0
00446e5c  ldr r1,[0x446e74]
00446e60  ldr r0,[0x446e78]
00446e64  ldmia sp!,{r4,lr}
00446e68  mov r3,#0x0
00446e6c  b 0x00111154
00446e70  ldmia sp!,{r4,pc}
