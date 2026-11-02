008a5160  stmdb sp!,{r4,r5,r6,r7,lr}
008a5164  sub sp,sp,#0x14
008a5168  cpy r5,r0
008a516c  ldr r4,[r0,#0x13c]
008a5170  cpy r6,r1
008a5174  cpy r7,r2
008a5178  cmp r4,#0x0
008a517c  beq 0x008a51a0
008a5180  add r0,r4,#0xc
008a5184  bl 0x0060f000
008a5188  add r0,r4,#0x14
008a518c  nop
008a5190  bl 0x00121a30
008a5194  ldr r4,[r4,#0x8]
008a5198  cmp r4,#0x0
008a519c  bne 0x008a5180
008a51a0  ldr r4,[r5,#0x154]
008a51a4  cmp r4,#0x0
008a51a8  beq 0x008a51cc
008a51ac  add r0,r4,#0xc
008a51b0  bl 0x0060f000
008a51b4  add r0,r4,#0x14
008a51b8  nop
008a51bc  bl 0x00121a30
008a51c0  ldr r4,[r4,#0x8]
008a51c4  cmp r4,#0x0
008a51c8  bne 0x008a51ac
008a51cc  add r0,r5,#0x138
008a51d0  bl 0x001193a8
008a51d4  add r0,r5,#0x144
008a51d8  nop
008a51dc  bl 0x001193a8
008a51e0  add r0,r5,#0x150
008a51e4  nop
008a51e8  bl 0x001193a8
008a51ec  add r1,r5,#0x8
008a51f0  add r0,r5,#0x144
008a51f4  bl 0x00124be4
008a51f8  cpy r0,r5
008a51fc  nop
008a5200  bl 0x00113b48
008a5204  cmp r6,#0x0
008a5208  moveq r0,#0x0
008a520c  beq 0x008a523c
008a5210  ldr r1,[0x8a5250]
008a5214  adr r0,0x8a5244
008a5218  str r0,[sp,#0xc]
008a521c  mov r0,#0x1
008a5220  str r1,[sp,#0x8]
008a5224  str r0,[sp,#0x0]
008a5228  add r3,sp,#0x8
008a522c  cpy r2,r6
008a5230  cpy r1,r7
008a5234  cpy r0,r5
008a5238  bl 0x005c774c
008a523c  add sp,sp,#0x14
008a5240  ldmia sp!,{r4,r5,r6,r7,pc}
