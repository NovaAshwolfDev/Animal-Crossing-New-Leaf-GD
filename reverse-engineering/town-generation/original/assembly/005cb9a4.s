005cb9a4  ldr r2,[sp,#0x0]
005cb9a8  cmp r0,r3
005cb9ac  bne 0x005cb9e8
005cb9b0  sxtb r0,r1
005cb9b4  sxtb r3,r2
005cb9b8  cmp r0,r3
005cb9bc  bne 0x005cb9dc
005cb9c0  mov r0,r1, lsl #0x10
005cb9c4  mov r1,r2, lsl #0x10
005cb9c8  mov r0,r0, asr #0x18
005cb9cc  mov r1,r1, asr #0x18
005cb9d0  cmp r0,r1
005cb9d4  bge 0x005cb9f0
005cb9d8  b 0x005cb9f8
005cb9dc  nop
005cb9e0  bge 0x005cb9f0
005cb9e4  b 0x005cb9f8
005cb9e8  nop
005cb9ec  blt 0x005cb9f8
005cb9f0  mov r0,#0x1
005cb9f4  bx lr
005cb9f8  mov r0,#0x0
005cb9fc  bx lr
