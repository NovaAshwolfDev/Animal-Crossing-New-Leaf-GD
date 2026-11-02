0079a704  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,r11,lr}
0079a708  sub sp,sp,#0xc
0079a70c  cmp r2,#0x2
0079a710  cpy r7,r2
0079a714  cmpne r7,#0x1
0079a718  ldr r5,[sp,#0x30]
0079a71c  cpy r10,r0
0079a720  cpy r4,r1
0079a724  cpy r11,r3
0079a728  beq 0x0079a774
0079a72c  cmp r7,#0x4
0079a730  beq 0x0079a79c
0079a734  cmp r7,#0x3
0079a738  beq 0x0079a7cc
0079a73c  bl 0x00636e3c
0079a740  ldr r1,[0x79a9f8]
0079a744  add r1,r1,r0
0079a748  add r0,sp,#0x4
0079a74c  bl 0x001b5c6c
0079a750  cmp r7,#0x5
0079a754  beq 0x0079a850
0079a758  cmp r7,#0x6
0079a75c  beq 0x0079a868
0079a760  cmp r7,#0x7
0079a764  beq 0x0079a880
0079a768  cmp r7,#0x8
0079a76c  beq 0x0079a898
0079a770  b 0x0079a8a8
0079a774  cmp r3,#0x0
0079a778  cpy r3,r5
0079a77c  beq 0x0079a78c
0079a780  bl 0x0079aa00
0079a784  add sp,sp,#0xc
0079a788  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
0079a78c  nop
0079a790  bl 0x00798db8
0079a794  add sp,sp,#0xc
0079a798  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
0079a79c  mov r2,#0x5
0079a7a0  str r5,[sp,#0x0]
0079a7a4  bl 0x0079a704
0079a7a8  cpy r3,r11
0079a7ac  mov r2,#0x6
0079a7b0  cpy r1,r4
0079a7b4  cpy r0,r10
0079a7b8  str r5,[sp,#0x0]
0079a7bc  bl 0x0079a704
0079a7c0  nop
0079a7c4  nop
0079a7c8  b 0x0079a7f0
0079a7cc  mov r0,#0x3
0079a7d0  bl 0x0011df38
0079a7d4  cmp r0,#0x0
0079a7d8  nop
0079a7dc  beq 0x0079a810
0079a7e0  cmp r0,#0x1
0079a7e4  beq 0x0079a830
0079a7e8  cmp r0,#0x2
0079a7ec  bne 0x0079a784
0079a7f0  cpy r3,r11
0079a7f4  mov r2,#0x7
0079a7f8  cpy r1,r4
0079a7fc  cpy r0,r10
0079a800  str r5,[sp,#0x0]
0079a804  bl 0x0079a704
0079a808  add sp,sp,#0xc
0079a80c  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
0079a810  cpy r3,r11
0079a814  mov r2,#0x5
0079a818  cpy r1,r4
0079a81c  cpy r0,r10
0079a820  str r5,[sp,#0x0]
0079a824  bl 0x0079a704
0079a828  add sp,sp,#0xc
0079a82c  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
0079a830  cpy r3,r11
0079a834  mov r2,#0x6
0079a838  cpy r1,r4
0079a83c  cpy r0,r10
0079a840  str r5,[sp,#0x0]
0079a844  bl 0x0079a704
0079a848  add sp,sp,#0xc
0079a84c  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
0079a850  cpy r1,r4
0079a854  add r0,sp,#0x4
0079a858  bl 0x007aa3fc
0079a85c  nop
0079a860  nop
0079a864  b 0x0079a8a4
0079a868  cpy r1,r4
0079a86c  add r0,sp,#0x4
0079a870  bl 0x007aa4d4
0079a874  nop
0079a878  nop
0079a87c  b 0x0079a8a4
0079a880  cpy r1,r4
0079a884  add r0,sp,#0x4
0079a888  bl 0x007aa388
0079a88c  nop
0079a890  nop
0079a894  b 0x0079a8a4
0079a898  cpy r1,r4
0079a89c  add r0,sp,#0x4
0079a8a0  bl 0x007aa460
0079a8a4  cpy r7,r0
0079a8a8  cpy r0,r4
0079a8ac  bl 0x005a19a0
0079a8b0  ldmia r0,{r0,r6}
0079a8b4  uxth r1,r0
0079a8b8  cpy r9,r1
0079a8bc  add r0,sp,#0x8
0079a8c0  bl 0x00756d40
0079a8c4  add r0,sp,#0x8
0079a8c8  nop
0079a8cc  bl 0x005a20f8
0079a8d0  cpy r4,r0
0079a8d4  nop
0079a8d8  bl 0x00636e3c
0079a8dc  ldr r1,[0x79a9fc]
0079a8e0  mov r2,#0x1
0079a8e4  ldrb r0,[r0,r1]
0079a8e8  sub r1,r5,#0x1
0079a8ec  tst r1,r0, lsr #0x4
0079a8f0  moveq r8,#0x1
0079a8f4  movne r8,#0x0
0079a8f8  cmp r11,#0x0
0079a8fc  beq 0x0079a97c
0079a900  cmp r6,#0x0
0079a904  mov r5,#0x0
0079a908  cpyhi r11,r2
0079a90c  bls 0x0079a9dc
0079a910  ldrb r0,[r4,#0xd]
0079a914  cmp r0,#0xae
0079a918  movcs r0,#0x0
0079a91c  cmp r0,r7
0079a920  bne 0x0079a968
0079a924  cpy r0,r4
0079a928  bl 0x007dcca4
0079a92c  cmp r0,#0x0
0079a930  nop
0079a934  bne 0x0079a968
0079a938  cmp r8,#0x0
0079a93c  bne 0x0079a94c
0079a940  ldrb r0,[r4,#0x1f]
0079a944  movs r0,r0, lsl #0x19
0079a948  bmi 0x0079a968
0079a94c  add r0,r9,r5
0079a950  sub r0,r0,#0x2000
0079a954  mov r1,r0, lsr #0x5
0079a958  and r0,r0,#0x1f
0079a95c  ldr r2,[r10,r1,lsl #0x2]
0079a960  orr r0,r2,r11, lsl r0
0079a964  str r0,[r10,r1,lsl #0x2]
0079a968  add r5,r5,#0x1
0079a96c  cmp r6,r5
0079a970  add r4,r4,#0x22
0079a974  bhi 0x0079a910
0079a978  b 0x0079a9dc
0079a97c  cmp r6,#0x0
0079a980  mov r0,#0x0
0079a984  bls 0x0079a9dc
0079a988  ldrb r1,[r4,#0xd]
0079a98c  cmp r1,#0xae
0079a990  movcs r1,#0x0
0079a994  cmp r1,r7
0079a998  bne 0x0079a9cc
0079a99c  cmp r8,#0x0
0079a9a0  bne 0x0079a9b0
0079a9a4  ldrb r1,[r4,#0x1f]
0079a9a8  movs r1,r1, lsl #0x19
0079a9ac  bmi 0x0079a9cc
0079a9b0  add r1,r9,r0
0079a9b4  sub r1,r1,#0x2000
0079a9b8  mov r3,r1, lsr #0x5
0079a9bc  and r1,r1,#0x1f
0079a9c0  ldr r12,[r10,r3,lsl #0x2]
0079a9c4  orr r1,r12,r2, lsl r1
0079a9c8  str r1,[r10,r3,lsl #0x2]
0079a9cc  add r0,r0,#0x1
0079a9d0  cmp r6,r0
0079a9d4  add r4,r4,#0x22
0079a9d8  bhi 0x0079a988
0079a9dc  add r0,sp,#0x8
0079a9e0  cpy r0,r0
0079a9e4  add r0,sp,#0x4
0079a9e8  nop
0079a9ec  cpy r0,r0
0079a9f0  add sp,sp,#0xc
0079a9f4  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
