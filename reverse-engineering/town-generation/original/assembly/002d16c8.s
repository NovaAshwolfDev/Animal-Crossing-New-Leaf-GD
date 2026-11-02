002d16c8  stmdb sp!,{r4,lr}
002d16cc  ldr r1,[r0,#0x8]
002d16d0  cpy r4,r0
002d16d4  ldr r0,[r0,#0xc]
002d16d8  mov r2,#0xff
002d16dc  mov r1,r1, lsl #0x2
002d16e0  bl 0x00125b48
002d16e4  ldr r0,[r4,#0x4]
002d16e8  str r0,[r4,#0x10]
002d16ec  ldmia sp!,{r4,pc}
