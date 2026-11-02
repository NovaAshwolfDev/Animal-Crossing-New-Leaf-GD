0062e0bc  stmdb sp!,{r4,lr}
0062e0c0  cpy r4,r0
0062e0c4  bl 0x002d5e74
0062e0c8  cmp r0,#0x0
0062e0cc  beq 0x0062e0e4
0062e0d0  bl 0x0063653c
0062e0e4  cpy r0,r4
0062e0e8  bl 0x002d5e58
0062e0ec  cmp r0,#0x0
0062e0f0  nop
0062e0f4  beq 0x0062e120
0062e0f8  cpy r0,r4
0062e0fc  bl 0x002d589c
0062e100  cmp r0,#0x4
0062e104  nop
0062e108  bcs 0x0062e120
0062e10c  ldr r1,[0x62e128]
0062e110  mul r0,r0,r1
0062e114  ldr r1,[0x62e12c]
0062e118  add r0,r1,r0, lsl #0x4
0062e11c  ldmia sp!,{r4,pc}
0062e120  mov r0,#0x0
0062e124  ldmia sp!,{r4,pc}
