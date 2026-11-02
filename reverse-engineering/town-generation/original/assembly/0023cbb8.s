0023cbb8  stmdb sp!,{r4,r5,r6,r7,lr}
0023cbbc  sub sp,sp,#0x23c
0023cbc0  cpy r5,r0
0023cbc4  cpy r7,r1
0023cbc8  mov r4,#0x0
0023cbcc  ldr r1,[0x23cd8c]
0023cbd0  add r0,r5,r4, lsl #0x2
0023cbd4  bl 0x00756eb0
0023cbd8  add r4,r4,#0x1
0023cbdc  cmp r4,#0x4
0023cbe0  blt 0x0023cbcc
0023cbe4  mov r4,#0x0
0023cbe8  cpy r6,r4
0023cbec  mov r0,#0x64
0023cbf0  bl 0x0011df38
0023cbf4  cmp r0,#0xa
0023cbf8  nop
0023cbfc  bge 0x0023cc74
0023cc00  cpy r0,sp
0023cc04  bl 0x0079c070
0023cc08  mov r0,#0x64
0023cc0c  nop
0023cc10  bl 0x0011df38
0023cc14  cmp r0,#0x19
0023cc18  nop
0023cc1c  bge 0x0023cc4c
0023cc20  mov r1,#0x60
0023cc24  cpy r0,sp
0023cc28  bl 0x0079aee4
0023cc2c  mov r6,#0x1
0023cc30  cpy r2,sp
0023cc34  cpy r1,r6
0023cc38  cpy r0,r5
0023cc3c  bl 0x001aea7c
0023cc40  nop
0023cc44  nop
0023cc48  b 0x0023cc6c
0023cc4c  mov r1,#0x5d
0023cc50  cpy r0,sp
0023cc54  bl 0x0079aee4
0023cc58  cpy r2,sp
0023cc5c  mov r1,#0x1
0023cc60  add r0,r5,#0x4
0023cc64  bl 0x001aea7c
0023cc68  mov r4,#0x1
0023cc6c  cpy r0,sp
0023cc70  cpy r0,r0
0023cc74  cmp r7,#0x0
0023cc78  beq 0x0023cd18
0023cc7c  mov r0,#0x64
0023cc80  bl 0x0011df38
0023cc84  cmp r0,#0x14
0023cc88  nop
0023cc8c  bge 0x0023cd18
0023cc90  cpy r0,sp
0023cc94  bl 0x0079c070
0023cc98  cmp r6,#0x0
0023cc9c  nop
0023cca0  bne 0x0023ccec
0023cca4  mov r0,#0x64
0023cca8  bl 0x0011df38
0023ccac  cmp r0,#0x19
0023ccb0  nop
0023ccb4  bge 0x0023ccec
0023ccb8  mov r1,#0x62
0023ccbc  cpy r0,sp
0023ccc0  bl 0x0079aee4
0023ccc4  cpy r2,sp
0023ccc8  mov r1,#0x1
0023cccc  cpy r0,r5
0023ccd0  bl 0x001aea7c
0023ccd4  cpy r0,sp
0023ccd8  nop
0023ccdc  cpy r0,r0
0023cce0  nop
0023cce4  nop
0023cce8  b 0x0023cd50
0023ccec  mov r1,#0x5f
0023ccf0  cpy r0,sp
0023ccf4  bl 0x0079aee4
0023ccf8  add r0,r5,r4, lsl #0x2
0023ccfc  add r0,r0,#0x4
0023cd00  cpy r2,sp
0023cd04  mov r1,#0x1
0023cd08  bl 0x001aea7c
0023cd0c  add r4,r4,#0x1
0023cd10  cpy r0,sp
0023cd14  cpy r0,r0
0023cd18  cmp r6,#0x0
0023cd1c  bne 0x0023cd50
0023cd20  cpy r0,sp
0023cd24  bl 0x0079c070
0023cd28  mov r1,#0x61
0023cd2c  cpy r0,sp
0023cd30  bl 0x0079aee4
0023cd34  cpy r2,sp
0023cd38  mov r1,#0x1
0023cd3c  cpy r0,r5
0023cd40  bl 0x001aea7c
0023cd44  cpy r0,sp
0023cd48  nop
0023cd4c  cpy r0,r0
0023cd50  cpy r0,sp
0023cd54  bl 0x0079c070
0023cd58  mov r1,#0x5e
0023cd5c  cpy r0,sp
0023cd60  bl 0x0079aee4
0023cd64  add r0,r5,r4, lsl #0x2
0023cd68  rsb r1,r4,#0x3
0023cd6c  add r0,r0,#0x4
0023cd70  cpy r2,sp
0023cd74  bl 0x001aea7c
0023cd78  cpy r0,sp
0023cd7c  nop
0023cd80  cpy r0,r0
0023cd84  add sp,sp,#0x23c
0023cd88  ldmia sp!,{r4,r5,r6,r7,pc}
