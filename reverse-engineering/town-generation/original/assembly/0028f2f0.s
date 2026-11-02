0028f2f0  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,lr}
0028f2f4  sub sp,sp,#0x208
0028f2f8  cpy r8,r0
0028f2fc  ldrb r0,[r0,#0x1c]
0028f300  bl 0x00767d84
0028f304  cmp r0,#0x0
0028f308  mov r12,#0x0
0028f30c  beq 0x0028f88c
0028f310  add r1,sp,#0x14
0028f314  cpy r6,sp
0028f318  mov r5,#0x14
0028f31c  mov r2,#0x4
0028f320  mov r0,#0x0
0028f324  mov r3,#0x13
0028f328  str r12,[sp,#0x0]
0028f32c  str r12,[sp,#0x4]
0028f330  str r12,[sp,#0x8]
0028f334  str r12,[sp,#0x10]
0028f338  str r1,[sp,#0xc]
0028f33c  add r9,r2,r0
0028f340  subs r3,r3,#0x1
0028f344  add r7,r1,r9, lsl #0x2
0028f348  str r7,[r1,r0,lsl #0x2]
0028f34c  add r0,r0,r2
0028f350  bne 0x0028f33c
0028f354  sub r0,r5,#0x1
0028f358  mul r2,r2,r0
0028f35c  cpy r0,r6
0028f360  str r12,[r1,r2,lsl #0x2]
0028f364  add r2,r1,r5, lsl #0x4
0028f368  str r1,[sp,#0x10]
0028f36c  cpy r1,r5
0028f370  bl 0x005a6780
0028f374  ldrb r0,[r8,#0x10]
0028f378  bic r1,r4,#0xff
0028f37c  orr r10,r1,r0
0028f380  bl 0x00285804
0028f384  cpy r9,r0
0028f388  cpy r1,r8
0028f38c  add r0,sp,#0x1b0
0028f390  bl 0x007dca10
0028f394  cpy r1,r8
0028f398  add r0,sp,#0x1d0
0028f39c  bl 0x007dc9d8
0028f3a0  add r1,sp,#0x1d0
0028f3a4  add r0,sp,#0x1b0
0028f3a8  bl 0x007dc980
0028f3ac  cmp r0,#0x0
0028f3b0  nop
0028f3b4  beq 0x0028f710
0028f3b8  add r0,sp,#0x1b0
0028f3bc  add r0,r0,#0x8
0028f3c0  cmp r9,#0x0
0028f3c4  cpy r4,r0
0028f3c8  beq 0x0028f6f0
0028f3cc  ldmia r4,{r1,r2}
0028f3d0  cpy r0,r9
0028f3d4  bl 0x007bfff8
0028f3d8  cmp r0,#0x0
0028f3dc  nop
0028f3e0  beq 0x0028f6f0
0028f3e4  ldmia r4,{r1,r2}
0028f3e8  and r3,r10,#0xff
0028f3ec  add r0,sp,#0x1c0
0028f3f0  bl 0x00285474
0028f3f4  ldr r0,[sp,#0x1c8]
0028f3f8  and r4,r0,#0xff
0028f3fc  cmp r4,#0xf8
0028f400  bcs 0x0028f6f0
0028f404  cpy r0,r4
0028f408  bl 0x00636410
0028f40c  cmp r0,#0x0
0028f410  nop
0028f414  beq 0x0028f6f0
0028f418  cpy r0,r4
0028f41c  bl 0x00769904
0028f420  cmp r0,#0x0
0028f424  nop
0028f428  bne 0x0028f6f0
0028f42c  ldr r0,[r8,#0x20]
0028f430  cmp r0,#0x0
0028f434  add r0,sp,#0x1b0
0028f438  beq 0x0028f5f4
0028f43c  add r0,r0,#0x8
0028f440  cpy r1,r0
0028f444  add r2,r8,#0x24
0028f448  add r0,sp,#0x1f0
0028f44c  bl 0x007dc900
0028f450  add r1,sp,#0x1f0
0028f454  ldmia r1,{r0,r2}
0028f458  ldr r1,[r8,#0x20]
0028f45c  add r0,r0,r0, lsl #0x2
0028f460  add r2,r2,r2, lsl #0x2
0028f464  mov r2,r2, lsl #0x5
0028f468  add r0,r2,r0, lsl #0x1
0028f46c  add r1,r1,r0
0028f470  add r0,sp,#0x1f8
0028f474  bl 0x00692a4c
0028f478  add r0,sp,#0x1f8
0028f47c  nop
0028f480  ldrb r0,[r0,#0x8]
0028f484  cmp r0,#0x0
0028f488  nop
0028f48c  beq 0x0028f588
0028f490  add r0,sp,#0x1b0
0028f494  add r0,r0,#0x8
0028f498  ldr r4,[r0,#0x4]
0028f49c  add r0,sp,#0x1b0
0028f4a0  add r0,r0,#0x8
0028f4a4  ldr r1,[r0,#0x0]
0028f4a8  ldrb r3,[r8,#0x10]
0028f4ac  cpy r2,r4
0028f4b0  add r0,sp,#0x1c0
0028f4b4  bl 0x00285474
0028f4b8  add r0,sp,#0x1c8
0028f4bc  ldmia r0,{r1,r3}
0028f4c0  and r0,r1,#0xff
0028f4c4  cmp r0,#0xf8
0028f4c8  add r0,sp,#0x1c0
0028f4cc  ldmia r0,{r2,r12}
0028f4d0  bcs 0x0028f588
0028f4d4  ldmia sp,{r0,r4}
0028f4d8  cmp r0,r4
0028f4dc  bge 0x0028f524
0028f4e0  ldr r0,[sp,#0xc]
0028f4e4  cmp r0,#0x0
0028f4e8  beq 0x0028f500
0028f4ec  ldr r4,[r0,#0x0]
0028f4f0  str r4,[sp,#0xc]
0028f4f4  add r4,r0,#0x8
0028f4f8  stmia r4,{r1,r3}
0028f4fc  stmia r0,{r2,r12}
0028f500  ldmia sp,{r1,r2}
0028f504  cmp r1,r2
0028f508  bge 0x0028f524
0028f50c  ldr r1,[sp,#0x8]
0028f510  ldr r2,[sp,#0x0]
0028f514  str r0,[r1,r2,lsl #0x2]
0028f518  ldr r0,[sp,#0x0]
0028f51c  add r0,r0,#0x1
0028f520  str r0,[sp,#0x0]
0028f524  ldr r0,[sp,#0x0]
0028f528  ldr r6,[0x28faa0]
0028f52c  cpy r7,sp
0028f530  sub r0,r0,#0x1
0028f534  cmp r0,#0x0
0028f538  mov r5,#0x0
0028f53c  ble 0x0028f588
0028f540  ldr r0,[sp,#0x0]
0028f544  add r4,r5,#0x1
0028f548  cmp r0,r4
0028f54c  ble 0x0028f578
0028f550  ldr r0,[sp,#0x8]
0028f554  ldr r1,[r0,r4,lsl #0x2]
0028f558  ldr r0,[r0,r5,lsl #0x2]
0028f55c  blx r6
0028f560  cmp r0,#0x0
0028f564  addne r4,r4,#0x1
0028f568  beq 0x0028f5a8
0028f56c  ldr r0,[sp,#0x0]
0028f570  cmp r0,r4
0028f574  bgt 0x0028f550
0028f578  add r5,r5,#0x1
0028f57c  sub r0,r0,#0x1
0028f580  cmp r0,r5
0028f584  bgt 0x0028f540
0028f588  add r0,sp,#0x1f8
0028f58c  cpy r0,r0
0028f590  add r0,sp,#0x1f0
0028f594  nop
0028f598  cpy r0,r0
0028f59c  nop
0028f5a0  nop
0028f5a4  b 0x0028f6f0
0028f5a8  ldr r1,[sp,#0x0]
0028f5ac  add r0,r4,#0x1
0028f5b0  cmp r1,r0
0028f5b4  cpyge r1,r4
0028f5b8  blt 0x0028f5d8
0028f5bc  ldrd r2,r3,[sp,#0x8]
0028f5c0  ldr r2,[r2,r1,lsl #0x2]
0028f5c4  add r1,r1,#0x1
0028f5c8  cmp r0,r1
0028f5cc  str r3,[r2,#0x0]
0028f5d0  str r2,[sp,#0xc]
0028f5d4  bgt 0x0028f5bc
0028f5d8  mov r2,#0x1
0028f5dc  cpy r1,r4
0028f5e0  cpy r0,r7
0028f5e4  bl 0x005a66dc
0028f5e8  nop
0028f5ec  nop
0028f5f0  b 0x0028f56c
0028f5f4  nop
0028f5f8  add r0,r0,#0x8
0028f5fc  ldr r4,[r0,#0x4]
0028f600  add r0,sp,#0x1b0
0028f604  add r0,r0,#0x8
0028f608  ldr r1,[r0,#0x0]
0028f60c  ldrb r3,[r8,#0x10]
0028f610  cpy r2,r4
0028f614  add r0,sp,#0x1c0
0028f618  bl 0x00285474
0028f61c  add r0,sp,#0x1c8
0028f620  ldr r2,[sp,#0x1c4]
0028f624  ldmia r0,{r1,r12}
0028f628  ldr r3,[sp,#0x1c0]
0028f62c  and r0,r1,#0xff
0028f630  cmp r0,#0xf8
0028f634  bcs 0x0028f6f0
0028f638  ldmia sp,{r0,r4}
0028f63c  cmp r0,r4
0028f640  bge 0x0028f68c
0028f644  ldr r0,[sp,#0xc]
0028f648  cmp r0,#0x0
0028f64c  beq 0x0028f668
0028f650  ldr r4,[r0,#0x0]
0028f654  str r4,[sp,#0xc]
0028f658  add r4,r0,#0x8
0028f65c  str r2,[r0,#0x4]
0028f660  str r3,[r0,#0x0]
0028f664  stmia r4,{r1,r12}
0028f668  ldmia sp,{r1,r2}
0028f66c  cmp r1,r2
0028f670  bge 0x0028f68c
0028f674  ldr r1,[sp,#0x8]
0028f678  ldr r2,[sp,#0x0]
0028f67c  str r0,[r1,r2,lsl #0x2]
0028f680  ldr r0,[sp,#0x0]
0028f684  add r0,r0,#0x1
0028f688  str r0,[sp,#0x0]
0028f68c  ldr r0,[sp,#0x0]
0028f690  ldr r6,[0x28faa0]
0028f694  cpy r7,sp
0028f698  sub r0,r0,#0x1
0028f69c  cmp r0,#0x0
0028f6a0  mov r5,#0x0
0028f6a4  ble 0x0028f6f0
0028f6a8  ldr r0,[sp,#0x0]
0028f6ac  add r4,r5,#0x1
0028f6b0  cmp r0,r4
0028f6b4  ble 0x0028f6e0
0028f6b8  ldr r0,[sp,#0x8]
0028f6bc  ldr r1,[r0,r4,lsl #0x2]
0028f6c0  ldr r0,[r0,r5,lsl #0x2]
0028f6c4  blx r6
0028f6c8  cmp r0,#0x0
0028f6cc  addne r4,r4,#0x1
0028f6d0  beq 0x0028f7a8
0028f6d4  ldr r0,[sp,#0x0]
0028f6d8  cmp r0,r4
0028f6dc  bgt 0x0028f6b8
0028f6e0  add r5,r5,#0x1
0028f6e4  sub r0,r0,#0x1
0028f6e8  cmp r0,r5
0028f6ec  bgt 0x0028f6a8
0028f6f0  add r0,sp,#0x1b0
0028f6f4  bl 0x0059b024
0028f6f8  add r1,sp,#0x1d0
0028f6fc  add r0,sp,#0x1b0
0028f700  bl 0x007dc980
0028f704  cmp r0,#0x0
0028f708  nop
0028f70c  bne 0x0028f3b8
0028f710  ldr r5,[sp,#0x0]
0028f714  cmp r5,#0x0
0028f718  movne r4,#0x0
0028f71c  beq 0x0028f7f8
0028f720  bls 0x0028f778
0028f724  ldr r0,[sp,#0x0]
0028f728  cmp r0,r4
0028f72c  ldrhi r2,[sp,#0x8]
0028f730  ldrhi r1,[sp,#0x8]
0028f734  movls r0,#0x0
0028f738  movls r3,#0x0
0028f73c  ldrhi r3,[r2,r4,lsl #0x2]
0028f740  ldrhi r2,[sp,#0x8]
0028f744  ldrhi r0,[r1,r4,lsl #0x2]
0028f748  movls r1,#0x0
0028f74c  ldrhi r1,[r2,r4,lsl #0x2]
0028f750  ldr r0,[r0,#0x0]
0028f754  ldrb r2,[r1,#0x8]
0028f758  ldr r1,[r3,#0x4]
0028f75c  bl 0x007692d4
0028f760  cmp r0,#0x0
0028f764  nop
0028f768  beq 0x0028f818
0028f76c  add r4,r4,#0x1
0028f770  cmp r5,r4
0028f774  bhi 0x0028f724
0028f778  ldr r0,[sp,#0x0]
0028f77c  cmp r0,#0x0
0028f780  ldrhi r0,[sp,#0x8]
0028f784  ldrhi r0,[r0,#0x0]
0028f788  movls r0,#0x0
0028f78c  ldrb r0,[r0,#0x8]
0028f790  strb r0,[r8,#0x1d]
0028f794  add r0,sp,#0x1d0
0028f798  cpy r0,r0
0028f79c  add r0,sp,#0x1b0
0028f7a0  nop
0028f7a4  b 0x0028fa90
0028f7a8  ldr r0,[sp,#0x0]
0028f7ac  add r2,r4,#0x1
0028f7b0  cmp r0,r2
0028f7b4  cpyge r1,r4
0028f7b8  blt 0x0028f7dc
0028f7bc  add r12,sp,#0x8
0028f7c0  ldmia r12,{r0,r3}
0028f7c4  ldr r0,[r0,r1,lsl #0x2]
0028f7c8  add r1,r1,#0x1
0028f7cc  cmp r2,r1
0028f7d0  str r3,[r0,#0x0]
0028f7d4  str r0,[sp,#0xc]
0028f7d8  bgt 0x0028f7bc
0028f7dc  mov r2,#0x1
0028f7e0  cpy r1,r4
0028f7e4  cpy r0,r7
0028f7e8  bl 0x005a66dc
0028f7ec  nop
0028f7f0  nop
0028f7f4  b 0x0028f6d4
0028f7f8  add r0,sp,#0x1d0
0028f7fc  cpy r0,r0
0028f800  add r0,sp,#0x1b0
0028f804  nop
0028f808  cpy r0,r0
0028f80c  add sp,sp,#0x208
0028f810  mov r0,#0x0
0028f814  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,pc}
0028f818  ldr r0,[sp,#0x0]
0028f81c  cmp r0,r4
0028f820  ldrhi r1,[sp,#0x8]
0028f824  movls r0,#0x0
0028f828  ldrhi r0,[r1,r4,lsl #0x2]
0028f82c  ldrb r0,[r0,#0x8]
0028f830  strb r0,[r8,#0x12]
0028f834  ldr r0,[sp,#0x0]
0028f838  cmp r0,r4
0028f83c  ldrhi r1,[sp,#0x8]
0028f840  movls r0,#0x0
0028f844  ldrhi r0,[r1,r4,lsl #0x2]
0028f848  ldr r0,[r0,#0x0]
0028f84c  str r0,[r8,#0x14]
0028f850  ldr r0,[sp,#0x0]
0028f854  cmp r0,r4
0028f858  ldrhi r0,[sp,#0x8]
0028f85c  ldrhi r0,[r0,r4,lsl #0x2]
0028f860  movls r0,#0x0
0028f864  ldr r0,[r0,#0x4]
0028f868  str r0,[r8,#0x18]
0028f86c  add r0,sp,#0x1d0
0028f870  cpy r0,r0
0028f874  add r0,sp,#0x1b0
0028f878  nop
0028f87c  cpy r0,r0
0028f880  add sp,sp,#0x208
0028f884  mov r0,#0x1
0028f888  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,pc}
0028f88c  bic r1,r0,#0xff
0028f890  ldrb r0,[r8,#0x10]
0028f894  add r6,sp,#0x10
0028f898  orr r7,r1,r0
0028f89c  bl 0x00285804
0028f8a0  cpy r4,r0
0028f8a4  cpy r1,r8
0028f8a8  add r0,sp,#0x48
0028f8ac  bl 0x007dca10
0028f8b0  add r5,sp,#0x48
0028f8b4  cpy r1,r8
0028f8b8  add r0,sp,#0x30
0028f8bc  bl 0x007dc9d8
0028f8c0  ldr r1,[sp,#0x30]
0028f8c4  add r0,sp,#0x28
0028f8c8  str r1,[sp,#0x20]
0028f8cc  ldr r1,[sp,#0x34]
0028f8d0  str r1,[sp,#0x24]
0028f8d4  add r1,sp,#0x38
0028f8d8  bl 0x0059afac
0028f8dc  ldr r1,[sp,#0x48]
0028f8e0  add r0,sp,#0x8
0028f8e4  str r1,[sp,#0x0]
0028f8e8  ldr r1,[sp,#0x4c]
0028f8ec  str r1,[sp,#0x4]
0028f8f0  add r1,r5,#0x8
0028f8f4  bl 0x0059afac
0028f8f8  add r1,sp,#0x20
0028f8fc  cpy r0,sp
0028f900  bl 0x007dc980
0028f904  cmp r0,#0x0
0028f908  nop
0028f90c  beq 0x0028f9cc
0028f910  cpy r0,sp
0028f914  add r0,r0,#0x8
0028f918  cmp r4,#0x0
0028f91c  cpy r5,r0
0028f920  beq 0x0028f9ac
0028f924  ldmia r5,{r1,r2}
0028f928  cpy r0,r4
0028f92c  bl 0x007bfff8
0028f930  cmp r0,#0x0
0028f934  nop
0028f938  beq 0x0028f9ac
0028f93c  ldmia r5,{r1,r2}
0028f940  and r3,r7,#0xff
0028f944  add r0,sp,#0x70
0028f948  bl 0x00285474
0028f94c  ldr r0,[sp,#0x78]
0028f950  and r0,r0,#0xff
0028f954  cmp r0,#0xf8
0028f958  bcs 0x0028f9ac
0028f95c  bl 0x00636410
0028f960  cmp r0,#0x0
0028f964  nop
0028f968  beq 0x0028f9ac
0028f96c  ldr r0,[sp,#0x0]
0028f970  add r1,sp,#0x8
0028f974  str r0,[sp,#0x10]
0028f978  ldr r0,[sp,#0x4]
0028f97c  str r0,[sp,#0x14]
0028f980  add r0,r6,#0x8
0028f984  bl 0x0059afac
0028f988  cpy r0,sp
0028f98c  nop
0028f990  cpy r0,r0
0028f994  add r0,sp,#0x20
0028f998  nop
0028f99c  cpy r0,r0
0028f9a0  nop
0028f9a4  nop
0028f9a8  b 0x0028f9fc
0028f9ac  cpy r0,sp
0028f9b0  bl 0x0059b024
0028f9b4  add r1,sp,#0x20
0028f9b8  cpy r0,sp
0028f9bc  bl 0x007dc980
0028f9c0  cmp r0,#0x0
0028f9c4  nop
0028f9c8  bne 0x0028f910
0028f9cc  cpy r0,sp
0028f9d0  cpy r0,r0
0028f9d4  ldr r1,[sp,#0x20]
0028f9d8  add r0,r6,#0x8
0028f9dc  str r1,[sp,#0x10]
0028f9e0  ldr r1,[sp,#0x24]
0028f9e4  str r1,[sp,#0x14]
0028f9e8  add r1,sp,#0x28
0028f9ec  bl 0x0059afac
0028f9f0  add r0,sp,#0x20
0028f9f4  nop
0028f9f8  cpy r0,r0
0028f9fc  add r0,sp,#0x30
0028fa00  cpy r0,r0
0028fa04  add r0,sp,#0x48
0028fa08  nop
0028fa0c  cpy r0,r0
0028fa10  cpy r1,r8
0028fa14  add r0,sp,#0x58
0028fa18  bl 0x007dc9d8
0028fa1c  add r1,sp,#0x58
0028fa20  add r0,sp,#0x10
0028fa24  bl 0x007dc980
0028fa28  cpy r4,r0
0028fa2c  add r0,sp,#0x58
0028fa30  cpy r0,r0
0028fa34  cmp r4,#0x0
0028fa38  add r0,sp,#0x10
0028fa3c  beq 0x0028fa90
0028fa40  add r0,r0,#0x8
0028fa44  ldr r4,[r0,#0x4]
0028fa48  add r0,sp,#0x10
0028fa4c  add r0,r0,#0x8
0028fa50  ldr r1,[r0,#0x0]
0028fa54  ldrb r3,[r8,#0x10]
0028fa58  cpy r2,r4
0028fa5c  add r0,sp,#0x20
0028fa60  bl 0x00285474
0028fa64  add r3,sp,#0x20
0028fa68  ldmia r3,{r0,r1,r2}
0028fa6c  and r2,r2,#0xff
0028fa70  cmp r2,#0xf8
0028fa74  strbcc r2,[r8,#0x12]
0028fa78  strdcc r0,r1,[r8,#0x14]
0028fa7c  add r0,sp,#0x10
0028fa80  cpy r0,r0
0028fa84  add sp,sp,#0x208
0028fa88  mov r0,#0x1
0028fa8c  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,pc}
0028fa90  cpy r0,r0
0028fa94  add sp,sp,#0x208
0028fa98  mov r0,#0x0
0028fa9c  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,pc}
