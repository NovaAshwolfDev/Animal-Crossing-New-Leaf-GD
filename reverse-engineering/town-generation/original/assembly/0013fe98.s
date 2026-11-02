0013fe98  ldr r0,[r0,#0x0]
0013fe9c  cpy r0,r0
0013fea0  stmdb sp!,{r4,lr}
0013fea4  cpy r4,r0
0013fea8  bl 0x0013fefc
0013feac  cmp r0,#0x0
0013feb0  movlt r0,#0x0
0013feb4  blt 0x0013fef0
0013feb8  ldr r2,[r4,#0x14]
0013febc  cpy r1,r0
0013fec0  mov r0,#0x0
0013fec4  cmn r2,#0x1
0013fec8  beq 0x0013fef0
0013fecc  ldr r3,[r4,#0xc]
0013fed0  ldr r2,[r3,r2,lsl #0x4]
0013fed4  ldr r3,[r2,#0x0]
0013fed8  cmp r3,r1
0013fedc  ble 0x0013fef0
0013fee0  mov r0,#0x4
0013fee4  add r0,r0,r1, lsl #0x2
0013fee8  ldr r0,[r2,r0]
0013feec  add r0,r0,r2
0013fef0  ldmia sp!,{r4,pc}
