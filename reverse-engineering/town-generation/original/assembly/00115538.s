00115538  subs r3,r0,r1
0011553c  cmpcs r2,r3
00115540  bls 0x001151b0
00115544  add r0,r0,r2
00115548  add r1,r1,r2
0011554c  cmp r2,#0x8
00115550  bhi 0x00115614
00115554  beq 0x00115600
00115558  cmp r2,#0x4
0011555c  bhi 0x00115598
00115560  beq 0x001155cc
00115564  cmp r2,#0x2
00115568  bcc 0x00115584
0011556c  beq 0x001155c0
00115570  ldrh r2,[r1,#-0x2]!
00115574  ldrb r3,[r1,#-0x1]!
00115578  strh r2,[r0,#-0x2]!
0011557c  strb r3,[r0,#-0x1]!
00115580  bx lr
00115584  cmp r2,#0x1
00115588  bcc 0x00115594
0011558c  ldrb r3,[r1,#-0x1]!
00115590  strb r3,[r0,#-0x1]!
00115594  bx lr
00115598  cmp r2,#0x6
0011559c  beq 0x001155ec
001155a0  bcc 0x001155d8
001155a4  ldr r2,[r1,#-0x4]!
001155a8  ldrh r3,[r1,#-0x2]!
001155ac  str r2,[r0,#-0x4]!
001155b0  ldrb r12,[r1,#-0x1]!
001155b4  strh r3,[r0,#-0x2]!
001155b8  strb r12,[r0,#-0x1]!
001155bc  bx lr
001155c0  ldrh r3,[r1,#-0x2]!
001155c4  strh r3,[r0,#-0x2]!
001155c8  bx lr
001155cc  ldr r3,[r1,#-0x4]!
001155d0  str r3,[r0,#-0x4]!
001155d4  bx lr
001155d8  ldr r2,[r1,#-0x4]!
001155dc  ldrb r3,[r1,#-0x1]!
001155e0  str r2,[r0,#-0x4]!
001155e4  strb r3,[r0,#-0x1]!
001155e8  bx lr
001155ec  ldr r2,[r1,#-0x4]!
001155f0  ldrh r3,[r1,#-0x2]!
001155f4  str r2,[r0,#-0x4]!
001155f8  strh r3,[r0,#-0x2]!
001155fc  bx lr
00115600  ldr r2,[r1,#-0x4]!
00115604  ldr r3,[r1,#-0x4]!
00115608  str r2,[r0,#-0x4]!
0011560c  str r3,[r0,#-0x4]!
00115610  bx lr
00115614  tst r1,#0x2
00115618  subne r2,r2,#0x2
0011561c  ldrbne r3,[r1,#-0x1]!
00115620  ldrbne r12,[r1,#-0x1]!
00115624  strbne r3,[r0,#-0x1]!
00115628  strbne r12,[r0,#-0x1]!
0011562c  tst r1,#0x1
00115630  subne r2,r2,#0x1
00115634  ldrbne r3,[r1,#-0x1]!
00115638  strbne r3,[r0,#-0x1]!
0011563c  ands r3,r0,#0x3
00115640  bne 0x001156ac
00115644  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,lr}
00115648  subs r2,r2,#0x20
0011564c  bcc 0x0011566c
00115650  ldmdb r1!,{r4,r5,r6,r7}
00115654  ldmdb r1!,{r8,r9,r10,lr}
00115658  pld [r1,#-0x40]
0011565c  subs r2,r2,#0x20
00115660  stmdb r0!,{r4,r5,r6,r7}
00115664  stmdb r0!,{r8,r9,r10,lr}
00115668  bcs 0x00115650
0011566c  movs r12,r2, lsl #0x1c
00115670  ldmdbcs r1!,{r3,r4,r12,lr}
00115674  stmdbcs r0!,{r3,r4,r12,lr}
00115678  ldmdbmi r1!,{r3,r4}
0011567c  stmdbmi r0!,{r3,r4}
00115680  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,lr}
00115684  movs r12,r2, lsl #0x1e
00115688  ldrcs r3,[r1,#-0x4]!
0011568c  strcs r3,[r0,#-0x4]!
00115690  bxeq lr
00115694  movs r2,r2, lsl #0x1f
00115698  ldrhcs r3,[r1,#-0x2]!
0011569c  ldrbmi r2,[r1,#-0x1]
001156a0  strhcs r3,[r0,#-0x2]!
001156a4  strbmi r2,[r0,#-0x1]
001156a8  bx lr
001156ac  bic r0,r0,#0x3
001156b0  cmp r3,#0x2
001156b4  beq 0x00115758
001156b8  bhi 0x001157f4
001156bc  ldr r12,[r0,#0x0]
001156c0  mov r12,r12, lsr #0x8
001156c4  mov r12,r12, lsl #0x8
001156c8  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,lr}
001156cc  subs r2,r2,#0x20
001156d0  ldmdbge r1!,{r4,r5,r6,r7,r8,r9,r10,lr}
001156d4  movge r3,lr, lsl #0x8
001156d8  orrge lr,r12,lr, lsr #0x18
001156dc  movge r12,r10, lsl #0x8
001156e0  orrge r10,r3,r10, lsr #0x18
001156e4  movge r3,r9, lsl #0x8
001156e8  orrge r9,r12,r9, lsr #0x18
001156ec  movge r12,r8, lsl #0x8
001156f0  orrge r8,r3,r8, lsr #0x18
001156f4  movge r3,r7, lsl #0x8
001156f8  orrge r7,r12,r7, lsr #0x18
001156fc  movge r12,r6, lsl #0x8
00115700  orrge r6,r3,r6, lsr #0x18
00115704  movge r3,r5, lsl #0x8
00115708  orrge r5,r12,r5, lsr #0x18
0011570c  movge r12,r4, lsl #0x8
00115710  orrge r4,r3,r4, lsr #0x18
00115714  stmdage r0!,{r4,r5,r6,r7,r8,r9,r10,lr}
00115718  subges r2,r2,#0x20
0011571c  bge 0x001156d0
00115720  add r2,r2,#0x20
00115724  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,lr}
00115728  subs r2,r2,#0x4
0011572c  ldrge r3,[r1,#-0x4]!
00115730  orrge r12,r12,r3, lsr #0x18
00115734  strge r12,[r0],#-0x4
00115738  movge r12,r3, lsl #0x8
0011573c  subges r2,r2,#0x4
00115740  bge 0x0011572c
00115744  add r2,r2,#0x4
00115748  add r0,r0,#0x4
0011574c  add r1,r1,#0x3
00115750  add r2,r2,#0x3
00115754  b 0x0011588c
00115758  ldr r12,[r0,#0x0]
0011575c  mov r12,r12, lsr #0x10
00115760  mov r12,r12, lsl #0x10
00115764  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,lr}
00115768  subs r2,r2,#0x20
0011576c  ldmdbge r1!,{r4,r5,r6,r7,r8,r9,r10,lr}
00115770  movge r3,lr, lsl #0x10
00115774  orrge lr,r12,lr, lsr #0x10
00115778  movge r12,r10, lsl #0x10
0011577c  orrge r10,r3,r10, lsr #0x10
00115780  movge r3,r9, lsl #0x10
00115784  orrge r9,r12,r9, lsr #0x10
00115788  movge r12,r8, lsl #0x10
0011578c  orrge r8,r3,r8, lsr #0x10
00115790  movge r3,r7, lsl #0x10
00115794  orrge r7,r12,r7, lsr #0x10
00115798  movge r12,r6, lsl #0x10
0011579c  orrge r6,r3,r6, lsr #0x10
001157a0  movge r3,r5, lsl #0x10
001157a4  orrge r5,r12,r5, lsr #0x10
001157a8  movge r12,r4, lsl #0x10
001157ac  orrge r4,r3,r4, lsr #0x10
001157b0  stmdage r0!,{r4,r5,r6,r7,r8,r9,r10,lr}
001157b4  subges r2,r2,#0x20
001157b8  bge 0x0011576c
001157bc  add r2,r2,#0x20
001157c0  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,lr}
001157c4  subs r2,r2,#0x4
001157c8  ldrge r3,[r1,#-0x4]!
001157cc  orrge r12,r12,r3, lsr #0x10
001157d0  strge r12,[r0],#-0x4
001157d4  movge r12,r3, lsl #0x10
001157d8  subges r2,r2,#0x4
001157dc  bge 0x001157c8
001157e0  add r2,r2,#0x4
001157e4  add r0,r0,#0x4
001157e8  add r1,r1,#0x2
001157ec  add r2,r2,#0x2
001157f0  b 0x0011588c
001157f4  ldr r12,[r0,#0x0]
001157f8  mov r12,r12, lsr #0x18
001157fc  mov r12,r12, lsl #0x18
00115800  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,lr}
00115804  subs r2,r2,#0x20
00115808  ldmdbge r1!,{r4,r5,r6,r7,r8,r9,r10,lr}
0011580c  movge r3,lr, lsl #0x18
00115810  orrge lr,r12,lr, lsr #0x8
00115814  movge r12,r10, lsl #0x18
00115818  orrge r10,r3,r10, lsr #0x8
0011581c  movge r3,r9, lsl #0x18
00115820  orrge r9,r12,r9, lsr #0x8
00115824  movge r12,r8, lsl #0x18
00115828  orrge r8,r3,r8, lsr #0x8
0011582c  movge r3,r7, lsl #0x18
00115830  orrge r7,r12,r7, lsr #0x8
00115834  movge r12,r6, lsl #0x18
00115838  orrge r6,r3,r6, lsr #0x8
0011583c  movge r3,r5, lsl #0x18
00115840  orrge r5,r12,r5, lsr #0x8
00115844  movge r12,r4, lsl #0x18
00115848  orrge r4,r3,r4, lsr #0x8
0011584c  stmdage r0!,{r4,r5,r6,r7,r8,r9,r10,lr}
00115850  subges r2,r2,#0x20
00115854  bge 0x00115808
00115858  add r2,r2,#0x20
0011585c  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,lr}
00115860  subs r2,r2,#0x4
00115864  ldrge r3,[r1,#-0x4]!
00115868  orrge r12,r12,r3, lsr #0x8
0011586c  strge r12,[r0],#-0x4
00115870  movge r12,r3, lsl #0x18
00115874  subges r2,r2,#0x4
00115878  bge 0x00115864
0011587c  add r2,r2,#0x4
00115880  add r0,r0,#0x4
00115884  add r1,r1,#0x1
00115888  add r2,r2,#0x1
0011588c  tst r2,#0x4
00115890  ldrbne r3,[r1,#-0x1]!
00115894  ldrbne r12,[r1,#-0x1]!
00115898  strbne r3,[r0,#-0x1]!
0011589c  strbne r12,[r0,#-0x1]!
001158a0  ldrbne r3,[r1,#-0x1]!
001158a4  ldrbne r12,[r1,#-0x1]!
001158a8  strbne r3,[r0,#-0x1]!
001158ac  strbne r12,[r0,#-0x1]!
001158b0  tst r2,#0x2
001158b4  ldrbne r3,[r1,#-0x1]!
001158b8  ldrbne r12,[r1,#-0x1]!
001158bc  strbne r3,[r0,#-0x1]!
001158c0  strbne r12,[r0,#-0x1]!
001158c4  tst r2,#0x1
001158c8  ldrbne r3,[r1,#-0x1]!
001158cc  strbne r3,[r0,#-0x1]!
001158d0  bx lr
