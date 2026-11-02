001ebfe0  stmdb sp!,{r4,r5,r6,lr}
001ebfe4  cpy r5,r0
001ebfe8  mov r4,#0x0
001ebfec  mov r1,#0x16
001ebff0  rsb r0,r4,r4, lsl #0x4
001ebff4  add r0,r0,r0, lsl #0x3
001ebff8  add r0,r5,r0, lsl #0x4
001ebffc  bl 0x001b7e8c
001ec000  add r4,r4,#0x1
001ec004  cmp r4,#0x8
001ec008  bcc 0x001ebfec
001ec00c  ldmia sp!,{r4,r5,r6,pc}
