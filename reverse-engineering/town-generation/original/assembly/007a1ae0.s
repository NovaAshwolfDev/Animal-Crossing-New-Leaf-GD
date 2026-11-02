007a1ae0  stmdb sp!,{r4,r5,r6,r7,r8,r9,lr}
007a1ae4  sub sp,sp,#0x7c
007a1ae8  cpy r7,r0
007a1aec  cpy r8,r1
007a1af0  mov r0,#0x1
007a1af4  bl 0x0074702c
007a1af8  cmp r0,#0x0
007a1afc  beq 0x007a1c9c
007a1b00  cpy r0,r0
007a1b04  cpy r1,r0
007a1b08  add r0,sp,#0x50
007a1b0c  bl 0x0059b104
007a1b10  cpy r5,sp
007a1b14  add r9,sp,#0x50
007a1b18  mov r0,#0x1
007a1b1c  bl 0x0074702c
007a1b20  cpy r4,r0
007a1b24  cpy r1,r9
007a1b28  add r0,sp,#0x20
007a1b2c  bl 0x007dca10
007a1b30  add r6,sp,#0x20
007a1b34  cpy r1,r9
007a1b38  add r0,sp,#0x40
007a1b3c  bl 0x007dc9d8
007a1b40  ldr r0,[sp,#0x40]
007a1b44  add r1,sp,#0x48
007a1b48  str r0,[sp,#0x30]
007a1b4c  ldr r2,[sp,#0x44]
007a1b50  add r0,sp,#0x38
007a1b54  str r2,[sp,#0x34]
007a1b58  bl 0x0059afac
007a1b5c  ldr r0,[sp,#0x20]
007a1b60  add r1,r6,#0x8
007a1b64  str r0,[sp,#0x10]
007a1b68  ldr r0,[sp,#0x24]
007a1b6c  str r0,[sp,#0x14]
007a1b70  add r0,sp,#0x18
007a1b74  bl 0x0059afac
007a1b78  add r1,sp,#0x30
007a1b7c  add r0,sp,#0x10
007a1b80  bl 0x007dc980
007a1b84  cmp r0,#0x0
007a1b88  beq 0x007a1bf4
007a1b8c  add r0,sp,#0x10
007a1b90  add r0,r0,#0x8
007a1b94  cmp r4,#0x0
007a1b98  nop
007a1b9c  beq 0x007a1bd4
007a1ba0  ldmia r0,{r1,r2}
007a1ba4  cpy r0,r4
007a1ba8  bl 0x007e23e0
007a1bac  cmp r0,#0x0
007a1bb0  nop
007a1bb4  beq 0x007a1bd4
007a1bb8  ldrh r0,[r0,#0x0]
007a1bbc  nop
007a1bc0  nop
007a1bc4  bl 0x00687d78
007a1bc8  cmp r0,#0x1
007a1bcc  nop
007a1bd0  beq 0x007a1ca4
007a1bd4  add r0,sp,#0x10
007a1bd8  bl 0x0059b024
007a1bdc  add r1,sp,#0x30
007a1be0  add r0,sp,#0x10
007a1be4  bl 0x007dc980
007a1be8  cmp r0,#0x0
007a1bec  nop
007a1bf0  bne 0x007a1b8c
007a1bf4  add r0,sp,#0x10
007a1bf8  cpy r0,r0
007a1bfc  ldr r1,[sp,#0x30]
007a1c00  add r0,r5,#0x8
007a1c04  str r1,[sp,#0x0]
007a1c08  ldr r1,[sp,#0x34]
007a1c0c  str r1,[sp,#0x4]
007a1c10  add r1,sp,#0x38
007a1c14  bl 0x0059afac
007a1c18  add r0,sp,#0x30
007a1c1c  nop
007a1c20  cpy r0,r0
007a1c24  add r0,sp,#0x40
007a1c28  cpy r0,r0
007a1c2c  add r0,sp,#0x20
007a1c30  nop
007a1c34  cpy r0,r0
007a1c38  add r1,sp,#0x50
007a1c3c  add r0,sp,#0x68
007a1c40  bl 0x007dc9d8
007a1c44  add r1,sp,#0x68
007a1c48  cpy r0,sp
007a1c4c  bl 0x007dc980
007a1c50  cpy r4,r0
007a1c54  add r0,sp,#0x68
007a1c58  cpy r0,r0
007a1c5c  cmp r4,#0x0
007a1c60  nop
007a1c64  beq 0x007a1c88
007a1c68  cpy r0,sp
007a1c6c  add r0,r0,#0x8
007a1c70  ldr r0,[r0,#0x0]
007a1c74  str r0,[r7,#0x0]
007a1c78  cpy r0,sp
007a1c7c  add r0,r0,#0x8
007a1c80  ldr r0,[r0,#0x4]
007a1c84  str r0,[r8,#0x0]
007a1c88  cpy r0,sp
007a1c8c  cpy r0,r0
007a1c90  add r0,sp,#0x50
007a1c94  nop
007a1c98  cpy r0,r0
007a1c9c  add sp,sp,#0x7c
007a1ca0  ldmia sp!,{r4,r5,r6,r7,r8,r9,pc}
007a1ca4  ldr r0,[sp,#0x10]
007a1ca8  add r1,sp,#0x18
007a1cac  str r0,[sp,#0x0]
007a1cb0  ldr r0,[sp,#0x14]
007a1cb4  str r0,[sp,#0x4]
007a1cb8  add r0,r5,#0x8
007a1cbc  bl 0x0059afac
007a1cc0  add r0,sp,#0x10
007a1cc4  nop
007a1cc8  cpy r0,r0
007a1ccc  add r0,sp,#0x30
007a1cd0  nop
007a1cd4  cpy r0,r0
007a1cd8  nop
007a1cdc  nop
007a1ce0  b 0x007a1c24
