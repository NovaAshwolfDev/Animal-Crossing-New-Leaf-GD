007fce4c  cpy r12,r1
007fce50  and r1,r3,#0xf
007fce54  and r2,r2,#0xf
007fce58  add r1,r1,r1, lsl #0x2
007fce5c  add r2,r2,r2, lsl #0x2
007fce60  add r0,r0,r1, lsl #0x5
007fce64  add r0,r0,r2, lsl #0x1
007fce68  add r1,r0,#0x1c
007fce6c  cpy r0,r12
007fce70  b 0x00692ac8
