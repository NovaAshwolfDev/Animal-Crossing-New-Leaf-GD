00444870  stmdb sp!,{r4,r5,r6,lr}
00444874  cpy r4,r0
00444878  ldr r0,[0x4448b8]
0044487c  str r0,[r4,#0x0]
00444880  ldr r0,[r4,#0x10]
00444884  mov r0,r0, lsl #0x8
00444888  movs r0,r0, asr #0x18
0044488c  ldrne r0,[0x4448bc]
00444890  blne 0x00123b70
00444894  ldr r0,[r4,#0x18]
00444898  add r5,r4,#0x18
0044489c  cmp r0,#0x0
004448a0  beq 0x004448b0
004448a4  swi 0x23
004448a8  mov r0,#0x0
004448ac  str r0,[r5,#0x0]
004448b0  cpy r0,r4
004448b4  ldmia sp!,{r4,r5,r6,pc}
