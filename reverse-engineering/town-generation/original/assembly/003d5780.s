003d5780  stmdb sp!,{r4,lr}
003d5784  cpy r4,r0
003d5788  bl 0x00121a94
003d578c  mov r0,#0x0
003d5790  str r0,[r4,#0xf8]
003d5794  mov r0,#0x1
003d5798  ldmia sp!,{r4,pc}
