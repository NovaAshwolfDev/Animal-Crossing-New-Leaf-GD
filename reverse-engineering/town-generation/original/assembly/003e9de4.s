003e9de4  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,r11,lr}
003e9de8  sub sp,sp,#0x294
003e9dec  mov r4,#0x0
003e9df0  mov r10,#0x7
003e9df4  cpy r8,r4
003e9df8  add r9,sp,#0xc
003e9dfc  mov r11,#0x8
003e9e00  and r0,r4,#0xff
003e9e04  bl 0x0062d120
003e9e08  movs r5,r0
003e9e0c  nop
003e9e10  beq 0x003e9f24
003e9e14  ldr r0,[0x3e9f38]
003e9e18  ldrb r0,[r0,r5]
003e9e1c  movs r0,r0, lsl #0x1d
003e9e20  bmi 0x003e9f24
003e9e24  ldr r0,[0x3e9f3c]
003e9e28  ldrb r0,[r0,r5]
003e9e2c  movs r0,r0, lsl #0x1e
003e9e30  bpl 0x003e9f24
003e9e34  and r6,r4,#0xff
003e9e38  bl 0x0063653c
003e9f24  add r4,r4,#0x1
003e9f28  cmp r4,#0x4
003e9f2c  blt 0x003e9e00
003e9f30  add sp,sp,#0x294
003e9f34  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
