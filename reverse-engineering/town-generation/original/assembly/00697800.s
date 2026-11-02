00697800  cmp r1,#0x5
00697804  cmpcc r2,#0x4
00697808  movcs r0,#0x0
0069780c  bcs 0x00697820
00697810  add r2,r2,r2, lsl #0x2
00697814  add r0,r0,r2, lsl #0xa
00697818  add r0,r0,r1, lsl #0xa
0069781c  add r0,r0,#0x58
00697820  bx lr
