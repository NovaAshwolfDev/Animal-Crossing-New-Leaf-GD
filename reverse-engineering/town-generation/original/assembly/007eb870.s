007eb870  cmp r1,#0x3
007eb874  movcs r0,#0x0
007eb878  bcs 0x007eb88c
007eb87c  add r2,r1,r1, lsl #0x1
007eb880  add r1,r2,r1, lsl #0x3
007eb884  add r0,r0,r1, lsl #0x1
007eb888  add r0,r0,#0x8
007eb88c  bx lr
