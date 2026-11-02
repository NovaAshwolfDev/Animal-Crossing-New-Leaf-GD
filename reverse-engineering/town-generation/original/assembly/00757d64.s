00757d64  add r0,r0,#0x100
00757d68  add r0,r0,#0xaa
00757d6c  ldrh r1,[r0,#0x0]
00757d70  orr r1,r1,#0x20
00757d74  strh r1,[r0,#0x0]
00757d78  bx lr
