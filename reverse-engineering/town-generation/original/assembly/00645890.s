00645890  stmdb sp!,{r4,lr}
00645894  bl 0x0066ffa0
00645898  ldr r2,[0x6458b0]
0064589c  mov r1,#0x0
006458a0  str r1,[r0,#0x60]
006458a4  str r2,[r0,#0x0]
006458a8  str r1,[r0,#0x64]
006458ac  ldmia sp!,{r4,pc}
