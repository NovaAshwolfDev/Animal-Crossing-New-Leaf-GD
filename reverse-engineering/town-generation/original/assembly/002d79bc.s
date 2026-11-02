002d79bc  stmdb sp!,{r4,r5,r6,lr}
002d79c0  cpy r4,r0
002d79c4  ldr r0,[0x2d7b1c]
002d79c8  sub sp,sp,#0x8
002d79cc  cpy r5,r1
002d79d0  ldr r0,[r0,#0x0]
002d79d4  bl 0x0011a378
002d79d8  cpy r6,r0
002d79dc  ldr r0,[0x2d7b20]
002d79e0  ldr r0,[r0,#0x4]
002d79e4  cmp r0,#0x0
002d79e8  bne 0x002d79fc
002d79ec  ldr r0,[0x2d7b20]
002d79f0  mov r2,#0x32000
002d79f4  cpy r1,r6
002d79f8  bl 0x008a5160
002d79fc  ldr r2,[0x2d7b24]
002d7a00  ldr r1,[0x2d7b20]
002d7a04  mov r3,#0x0
002d7a08  cpy r0,sp
002d7a0c  bl 0x008a4fa8
002d7a10  ldr r0,[0x2d7b28]
002d7a14  cpy r1,sp
002d7a18  bl 0x0060f038
002d7a1c  cpy r0,sp
002d7a20  nop
002d7a24  cpy r0,r0
002d7a28  ldr r0,[0x2d7b28]
002d7a2c  nop
002d7a30  bl 0x007e51ac
002d7a34  ldr r1,[0x2d7b2c]
002d7a38  ldr r0,[0x2d7b30]
002d7a3c  cpy r2,r6
002d7a40  bl 0x003d56fc
002d7a44  ldr r1,[0x2d7b34]
002d7a48  ldr r0,[0x2d7b38]
002d7a4c  cpy r2,r6
002d7a50  bl 0x003d56fc
002d7a54  cpy r1,r5
002d7a58  cpy r0,r4
002d7a5c  bl 0x002d7f88
002d7a60  cmp r0,#0x0
002d7a64  nop
002d7a68  beq 0x002d7a54
002d7a6c  ldr r5,[0x2d7b20]
002d7a70  ldr r4,[r5,#0x13c]
002d7a74  cmp r4,#0x0
002d7a78  beq 0x002d7a9c
002d7a7c  add r0,r4,#0xc
002d7a80  bl 0x0060f000
002d7a84  add r0,r4,#0x14
002d7a88  nop
002d7a8c  bl 0x00121a30
002d7a90  ldr r4,[r4,#0x8]
002d7a94  cmp r4,#0x0
002d7a98  bne 0x002d7a7c
002d7a9c  ldr r4,[r5,#0x154]
002d7aa0  cmp r4,#0x0
002d7aa4  beq 0x002d7ac8
002d7aa8  add r0,r4,#0xc
002d7aac  bl 0x0060f000
002d7ab0  add r0,r4,#0x14
002d7ab4  nop
002d7ab8  bl 0x00121a30
002d7abc  ldr r4,[r4,#0x8]
002d7ac0  cmp r4,#0x0
002d7ac4  bne 0x002d7aa8
002d7ac8  add r0,r5,#0x138
002d7acc  bl 0x001193a8
002d7ad0  add r0,r5,#0x144
002d7ad4  nop
002d7ad8  bl 0x001193a8
002d7adc  add r0,r5,#0x150
002d7ae0  nop
002d7ae4  bl 0x001193a8
002d7ae8  add r1,r5,#0x8
002d7aec  add r0,r5,#0x144
002d7af0  bl 0x00124be4
002d7af4  cpy r0,r5
002d7af8  nop
002d7afc  bl 0x00113b48
002d7b00  ldr r0,[0x2d7b30]
002d7b04  nop
002d7b08  bl 0x003d5780
002d7b0c  add sp,sp,#0x8
002d7b10  ldr r0,[0x2d7b38]
002d7b14  ldmia sp!,{r4,r5,r6,lr}
002d7b18  b 0x003d5780
