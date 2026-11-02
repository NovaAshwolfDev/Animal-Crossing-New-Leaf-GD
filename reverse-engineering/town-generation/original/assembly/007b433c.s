007b433c  stmdb sp!,{r4,r5,lr}
007b4340  cpy r5,r0
007b4344  ldrb r0,[r0,#0x11]
007b4348  sub sp,sp,#0x3c
007b434c  bl 0x0074702c
007b4350  cpy r4,r0
007b4354  cpy r1,r5
007b4358  add r0,sp,#0x10
007b435c  bl 0x007dca10
007b4360  cpy r1,r5
007b4364  add r0,sp,#0x20
007b4368  bl 0x007dc9d8
007b436c  add r1,sp,#0x20
007b4370  add r0,sp,#0x10
007b4374  bl 0x007dc980
007b4378  cmp r0,#0x0
007b437c  beq 0x007b4488
007b4380  add r0,sp,#0x10
007b4384  add r0,r0,#0x8
007b4388  cmp r4,#0x0
007b438c  nop
007b4390  beq 0x007b4468
007b4394  ldmia r0,{r1,r2}
007b4398  mov r3,#0x0
007b439c  cpy r0,r4
007b43a0  bl 0x007e2290
007b43a4  cmp r0,#0x0
007b43a8  nop
007b43ac  beq 0x007b4468
007b43b0  bl 0x007fe37c
007b43b4  cmp r0,#0xa
007b43b8  nop
007b43bc  bne 0x007b4468
007b43c0  ldr r0,[r5,#0x20]
007b43c4  cmp r0,#0x0
007b43c8  beq 0x007b4434
007b43cc  add r0,sp,#0x10
007b43d0  add r0,r0,#0x8
007b43d4  cpy r1,r0
007b43d8  add r2,r5,#0x24
007b43dc  add r0,sp,#0x8
007b43e0  bl 0x007dc900
007b43e4  add r1,sp,#0x8
007b43e8  ldmia r1,{r0,r2}
007b43ec  ldr r1,[r5,#0x20]
007b43f0  add r0,r0,r0, lsl #0x2
007b43f4  add r2,r2,r2, lsl #0x2
007b43f8  mov r2,r2, lsl #0x5
007b43fc  add r0,r2,r0, lsl #0x1
007b4400  add r1,r1,r0
007b4404  add r0,sp,#0x30
007b4408  bl 0x00692a4c
007b440c  add r0,sp,#0x30
007b4410  nop
007b4414  ldrb r0,[r0,#0x8]
007b4418  cmp r0,#0x0
007b441c  add r0,sp,#0x30
007b4420  beq 0x007b4454
007b4424  cpy r0,r0
007b4428  add r0,sp,#0x8
007b442c  nop
007b4430  cpy r0,r0
007b4434  add r0,sp,#0x20
007b4438  cpy r0,r0
007b443c  add r0,sp,#0x10
007b4440  nop
007b4444  cpy r0,r0
007b4448  add sp,sp,#0x3c
007b444c  mov r0,#0x1
007b4450  ldmia sp!,{r4,r5,pc}
007b4454  nop
007b4458  cpy r0,r0
007b445c  add r0,sp,#0x8
007b4460  nop
007b4464  cpy r0,r0
007b4468  add r0,sp,#0x10
007b446c  bl 0x0059b024
007b4470  add r1,sp,#0x20
007b4474  add r0,sp,#0x10
007b4478  bl 0x007dc980
007b447c  cmp r0,#0x0
007b4480  nop
007b4484  bne 0x007b4380
007b4488  add r0,sp,#0x20
007b448c  cpy r0,r0
007b4490  add r0,sp,#0x10
007b4494  nop
007b4498  cpy r0,r0
007b449c  add sp,sp,#0x3c
007b44a0  mov r0,#0x0
007b44a4  ldmia sp!,{r4,r5,pc}
