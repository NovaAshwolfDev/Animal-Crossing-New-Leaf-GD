00446ba0  stmdb sp!,{r4,r5,r6,lr}
00446ba4  ldr r5,[0x446bf8]
00446ba8  ldrb r0,[r5,#0x0]
00446bac  cmp r0,#0x0
00446bb0  beq 0x00446bf4
00446bb4  ldr r0,[0x446bfc]
00446bb8  mov r4,#0x0
00446bbc  mov r2,r1, lsl #0x10
00446bc0  mov r3,r1, lsl #0x8
00446bc4  str r4,[r0,#0x4]
00446bc8  mov r2,r2, lsr #0x18
00446bcc  strb r1,[r0,#0x8]
00446bd0  mov r3,r3, asr #0x18
00446bd4  strb r2,[r0,#0x9]
00446bd8  strb r3,[r0,#0xa]
00446bdc  sub r0,r0,#0x64
00446be0  mvn r1,#0x0
00446be4  str r1,[r0,#0x60]
00446be8  bl 0x0011bea0
00446bec  str r4,[r5,#0x4]
00446bf0  strb r4,[r5,#0x0]
00446bf4  ldmia sp!,{r4,r5,r6,pc}
