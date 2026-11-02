0028faa4  stmdb sp!,{r4,r5,r6,r7,lr}
0028faa8  cpy r6,r0
0028faac  bic r1,r0,#0xff
0028fab0  ldrb r0,[r0,#0x10]
0028fab4  sub sp,sp,#0x54
0028fab8  orr r7,r1,r0
0028fabc  bl 0x00285804
0028fac0  cpy r5,r0
0028fac4  cpy r1,r6
0028fac8  cpy r0,sp
0028facc  bl 0x007dca10
0028fad0  cpy r1,r6
0028fad4  add r0,sp,#0x20
0028fad8  bl 0x007dc9d8
0028fadc  add r1,sp,#0x20
0028fae0  cpy r0,sp
0028fae4  bl 0x007dc980
0028fae8  cmp r0,#0x0
0028faec  beq 0x0028fc64
0028faf0  cpy r0,sp
0028faf4  add r0,r0,#0x8
0028faf8  cmp r5,#0x0
0028fafc  cpy r4,r0
0028fb00  beq 0x0028fc44
0028fb04  ldmia r4,{r1,r2}
0028fb08  cpy r0,r5
0028fb0c  bl 0x007bfff8
0028fb10  cmp r0,#0x0
0028fb14  nop
0028fb18  beq 0x0028fc44
0028fb1c  ldmia r4,{r1,r2}
0028fb20  and r3,r7,#0xff
0028fb24  add r0,sp,#0x30
0028fb28  bl 0x00285474
0028fb2c  ldr r0,[sp,#0x38]
0028fb30  and r0,r0,#0xff
0028fb34  cmp r0,#0xf8
0028fb38  bcs 0x0028fc44
0028fb3c  bl 0x00768c30
0028fb40  cmp r0,#0x0
0028fb44  nop
0028fb48  beq 0x0028fc44
0028fb4c  ldr r0,[r6,#0x20]
0028fb50  cmp r0,#0x0
0028fb54  beq 0x0028fc10
0028fb58  cpy r0,sp
0028fb5c  add r0,r0,#0x8
0028fb60  cpy r1,r0
0028fb64  add r2,r6,#0x24
0028fb68  add r0,sp,#0x18
0028fb6c  bl 0x007dc900
0028fb70  add r0,sp,#0x18
0028fb74  ldmia r0,{r1,r2}
0028fb78  ldr r0,[r6,#0x20]
0028fb7c  add r1,r1,r1, lsl #0x2
0028fb80  add r2,r2,r2, lsl #0x2
0028fb84  mov r2,r2, lsl #0x5
0028fb88  add r1,r2,r1, lsl #0x1
0028fb8c  add r1,r1,r0
0028fb90  add r0,sp,#0x30
0028fb94  bl 0x00692a4c
0028fb98  add r0,sp,#0x30
0028fb9c  nop
0028fba0  ldrb r0,[r0,#0x8]
0028fba4  cmp r0,#0x0
0028fba8  nop
0028fbac  beq 0x0028fc30
0028fbb0  cpy r0,sp
0028fbb4  add r0,r0,#0x8
0028fbb8  ldr r4,[r0,#0x4]
0028fbbc  cpy r0,sp
0028fbc0  add r0,r0,#0x8
0028fbc4  ldr r1,[r0,#0x0]
0028fbc8  ldrb r3,[r6,#0x10]
0028fbcc  cpy r2,r4
0028fbd0  add r0,sp,#0x40
0028fbd4  bl 0x00285474
0028fbd8  add r3,sp,#0x44
0028fbdc  ldr r1,[sp,#0x40]
0028fbe0  ldmia r3,{r0,r2}
0028fbe4  and r2,r2,#0xff
0028fbe8  cmp r2,#0xf8
0028fbec  bcs 0x0028fbfc
0028fbf0  strb r2,[r6,#0x12]
0028fbf4  str r1,[r6,#0x14]!
0028fbf8  str r0,[r6,#0x4]
0028fbfc  add r0,sp,#0x30
0028fc00  cpy r0,r0
0028fc04  add r0,sp,#0x18
0028fc08  nop
0028fc0c  cpy r0,r0
0028fc10  add r0,sp,#0x20
0028fc14  cpy r0,r0
0028fc18  cpy r0,sp
0028fc1c  nop
0028fc20  cpy r0,r0
0028fc24  add sp,sp,#0x54
0028fc28  mov r0,#0x1
0028fc2c  ldmia sp!,{r4,r5,r6,r7,pc}
0028fc30  add r0,sp,#0x30
0028fc34  cpy r0,r0
0028fc38  add r0,sp,#0x18
0028fc3c  nop
0028fc40  cpy r0,r0
0028fc44  cpy r0,sp
0028fc48  bl 0x0059b024
0028fc4c  add r1,sp,#0x20
0028fc50  cpy r0,sp
0028fc54  bl 0x007dc980
0028fc58  cmp r0,#0x0
0028fc5c  nop
0028fc60  bne 0x0028faf0
0028fc64  add r0,sp,#0x20
0028fc68  cpy r0,r0
0028fc6c  cpy r0,sp
0028fc70  nop
0028fc74  cpy r0,r0
0028fc78  add sp,sp,#0x54
0028fc7c  mov r0,#0x0
0028fc80  ldmia sp!,{r4,r5,r6,r7,pc}
