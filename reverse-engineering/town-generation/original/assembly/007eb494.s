007eb494  ldrb r2,[r0,#0x8]
007eb498  ldr r3,[0x7eb4c8]
007eb49c  mov r0,#0xc
007eb4a0  mov r1,#0x0
007eb4a4  ldr r12,[r3,r1,lsl #0x2]
007eb4a8  cmp r2,r12
007eb4ac  bge 0x007eb4b8
007eb4b0  and r0,r1,#0xff
007eb4b4  bx lr
007eb4b8  add r1,r1,#0x1
007eb4bc  cmp r1,#0xc
007eb4c0  blt 0x007eb4a4
007eb4c4  bx lr
