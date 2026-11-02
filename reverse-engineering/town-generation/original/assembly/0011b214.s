0011b214  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,lr}
0011b218  subs r2,r2,#0x20
0011b21c  bcc 0x0011b248
0011b220  ldmia r1!,{r3,r4,r5,r6}
0011b224  pld [r1,#0x40]
0011b228  ldmia r1!,{r7,r8,r9,r10}
0011b22c  stmia r0!,{r3,r4,r5,r6}
0011b230  subs r2,r2,#0x20
0011b234  stmia r0!,{r7,r8,r9,r10}
0011b238  ldmiacs r1!,{r3,r4,r5,r6}
0011b23c  pld [r1,#0x40]
0011b240  ldmiacs r1!,{r7,r8,r9,r10}
0011b244  bcs 0x0011b22c
0011b248  movs r12,r2, lsl #0x1c
0011b24c  ldmiacs r1!,{r3,r4,r12,lr}
0011b250  stmiacs r0!,{r3,r4,r12,lr}
0011b254  ldmiami r1!,{r3,r4}
0011b258  stmiami r0!,{r3,r4}
0011b25c  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,lr}
0011b260  movs r12,r2, lsl #0x1e
0011b264  ldrcs r3,[r1],#0x4
0011b268  strcs r3,[r0],#0x4
0011b26c  bxeq lr
0011b270  movs r2,r2, lsl #0x1f
0011b274  ldrhcs r3,[r1],#0x2
0011b278  ldrbmi r2,[r1],#0x1
0011b27c  strhcs r3,[r0],#0x2
0011b280  strbmi r2,[r0],#0x1
0011b284  bx lr
