007e8294  stmdb sp!,{r4,r5,r6,r7,r8,r9,lr}
007e8298  cmp r1,#0x0
007e829c  cpy r4,r0
007e82a0  vpush {d8}
007e82a4  sub sp,sp,#0xc
007e82a8  beq 0x007e8388
007e82ac  ldr r8,[r1,#0x4]
007e82b0  vldr.32 s16,[r1]
007e82b4  vldr.32 s17,[r1,#0x8]
007e82b8  cpy r0,r4
007e82bc  bl 0x007f37b0
007e82c0  cpy r7,r0
007e82c4  nop
007e82c8  bl 0x006a905c
007e82cc  cmp r0,#0x3
007e82d0  nop
007e82d4  beq 0x007e83f4
007e82d8  cmp r7,#0x8
007e82dc  bcs 0x007e83f4
007e82e0  vstr.32 s16,[sp]
007e82e4  str r8,[sp,#0x4]
007e82e8  ldr r0,[0x7e8414]
007e82ec  vstr.32 s17,[sp,#0x8]
007e82f0  ldrh r1,[sp,#0x7]
007e82f4  add r0,r0,r7, lsl #0x3
007e82f8  ldmia r0,{r5,r6}
007e82fc  rev16 r4,r1
007e8300  bl 0x0063653c
007e8388  nop
007e838c  bl 0x005cc158
007e8390  ldr r8,[r0,#0x4]
007e8394  vldr.32 s16,[r0]
007e8398  vldr.32 s17,[r0,#0x8]
007e839c  b 0x007e82b8
007e83f4  add sp,sp,#0xc
007e83f8  mov r0,#0x0
007e83fc  vpop {d8}
007e8400  ldmia sp!,{r4,r5,r6,r7,r8,r9,pc}
