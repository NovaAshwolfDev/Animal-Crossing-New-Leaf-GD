007ecbac  ldrb r2,[r0,#0x30]
007ecbb0  mov r1,#0x0
007ecbb4  cmp r2,#0x2
007ecbb8  cmpne r2,#0x4
007ecbbc  cpyeq r1,r0
007ecbc0  cpy r0,r1
007ecbc4  bx lr
