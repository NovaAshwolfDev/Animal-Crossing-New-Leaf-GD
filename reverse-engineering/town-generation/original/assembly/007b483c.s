007b483c  stmdb sp!,{r4,r5,r6,lr}
007b4840  sub sp,sp,#0x40
007b4844  ldrb r4,[r0,#0x11]
007b4848  cpy r6,r0
007b484c  cpy r1,r0
007b4850  add r0,sp,#0x10
007b4854  bl 0x007dca10
007b4858  cpy r1,r6
007b485c  add r0,sp,#0x20
007b4860  bl 0x007dc9d8
007b4864  add r1,sp,#0x20
007b4868  add r0,sp,#0x10
007b486c  bl 0x007dc980
007b4870  cmp r0,#0x0
007b4874  beq 0x007b49b4
007b4878  add r0,sp,#0x10
007b487c  add r0,r0,#0x8
007b4880  cpy r1,r0
007b4884  cpy r0,sp
007b4888  bl 0x0059ace8
007b488c  and r0,r4,#0xff
007b4890  nop
007b4894  bl 0x0074702c
007b4898  cmp r0,#0x0
007b489c  nop
007b48a0  beq 0x007b497c
007b48a4  ldmia sp,{r1,r2}
007b48a8  bl 0x007e23e0
007b48ac  cmp r0,#0x0
007b48b0  nop
007b48b4  beq 0x007b497c
007b48b8  ldrh r0,[r0,#0x0]
007b48bc  nop
007b48c0  nop
007b48c4  bl 0x00687d78
007b48c8  cmp r0,#0x1
007b48cc  moveq r5,#0x1
007b48d0  movne r5,#0x0
007b48d4  cpy r0,sp
007b48d8  cpy r0,r0
007b48dc  cmp r5,#0x0
007b48e0  nop
007b48e4  beq 0x007b4994
007b48e8  ldr r0,[r6,#0x20]
007b48ec  cmp r0,#0x0
007b48f0  beq 0x007b495c
007b48f4  add r0,sp,#0x10
007b48f8  add r0,r0,#0x8
007b48fc  cpy r1,r0
007b4900  add r2,r6,#0x24
007b4904  add r0,sp,#0x8
007b4908  bl 0x007dc900
007b490c  add r1,sp,#0x8
007b4910  ldmia r1,{r0,r2}
007b4914  ldr r1,[r6,#0x20]
007b4918  add r0,r0,r0, lsl #0x2
007b491c  add r2,r2,r2, lsl #0x2
007b4920  mov r2,r2, lsl #0x5
007b4924  add r0,r2,r0, lsl #0x1
007b4928  add r1,r1,r0
007b492c  add r0,sp,#0x30
007b4930  bl 0x00692a4c
007b4934  add r0,sp,#0x30
007b4938  nop
007b493c  ldrb r0,[r0,#0x8]
007b4940  cmp r0,#0x0
007b4944  add r0,sp,#0x30
007b4948  beq 0x007b4984
007b494c  cpy r0,r0
007b4950  add r0,sp,#0x8
007b4954  nop
007b4958  cpy r0,r0
007b495c  add r0,sp,#0x20
007b4960  cpy r0,r0
007b4964  add r0,sp,#0x10
007b4968  nop
007b496c  cpy r0,r0
007b4970  add sp,sp,#0x40
007b4974  mov r0,#0x1
007b4978  ldmia sp!,{r4,r5,r6,pc}
007b497c  cpy r0,sp
007b4980  b 0x007b4990
007b4984  nop
007b4988  cpy r0,r0
007b498c  add r0,sp,#0x8
007b4990  cpy r0,r0
007b4994  add r0,sp,#0x10
007b4998  bl 0x0059b024
007b499c  add r1,sp,#0x20
007b49a0  add r0,sp,#0x10
007b49a4  bl 0x007dc980
007b49a8  cmp r0,#0x0
007b49ac  nop
007b49b0  bne 0x007b4878
007b49b4  add r0,sp,#0x20
007b49b8  cpy r0,r0
007b49bc  add r0,sp,#0x10
007b49c0  nop
007b49c4  cpy r0,r0
007b49c8  add sp,sp,#0x40
007b49cc  mov r0,#0x0
007b49d0  ldmia sp!,{r4,r5,r6,pc}
