002901a8  stmdb sp!,{r4,r5,r6,lr}
002901ac  cpy r4,r0
002901b0  cpy r5,r1
002901b4  bl 0x0062ef88
002901b8  cmp r0,#0x0
002901bc  beq 0x002901dc
002901c0  add r0,r0,#0x5400
002901c4  add r0,r0,#0x1dc
002901c8  cpy r1,r5
002901cc  add r0,r0,r4, lsl #0x3
002901d0  ldmia sp!,{r4,r5,r6,lr}
002901d4  mvn r2,#0x0
002901d8  b 0x00697df4
002901dc  ldmia sp!,{r4,r5,r6,pc}
