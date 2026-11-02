007b44a8  stmdb sp!,{r4,r5,r6,r7,lr}
007b44ac  cpy r4,r0
007b44b0  sub sp,sp,#0x64
007b44b4  ldrb r0,[r0,#0x1c]
007b44b8  bl 0x00767d84
007b44bc  cmp r0,#0x0
007b44c0  beq 0x007b4694
007b44c4  mov r0,#0x1
007b44c8  bl 0x0074702c
007b44cc  cpy r5,r0
007b44d0  cpy r1,r4
007b44d4  cpy r0,sp
007b44d8  bl 0x007dca10
007b44dc  cpy r1,r4
007b44e0  add r0,sp,#0x50
007b44e4  bl 0x007dc9d8
007b44e8  add r1,sp,#0x50
007b44ec  cpy r0,sp
007b44f0  bl 0x007dc980
007b44f4  cmp r0,#0x0
007b44f8  beq 0x007b4680
007b44fc  cpy r0,sp
007b4500  add r0,r0,#0x8
007b4504  cmp r5,#0x0
007b4508  cpy r7,r0
007b450c  beq 0x007b45c4
007b4510  cpy r1,r0
007b4514  add r0,sp,#0x18
007b4518  bl 0x0059ace8
007b451c  add r3,sp,#0x18
007b4520  cpy r0,r5
007b4524  ldmia r3,{r1,r2}
007b4528  bl 0x007e206c
007b452c  movs r6,r0
007b4530  nop
007b4534  beq 0x007b45bc
007b4538  cpy r1,r7
007b453c  add r0,sp,#0x20
007b4540  bl 0x0059abf0
007b4544  add r3,sp,#0x20
007b4548  cpy r0,r6
007b454c  ldmia r3,{r1,r2}
007b4550  bl 0x007f32bc
007b4554  cmp r0,#0x14
007b4558  cmpne r0,#0x31
007b455c  beq 0x007b45a0
007b4560  cmp r0,#0x32
007b4564  cmpne r0,#0x33
007b4568  beq 0x007b45a0
007b456c  ldmia r7,{r1,r2}
007b4570  mov r3,#0x1
007b4574  add r0,sp,#0x40
007b4578  bl 0x00285474
007b457c  add r3,sp,#0x40
007b4580  ldmia r3,{r0,r1,r2}
007b4584  and r2,r2,#0xff
007b4588  cmp r2,#0xf8
007b458c  bcs 0x007b45b4
007b4590  bl 0x007692d4
007b4594  cmp r0,#0x0
007b4598  nop
007b459c  beq 0x007b45b4
007b45a0  add r0,sp,#0x20
007b45a4  cpy r0,r0
007b45a8  add r0,sp,#0x18
007b45ac  nop
007b45b0  b 0x007b4660
007b45b4  add r0,sp,#0x20
007b45b8  cpy r0,r0
007b45bc  add r0,sp,#0x18
007b45c0  cpy r0,r0
007b45c4  ldr r0,[r4,#0x20]
007b45c8  cmp r0,#0x0
007b45cc  beq 0x007b4634
007b45d0  cpy r0,sp
007b45d4  add r0,r0,#0x8
007b45d8  cpy r1,r0
007b45dc  add r2,r4,#0x24
007b45e0  add r0,sp,#0x38
007b45e4  bl 0x007dc900
007b45e8  ldrd r0,r1,[sp,#0x38]
007b45ec  ldr r2,[r4,#0x20]
007b45f0  add r1,r1,r1, lsl #0x2
007b45f4  add r0,r0,r0, lsl #0x2
007b45f8  mov r1,r1, lsl #0x5
007b45fc  add r0,r1,r0, lsl #0x1
007b4600  add r1,r0,r2
007b4604  add r0,sp,#0x40
007b4608  bl 0x00692a4c
007b460c  add r0,sp,#0x40
007b4610  nop
007b4614  ldrb r0,[r0,#0x8]
007b4618  cmp r0,#0x0
007b461c  add r0,sp,#0x40
007b4620  beq 0x007b4654
007b4624  cpy r0,r0
007b4628  add r0,sp,#0x38
007b462c  nop
007b4630  cpy r0,r0
007b4634  add r0,sp,#0x50
007b4638  cpy r0,r0
007b463c  cpy r0,sp
007b4640  nop
007b4644  cpy r0,r0
007b4648  add sp,sp,#0x64
007b464c  mov r0,#0x1
007b4650  ldmia sp!,{r4,r5,r6,r7,pc}
007b4654  nop
007b4658  cpy r0,r0
007b465c  add r0,sp,#0x38
007b4660  cpy r0,r0
007b4664  cpy r0,sp
007b4668  bl 0x0059b024
007b466c  add r1,sp,#0x50
007b4670  cpy r0,sp
007b4674  bl 0x007dc980
007b4678  cmp r0,#0x0
007b467c  bne 0x007b44fc
007b4680  add r0,sp,#0x50
007b4684  cpy r0,r0
007b4688  cpy r0,sp
007b468c  nop
007b4690  b 0x007b482c
007b4694  ldrb r0,[r4,#0x11]
007b4698  bl 0x0074702c
007b469c  cpy r5,r0
007b46a0  cpy r1,r4
007b46a4  add r0,sp,#0x8
007b46a8  bl 0x007dca10
007b46ac  cpy r1,r4
007b46b0  add r0,sp,#0x38
007b46b4  bl 0x007dc9d8
007b46b8  add r1,sp,#0x38
007b46bc  add r0,sp,#0x8
007b46c0  bl 0x007dc980
007b46c4  cmp r0,#0x0
007b46c8  nop
007b46cc  beq 0x007b4820
007b46d0  add r0,sp,#0x8
007b46d4  add r0,r0,#0x8
007b46d8  cmp r5,#0x0
007b46dc  cpy r7,r0
007b46e0  beq 0x007b4750
007b46e4  cpy r1,r0
007b46e8  add r0,sp,#0x28
007b46ec  bl 0x0059ace8
007b46f0  add r3,sp,#0x28
007b46f4  cpy r0,r5
007b46f8  ldmia r3,{r1,r2}
007b46fc  bl 0x007e206c
007b4700  movs r6,r0
007b4704  nop
007b4708  beq 0x007b4748
007b470c  cpy r1,r7
007b4710  add r0,sp,#0x30
007b4714  bl 0x0059abf0
007b4718  add r3,sp,#0x30
007b471c  cpy r0,r6
007b4720  ldmia r3,{r1,r2}
007b4724  bl 0x007f32bc
007b4728  cmp r0,#0x14
007b472c  cmpne r0,#0x31
007b4730  beq 0x007b47e0
007b4734  cmp r0,#0x32
007b4738  cmpne r0,#0x33
007b473c  beq 0x007b47e0
007b4740  add r0,sp,#0x30
007b4744  cpy r0,r0
007b4748  add r0,sp,#0x28
007b474c  cpy r0,r0
007b4750  ldr r0,[r4,#0x20]
007b4754  cmp r0,#0x0
007b4758  beq 0x007b47c0
007b475c  add r0,sp,#0x8
007b4760  add r0,r0,#0x8
007b4764  cpy r1,r0
007b4768  add r2,r4,#0x24
007b476c  add r0,sp,#0x48
007b4770  bl 0x007dc900
007b4774  ldrd r0,r1,[sp,#0x48]
007b4778  ldr r2,[r4,#0x20]
007b477c  add r1,r1,r1, lsl #0x2
007b4780  add r0,r0,r0, lsl #0x2
007b4784  mov r1,r1, lsl #0x5
007b4788  add r0,r1,r0, lsl #0x1
007b478c  add r1,r0,r2
007b4790  add r0,sp,#0x50
007b4794  bl 0x00692a4c
007b4798  add r0,sp,#0x50
007b479c  nop
007b47a0  ldrb r0,[r0,#0x8]
007b47a4  cmp r0,#0x0
007b47a8  add r0,sp,#0x50
007b47ac  beq 0x007b47f4
007b47b0  cpy r0,r0
007b47b4  add r0,sp,#0x48
007b47b8  nop
007b47bc  cpy r0,r0
007b47c0  add r0,sp,#0x38
007b47c4  cpy r0,r0
007b47c8  add r0,sp,#0x8
007b47cc  nop
007b47d0  cpy r0,r0
007b47d4  add sp,sp,#0x64
007b47d8  mov r0,#0x1
007b47dc  ldmia sp!,{r4,r5,r6,r7,pc}
007b47e0  add r0,sp,#0x30
007b47e4  cpy r0,r0
007b47e8  add r0,sp,#0x28
007b47ec  nop
007b47f0  b 0x007b4800
007b47f4  nop
007b47f8  cpy r0,r0
007b47fc  add r0,sp,#0x48
007b4800  cpy r0,r0
007b4804  add r0,sp,#0x8
007b4808  bl 0x0059b024
007b480c  add r1,sp,#0x38
007b4810  add r0,sp,#0x8
007b4814  bl 0x007dc980
007b4818  cmp r0,#0x0
007b481c  bne 0x007b46d0
007b4820  add r0,sp,#0x38
007b4824  cpy r0,r0
007b4828  add r0,sp,#0x8
007b482c  cpy r0,r0
007b4830  add sp,sp,#0x64
007b4834  mov r0,#0x0
007b4838  ldmia sp!,{r4,r5,r6,r7,pc}
