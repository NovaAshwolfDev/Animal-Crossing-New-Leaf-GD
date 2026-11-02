007dff60  stmdb sp!,{r4,r5,lr}
007dff64  sub sp,sp,#0x2c
007dff68  add r2,sp,#0x20
007dff6c  cpy r1,r0
007dff70  cpy r0,r2
007dff74  bl 0x0063ac18
007dff78  add r0,sp,#0x20
007dff7c  bl 0x0063ac4c
007dff80  add r0,sp,#0x10
007dff84  bl 0x005cca58
007dff88  ldr r4,[sp,#0x14]
007dff8c  ldr r5,[sp,#0x10]
007dff90  add r1,sp,#0x20
007dff94  add r0,sp,#0x4
007dff98  bl 0x007edb08
007dff9c  ldr r1,[sp,#0x4]
007dffa0  ldr r0,[sp,#0x8]
007dffa4  cmp r5,r1
007dffa8  bne 0x007dffd8
007dffac  sxtb r1,r4
007dffb0  sxtb r2,r0
007dffb4  cmp r1,r2
007dffb8  bne 0x007dffd8
007dffbc  mov r1,r4, lsl #0x10
007dffc0  mov r2,r0, lsl #0x10
007dffc4  mov r0,r1, asr #0x18
007dffc8  mov r1,r2, asr #0x18
007dffcc  cmp r0,r1
007dffd0  moveq r0,#0x1
007dffd4  beq 0x007dffdc
007dffd8  mov r0,#0x0
007dffdc  add sp,sp,#0x2c
007dffe0  eor r0,r0,#0x1
007dffe4  ldmia sp!,{r4,r5,pc}
