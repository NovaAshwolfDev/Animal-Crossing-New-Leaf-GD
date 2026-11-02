007eaec0  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,lr}
007eaec4  sub sp,sp,#0x18
007eaec8  cpy r8,r0
007eaecc  cpy r9,r1
007eaed0  cpy r0,sp
007eaed4  mvn r2,#0x0
007eaed8  mvn r3,#0x80000000
007eaedc  bl 0x0063ae38
007eaee0  mov r7,#0x0
007eaee4  cpy r10,sp
007eaee8  mov r4,#0x0
007eaeec  add r6,r8,r7, lsl #0x7
007eaef0  add r5,r6,r4, lsl #0x6
007eaef4  cpy r0,r5
007eaef8  bl 0x007edfa8
007eaefc  cmp r0,#0x0
007eaf00  nop
007eaf04  beq 0x007eaf40
007eaf08  cpy r0,sp
007eaf0c  bl 0x007edfa8
007eaf10  cmp r0,#0x0
007eaf14  nop
007eaf18  beq 0x007eaf34
007eaf1c  cpy r1,sp
007eaf20  cpy r0,r5
007eaf24  bl 0x007eded4
007eaf28  cmp r0,#0x0
007eaf2c  nop
007eaf30  bge 0x007eaf40
007eaf34  cpy r1,r5
007eaf38  cpy r0,r10
007eaf3c  bl 0x0011a3e0
007eaf40  add r4,r4,#0x1
007eaf44  cmp r4,#0x2
007eaf48  blt 0x007eaef0
007eaf4c  add r7,r7,#0x1
007eaf50  cmp r7,#0x4
007eaf54  blt 0x007eaee8
007eaf58  cpy r0,sp
007eaf5c  bl 0x007edfa8
007eaf60  cmp r0,#0x0
007eaf64  nop
007eaf68  beq 0x007eaf90
007eaf6c  cpy r1,sp
007eaf70  add r0,sp,#0x8
007eaf74  bl 0x007edb08
007eaf78  add r3,sp,#0x8
007eaf7c  ldmia r3,{r0,r1,r2}
007eaf80  stmia r9,{r0,r1,r2}
007eaf84  add sp,sp,#0x18
007eaf88  mov r0,#0x0
007eaf8c  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,pc}
007eaf90  nop
007eaf94  bl 0x005cc158
007eaf98  ldmia r0,{r1,r2}
007eaf9c  ldr r0,[r0,#0x8]
007eafa0  str r0,[r9,#0x8]
007eafa4  stmia r9,{r1,r2}
007eafa8  add sp,sp,#0x18
007eafac  mov r0,#0x1
007eafb0  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,pc}
