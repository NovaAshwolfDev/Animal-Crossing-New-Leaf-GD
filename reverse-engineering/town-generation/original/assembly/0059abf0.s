0059abf0  ldr r2,[r1,#0x0]
0059abf4  cmp r2,#0x0
0059abf8  blt 0x0059ac10
0059abfc  mov r3,r2, asr #0x1f
0059ac00  add r3,r2,r3, lsr #0x1c
0059ac04  bic r3,r3,#0xf
0059ac08  sub r2,r2,r3
0059ac0c  b 0x0059ac28
0059ac10  add r2,r2,#0x1
0059ac14  mov r3,r2, asr #0x1f
0059ac18  add r3,r2,r3, lsr #0x1c
0059ac1c  bic r3,r3,#0xf
0059ac20  sub r2,r2,r3
0059ac24  add r2,r2,#0xf
0059ac28  ldr r1,[r1,#0x4]
0059ac2c  cmp r1,#0x0
0059ac30  blt 0x0059ac48
0059ac34  mov r3,r1, asr #0x1f
0059ac38  add r3,r1,r3, lsr #0x1c
0059ac3c  bic r3,r3,#0xf
0059ac40  sub r1,r1,r3
0059ac44  b 0x0059ac60
0059ac48  add r1,r1,#0x1
0059ac4c  mov r3,r1, asr #0x1f
0059ac50  add r3,r1,r3, lsr #0x1c
0059ac54  bic r3,r3,#0xf
0059ac58  sub r1,r1,r3
0059ac5c  add r1,r1,#0xf
0059ac60  str r1,[r0,#0x4]
0059ac64  str r2,[r0,#0x0]
0059ac68  bx lr
