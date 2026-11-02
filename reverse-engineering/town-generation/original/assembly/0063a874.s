0063a874  stmdb sp!,{r4,r5,r6,lr}
0063a878  cpy r5,r0
0063a87c  mov r4,#0x0
0063a880  add r0,r5,r4, lsl #0x2
0063a884  add r0,r0,#0xe8
0063a888  bl 0x0029435c
0063a88c  add r4,r4,#0x1
0063a890  cmp r4,#0x2
0063a894  bcc 0x0063a880
0063a898  mov r0,#0x0
0063a89c  strb r0,[r5,#0x5]
0063a8a0  mov r0,#0x1
0063a8a4  ldmia sp!,{r4,r5,r6,pc}
