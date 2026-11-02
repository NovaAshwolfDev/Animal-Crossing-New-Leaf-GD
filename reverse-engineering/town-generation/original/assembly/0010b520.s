0010b520  cpy r0,r0
0010b524  stmdb sp!,{r4,lr}
0010b528  mrc p15,0x0,r4,cr13,cr0,0x3
0010b52c  ldr r3,[0x10b568]
0010b530  str r3,[r4,#0x80]!
0010b534  add r12,r4,#0x4
0010b538  stmia r12,{r1,r2}
0010b53c  mov r2,#0xc
0010b540  str r0,[r4,#0x10]
0010b544  ldr r0,[0x10b56c]
0010b548  orr r1,r2,r1, lsl #0x4
0010b54c  str r1,[r4,#0xc]
0010b550  ldr r0,[r0,#0x0]
0010b554  swi 0x32
0010b558  and r1,r0,#0x80000000
0010b55c  cmp r1,#0x0
0010b560  ldrge r0,[r4,#0x4]
0010b564  ldmia sp!,{r4,pc}
