005e3528  ldr r0,[0x5e3538]
005e352c  ldr r0,[r0,#0x0]
005e3530  add r0,r0,#0x450
005e3534  b 0x007b7f40
007b7f40  mov r0,#0x4
007b7f44  stmdb sp!,{r4,lr}
007b7f48  bl 0x0011df38
007b7f4c  ldr r1,[0x7b7f58]
007b7f50  add r0,r1,r0, lsl #0x4
007b7f54  ldmia sp!,{r4,pc}
