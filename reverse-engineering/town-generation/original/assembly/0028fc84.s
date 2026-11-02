0028fc84  stmdb sp!,{r4,r5,r6,r7,lr}
0028fc88  cpy r6,r0
0028fc8c  bic r1,r0,#0xff
0028fc90  ldrb r0,[r0,#0x10]
0028fc94  sub sp,sp,#0x54
0028fc98  orr r7,r1,r0
0028fc9c  bl 0x00285804
0028fca0  cpy r5,r0
0028fca4  cpy r1,r6
0028fca8  cpy r0,sp
0028fcac  bl 0x007dca10
0028fcb0  cpy r1,r6
0028fcb4  add r0,sp,#0x20
0028fcb8  bl 0x007dc9d8
0028fcbc  add r1,sp,#0x20
0028fcc0  cpy r0,sp
0028fcc4  bl 0x007dc980
0028fcc8  cmp r0,#0x0
0028fccc  beq 0x0028fe50
0028fcd0  cpy r0,sp
0028fcd4  add r0,r0,#0x8
0028fcd8  cmp r5,#0x0
0028fcdc  cpy r4,r0
0028fce0  beq 0x0028fe30
0028fce4  ldmia r4,{r1,r2}
0028fce8  cpy r0,r5
0028fcec  bl 0x007bfff8
0028fcf0  cmp r0,#0x0
0028fcf4  nop
0028fcf8  beq 0x0028fe30
0028fcfc  ldmia r4,{r1,r2}
0028fd00  and r3,r7,#0xff
0028fd04  add r0,sp,#0x30
0028fd08  bl 0x00285474
0028fd0c  ldr r0,[sp,#0x38]
0028fd10  and r4,r0,#0xff
0028fd14  cmp r4,#0xf8
0028fd18  bcs 0x0028fe30
0028fd1c  cpy r0,r4
0028fd20  bl 0x0063644c
0028fd24  cmp r0,#0x0
0028fd28  nop
0028fd2c  beq 0x0028fe30
0028fd30  cpy r0,r4
0028fd34  bl 0x00768c30
0028fd38  cmp r0,#0x0
0028fd3c  nop
0028fd40  bne 0x0028fe30
0028fd44  ldr r0,[r6,#0x20]
0028fd48  cmp r0,#0x0
0028fd4c  beq 0x0028fdfc
0028fd50  cpy r0,sp
0028fd54  add r0,r0,#0x8
0028fd58  cpy r1,r0
0028fd5c  add r2,r6,#0x24
0028fd60  add r0,sp,#0x18
0028fd64  bl 0x007dc900
0028fd68  ldr r0,[sp,#0x1c]
0028fd6c  ldr r1,[sp,#0x18]
0028fd70  ldr r2,[r6,#0x20]
0028fd74  add r0,r0,r0, lsl #0x2
0028fd78  add r1,r1,r1, lsl #0x2
0028fd7c  mov r0,r0, lsl #0x5
0028fd80  add r0,r0,r1, lsl #0x1
0028fd84  add r1,r0,r2
0028fd88  add r0,sp,#0x30
0028fd8c  bl 0x00692a4c
0028fd90  add r0,sp,#0x30
0028fd94  nop
0028fd98  ldrb r0,[r0,#0x8]
0028fd9c  cmp r0,#0x0
0028fda0  nop
0028fda4  beq 0x0028fe1c
0028fda8  cpy r0,sp
0028fdac  add r0,r0,#0x8
0028fdb0  ldr r4,[r0,#0x4]
0028fdb4  cpy r0,sp
0028fdb8  add r0,r0,#0x8
0028fdbc  ldr r1,[r0,#0x0]
0028fdc0  ldrb r3,[r6,#0x10]
0028fdc4  cpy r2,r4
0028fdc8  add r0,sp,#0x40
0028fdcc  bl 0x00285474
0028fdd0  add r3,sp,#0x40
0028fdd4  ldmia r3,{r0,r1,r2}
0028fdd8  and r2,r2,#0xff
0028fddc  cmp r2,#0xf8
0028fde0  strbcc r2,[r6,#0x12]
0028fde4  strdcc r0,r1,[r6,#0x14]
0028fde8  add r0,sp,#0x30
0028fdec  cpy r0,r0
0028fdf0  add r0,sp,#0x18
0028fdf4  nop
0028fdf8  cpy r0,r0
0028fdfc  add r0,sp,#0x20
0028fe00  cpy r0,r0
0028fe04  cpy r0,sp
0028fe08  nop
0028fe0c  cpy r0,r0
0028fe10  add sp,sp,#0x54
0028fe14  mov r0,#0x1
0028fe18  ldmia sp!,{r4,r5,r6,r7,pc}
0028fe1c  add r0,sp,#0x30
0028fe20  cpy r0,r0
0028fe24  add r0,sp,#0x18
0028fe28  nop
0028fe2c  cpy r0,r0
0028fe30  cpy r0,sp
0028fe34  bl 0x0059b024
0028fe38  add r1,sp,#0x20
0028fe3c  cpy r0,sp
0028fe40  bl 0x007dc980
0028fe44  cmp r0,#0x0
0028fe48  nop
0028fe4c  bne 0x0028fcd0
0028fe50  add r0,sp,#0x20
0028fe54  cpy r0,r0
0028fe58  cpy r0,sp
0028fe5c  nop
0028fe60  cpy r0,r0
0028fe64  add sp,sp,#0x54
0028fe68  mov r0,#0x0
0028fe6c  ldmia sp!,{r4,r5,r6,r7,pc}
