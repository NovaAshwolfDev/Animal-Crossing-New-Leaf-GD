005cca58  stmdb sp!,{r4,r5,lr}
005cca5c  cpy r4,r0
005cca60  ldr r0,[0x5ccb60]
005cca64  sub sp,sp,#0xc
005cca68  ldrb r0,[r0,#0x2]
005cca6c  tst r0,#0x8
005cca70  beq 0x005cca98
005cca74  ldr r2,[0x5ccb64]
005cca78  ldmia r2,{r0,r1,r2}
005cca7c  stmia sp,{r0,r1,r2}
005cca80  cpy r0,sp
005cca84  bl 0x005cd238
005cca88  ldmia sp,{r0,r1,r2}
005cca8c  stmia r4,{r0,r1,r2}
005cca90  add sp,sp,#0xc
005cca94  ldmia sp!,{r4,r5,pc}
005cca98  ldr r0,[0x5ccb68]
005cca9c  ldrb r0,[r0,#0x0]
005ccaa0  cmp r0,#0x0
005ccaa4  beq 0x005ccb14
005ccaa8  bl 0x0063653c
005ccb14  ldr r0,[0x5ccb74]
005ccb18  bl 0x007edfa8
005ccb1c  cmp r0,#0x0
005ccb20  nop
005ccb24  beq 0x005ccb3c
005ccb28  add sp,sp,#0xc
005ccb2c  cpy r0,r4
005ccb30  ldmia sp!,{r4,r5,lr}
005ccb34  ldr r1,[0x5ccb74]
005ccb38  b 0x007edb08
005ccb3c  ldr r1,[0x5ccb64]
005ccb40  ldr r0,[0x5ccb74]
005ccb44  bl 0x0063ac18
005ccb48  ldr r0,[0x5ccb74]
005ccb4c  nop
005ccb50  bl 0x0063ac4c
005ccb54  nop
005ccb58  nop
005ccb5c  b 0x005ccb28
