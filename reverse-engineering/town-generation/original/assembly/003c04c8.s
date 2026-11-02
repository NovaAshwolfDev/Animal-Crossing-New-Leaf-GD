003c04c8  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,r11,lr}
003c04cc  sub sp,sp,#0x264
003c04d0  cpy r6,r0
003c04d4  mov r2,#0x3
003c04d8  cpy r1,r2
003c04dc  add r0,sp,#0x218
003c04e0  stmia r0,{r1,r2}
003c04e4  cpy r4,r0
003c04e8  bl 0x0059af60
003c04ec  cpy r1,r0
003c04f0  cpy r2,r4
003c04f4  add r0,sp,#0x1d8
003c04f8  bl 0x0059b0e0
003c04fc  add r0,sp,#0x218
003c0500  cpy r0,r0
003c0504  mov r8,#0x0
003c0508  add r1,sp,#0x1d8
003c050c  add r0,sp,#0x1c0
003c0510  bl 0x007dc9d8
003c0514  mov r0,#0x1e
003c0518  bl 0x0074702c
003c051c  movs r9,r0
003c0520  beq 0x003c0b00
003c0524  add r1,sp,#0x1d8
003c0528  add r0,sp,#0x168
003c052c  bl 0x007dca10
003c0530  add r1,sp,#0x1c0
003c0534  add r0,sp,#0x168
003c0538  bl 0x007dc980
003c053c  cmp r0,#0x0
003c0540  beq 0x003c05cc
003c0544  add r0,sp,#0x168
003c0548  add r0,r0,#0x8
003c054c  ldr r4,[r0,#0x4]
003c0550  add r0,sp,#0x168
003c0554  add r0,r0,#0x8
003c0558  ldr r1,[r0,#0x0]
003c055c  cpy r2,r4
003c0560  cpy r0,r9
003c0564  bl 0x007e23e0
003c0568  cpy r4,r0
003c056c  add r0,sp,#0x168
003c0570  add r0,r0,#0x8
003c0574  ldr r5,[r0,#0x4]
003c0578  add r0,sp,#0x168
003c057c  add r0,r0,#0x8
003c0580  ldr r1,[r0,#0x0]
003c0584  cpy r2,r5
003c0588  cpy r0,r6
003c058c  bl 0x007c2ce8
003c0590  nop
003c0594  nop
003c0598  ldrh r0,[r0,#0x0]
003c059c  cpy r1,r0
003c05a0  cpy r0,r4
003c05a4  strh r1,[r0,#0x0]
003c05a8  add r0,sp,#0x168
003c05ac  nop
003c05b0  bl 0x0059b024
003c05b4  add r1,sp,#0x1c0
003c05b8  add r0,sp,#0x168
003c05bc  bl 0x007dc980
003c05c0  cmp r0,#0x0
003c05c4  nop
003c05c8  bne 0x003c0544
003c05cc  add r0,sp,#0x168
003c05d0  cpy r0,r0
003c05d4  mov r5,#0x0
003c05d8  mov r4,#0x0
003c05dc  cpy r2,r5
003c05e0  cpy r1,r4
003c05e4  cpy r0,r6
003c05e8  bl 0x003c8138
003c05ec  cpy r7,r0
003c05f0  add r2,r5,#0x1
003c05f4  add r1,r4,#0x1
003c05f8  cpy r0,r9
003c05fc  bl 0x007e23e0
003c0600  cmp r0,#0x0
003c0604  nop
003c0608  beq 0x003c0618
003c060c  mov r2,#0x0
003c0610  cpy r1,r7
003c0614  bl 0x005dc588
003c0618  add r4,r4,#0x1
003c061c  cmp r4,#0x2
003c0620  blt 0x003c05dc
003c0624  add r5,r5,#0x1
003c0628  cmp r5,#0x2
003c062c  blt 0x003c05d8
003c0630  add r1,sp,#0x1d8
003c0634  add r0,sp,#0x168
003c0638  bl 0x007dca10
003c063c  add r1,sp,#0x1c0
003c0640  add r0,sp,#0x168
003c0644  bl 0x007dc980
003c0648  cmp r0,#0x0
003c064c  nop
003c0650  beq 0x003c0700
003c0654  add r0,sp,#0x168
003c0658  add r0,r0,#0x8
003c065c  ldr r4,[r0,#0x4]
003c0660  add r0,sp,#0x168
003c0664  add r0,r0,#0x8
003c0668  ldr r1,[r0,#0x0]
003c066c  cpy r2,r4
003c0670  cpy r0,r9
003c0674  bl 0x007e206c
003c0678  cpy r4,r0
003c067c  add r0,sp,#0x168
003c0680  add r0,r0,#0x8
003c0684  ldr r5,[r0,#0x4]
003c0688  add r0,sp,#0x168
003c068c  add r0,r0,#0x8
003c0690  ldr r1,[r0,#0x0]
003c0694  cpy r2,r5
003c0698  cpy r0,r9
003c069c  bl 0x007e23e0
003c06a0  cmp r4,#0x0
003c06a4  cmpne r0,#0x0
003c06a8  beq 0x003c06e0
003c06ac  ldrh r0,[r0,#0x0]
003c06b0  cpy r5,r0
003c06b4  nop
003c06b8  bl 0x001cd62c
003c06bc  cpy r1,r5
003c06c0  nop
003c06c4  bl 0x001cd81c
003c06c8  movs r1,r0
003c06cc  nop
003c06d0  beq 0x003c06e0
003c06d4  mov r2,#0xa00
003c06d8  cpy r0,r4
003c06dc  bl 0x00748d30
003c06e0  add r0,sp,#0x168
003c06e4  bl 0x0059b024
003c06e8  add r1,sp,#0x1c0
003c06ec  add r0,sp,#0x168
003c06f0  bl 0x007dc980
003c06f4  cmp r0,#0x0
003c06f8  nop
003c06fc  bne 0x003c0654
003c0700  add r0,sp,#0x168
003c0704  cpy r0,r0
003c0708  nop
003c070c  nop
003c0710  bl 0x00288484
003c0714  ldr r0,[0x3c0b1c]
003c0718  ldr r0,[r0,#0x0]
003c071c  bl 0x0011a378
003c0720  cpy r7,r0
003c0724  add r0,sp,#0x4
003c0728  bl 0x005c780c
003c072c  ldr r1,[0x3c0b20]
003c0730  mov r3,#0x1
003c0734  mov r2,#0x130
003c0738  add r0,r0,#0x8
003c073c  blx 0x00100648
003c0740  add r0,r0,#0x130
003c0744  nop
003c0748  bl 0x0010d718
003c074c  add r0,r0,#0xc
003c0750  nop
003c0754  bl 0x0010d718
003c0758  add r0,r0,#0xc
003c075c  nop
003c0760  bl 0x0010d718
003c0764  ldr r4,[sp,#0x140]
003c0768  add r5,sp,#0x4
003c076c  mov r10,#0x19000
003c0770  cmp r4,#0x0
003c0774  beq 0x003c0798
003c0778  add r0,r4,#0xc
003c077c  bl 0x0060f000
003c0780  add r0,r4,#0x14
003c0784  nop
003c0788  bl 0x00121a30
003c078c  ldr r4,[r4,#0x8]
003c0790  cmp r4,#0x0
003c0794  bne 0x003c0778
003c0798  ldr r4,[sp,#0x158]
003c079c  cmp r4,#0x0
003c07a0  beq 0x003c07c4
003c07a4  add r0,r4,#0xc
003c07a8  bl 0x0060f000
003c07ac  add r0,r4,#0x14
003c07b0  nop
003c07b4  bl 0x00121a30
003c07b8  ldr r4,[r4,#0x8]
003c07bc  cmp r4,#0x0
003c07c0  bne 0x003c07a4
003c07c4  add r0,r5,#0x138
003c07c8  bl 0x001193a8
003c07cc  add r0,r5,#0x144
003c07d0  nop
003c07d4  bl 0x001193a8
003c07d8  add r0,r5,#0x150
003c07dc  nop
003c07e0  bl 0x001193a8
003c07e4  add r1,r5,#0x8
003c07e8  add r0,r5,#0x144
003c07ec  bl 0x00124be4
003c07f0  cpy r0,r5
003c07f4  nop
003c07f8  bl 0x00113b48
003c07fc  ldr r6,[0x3c0b24]
003c0800  cmp r7,#0x0
003c0804  mov r1,#0x1
003c0808  beq 0x003c0830
003c080c  adr r0,0x3c0b28
003c0810  str r1,[sp,#0x0]
003c0814  str r0,[sp,#0x174]
003c0818  add r3,sp,#0x170
003c081c  cpy r2,r7
003c0820  cpy r1,r10
003c0824  cpy r0,r5
003c0828  str r6,[sp,#0x170]
003c082c  bl 0x005c774c
003c0830  mov r0,#0x50
003c0834  add r1,sp,#0x16c
003c0838  str r1,[sp,#0x164]
003c083c  cpy r1,r0
003c0840  str r0,[sp,#0x168]
003c0844  ldr r0,[sp,#0x164]
003c0848  strb r8,[sp,#0x1d4]
003c084c  add r11,sp,#0x220
003c0850  sub r0,r0,#0x1
003c0854  add r5,sp,#0x4
003c0858  strb r8,[r1,r0]
003c085c  ldr r0,[0x3c0b5c]
003c0860  adr r7,0x3c0b34
003c0864  add r1,sp,#0x160
003c0868  str r0,[sp,#0x160]
003c086c  add r0,sp,#0x240
003c0870  strb r8,[sp,#0x16c]
003c0874  bl 0x005ad830
003c0878  adr r1,0x3c0b60
003c087c  nop
003c0880  bl 0x005a9cd4
003c0884  cpy r1,r7
003c0888  nop
003c088c  bl 0x005a9cd4
003c0890  cpy r4,r0
003c0894  add r10,sp,#0x1d4
003c0898  add r1,sp,#0x1f8
003c089c  bl 0x005a9714
003c08a0  cmp r0,#0x0
003c08a4  nop
003c08a8  beq 0x003c08c8
003c08ac  ldrb r0,[sp,#0x1f8]
003c08b0  ldr r2,[r4,#0x4]
003c08b4  cmp r0,#0x0
003c08b8  moveq r1,#0x0
003c08bc  addne r1,sp,#0x1f8
003c08c0  cpy r0,r10
003c08c4  bl 0x005a98f4
003c08c8  cpy r0,r4
003c08cc  bl 0x005a9c0c
003c08d0  add r0,sp,#0x254
003c08d4  nop
003c08d8  cpy r0,r0
003c08dc  ldr r1,[sp,#0x160]
003c08e0  add r10,sp,#0x238
003c08e4  add r0,sp,#0x160
003c08e8  ldr r1,[r1,#0x8]
003c08ec  blx r1
003c08f0  ldr r4,[sp,#0x164]
003c08f4  cpy r0,r4
003c08f8  bl 0x00301bac
003c08fc  mvn r3,#0x0
003c0900  cpy r1,r0
003c0904  cpy r2,r3
003c0908  cpy r0,r4
003c090c  bl 0x005cafa8
003c0910  cpy r4,r0
003c0914  cpy r0,r10
003c0918  bl 0x0060f024
003c091c  cpy r1,r4
003c0920  nop
003c0924  bl 0x0060eff0
003c0928  ldr r4,[sp,#0x140]
003c092c  add r10,sp,#0x238
003c0930  cmp r4,#0x0
003c0934  beq 0x003c0980
003c0938  add r1,r4,#0xc
003c093c  cpy r0,r10
003c0940  bl 0x007e51bc
003c0944  cmp r0,#0x0
003c0948  nop
003c094c  beq 0x003c0974
003c0950  add r1,sp,#0x238
003c0954  cpy r0,r11
003c0958  bl 0x0060f010
003c095c  add r0,sp,#0x238
003c0960  nop
003c0964  cpy r0,r0
003c0968  nop
003c096c  nop
003c0970  b 0x003c09dc
003c0974  ldr r4,[r4,#0x8]
003c0978  cmp r4,#0x0
003c097c  bne 0x003c0938
003c0980  ldr r4,[sp,#0x14c]
003c0984  add r10,sp,#0x230
003c0988  ldr r2,[sp,#0x8]
003c098c  add r1,sp,#0x230
003c0990  mov r3,#0x80
003c0994  add r0,r4,#0x14
003c0998  stmia r10,{r6,r7}
003c099c  bl 0x005564f8
003c09a0  add r1,sp,#0x238
003c09a4  add r0,r4,#0xc
003c09a8  bl 0x0060f038
003c09ac  cpy r1,r4
003c09b0  add r0,r5,#0x144
003c09b4  bl 0x00124ab0
003c09b8  cpy r1,r4
003c09bc  add r0,r5,#0x138
003c09c0  bl 0x00124be4
003c09c4  add r1,r4,#0xc
003c09c8  cpy r0,r11
003c09cc  bl 0x0060f010
003c09d0  add r0,sp,#0x238
003c09d4  nop
003c09d8  cpy r0,r0
003c09dc  add r1,sp,#0x220
003c09e0  add r0,sp,#0x228
003c09e4  bl 0x0060f010
003c09e8  ldr r4,[sp,#0x140]
003c09ec  cpy r5,r0
003c09f0  cmp r4,#0x0
003c09f4  beq 0x003c0a24
003c09f8  add r1,r4,#0xc
003c09fc  cpy r0,r5
003c0a00  bl 0x007e51bc
003c0a04  cmp r0,#0x0
003c0a08  nop
003c0a0c  beq 0x003c0a18
003c0a10  add r8,r4,#0x14
003c0a14  b 0x003c0a24
003c0a18  ldr r4,[r4,#0x8]
003c0a1c  cmp r4,#0x0
003c0a20  bne 0x003c09f8
003c0a24  cpy r1,r8
003c0a28  cpy r0,r9
003c0a2c  bl 0x007a0858
003c0a30  add r0,sp,#0x228
003c0a34  nop
003c0a38  cpy r0,r0
003c0a3c  ldr r4,[sp,#0x140]
003c0a40  add r5,sp,#0x4
003c0a44  cmp r4,#0x0
003c0a48  beq 0x003c0a6c
003c0a4c  add r0,r4,#0xc
003c0a50  bl 0x0060f000
003c0a54  add r0,r4,#0x14
003c0a58  nop
003c0a5c  bl 0x00121a30
003c0a60  ldr r4,[r4,#0x8]
003c0a64  cmp r4,#0x0
003c0a68  bne 0x003c0a4c
003c0a6c  ldr r4,[sp,#0x158]
003c0a70  cmp r4,#0x0
003c0a74  beq 0x003c0a98
003c0a78  add r0,r4,#0xc
003c0a7c  bl 0x0060f000
003c0a80  add r0,r4,#0x14
003c0a84  nop
003c0a88  bl 0x00121a30
003c0a8c  ldr r4,[r4,#0x8]
003c0a90  cmp r4,#0x0
003c0a94  bne 0x003c0a78
003c0a98  add r0,r5,#0x138
003c0a9c  bl 0x001193a8
003c0aa0  add r0,r5,#0x144
003c0aa4  nop
003c0aa8  bl 0x001193a8
003c0aac  add r0,r5,#0x150
003c0ab0  nop
003c0ab4  bl 0x001193a8
003c0ab8  add r1,r5,#0x8
003c0abc  add r0,r5,#0x144
003c0ac0  bl 0x00124be4
003c0ac4  cpy r0,r5
003c0ac8  nop
003c0acc  bl 0x00113b48
003c0ad0  add r0,sp,#0x220
003c0ad4  nop
003c0ad8  cpy r0,r0
003c0adc  ldr r1,[0x3c0b68]
003c0ae0  add r4,sp,#0x4
003c0ae4  mov r3,#0x1
003c0ae8  mov r2,#0x130
003c0aec  add r0,sp,#0xc
003c0af0  blx 0x00100730
003c0af4  cpy r0,r4
003c0af8  nop
003c0afc  bl 0x005c7828
003c0b00  add r0,sp,#0x1c0
003c0b04  cpy r0,r0
003c0b08  add r0,sp,#0x1d8
003c0b0c  nop
003c0b10  cpy r0,r0
003c0b14  add sp,sp,#0x264
003c0b18  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
