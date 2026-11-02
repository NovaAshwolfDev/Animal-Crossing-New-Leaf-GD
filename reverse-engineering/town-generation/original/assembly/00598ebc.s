00598ebc  stmdb sp!,{r4,r5,r6,lr}
00598ec0  mov r0,#0x1
00598ec4  bl 0x0063e294
00598ec8  bl 0x00636e3c
00598ecc  add r6,r0,#0x20
00598ed0  mov r4,#0x0
00598ed4  and r1,r4,#0xff
00598ed8  cpy r0,r6
00598edc  bl 0x002d57dc
00598ee0  movs r5,r0
00598ee4  nop
00598ee8  beq 0x00598f08
00598eec  add r0,r5,#0x5500
00598ef0  add r0,r0,#0xa6
00598ef4  bl 0x007aae1c
00598ef8  cmp r0,#0x0
00598efc  addne r0,r5,#0x5400
00598f00  addne r0,r0,#0x98
00598f04  blne 0x005e2a84
00598f08  add r4,r4,#0x1
00598f0c  cmp r4,#0x4
00598f10  bcc 0x00598ed4
00598f14  bl 0x005f7a50
00598f18  ldmia sp!,{r4,r5,r6,lr}
00598f1c  nop
00598f20  cpy r0,r0
