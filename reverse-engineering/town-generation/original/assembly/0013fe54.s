0013fe54  ldr r0,[r0,#0x0]
0013fe58  cpy r0,r0
0013fe5c  ldr r2,[r0,#0x14]
0013fe60  cmn r2,#0x1
0013fe64  beq 0x0013fe7c
0013fe68  ldr r0,[r0,#0xc]
0013fe6c  ldr r0,[r0,r2,lsl #0x4]
0013fe70  ldr r2,[r0,#0x0]
0013fe74  cmp r2,r1
0013fe78  bgt 0x0013fe84
0013fe7c  mov r0,#0x0
0013fe80  bx lr
0013fe84  mov r2,#0x4
0013fe88  add r1,r2,r1, lsl #0x2
0013fe8c  ldr r1,[r0,r1]
0013fe90  add r0,r0,r1
0013fe94  bx lr
