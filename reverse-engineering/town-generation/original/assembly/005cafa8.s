005cafa8  stmdb sp!,{r4,r5,r6,r7,r8}
005cafac  cmn r1,#0x80000001
005cafb0  mov r4,#0x1
005cafb4  ldrb r5,[r0,#0x0]
005cafb8  ldr r12,[0x5cb08c]
005cafbc  eor r5,r5,r2
005cafc0  and r5,r5,#0xff
005cafc4  ldr r5,[r12,r5,lsl #0x2]
005cafc8  eor r2,r5,r2, lsr #0x8
005cafcc  bls 0x005caff4
005cafd0  ldrb r5,[r0,r4]
005cafd4  add r4,r4,#0x1
005cafd8  cmp r4,r1
005cafdc  eor r5,r5,r2
005cafe0  and r5,r5,#0xff
005cafe4  ldr r5,[r12,r5,lsl #0x2]
005cafe8  eor r2,r5,r2, lsr #0x8
005cafec  bne 0x005cafd0
005caff0  b 0x005cb080
005caff4  sub r5,r1,#0x2
005caff8  cmp r5,#0x0
005caffc  ble 0x005cb060
005cb000  tst r1,#0x1
005cb004  cpy r4,r0
005cb008  beq 0x005cb024
005cb00c  ldrb r6,[r0,#0x1]
005cb010  add r4,r0,#0x1
005cb014  eor r6,r6,r2
005cb018  and r6,r6,#0xff
005cb01c  ldr r6,[r12,r6,lsl #0x2]
005cb020  eor r2,r6,r2, lsr #0x8
005cb024  ldrb r6,[r4,#0x1]
005cb028  movs r5,r5, asr #0x1
005cb02c  beq 0x005cb060
005cb030  eor r6,r6,r2
005cb034  and r6,r6,#0xff
005cb038  ldrb r7,[r4,#0x2]!
005cb03c  ldr r8,[r12,r6,lsl #0x2]
005cb040  ldrb r6,[r4,#0x1]
005cb044  subs r5,r5,#0x1
005cb048  eor r2,r8,r2, lsr #0x8
005cb04c  eor r7,r7,r2
005cb050  and r7,r7,#0xff
005cb054  ldr r7,[r12,r7,lsl #0x2]
005cb058  eor r2,r7,r2, lsr #0x8
005cb05c  bne 0x005cb030
005cb060  subs r1,r1,#0x2
005cb064  bmi 0x005cb080
005cb068  add r0,r0,r1
005cb06c  ldrb r0,[r0,#0x1]
005cb070  eor r0,r0,r2
005cb074  and r0,r0,#0xff
005cb078  ldr r0,[r12,r0,lsl #0x2]
005cb07c  eor r2,r0,r2, lsr #0x8
005cb080  ldmia sp!,{r4,r5,r6,r7,r8}
005cb084  eor r0,r2,r3
005cb088  bx lr
