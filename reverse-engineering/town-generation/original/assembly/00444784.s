00444784  stmdb sp!,{r3,r4,r5,r6,r7,r8,r9,lr}
00444788  cpy r4,r0
0044478c  ldr r5,[r0,#0x8]
00444790  ldr r6,[r0,#0xc]
00444794  cpy r0,sp
00444798  add r2,r4,#0x10
0044479c  mov r7,#0x0
004447a0  ldrex r12,[r2]
004447a4  sxtb r1,r12
004447a8  cmp r1,#0x0
004447ac  strb r12,[r0,#0x0]
004447b0  bne 0x004447c0
004447b4  mov r8,r12, lsl #0x10
004447b8  movs r8,r8, asr #0x18
004447bc  beq 0x0044480c
004447c0  mov r12,r12, lsl #0x10
004447c4  bic r3,r3,#0xff
004447c8  mov r12,r12, asr #0x18
004447cc  orr r1,r1,r3
004447d0  mov r12,r12, lsl #0x8
004447d4  and r3,r12,#0xff00
004447d8  bic r1,r1,#0xff00
004447dc  orr r1,r1,r3
004447e0  mov r12,r7, lsl #0x10
004447e4  and r3,r12,#0xff0000
004447e8  bic r1,r1,#0xff0000
004447ec  orr r3,r3,r1
004447f0  strex r12,r3,[r2]
004447f4  cmp r12,#0x0
004447f8  bne 0x004447a0
004447fc  ldrsb r1,[sp,#0x0]
00444800  cpy r0,r6
00444804  blx r5
00444808  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,pc}
0044480c  clrex
00444810  ldrsb r1,[sp,#0x0]
00444814  cpy r0,r6
00444818  blx r5
0044481c  ldr r0,[r4,#0x14]
00444820  ldr r1,[r0,#0x0]
00444824  ldr r2,[r1,#0xc]
00444828  cpy r1,r4
0044482c  blx r2
00444830  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,pc}
