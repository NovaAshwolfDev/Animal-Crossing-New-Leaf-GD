001ebfc8  cmp r1,#0x8
001ebfcc  bcs 0x001ebfdc
001ebfd0  rsb r1,r1,r1, lsl #0x4
001ebfd4  add r1,r1,r1, lsl #0x3
001ebfd8  add r0,r0,r1, lsl #0x4
001ebfdc  bx lr
