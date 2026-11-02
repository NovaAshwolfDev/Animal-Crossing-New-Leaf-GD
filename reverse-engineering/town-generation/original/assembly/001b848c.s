001b848c  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,r11,lr}
001b8490  sub sp,sp,#0x6c
001b8494  cpy r4,r0
001b8498  cpy r5,r1
001b849c  add r0,sp,#0x50
001b84a0  bl 0x005ca458
001b84a4  ldr r0,[0x1b87f4]
001b84a8  ldr r0,[r0,#0x0]
001b84ac  bl 0x0011a378
001b84b0  cpy r2,r0
001b84b4  mov r3,#0x0
001b84b8  cpy r1,r5
001b84bc  add r0,sp,#0x50
001b84c0  bl 0x0062c1c8
001b84c4  ldr r5,[sp,#0x54]
001b84c8  mov lr,#0x0
001b84cc  mov r3,#0xf
001b84d0  mov r0,lr, lsl #0x1e
001b84d4  mov r7,#0x0
001b84d8  mov r11,r0, lsr #0x17
001b84dc  and r0,r7,#0x1f
001b84e0  mov r2,#0x0
001b84e4  add r6,r11,r0, lsl #0x2
001b84e8  mov r1,r2, lsl #0x1
001b84ec  and r12,r1,#0x1f
001b84f0  ldrb r0,[r5,#0x0]
001b84f4  add r8,r6,r12, lsr #0x3
001b84f8  mov r12,r12, lsl #0x1d
001b84fc  add r8,r4,r8, lsl #0x2
001b8500  mov r12,r12, lsr #0x1b
001b8504  mov r0,r0, lsr #0x4
001b8508  ldr r9,[r8,#0x6c]
001b850c  mov r0,r0, lsl r12
001b8510  bic r12,r9,r3, lsl r12
001b8514  add r1,r1,#0x1
001b8518  orr r0,r0,r12
001b851c  and r1,r1,#0x1f
001b8520  str r0,[r8,#0x6c]
001b8524  add r12,r6,r1, lsr #0x3
001b8528  ldrb r0,[r5],#0x1
001b852c  mov r1,r1, lsl #0x1d
001b8530  add r12,r4,r12, lsl #0x2
001b8534  mov r1,r1, lsr #0x1b
001b8538  and r0,r0,#0xf
001b853c  ldr r8,[r12,#0x6c]
001b8540  mov r0,r0, lsl r1
001b8544  bic r1,r8,r3, lsl r1
001b8548  orr r0,r0,r1
001b854c  add r2,r2,#0x1
001b8550  cmp r2,#0x10
001b8554  str r0,[r12,#0x6c]
001b8558  bcc 0x001b84e8
001b855c  add r7,r7,#0x1
001b8560  cmp r7,#0x20
001b8564  bcc 0x001b84dc
001b8568  add lr,lr,#0x1
001b856c  cmp lr,#0x4
001b8570  bcc 0x001b84d0
001b8574  cpy r0,r5
001b8578  mov r1,#0x0
001b857c  mov r2,#0xf
001b8580  ldrb r3,[r0],#0x1
001b8584  add r12,r4,r1
001b8588  subs r2,r2,#0x1
001b858c  add r1,r1,#0x1
001b8590  strb r3,[r12,#0x58]
001b8594  bne 0x001b8580
001b8598  ldrb r9,[r5,#0xf]!
001b859c  cpy r0,sp
001b85a0  mov r2,#0x15
001b85a4  add r1,sp,#0x18
001b85a8  bl 0x0066c09c
001b85ac  ldr r7,[0x1b87f8]
001b85b0  str r7,[r0],#0xc
001b85b4  bl 0x00664320
001b85b8  sub r6,r0,#0xc
001b85bc  mov r1,#0x2a
001b85c0  add r0,r0,#0xc
001b85c4  bl 0x002fff30
001b85c8  ldr r8,[0x1b87fc]
001b85cc  add r0,r6,#0x18
001b85d0  ldrh r1,[r8,#0x0]
001b85d4  strh r1,[r6,#0x18]
001b85d8  mov r1,#0xa
001b85dc  ldrh r2,[r8,#0x0]
001b85e0  subs r1,r1,#0x1
001b85e4  strh r2,[r0,#0x2]
001b85e8  ldrh r2,[r8,#0x0]
001b85ec  strh r2,[r0,#0x4]!
001b85f0  bne 0x001b85dc
001b85f4  cpy r3,r9
001b85f8  ldr r9,[0x1b8810]
001b85fc  adr r2,0x1b8800
001b8600  cpy r1,sp
001b8604  ldr r0,[r9,#0x0]
001b8608  bl 0x007f0fb4
001b860c  cpy r6,sp
001b8610  add r0,sp,#0x60
001b8614  cpy r1,r4
001b8618  mov r2,#0x15
001b861c  bl 0x00672614
001b8620  ldr r1,[sp,#0x60]
001b8624  add r0,sp,#0x60
001b8628  ldr r2,[r1,#0x14]
001b862c  cpy r1,r6
001b8630  blx r2
001b8634  add r0,sp,#0x60
001b8638  cpy r0,r0
001b863c  add r0,sp,#0xc
001b8640  str r7,[sp,#0x0]
001b8644  cpy r0,r0
001b8648  sub r0,r0,#0xc
001b864c  nop
001b8650  cpy r0,r0
001b8654  ldrb r10,[r5,#0x1]!
001b8658  cpy r0,sp
001b865c  mov r2,#0x9
001b8660  add r1,sp,#0x18
001b8664  bl 0x0066c09c
001b8668  ldr r6,[0x1b8814]
001b866c  str r6,[r0],#0xc
001b8670  bl 0x00664320
001b8674  sub r7,r0,#0xc
001b8678  mov r1,#0x12
001b867c  add r0,r0,#0xc
001b8680  bl 0x002fff30
001b8684  ldrh r1,[r8,#0x0]
001b8688  add r0,r7,#0x18
001b868c  strh r1,[r7,#0x18]
001b8690  mov r1,#0x4
001b8694  ldrh r2,[r8,#0x0]
001b8698  subs r1,r1,#0x1
001b869c  strh r2,[r0,#0x2]
001b86a0  ldrh r2,[r8,#0x0]
001b86a4  strh r2,[r0,#0x4]!
001b86a8  bne 0x001b8694
001b86ac  ldr r0,[r9,#0x0]
001b86b0  cpy r3,r10
001b86b4  adr r2,0x1b8800
001b86b8  cpy r1,sp
001b86bc  bl 0x007f0fb4
001b86c0  cpy r7,sp
001b86c4  add r0,sp,#0x34
001b86c8  add r1,r4,#0x42
001b86cc  mov r2,#0x9
001b86d0  bl 0x0066c09c
001b86d4  ldr r2,[0x1b8818]
001b86d8  cpy r1,r7
001b86dc  str r2,[r0,#0x0]
001b86e0  ldr r2,[r2,#0x14]
001b86e4  blx r2
001b86e8  add r0,sp,#0x34
001b86ec  cpy r0,r0
001b86f0  add r0,sp,#0xc
001b86f4  str r6,[sp,#0x0]
001b86f8  cpy r0,r0
001b86fc  sub r0,r0,#0xc
001b8700  nop
001b8704  cpy r0,r0
001b8708  ldrb r10,[r5,#0x1]!
001b870c  cpy r0,sp
001b8710  mov r2,#0x9
001b8714  add r1,sp,#0x18
001b8718  bl 0x0066c09c
001b871c  str r6,[r0],#0xc
001b8720  nop
001b8724  bl 0x00664320
001b8728  sub r7,r0,#0xc
001b872c  mov r1,#0x12
001b8730  add r0,r0,#0xc
001b8734  bl 0x002fff30
001b8738  ldrh r1,[r8,#0x0]
001b873c  add r0,r7,#0x18
001b8740  strh r1,[r7,#0x18]
001b8744  mov r1,#0x4
001b8748  ldrh r2,[r8,#0x0]
001b874c  subs r1,r1,#0x1
001b8750  strh r2,[r0,#0x2]
001b8754  ldrh r2,[r8,#0x0]
001b8758  strh r2,[r0,#0x4]!
001b875c  bne 0x001b8748
001b8760  ldr r0,[r9,#0x0]
001b8764  cpy r3,r10
001b8768  adr r2,0x1b8800
001b876c  cpy r1,sp
001b8770  bl 0x007f0fb4
001b8774  cpy r7,sp
001b8778  add r0,sp,#0x34
001b877c  add r1,r4,#0x2c
001b8780  mov r2,#0x9
001b8784  bl 0x00672614
001b8788  ldr r2,[sp,#0x34]
001b878c  add r0,sp,#0x34
001b8790  cpy r1,r7
001b8794  ldr r2,[r2,#0x14]
001b8798  blx r2
001b879c  add r0,sp,#0x34
001b87a0  cpy r0,r0
001b87a4  add r0,sp,#0xc
001b87a8  str r6,[sp,#0x0]
001b87ac  cpy r0,r0
001b87b0  sub r0,r0,#0xc
001b87b4  nop
001b87b8  cpy r0,r0
001b87bc  ldrb r0,[r5,#0x1]
001b87c0  strb r0,[r4,#0x68]
001b87c4  ldrb r0,[r5,#0x2]
001b87c8  strb r0,[r4,#0x69]
001b87cc  add r0,sp,#0x50
001b87d0  bl 0x00121940
001b87d4  cpy r0,r4
001b87d8  nop
001b87dc  bl 0x001b6c20
001b87e0  add r0,sp,#0x50
001b87e4  nop
001b87e8  bl 0x00124a44
001b87ec  add sp,sp,#0x6c
001b87f0  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
