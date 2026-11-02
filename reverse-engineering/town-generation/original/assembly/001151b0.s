001151b0  cmp r2,#0x8
001151b4  bhi 0x00115278
001151b8  beq 0x00115264
001151bc  cmp r2,#0x4
001151c0  bhi 0x001151fc
001151c4  beq 0x00115230
001151c8  cmp r2,#0x2
001151cc  bcc 0x001151e8
001151d0  beq 0x00115224
001151d4  ldrh r2,[r1],#0x2
001151d8  ldrb r3,[r1],#0x1
001151dc  strh r2,[r0],#0x2
001151e0  strb r3,[r0],#0x1
001151e4  bx lr
001151e8  cmp r2,#0x1
001151ec  bcc 0x001151f8
001151f0  ldrb r3,[r1],#0x1
001151f4  strb r3,[r0],#0x1
001151f8  bx lr
001151fc  cmp r2,#0x6
00115200  beq 0x00115250
00115204  bcc 0x0011523c
00115208  ldr r2,[r1],#0x4
0011520c  ldrh r3,[r1],#0x2
00115210  str r2,[r0],#0x4
00115214  ldrb r12,[r1],#0x1
00115218  strh r3,[r0],#0x2
0011521c  strb r12,[r0],#0x1
00115220  bx lr
00115224  ldrh r3,[r1],#0x2
00115228  strh r3,[r0],#0x2
0011522c  bx lr
00115230  ldr r3,[r1],#0x4
00115234  str r3,[r0],#0x4
00115238  bx lr
0011523c  ldr r2,[r1],#0x4
00115240  ldrb r3,[r1],#0x1
00115244  str r2,[r0],#0x4
00115248  strb r3,[r0],#0x1
0011524c  bx lr
00115250  ldr r2,[r1],#0x4
00115254  ldrh r3,[r1],#0x2
00115258  str r2,[r0],#0x4
0011525c  strh r3,[r0],#0x2
00115260  bx lr
00115264  ldr r2,[r1],#0x4
00115268  ldr r3,[r1],#0x4
0011526c  str r2,[r0],#0x4
00115270  str r3,[r0],#0x4
00115274  bx lr
00115278  tst r1,#0x1
0011527c  subne r2,r2,#0x1
00115280  ldrbne r3,[r1],#0x1
00115284  strbne r3,[r0],#0x1
00115288  tst r1,#0x2
0011528c  subne r2,r2,#0x2
00115290  ldrbne r3,[r1],#0x1
00115294  ldrbne r12,[r1],#0x1
00115298  strbne r3,[r0],#0x1
0011529c  strbne r12,[r0],#0x1
001152a0  ands r3,r0,#0x3
001152a4  bne 0x00115310
001152a8  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,lr}
001152ac  subs r2,r2,#0x20
001152b0  bcc 0x001152d0
001152b4  ldmia r1!,{r4,r5,r6,r7}
001152b8  ldmia r1!,{r8,r9,r10,lr}
001152bc  pld [r1,#0x40]
001152c0  subs r2,r2,#0x20
001152c4  stmia r0!,{r4,r5,r6,r7}
001152c8  stmia r0!,{r8,r9,r10,lr}
001152cc  bcs 0x001152b4
001152d0  movs r12,r2, lsl #0x1c
001152d4  ldmiacs r1!,{r3,r4,r12,lr}
001152d8  stmiacs r0!,{r3,r4,r12,lr}
001152dc  ldmiami r1!,{r3,r4}
001152e0  stmiami r0!,{r3,r4}
001152e4  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,lr}
001152e8  movs r12,r2, lsl #0x1e
001152ec  ldrcs r3,[r1],#0x4
001152f0  strcs r3,[r0],#0x4
001152f4  bxeq lr
001152f8  movs r2,r2, lsl #0x1f
001152fc  ldrhcs r3,[r1],#0x2
00115300  ldrbmi r2,[r1],#0x1
00115304  strhcs r3,[r0],#0x2
00115308  strbmi r2,[r0],#0x1
0011530c  bx lr
00115310  bic r0,r0,#0x3
00115314  cmp r3,#0x2
00115318  beq 0x001153bc
0011531c  bhi 0x00115458
00115320  ldr r12,[r0,#0x0]
00115324  mov r12,r12, lsl #0x18
00115328  mov r12,r12, lsr #0x18
0011532c  subs r2,r2,#0x20
00115330  blt 0x0011538c
00115334  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,lr}
00115338  ldmiage r1!,{r4,r5,r6,r7,r8,r9,r10,lr}
0011533c  movge r3,r4, lsr #0x18
00115340  orrge r4,r12,r4, lsl #0x8
00115344  movge r12,r5, lsr #0x18
00115348  orrge r5,r3,r5, lsl #0x8
0011534c  movge r3,r6, lsr #0x18
00115350  orrge r6,r12,r6, lsl #0x8
00115354  movge r12,r7, lsr #0x18
00115358  orrge r7,r3,r7, lsl #0x8
0011535c  movge r3,r8, lsr #0x18
00115360  orrge r8,r12,r8, lsl #0x8
00115364  movge r12,r9, lsr #0x18
00115368  orrge r9,r3,r9, lsl #0x8
0011536c  movge r3,r10, lsr #0x18
00115370  orrge r10,r12,r10, lsl #0x8
00115374  movge r12,lr, lsr #0x18
00115378  orrge lr,r3,lr, lsl #0x8
0011537c  stmiage r0!,{r4,r5,r6,r7,r8,r9,r10,lr}
00115380  subges r2,r2,#0x20
00115384  bge 0x00115338
00115388  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,lr}
0011538c  add r2,r2,#0x20
00115390  subs r2,r2,#0x4
00115394  ldrge r3,[r1],#0x4
00115398  orrge r12,r12,r3, lsl #0x8
0011539c  strge r12,[r0],#0x4
001153a0  movge r12,r3, lsr #0x18
001153a4  subges r2,r2,#0x4
001153a8  bge 0x00115394
001153ac  add r2,r2,#0x4
001153b0  sub r1,r1,#0x1
001153b4  add r2,r2,#0x1
001153b8  b 0x001154f0
001153bc  ldr r12,[r0,#0x0]
001153c0  mov r12,r12, lsl #0x10
001153c4  mov r12,r12, lsr #0x10
001153c8  subs r2,r2,#0x20
001153cc  blt 0x00115428
001153d0  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,lr}
001153d4  ldmiage r1!,{r4,r5,r6,r7,r8,r9,r10,lr}
001153d8  movge r3,r4, lsr #0x10
001153dc  orrge r4,r12,r4, lsl #0x10
001153e0  movge r12,r5, lsr #0x10
001153e4  orrge r5,r3,r5, lsl #0x10
001153e8  movge r3,r6, lsr #0x10
001153ec  orrge r6,r12,r6, lsl #0x10
001153f0  movge r12,r7, lsr #0x10
001153f4  orrge r7,r3,r7, lsl #0x10
001153f8  movge r3,r8, lsr #0x10
001153fc  orrge r8,r12,r8, lsl #0x10
00115400  movge r12,r9, lsr #0x10
00115404  orrge r9,r3,r9, lsl #0x10
00115408  movge r3,r10, lsr #0x10
0011540c  orrge r10,r12,r10, lsl #0x10
00115410  movge r12,lr, lsr #0x10
00115414  orrge lr,r3,lr, lsl #0x10
00115418  stmiage r0!,{r4,r5,r6,r7,r8,r9,r10,lr}
0011541c  subges r2,r2,#0x20
00115420  bge 0x001153d4
00115424  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,lr}
00115428  add r2,r2,#0x20
0011542c  subs r2,r2,#0x4
00115430  ldrge r3,[r1],#0x4
00115434  orrge r12,r12,r3, lsl #0x10
00115438  strge r12,[r0],#0x4
0011543c  movge r12,r3, lsr #0x10
00115440  subges r2,r2,#0x4
00115444  bge 0x00115430
00115448  add r2,r2,#0x4
0011544c  sub r1,r1,#0x2
00115450  add r2,r2,#0x2
00115454  b 0x001154f0
00115458  ldr r12,[r0,#0x0]
0011545c  mov r12,r12, lsl #0x8
00115460  mov r12,r12, lsr #0x8
00115464  subs r2,r2,#0x20
00115468  blt 0x001154c4
0011546c  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,lr}
00115470  ldmiage r1!,{r4,r5,r6,r7,r8,r9,r10,lr}
00115474  movge r3,r4, lsr #0x8
00115478  orrge r4,r12,r4, lsl #0x18
0011547c  movge r12,r5, lsr #0x8
00115480  orrge r5,r3,r5, lsl #0x18
00115484  movge r3,r6, lsr #0x8
00115488  orrge r6,r12,r6, lsl #0x18
0011548c  movge r12,r7, lsr #0x8
00115490  orrge r7,r3,r7, lsl #0x18
00115494  movge r3,r8, lsr #0x8
00115498  orrge r8,r12,r8, lsl #0x18
0011549c  movge r12,r9, lsr #0x8
001154a0  orrge r9,r3,r9, lsl #0x18
001154a4  movge r3,r10, lsr #0x8
001154a8  orrge r10,r12,r10, lsl #0x18
001154ac  movge r12,lr, lsr #0x8
001154b0  orrge lr,r3,lr, lsl #0x18
001154b4  stmiage r0!,{r4,r5,r6,r7,r8,r9,r10,lr}
001154b8  subges r2,r2,#0x20
001154bc  bge 0x00115470
001154c0  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,lr}
001154c4  add r2,r2,#0x20
001154c8  subs r2,r2,#0x4
001154cc  ldrge r3,[r1],#0x4
001154d0  orrge r12,r12,r3, lsl #0x18
001154d4  strge r12,[r0],#0x4
001154d8  movge r12,r3, lsr #0x8
001154dc  subges r2,r2,#0x4
001154e0  bge 0x001154cc
001154e4  add r2,r2,#0x4
001154e8  sub r1,r1,#0x3
001154ec  add r2,r2,#0x3
001154f0  tst r2,#0x4
001154f4  ldrbne r3,[r1],#0x1
001154f8  ldrbne r12,[r1],#0x1
001154fc  strbne r3,[r0],#0x1
00115500  strbne r12,[r0],#0x1
00115504  ldrbne r3,[r1],#0x1
00115508  ldrbne r12,[r1],#0x1
0011550c  strbne r3,[r0],#0x1
00115510  strbne r12,[r0],#0x1
00115514  tst r2,#0x2
00115518  ldrbne r3,[r1],#0x1
0011551c  ldrbne r12,[r1],#0x1
00115520  strbne r3,[r0],#0x1
00115524  strbne r12,[r0],#0x1
00115528  tst r2,#0x1
0011552c  ldrbne r3,[r1],#0x1
00115530  strbne r3,[r0],#0x1
00115534  bx lr
