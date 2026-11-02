0079bc00  stmdb sp!,{r3,r4,r5,r6,r7,r8,r9,lr}
0079bc04  cpy r5,r1
0079bc08  cpy r6,r0
0079bc0c  mov r1,#0x2000
0079bc10  cpy r0,sp
0079bc14  bl 0x00756d40
0079bc18  cpy r0,sp
0079bc1c  bl 0x005a20f8
0079bc20  cpy r4,r0
0079bc24  bl 0x00636e3c
0079bc28  ldr r1,[0x79bca0]
0079bc2c  ldr r3,[0x79bca4]
0079bc30  mov r12,#0x1
0079bc34  ldrb r0,[r0,r1]
0079bc38  movs r0,r0, lsr #0x4
0079bc3c  moveq r2,#0x1
0079bc40  movne r2,#0x0
0079bc44  mov r0,#0x0
0079bc48  ldrb r1,[r4,#0xc]
0079bc4c  cmp r1,#0x67
0079bc50  movcs r1,#0x0
0079bc54  cmp r1,r5
0079bc58  bne 0x0079bc84
0079bc5c  cmp r2,#0x0
0079bc60  bne 0x0079bc70
0079bc64  ldrb r1,[r4,#0x1f]
0079bc68  movs r1,r1, lsl #0x19
0079bc6c  bmi 0x0079bc84
0079bc70  mov r1,r0, lsr #0x5
0079bc74  and r7,r0,#0x1f
0079bc78  ldr r8,[r6,r1,lsl #0x2]
0079bc7c  orr r7,r8,r12, lsl r7
0079bc80  str r7,[r6,r1,lsl #0x2]
0079bc84  add r0,r0,#0x1
0079bc88  cmp r0,r3
0079bc8c  add r4,r4,#0x22
0079bc90  bcc 0x0079bc48
0079bc94  cpy r0,sp
0079bc98  cpy r0,r0
0079bc9c  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,pc}
