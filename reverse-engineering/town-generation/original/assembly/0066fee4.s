0066fee4  ldr r1,[0x66ff28]
0066fee8  ldr r1,[r1,#0x14]
0066feec  str r1,[r0,#0x4]
0066fef0  str r1,[r0,#0x8]!
0066fef4  add r0,r0,#0x4
0066fef8  mov r1,#0x0
0066fefc  ldr r2,[r0,#0x50]
0066ff00  cmp r2,#0x0
0066ff04  beq 0x0066ff24
0066ff08  ldr r2,[r0,#0x50]
0066ff0c  sub r3,r2,#0x1
0066ff10  str r3,[r0,#0x50]
0066ff14  add r12,r0,r3, lsl #0x3
0066ff18  str r1,[r12,#0x0]
0066ff1c  str r1,[r12,#0x4]
0066ff20  b 0x0066fefc
0066ff24  bx lr
