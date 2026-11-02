0015f1bc  stmdb sp!,{r3,r4,r5,lr}
0015f1c0  cpy r4,r1
0015f1c4  ldr r1,[0x15f370]
0015f1c8  bl 0x00756d40
0015f1cc  cmp r4,#0x8
0015f1d0  cpy r5,r0
0015f1d4  bcs 0x0015f220
0015f1d8  mov r0,#0x64
0015f1dc  bl 0x0011df34
0015f1e0  cmp r0,#0x46
0015f1e4  bge 0x0015f224
0015f1e8  ldr r0,[0x15f374]
0015f1ec  ldr r0,[r0,r4,lsl #0x2]
0015f1f0  bl 0x0011df34
0015f1f4  ldr r1,[0x15f378]
0015f1f8  ldr r1,[r1,r4,lsl #0x2]
0015f1fc  add r0,r1,r0, lsl #0x1
0015f200  ldrh r1,[r0,#0x0]
0015f204  cpy r0,sp
0015f208  bl 0x00756d40
0015f20c  cpy r1,r0
0015f210  cpy r0,r5
0015f214  bl 0x00756eb0
0015f218  cpy r0,sp
0015f21c  cpy r0,r0
0015f220  ldmia sp!,{r3,r4,r5,pc}
0015f224  nop
0015f228  bl 0x005cc158
0015f22c  ldrsb r0,[r0,#0x4]
0015f230  cmp r0,#0xd
0015f234  ldrcc pc,[pc,r0,lsl #0x2]
0015f238  ldmia sp!,{r3,r4,r5,pc}
0015f270  ldr r0,[0x15f37c]
0015f274  ldr r0,[r0,r4,lsl #0x2]
0015f278  bl 0x0011df34
0015f27c  ldr r1,[0x15f380]
0015f280  ldr r1,[r1,r4,lsl #0x2]
0015f284  add r0,r1,r0, lsl #0x1
0015f288  ldrh r1,[r0,#0x0]
0015f28c  cpy r0,sp
0015f290  bl 0x00756d40
0015f294  cpy r1,r0
0015f298  cpy r0,r5
0015f29c  bl 0x00756eb0
0015f2a0  cpy r0,sp
0015f2a4  nop
0015f2a8  cpy r0,r0
0015f2ac  ldmia sp!,{r3,r4,r5,pc}
0015f2b0  ldr r0,[0x15f384]
0015f2b4  ldr r0,[r0,r4,lsl #0x2]
0015f2b8  bl 0x0011df34
0015f2bc  ldr r1,[0x15f388]
0015f2c0  ldr r1,[r1,r4,lsl #0x2]
0015f2c4  add r0,r1,r0, lsl #0x1
0015f2c8  ldrh r1,[r0,#0x0]
0015f2cc  cpy r0,sp
0015f2d0  bl 0x00756d40
0015f2d4  cpy r1,r0
0015f2d8  cpy r0,r5
0015f2dc  bl 0x00756eb0
0015f2e0  cpy r0,sp
0015f2e4  nop
0015f2e8  cpy r0,r0
0015f2ec  ldmia sp!,{r3,r4,r5,pc}
0015f2f0  ldr r0,[0x15f38c]
0015f2f4  ldr r0,[r0,r4,lsl #0x2]
0015f2f8  bl 0x0011df34
0015f2fc  ldr r1,[0x15f390]
0015f300  ldr r1,[r1,r4,lsl #0x2]
0015f304  add r0,r1,r0, lsl #0x1
0015f308  ldrh r1,[r0,#0x0]
0015f30c  cpy r0,sp
0015f310  bl 0x00756d40
0015f314  cpy r1,r0
0015f318  cpy r0,r5
0015f31c  bl 0x00756eb0
0015f320  cpy r0,sp
0015f324  nop
0015f328  cpy r0,r0
0015f32c  ldmia sp!,{r3,r4,r5,pc}
0015f330  ldr r0,[0x15f394]
0015f334  ldr r0,[r0,r4,lsl #0x2]
0015f338  bl 0x0011df34
0015f33c  ldr r1,[0x15f398]
0015f340  ldr r1,[r1,r4,lsl #0x2]
0015f344  add r0,r1,r0, lsl #0x1
0015f348  ldrh r1,[r0,#0x0]
0015f34c  cpy r0,sp
0015f350  bl 0x00756d40
0015f354  cpy r1,r0
0015f358  cpy r0,r5
0015f35c  bl 0x00756eb0
0015f360  cpy r0,sp
0015f364  nop
0015f368  cpy r0,r0
0015f36c  ldmia sp!,{r3,r4,r5,pc}
