0026c008  ldr r3,[0x26c048]
0026c00c  mov r0,#0x0
0026c010  cpy r2,r0
0026c014  sub r12,r3,#0x18
0026c018  cmp r0,#0x2
0026c01c  cpy r1,r0
0026c020  movcs r1,#0x0
0026c024  cmp r0,#0x6
0026c028  add r1,r1,r1, lsl #0x2
0026c02c  add r1,r3,r1, lsl #0x2
0026c030  strb r2,[r1,#0x10]
0026c034  strcc r2,[r12,r0,lsl #0x2]
0026c038  add r0,r0,#0x1
0026c03c  cmp r0,#0x2
0026c040  bcc 0x0026c018
0026c044  bx lr
