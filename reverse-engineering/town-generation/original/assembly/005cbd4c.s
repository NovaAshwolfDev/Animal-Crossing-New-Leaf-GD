005cbd4c  ldr r2,[sp,#0x0]
005cbd50  cmp r0,r3
005cbd54  bne 0x005cbd84
005cbd58  sxtb r0,r1
005cbd5c  sxtb r3,r2
005cbd60  cmp r0,r3
005cbd64  bne 0x005cbd84
005cbd68  mov r0,r1, lsl #0x10
005cbd6c  mov r1,r2, lsl #0x10
005cbd70  mov r0,r0, asr #0x18
005cbd74  mov r1,r1, asr #0x18
005cbd78  cmp r0,r1
005cbd7c  moveq r0,#0x1
005cbd80  beq 0x005cbd88
005cbd84  mov r0,#0x0
005cbd88  bx lr
