0061f74c  stmdb sp!,{r4,r5,r6,r7,r8,r9,lr}
0061f750  sub sp,sp,#0x14
0061f754  cpy r4,r0
0061f758  mov r8,#0x21
0061f75c  ldrb r5,[r0,#0x9]
0061f760  mov r6,#0xff
0061f764  mov r7,#0x9
0061f768  cmp r5,#0xb
0061f76c  mvn r9,#0x0
0061f770  beq 0x0061f7d4
0061f774  cmp r1,#0x0
0061f778  beq 0x0061f7f4
0061f77c  cmp r5,#0x3
0061f780  bge 0x0061f7b0
0061f784  bl 0x00636e3c
0061f788  bl 0x006378a0
0061f78c  ldrsb r1,[r4,#0xb]
0061f790  add r0,r0,#0x4
0061f794  bl 0x006138d4
0061f798  cmp r0,#0x0
0061f79c  beq 0x0061f7b0
0061f7a0  mov r3,#0x1
0061f7a4  mov r2,#0x0
0061f7a8  mvn r1,#0x1
0061f7ac  bl 0x0061f8ac
0061f7b0  cpy r0,r4
0061f7b4  strb r8,[r4,#0x8]
0061f7b8  bl 0x0063aca4
0061f7bc  strb r6,[r4,#0x9]
0061f7c0  strb r7,[r4,#0xa]
0061f7c4  strb r9,[r4,#0xb]
0061f7c8  strb r9,[r4,#0xc]
0061f7cc  add sp,sp,#0x14
0061f7d0  ldmia sp!,{r4,r5,r6,r7,r8,r9,pc}
0061f7d4  strb r8,[r4,#0x8]
0061f7d8  bl 0x0063aca4
0061f7dc  strb r6,[r4,#0x9]
0061f7e0  strb r7,[r4,#0xa]
0061f7e4  strb r9,[r4,#0xb]
0061f7e8  strb r9,[r4,#0xc]
0061f7ec  add sp,sp,#0x14
0061f7f0  ldmia sp!,{r4,r5,r6,r7,r8,r9,pc}
0061f7f4  nop
0061f7f8  bl 0x005cd9b0
0061f7fc  cmp r0,#0x0
0061f800  nop
0061f804  beq 0x0061f85c
0061f808  ldrb r0,[r4,#0x8]
0061f80c  cmp r0,#0x21
0061f810  bcs 0x0061f85c
0061f814  ldrb r0,[r4,#0x9]
0061f818  cmp r0,#0x3
0061f81c  beq 0x0061f85c
0061f820  add r0,sp,#0x8
0061f824  cpy r1,r4
0061f828  bl 0x007edb08
0061f82c  nop
0061f830  nop
0061f834  bl 0x005cc158
0061f838  add r3,sp,#0xc
0061f83c  ldmia r3,{r1,r2}
0061f840  stmia sp,{r1,r2}
0061f844  ldmia r0,{r0,r1,r2}
0061f848  ldr r3,[sp,#0x8]
0061f84c  bl 0x005cd080
0061f850  cmp r0,#0x0
0061f854  nop
0061f858  beq 0x0061f7b0
0061f85c  cmp r5,#0x1
0061f860  bne 0x0061f7cc
0061f864  mov r0,#0x6
0061f868  strb r0,[r4,#0x9]
0061f86c  bl 0x00636e3c
0061f870  nop
0061f874  nop
0061f878  bl 0x006378a0
0061f87c  ldrsb r1,[r4,#0xc]
0061f880  add r0,r0,#0x4
0061f884  bl 0x006138d4
0061f888  cmp r0,#0x0
0061f88c  nop
0061f890  beq 0x0061f7cc
0061f894  add sp,sp,#0x14
0061f898  mov r3,#0x1
0061f89c  ldmia sp!,{r4,r5,r6,r7,r8,r9,lr}
0061f8a0  mov r2,#0x0
0061f8a4  mvn r1,#0x0
0061f8a8  cpy r0,r0
