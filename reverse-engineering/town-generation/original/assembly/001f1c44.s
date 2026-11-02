001f1c44  stmdb sp!,{r4,r5,r6,lr}
001f1c48  mov r4,#0x0
001f1c4c  sub sp,sp,#0x238
001f1c50  cpy r5,r0
001f1c54  cpy r6,r4
001f1c58  add r0,r5,r4, lsl #0x2
001f1c5c  ldr r1,[0x1f1cf8]
001f1c60  add r0,r0,#0x12
001f1c64  bl 0x00756eb0
001f1c68  add r0,r5,r4
001f1c6c  add r4,r4,#0x1
001f1c70  cmp r4,#0x6
001f1c74  strb r6,[r0,#0x2a]
001f1c78  blt 0x001f1c58
001f1c7c  cpy r0,sp
001f1c80  bl 0x0079c070
001f1c84  mov r3,#0x0
001f1c88  mov r2,#0x28
001f1c8c  mov r1,#0xb
001f1c90  cpy r0,sp
001f1c94  bl 0x0079822c
001f1c98  cpy r2,sp
001f1c9c  mov r1,#0x4
001f1ca0  add r0,r5,#0x12
001f1ca4  bl 0x001aea7c
001f1ca8  cpy r0,sp
001f1cac  nop
001f1cb0  cpy r0,r0
001f1cb4  cpy r0,sp
001f1cb8  nop
001f1cbc  bl 0x0079c070
001f1cc0  mov r3,#0x0
001f1cc4  mov r2,#0x28
001f1cc8  mov r1,#0xa
001f1ccc  cpy r0,sp
001f1cd0  bl 0x0079822c
001f1cd4  cpy r2,sp
001f1cd8  mov r1,#0x2
001f1cdc  add r0,r5,#0x22
001f1ce0  bl 0x001aea7c
001f1ce4  cpy r0,sp
001f1ce8  nop
001f1cec  cpy r0,r0
001f1cf0  add sp,sp,#0x238
001f1cf4  ldmia sp!,{r4,r5,r6,pc}
