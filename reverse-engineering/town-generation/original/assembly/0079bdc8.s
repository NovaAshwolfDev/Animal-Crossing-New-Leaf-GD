0079bdc8  stmdb sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,lr}
0079bdcc  cpy r4,r1
0079bdd0  cpy r7,r2
0079bdd4  mov r1,#0x0
0079bdd8  cpy r5,r0
0079bddc  cpy r2,r1
0079bde0  ldr r0,[r5,r2,lsl #0x2]
0079bde4  cmp r0,#0x0
0079bde8  beq 0x0079bdfc
0079bdec  tst r0,#0x1
0079bdf0  addne r1,r1,#0x1
0079bdf4  movs r0,r0, lsr #0x1
0079bdf8  bne 0x0079bdec
0079bdfc  add r2,r2,#0x1
0079be00  cmp r2,#0x8e
0079be04  bcc 0x0079bde0
0079be08  cpy r0,r1
0079be0c  bl 0x0011df38
0079be10  cpy r1,r0
0079be14  cpy r0,r5
0079be18  bl 0x008072dc
0079be1c  cpy r6,r0
0079be20  mov r1,#0x2000
0079be24  cpy r0,sp
0079be28  bl 0x00756d40
0079be2c  cpy r0,sp
0079be30  nop
0079be34  bl 0x005a20f8
0079be38  ldr r3,[0x79bf4c]
0079be3c  cmp r7,#0x0
0079be40  mov r2,#0x1
0079be44  mov r1,#0x0
0079be48  movne r7,#0x7
0079be4c  movne r9,#0x4
0079be50  beq 0x0079bea4
0079be54  ldrb r12,[r0,#0x19]
0079be58  cmp r7,r12, lsr #0x4
0079be5c  movhi r8,r12, lsr #0x4
0079be60  movls r8,#0x0
0079be64  cmp r8,r4
0079be68  beq 0x0079be90
0079be6c  cmp r7,r12, lsr #0x4
0079be70  bls 0x0079be7c
0079be74  cmp r9,r12, lsr #0x4
0079be78  beq 0x0079be90
0079be7c  mov r12,r1, lsr #0x5
0079be80  and r8,r1,#0x1f
0079be84  ldr r10,[r5,r12,lsl #0x2]
0079be88  bic r8,r10,r2, lsl r8
0079be8c  str r8,[r5,r12,lsl #0x2]
0079be90  add r1,r1,#0x1
0079be94  cmp r1,r3
0079be98  add r0,r0,#0x22
0079be9c  bcc 0x0079be54
0079bea0  b 0x0079bee0
0079bea4  ldrb r12,[r0,#0x19]
0079bea8  mov r12,r12, lsr #0x4
0079beac  cmp r12,#0x7
0079beb0  movcs r12,#0x0
0079beb4  cmp r12,r4
0079beb8  beq 0x0079bed0
0079bebc  mov r12,r1, lsr #0x5
0079bec0  and r7,r1,#0x1f
0079bec4  ldr r8,[r5,r12,lsl #0x2]
0079bec8  bic r7,r8,r2, lsl r7
0079becc  str r7,[r5,r12,lsl #0x2]
0079bed0  add r1,r1,#0x1
0079bed4  cmp r1,r3
0079bed8  add r0,r0,#0x22
0079bedc  bcc 0x0079bea4
0079bee0  mov r3,#0x0
0079bee4  cpy r1,r3
0079bee8  ldr r0,[r5,r1,lsl #0x2]
0079beec  cmp r0,#0x0
0079bef0  beq 0x0079bf04
0079bef4  tst r0,#0x1
0079bef8  addne r3,r3,#0x1
0079befc  movs r0,r0, lsr #0x1
0079bf00  bne 0x0079bef4
0079bf04  add r1,r1,#0x1
0079bf08  cmp r1,#0x8e
0079bf0c  bcc 0x0079bee8
0079bf10  cmp r3,#0x0
0079bf14  beq 0x0079bf28
0079bf18  cpy r0,sp
0079bf1c  cpy r0,r0
0079bf20  mov r0,#0x1
0079bf24  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,pc}
0079bf28  mov r0,r6, lsr #0x5
0079bf2c  and r1,r6,#0x1f
0079bf30  ldr r3,[r5,r0,lsl #0x2]
0079bf34  orr r1,r3,r2, lsl r1
0079bf38  str r1,[r5,r0,lsl #0x2]
0079bf3c  cpy r0,sp
0079bf40  cpy r0,r0
0079bf44  mov r0,#0x0
0079bf48  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,pc}
