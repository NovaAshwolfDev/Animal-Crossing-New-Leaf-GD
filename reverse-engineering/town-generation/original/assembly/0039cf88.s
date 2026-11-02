0039cf88  stmdb sp!,{r3,r4,r5,r6,r7,r8,r9,lr}
0039cf8c  cpy r7,r0
0039cf90  bl 0x0039cc1c
0039cf94  mov r0,#0x1
0039cf98  strb r0,[r7,#0x1e]
0039cf9c  mov r8,#0x0
0039cfa0  add r0,r7,#0x22
0039cfa4  strb r8,[r7,#0x1f]
0039cfa8  bl 0x005e2810
0039cfac  mov r6,#0x0
0039cfb0  mov r4,#0x0
0039cfb4  add r0,r6,r6, lsl #0x2
0039cfb8  add r5,r7,r0, lsl #0x3
0039cfbc  add r0,r5,r4, lsl #0x2
0039cfc0  ldr r1,[0x39d098]
0039cfc4  add r0,r0,#0x62
0039cfc8  bl 0x00756eb0
0039cfcc  add r4,r4,#0x1
0039cfd0  cmp r4,#0xa
0039cfd4  bcc 0x0039cfbc
0039cfd8  add r6,r6,#0x1
0039cfdc  cmp r6,#0xa
0039cfe0  bcc 0x0039cfb0
0039cfe4  mov r6,#0x0
0039cfe8  mov r4,#0x0
0039cfec  add r5,r7,r6, lsl #0x5
0039cff0  add r0,r5,r4, lsl #0x2
0039cff4  add r0,r0,#0x100
0039cff8  ldr r1,[0x39d098]
0039cffc  add r0,r0,#0xf2
0039d000  bl 0x00756eb0
0039d004  add r4,r4,#0x1
0039d008  cmp r4,#0x8
0039d00c  bcc 0x0039cff0
0039d010  add r6,r6,#0x1
0039d014  cmp r6,#0x8
0039d018  bcc 0x0039cfe8
0039d01c  ldr r1,[0x39d09c]
0039d020  cpy r0,sp
0039d024  bl 0x00756d40
0039d028  cpy r1,r0
0039d02c  add r0,r7,#0x200
0039d030  add r0,r0,#0xf2
0039d034  bl 0x00756eb0
0039d038  cpy r0,sp
0039d03c  nop
0039d040  cpy r0,r0
0039d044  ldr r1,[0x39d0a0]
0039d048  cpy r0,sp
0039d04c  bl 0x00756d40
0039d050  cpy r1,r0
0039d054  add r0,r7,#0x200
0039d058  add r0,r0,#0xf6
0039d05c  bl 0x00756eb0
0039d060  cpy r0,sp
0039d064  nop
0039d068  cpy r0,r0
0039d06c  add r0,r7,#0x200
0039d070  strb r8,[r7,#0x20]
0039d074  ldr r1,[0x39d098]
0039d078  add r0,r0,#0xfa
0039d07c  strb r8,[r7,#0x21]
0039d080  bl 0x00756eb0
0039d084  add r0,r7,#0x200
0039d088  ldr r1,[0x39d098]
0039d08c  add r0,r0,#0xfe
0039d090  bl 0x00756eb0
0039d094  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,pc}
