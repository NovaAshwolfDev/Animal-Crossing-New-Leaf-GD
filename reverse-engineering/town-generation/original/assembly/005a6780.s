005a6780  cmp r1,#0x0
005a6784  ble 0x005a679c
005a6788  cmp r2,#0x0
005a678c  beq 0x005a679c
005a6790  mov r3,#0x0
005a6794  str r3,[r0],#0x4
005a6798  stmia r0,{r1,r2}
005a679c  bx lr
