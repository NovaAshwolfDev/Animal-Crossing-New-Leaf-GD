005a66dc  cmp r1,#0x0
005a66e0  cmpge r2,#0x0
005a66e4  bxlt lr
005a66e8  stmdb sp!,{r4,r5,r6,lr}
005a66ec  cpy r5,r2
005a66f0  ldr r2,[r0,#0x0]
005a66f4  cpy r4,r0
005a66f8  add r0,r1,r5
005a66fc  cmp r2,r0
005a6700  blt 0x005a6730
005a6704  ble 0x005a6724
005a6708  ldr r12,[r4,#0x8]
005a670c  sub r2,r2,r0
005a6710  add r3,r12,r1, lsl #0x2
005a6714  add r1,r12,r0, lsl #0x2
005a6718  mov r2,r2, lsl #0x2
005a671c  cpy r0,r3
005a6720  bl 0x00115538
005a6724  ldr r0,[r4,#0x0]
005a6728  sub r0,r0,r5
005a672c  str r0,[r4,#0x0]
005a6730  ldmia sp!,{r4,r5,r6,pc}
