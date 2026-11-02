007ecc0c  ldrb r2,[r0,#0x30]
007ecc10  mov r1,#0x0
007ecc14  cmp r2,#0x1
007ecc18  cmpne r2,#0x3
007ecc1c  cmpne r2,#0x6
007ecc20  cpyeq r1,r0
007ecc24  cpy r0,r1
007ecc28  bx lr
