007eafb4  stmdb sp!,{r4,r5,r6,r7,r8,lr}
007eafb8  cmp r1,#0x0
007eafbc  addne r8,r1,#0x6c00
007eafc0  cpy r7,r0
007eafc4  cpy r6,r2
007eafc8  addne r8,r8,#0x338
007eafcc  movne r4,#0x0
007eafd0  beq 0x007eb0c0
007eafd4  cpy r1,r4
007eafd8  cpy r0,r8
007eafdc  bl 0x007bcf70
007eafe0  cmp r0,#0x0
007eafe4  nop
007eafe8  beq 0x007eb0b4
007eafec  ldrb r0,[r0,#0x272]
007eaff0  tst r0,#0x80
007eaff4  beq 0x007eb0b4
007eaff8  tst r0,#0x20
007eaffc  bne 0x007eb0b4
007eb000  and r0,r0,#0x7
007eb004  cmp r0,#0x8
007eb008  cpycs r0,r7
007eb00c  bcs 0x007eb024
007eb010  mov r1,r0, lsr #0x1
007eb014  rsb r3,r1,#0x0
007eb018  add r1,r7,r1, lsl #0x7
007eb01c  add r0,r0,r3, lsl #0x1
007eb020  add r0,r1,r0, lsl #0x6
007eb024  add r5,r0,#0xc
007eb028  ldrh r1,[r6,#0x2c]
007eb02c  ldrh r0,[r0,#0x38]
007eb030  cmp r0,r1
007eb034  bne 0x007eb0b4
007eb038  ldrh r0,[r5,#0x0]
007eb03c  ldrh r1,[r6,#0x0]
007eb040  cmp r0,r1
007eb044  bne 0x007eb0b4
007eb048  ldrb r1,[r5,#0x14]
007eb04c  ldrb r0,[r6,#0x14]
007eb050  cmp r1,r0
007eb054  bne 0x007eb0b4
007eb058  mov r2,#0x12
007eb05c  add r1,r6,#0x2
007eb060  add r0,r5,#0x2
007eb064  blx 0x001011c4
007eb068  cmp r0,#0x0
007eb06c  nop
007eb070  bne 0x007eb0b4
007eb074  ldrh r1,[r5,#0x16]!
007eb078  ldrh r2,[r6,#0x16]
007eb07c  add r0,r6,#0x16
007eb080  cmp r1,r2
007eb084  bne 0x007eb0b4
007eb088  ldrb r1,[r5,#0x14]
007eb08c  ldrb r2,[r0,#0x14]
007eb090  cmp r1,r2
007eb094  bne 0x007eb0b4
007eb098  add r1,r0,#0x2
007eb09c  mov r2,#0x12
007eb0a0  add r0,r5,#0x2
007eb0a4  blx 0x001011c4
007eb0a8  cmp r0,#0x0
007eb0ac  nop
007eb0b0  beq 0x007eb0c8
007eb0b4  add r4,r4,#0x1
007eb0b8  cmp r4,#0xa
007eb0bc  bcc 0x007eafd4
007eb0c0  mov r0,#0x0
007eb0c4  ldmia sp!,{r4,r5,r6,r7,r8,pc}
007eb0c8  mov r0,#0x1
007eb0cc  ldmia sp!,{r4,r5,r6,r7,r8,pc}
