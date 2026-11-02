002d686c  stmdb sp!,{r4,r5,r6,lr}
002d6870  mov r4,#0x0
002d6874  sub sp,sp,#0x248
002d6878  cpy r5,r0
002d687c  cpy r6,r4
002d6880  add r0,r5,r4, lsl #0x2
002d6884  ldr r1,[0x2d6c14]
002d6888  add r0,r0,#0x2
002d688c  bl 0x00756eb0
002d6890  add r0,r5,r4
002d6894  add r4,r4,#0x1
002d6898  cmp r4,#0x3
002d689c  strb r6,[r0,#0xe]
002d68a0  blt 0x002d6880
002d68a4  cpy r0,sp
002d68a8  bl 0x0079c070
002d68ac  mov r3,#0x0
002d68b0  mov r2,#0x30
002d68b4  mov r1,#0x5
002d68b8  cpy r0,sp
002d68bc  bl 0x0079822c
002d68c0  cpy r2,sp
002d68c4  mov r1,#0x1
002d68c8  add r0,r5,#0x2
002d68cc  bl 0x001aea7c
002d68d0  cpy r0,sp
002d68d4  nop
002d68d8  cpy r0,r0
002d68dc  cpy r0,sp
002d68e0  nop
002d68e4  bl 0x0079c070
002d68e8  nop
002d68ec  nop
002d68f0  bl 0x0063653c
