001b6218  stmdb sp!,{r4,r5,r6,r7,r8,lr}
001b621c  cpy r6,r1
001b6220  cpy r7,r2
001b6224  cpy r5,r0
001b6228  bl 0x001b5c88
001b622c  mov r4,#0x0
001b6230  add r0,r5,r4, lsl #0x2
001b6234  bl 0x00802710
001b6238  cmp r0,#0x0
001b623c  nop
001b6240  beq 0x001b625c
001b6244  cpy r3,r7
001b6248  cpy r2,r6
001b624c  cpy r1,r4
001b6250  cpy r0,r5
001b6254  ldmia sp!,{r4,r5,r6,r7,r8,lr}
001b6258  b 0x001b62bc
001b625c  add r4,r4,#0x1
001b6260  cmp r4,#0x10
001b6264  bcc 0x001b6230
001b6268  mov r0,#0x0
001b626c  ldmia sp!,{r4,r5,r6,r7,r8,pc}
