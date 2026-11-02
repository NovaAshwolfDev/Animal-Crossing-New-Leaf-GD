0028e998  stmdb sp!,{r4,r5,r6,r7,lr}
0028e99c  cpy r6,r0
0028e9a0  bic r1,r0,#0xff
0028e9a4  ldrb r0,[r0,#0x10]
0028e9a8  sub sp,sp,#0x54
0028e9ac  orr r7,r1,r0
0028e9b0  bl 0x00285804
0028e9b4  cpy r5,r0
0028e9b8  cpy r1,r6
0028e9bc  cpy r0,sp
0028e9c0  bl 0x007dca10
0028e9c4  cpy r1,r6
0028e9c8  add r0,sp,#0x20
0028e9cc  bl 0x007dc9d8
0028e9d0  add r1,sp,#0x20
0028e9d4  cpy r0,sp
0028e9d8  bl 0x007dc980
0028e9dc  cmp r0,#0x0
0028e9e0  beq 0x0028eb58
0028e9e4  cpy r0,sp
0028e9e8  add r0,r0,#0x8
0028e9ec  cmp r5,#0x0
0028e9f0  cpy r4,r0
0028e9f4  beq 0x0028eb38
0028e9f8  ldmia r4,{r1,r2}
0028e9fc  cpy r0,r5
0028ea00  bl 0x007bfff8
0028ea04  cmp r0,#0x0
0028ea08  nop
0028ea0c  beq 0x0028eb38
0028ea10  ldmia r4,{r1,r2}
0028ea14  and r3,r7,#0xff
0028ea18  add r0,sp,#0x30
0028ea1c  bl 0x00285474
0028ea20  ldr r0,[sp,#0x38]
0028ea24  and r0,r0,#0xff
0028ea28  cmp r0,#0xf8
0028ea2c  bcs 0x0028eb38
0028ea30  bl 0x00769904
0028ea34  cmp r0,#0x0
0028ea38  nop
0028ea3c  beq 0x0028eb38
0028ea40  ldr r0,[r6,#0x20]
0028ea44  cmp r0,#0x0
0028ea48  beq 0x0028eb04
0028ea4c  cpy r0,sp
0028ea50  add r0,r0,#0x8
0028ea54  cpy r1,r0
0028ea58  add r2,r6,#0x24
0028ea5c  add r0,sp,#0x18
0028ea60  bl 0x007dc900
0028ea64  add r0,sp,#0x18
0028ea68  ldmia r0,{r1,r2}
0028ea6c  ldr r0,[r6,#0x20]
0028ea70  add r1,r1,r1, lsl #0x2
0028ea74  add r2,r2,r2, lsl #0x2
0028ea78  mov r2,r2, lsl #0x5
0028ea7c  add r1,r2,r1, lsl #0x1
0028ea80  add r1,r1,r0
0028ea84  add r0,sp,#0x30
0028ea88  bl 0x00692a4c
0028ea8c  add r0,sp,#0x30
0028ea90  nop
0028ea94  ldrb r0,[r0,#0x8]
0028ea98  cmp r0,#0x0
0028ea9c  nop
0028eaa0  beq 0x0028eb24
0028eaa4  cpy r0,sp
0028eaa8  add r0,r0,#0x8
0028eaac  ldr r4,[r0,#0x4]
0028eab0  cpy r0,sp
0028eab4  add r0,r0,#0x8
0028eab8  ldr r1,[r0,#0x0]
0028eabc  ldrb r3,[r6,#0x10]
0028eac0  cpy r2,r4
0028eac4  add r0,sp,#0x40
0028eac8  bl 0x00285474
0028eacc  add r3,sp,#0x44
0028ead0  ldr r1,[sp,#0x40]
0028ead4  ldmia r3,{r0,r2}
0028ead8  and r2,r2,#0xff
0028eadc  cmp r2,#0xf8
0028eae0  bcs 0x0028eaf0
0028eae4  strb r2,[r6,#0x12]
0028eae8  str r1,[r6,#0x14]!
0028eaec  str r0,[r6,#0x4]
0028eaf0  add r0,sp,#0x30
0028eaf4  cpy r0,r0
0028eaf8  add r0,sp,#0x18
0028eafc  nop
0028eb00  cpy r0,r0
0028eb04  add r0,sp,#0x20
0028eb08  cpy r0,r0
0028eb0c  cpy r0,sp
0028eb10  nop
0028eb14  cpy r0,r0
0028eb18  add sp,sp,#0x54
0028eb1c  mov r0,#0x1
0028eb20  ldmia sp!,{r4,r5,r6,r7,pc}
0028eb24  add r0,sp,#0x30
0028eb28  cpy r0,r0
0028eb2c  add r0,sp,#0x18
0028eb30  nop
0028eb34  cpy r0,r0
0028eb38  cpy r0,sp
0028eb3c  bl 0x0059b024
0028eb40  add r1,sp,#0x20
0028eb44  cpy r0,sp
0028eb48  bl 0x007dc980
0028eb4c  cmp r0,#0x0
0028eb50  nop
0028eb54  bne 0x0028e9e4
0028eb58  add r0,sp,#0x20
0028eb5c  cpy r0,r0
0028eb60  cpy r0,sp
0028eb64  nop
0028eb68  cpy r0,r0
0028eb6c  add sp,sp,#0x54
0028eb70  mov r0,#0x0
0028eb74  ldmia sp!,{r4,r5,r6,r7,pc}
