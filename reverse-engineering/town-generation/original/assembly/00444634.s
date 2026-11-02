00444634  stmdb sp!,{r4,r5,r6,r7,r8,lr}
00444638  sub sp,sp,#0x8
0044463c  cpy r4,r0
00444640  add r0,sp,#0x20
00444644  ldmia r0,{r1,r5,r6,r12}
00444648  ldr r0,[r4,#0x10]
0044464c  mov r0,r0, lsl #0x8
00444650  movs r0,r0, asr #0x18
00444654  bne 0x004446d8
00444658  str r6,[r4,#0x8]
0044465c  str r12,[r4,#0xc]
00444660  mov r0,#0x0
00444664  bic r8,r8,#0xff
00444668  mov r7,r0, lsl #0x8
0044466c  mov r6,#0x1
00444670  orr r0,r0,r8
00444674  and r7,r7,#0xff00
00444678  bic r0,r0,#0xff00
0044467c  mov r6,r6, lsl #0x10
00444680  orr r0,r0,r7
00444684  and r6,r6,#0xff0000
00444688  bic r0,r0,#0xff0000
0044468c  add r12,r4,#0x10
00444690  orr r0,r0,r6
00444694  ldrex r6,[r12]
00444698  strex r7,r0,[r12]
0044469c  cmp r7,#0x0
004446a0  bne 0x00444694
004446a4  stmia sp,{r1,r5}
004446a8  ldr r0,[r4,#0x18]
004446ac  bl 0x00136d48
004446b0  movs r1,r0, lsr #0x1f
004446b4  nop
004446b8  blne 0x00123b70
004446bc  ldr r0,[r4,#0x14]
004446c0  ldr r1,[r0,#0x0]
004446c4  ldr r2,[r1,#0xc]
004446c8  add sp,sp,#0x8
004446cc  cpy r1,r4
004446d0  ldmia sp!,{r4,r5,r6,r7,r8,lr}
004446d4  bx r2
004446d8  add sp,sp,#0x8
004446dc  ldmia sp!,{r4,r5,r6,r7,r8,pc}
