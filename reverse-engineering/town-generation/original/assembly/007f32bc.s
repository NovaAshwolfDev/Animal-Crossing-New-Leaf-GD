007f32bc  and r2,r2,#0xf
007f32c0  and r3,r1,#0xf
007f32c4  add r1,r2,r2, lsl #0x2
007f32c8  add r2,r3,r3, lsl #0x2
007f32cc  add r0,r0,r1, lsl #0x5
007f32d0  add r0,r0,r2, lsl #0x1
007f32d4  add r0,r0,#0x1c
007f32d8  cpy r0,r0
007f32dc  ldrb r0,[r0,#0x8]
007f32e0  bx lr
