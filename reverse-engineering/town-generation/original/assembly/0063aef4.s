0063aef4  stmdb sp!,{r4,r5,r6,r7,r8,r9}
0063aef8  cmp r1,#0xfd
0063aefc  bcs 0x0063af90
0063af00  ldr r3,[0x63b00c]
0063af04  bic r4,r12,#0xff
0063af08  bic r12,r2,#0xff
0063af0c  mov r2,r1, lsl #0x3
0063af10  add r1,r3,r2
0063af14  ldrb r2,[r3,r2]
0063af18  ldrb r3,[r1,#0x4]
0063af1c  ldrb r5,[r1,#0x5]
0063af20  ldrb r7,[r1,#0x1]
0063af24  orr r3,r3,r12
0063af28  orr r2,r2,r4
0063af2c  mov r12,r5, lsl #0x8
0063af30  ldrb r6,[r1,#0x2]
0063af34  mov r4,r7, lsl #0x8
0063af38  ldrb r8,[r1,#0x6]
0063af3c  and r5,r4,#0xff00
0063af40  and r12,r12,#0xff00
0063af44  bic r3,r3,#0xff00
0063af48  bic r2,r2,#0xff00
0063af4c  orr r3,r3,r12
0063af50  ldrb r9,[r1,#0x3]
0063af54  ldrb r12,[r1,#0x7]
0063af58  mov r4,r6, lsl #0x10
0063af5c  orr r2,r2,r5
0063af60  mov r5,r8, lsl #0x10
0063af64  and r1,r4,#0xff0000
0063af68  and r4,r5,#0xff0000
0063af6c  bic r5,r2,#0xff0000
0063af70  bic r2,r3,#0xff0000
0063af74  orr r1,r1,r5
0063af78  orr r2,r2,r4
0063af7c  bic r1,r1,#0xff000000
0063af80  bic r2,r2,#0xff000000
0063af84  orr r1,r1,r9, lsl #0x18
0063af88  orr r2,r2,r12, lsl #0x18
0063af8c  b 0x0063affc
0063af90  mov r1,#0xfd
0063af94  bic r3,r12,#0xff
0063af98  bic r12,r2,#0xff
0063af9c  orr r2,r3,r1
0063afa0  orr r3,r12,r1
0063afa4  mov r4,r1, lsl #0x8
0063afa8  and r12,r4,#0xff00
0063afac  mov r5,r1, lsl #0x8
0063afb0  bic r2,r2,#0xff00
0063afb4  bic r6,r3,#0xff00
0063afb8  and r4,r5,#0xff00
0063afbc  orr r3,r2,r12
0063afc0  orr r2,r6,r4
0063afc4  mov r5,r1, lsl #0x10
0063afc8  and r12,r5,#0xff0000
0063afcc  bic r3,r3,#0xff0000
0063afd0  bic r5,r2,#0xff0000
0063afd4  mov r4,r1, lsl #0x10
0063afd8  orr r2,r3,r12
0063afdc  and r4,r4,#0xff0000
0063afe0  orr r3,r5,r4
0063afe4  mov r12,r1, lsl #0x18
0063afe8  mov r4,r1, lsl #0x18
0063afec  bic r1,r2,#0xff000000
0063aff0  bic r2,r3,#0xff000000
0063aff4  orr r1,r1,r12
0063aff8  orr r2,r2,r4
0063affc  str r1,[r0,#0x0]
0063b000  str r2,[r0,#0x4]
0063b004  ldmia sp!,{r4,r5,r6,r7,r8,r9}
0063b008  bx lr
