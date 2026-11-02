0028eb78  stmdb sp!,{r4,r5,lr}
0028eb7c  cpy r5,r0
0028eb80  ldrb r0,[r0,#0x11]
0028eb84  sub sp,sp,#0x3c
0028eb88  bl 0x0074702c
0028eb8c  cpy r4,r0
0028eb90  cpy r1,r5
0028eb94  add r0,sp,#0x8
0028eb98  bl 0x007dca10
0028eb9c  cpy r1,r5
0028eba0  add r0,sp,#0x20
0028eba4  bl 0x007dc9d8
0028eba8  add r1,sp,#0x20
0028ebac  add r0,sp,#0x8
0028ebb0  bl 0x007dc980
0028ebb4  cmp r0,#0x0
0028ebb8  beq 0x0028ecb4
0028ebbc  add r0,sp,#0x8
0028ebc0  add r0,r0,#0x8
0028ebc4  cmp r4,#0x0
0028ebc8  nop
0028ebcc  beq 0x0028ec94
0028ebd0  cpy r1,r0
0028ebd4  add r0,sp,#0x18
0028ebd8  bl 0x0059ace8
0028ebdc  ldr r0,[sp,#0x1c]
0028ebe0  cmp r0,#0x0
0028ebe4  add r0,sp,#0x18
0028ebe8  bgt 0x0028ec90
0028ebec  cpy r0,r0
0028ebf0  ldr r0,[r5,#0x20]
0028ebf4  cmp r0,#0x0
0028ebf8  beq 0x0028ec64
0028ebfc  add r0,sp,#0x8
0028ec00  add r0,r0,#0x8
0028ec04  cpy r1,r0
0028ec08  add r2,r5,#0x24
0028ec0c  cpy r0,sp
0028ec10  bl 0x007dc900
0028ec14  ldr r0,[sp,#0x4]
0028ec18  ldr r1,[sp,#0x0]
0028ec1c  ldr r2,[r5,#0x20]
0028ec20  add r0,r0,r0, lsl #0x2
0028ec24  add r1,r1,r1, lsl #0x2
0028ec28  mov r0,r0, lsl #0x5
0028ec2c  add r0,r0,r1, lsl #0x1
0028ec30  add r1,r0,r2
0028ec34  add r0,sp,#0x30
0028ec38  bl 0x00692a4c
0028ec3c  add r0,sp,#0x30
0028ec40  nop
0028ec44  ldrb r0,[r0,#0x8]
0028ec48  cmp r0,#0x0
0028ec4c  add r0,sp,#0x30
0028ec50  beq 0x0028ec84
0028ec54  cpy r0,r0
0028ec58  cpy r0,sp
0028ec5c  nop
0028ec60  cpy r0,r0
0028ec64  add r0,sp,#0x20
0028ec68  cpy r0,r0
0028ec6c  add r0,sp,#0x8
0028ec70  nop
0028ec74  cpy r0,r0
0028ec78  add sp,sp,#0x3c
0028ec7c  mov r0,#0x1
0028ec80  ldmia sp!,{r4,r5,pc}
0028ec84  nop
0028ec88  cpy r0,r0
0028ec8c  cpy r0,sp
0028ec90  cpy r0,r0
0028ec94  add r0,sp,#0x8
0028ec98  bl 0x0059b024
0028ec9c  add r1,sp,#0x20
0028eca0  add r0,sp,#0x8
0028eca4  bl 0x007dc980
0028eca8  cmp r0,#0x0
0028ecac  nop
0028ecb0  bne 0x0028ebbc
0028ecb4  add r0,sp,#0x20
0028ecb8  cpy r0,r0
0028ecbc  add r0,sp,#0x8
0028ecc0  nop
0028ecc4  cpy r0,r0
0028ecc8  add sp,sp,#0x3c
0028eccc  mov r0,#0x0
0028ecd0  ldmia sp!,{r4,r5,pc}
