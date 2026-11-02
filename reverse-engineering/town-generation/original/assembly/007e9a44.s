007e9a44  stmdb sp!,{r4,r5,r6,r7,r8,lr}
007e9a48  cpy r5,r0
007e9a4c  cpy r7,r1
007e9a50  bl 0x007e7160
007e9a54  cmp r0,#0x0
007e9a58  beq 0x007e9b10
007e9a5c  add r0,r0,#0xb6
007e9a60  ldrb r1,[r0,#0x2]
007e9a64  movs r1,r1, lsl #0x1e
007e9a68  bpl 0x007e9b0c
007e9a6c  ldrb r0,[r0,#0x6]
007e9a70  mov r0,r0, lsl #0x1c
007e9a74  cmp r0,#0x0
007e9a78  movge r4,#0x0
007e9a7c  bge 0x007e9a8c
007e9a80  b 0x007e9b0c
007e9a84  nop
007e9a88  bcs 0x007e9b00
007e9a8c  rsb r1,r4,r4, lsl #0x4
007e9a90  add r0,r5,r1, lsl #0x4
007e9a94  add r6,r0,#0x800
007e9a98  adds r6,r6,#0xee
007e9a9c  beq 0x007e9b00
007e9aa0  cpy r0,r6
007e9aa4  bl 0x007aae1c
007e9aa8  cmp r0,#0x0
007e9aac  nop
007e9ab0  beq 0x007e9b00
007e9ab4  ldrb r0,[r6,#0xbc]
007e9ab8  movs r0,r0, lsl #0x1e
007e9abc  bpl 0x007e9b00
007e9ac0  cmp r4,#0x0
007e9ac4  blt 0x007e9b0c
007e9ac8  cmp r4,#0x10
007e9acc  bcs 0x007e9b0c
007e9ad0  rsb r0,r4,r4, lsl #0x4
007e9ad4  add r0,r5,r0, lsl #0x4
007e9ad8  add r4,r0,#0x800
007e9adc  adds r4,r4,#0xee
007e9ae0  beq 0x007e9b0c
007e9ae4  cpy r1,r7
007e9ae8  cpy r0,r4
007e9aec  bl 0x007aae48
007e9af0  cmp r0,#0x0
007e9af4  cpyeq r0,r4
007e9af8  beq 0x007e9b10
007e9afc  b 0x007e9b0c
007e9b00  add r4,r4,#0x1
007e9b04  cmp r4,#0x10
007e9b08  bcc 0x007e9a84
007e9b0c  mov r0,#0x0
007e9b10  ldmia sp!,{r4,r5,r6,r7,r8,pc}
