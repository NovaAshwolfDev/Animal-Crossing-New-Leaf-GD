0028ed64  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,lr}
0028ed68  cpy r4,r0
0028ed6c  bic r1,r0,#0xff
0028ed70  sub sp,sp,#0x68
0028ed74  ldrb r0,[r0,#0x10]
0028ed78  orr r7,r1,r0
0028ed7c  bl 0x00285804
0028ed80  cpy r6,r0
0028ed84  cpy r1,r4
0028ed88  cpy r0,sp
0028ed8c  bl 0x007dca10
0028ed90  cpy r1,r4
0028ed94  add r0,sp,#0x10
0028ed98  bl 0x007dc9d8
0028ed9c  add r1,sp,#0x10
0028eda0  cpy r0,sp
0028eda4  bl 0x007dc980
0028eda8  cmp r0,#0x0
0028edac  beq 0x0028ef00
0028edb0  cpy r0,sp
0028edb4  add r0,r0,#0x8
0028edb8  cmp r6,#0x0
0028edbc  cpy r5,r0
0028edc0  beq 0x0028eee0
0028edc4  ldmia r5,{r1,r2}
0028edc8  cpy r0,r6
0028edcc  bl 0x007bfff8
0028edd0  cmp r0,#0x0
0028edd4  nop
0028edd8  beq 0x0028eee0
0028eddc  ldmia r5,{r1,r2}
0028ede0  and r3,r7,#0xff
0028ede4  add r0,sp,#0x30
0028ede8  bl 0x00285474
0028edec  ldr r0,[sp,#0x38]
0028edf0  and r0,r0,#0xff
0028edf4  cmp r0,#0xf8
0028edf8  bcs 0x0028eee0
0028edfc  bl 0x00636488
0028ee00  cmp r0,#0x0
0028ee04  nop
0028ee08  beq 0x0028eee0
0028ee0c  ldr r0,[r4,#0x20]
0028ee10  cmp r0,#0x0
0028ee14  beq 0x0028f034
0028ee18  cpy r0,sp
0028ee1c  add r0,r0,#0x8
0028ee20  cpy r1,r0
0028ee24  add r2,r4,#0x24
0028ee28  add r0,sp,#0x28
0028ee2c  bl 0x007dc900
0028ee30  ldrd r0,r1,[sp,#0x28]
0028ee34  ldr r2,[r4,#0x20]
0028ee38  add r1,r1,r1, lsl #0x2
0028ee3c  add r0,r0,r0, lsl #0x2
0028ee40  mov r1,r1, lsl #0x5
0028ee44  add r0,r1,r0, lsl #0x1
0028ee48  add r1,r0,r2
0028ee4c  add r0,sp,#0x30
0028ee50  bl 0x00692a4c
0028ee54  add r0,sp,#0x30
0028ee58  nop
0028ee5c  ldrb r0,[r0,#0x8]
0028ee60  cmp r0,#0x0
0028ee64  nop
0028ee68  beq 0x0028eecc
0028ee6c  cpy r0,sp
0028ee70  add r0,r0,#0x8
0028ee74  ldr r5,[r0,#0x4]
0028ee78  cpy r0,sp
0028ee7c  add r0,r0,#0x8
0028ee80  ldr r1,[r0,#0x0]
0028ee84  ldrb r3,[r4,#0x10]
0028ee88  cpy r2,r5
0028ee8c  add r0,sp,#0x50
0028ee90  bl 0x00285474
0028ee94  add r3,sp,#0x50
0028ee98  ldr r0,[sp,#0x58]
0028ee9c  ldmia r3,{r1,r2}
0028eea0  and r0,r0,#0xff
0028eea4  cmp r0,#0xf8
0028eea8  bcs 0x0028eeb8
0028eeac  strb r0,[r4,#0x12]
0028eeb0  add r4,r4,#0x14
0028eeb4  stmia r4,{r1,r2}
0028eeb8  add r0,sp,#0x30
0028eebc  cpy r0,r0
0028eec0  add r0,sp,#0x28
0028eec4  nop
0028eec8  b 0x0028f2c8
0028eecc  add r0,sp,#0x30
0028eed0  cpy r0,r0
0028eed4  add r0,sp,#0x28
0028eed8  nop
0028eedc  cpy r0,r0
0028eee0  cpy r0,sp
0028eee4  bl 0x0059b024
0028eee8  add r1,sp,#0x10
0028eeec  cpy r0,sp
0028eef0  bl 0x007dc980
0028eef4  cmp r0,#0x0
0028eef8  nop
0028eefc  bne 0x0028edb0
0028ef00  ldrb r0,[r4,#0x11]
0028ef04  bl 0x0074702c
0028ef08  movs r7,r0
0028ef0c  nop
0028ef10  beq 0x0028f284
0028ef14  ldrb r0,[r4,#0x11]
0028ef18  bl 0x0074702c
0028ef1c  cpy r5,r0
0028ef20  cpy r6,sp
0028ef24  cpy r1,r4
0028ef28  add r0,sp,#0x20
0028ef2c  bl 0x007dca10
0028ef30  ldr r1,[sp,#0x20]
0028ef34  add r0,r6,#0x8
0028ef38  str r1,[sp,#0x0]
0028ef3c  ldr r1,[sp,#0x24]
0028ef40  str r1,[sp,#0x4]
0028ef44  add r1,sp,#0x28
0028ef48  bl 0x0059afd4
0028ef4c  add r0,sp,#0x20
0028ef50  nop
0028ef54  cpy r0,r0
0028ef58  add r6,sp,#0x10
0028ef5c  cpy r1,r4
0028ef60  add r0,sp,#0x20
0028ef64  bl 0x007dc9d8
0028ef68  ldr r1,[sp,#0x20]
0028ef6c  add r0,r6,#0x8
0028ef70  str r1,[sp,#0x10]
0028ef74  ldr r1,[sp,#0x24]
0028ef78  str r1,[sp,#0x14]
0028ef7c  add r1,sp,#0x28
0028ef80  bl 0x0059afd4
0028ef84  add r0,sp,#0x20
0028ef88  nop
0028ef8c  cpy r0,r0
0028ef90  add r1,sp,#0x10
0028ef94  cpy r0,sp
0028ef98  bl 0x007dc980
0028ef9c  cmp r0,#0x0
0028efa0  movne r9,#0x59
0028efa4  movne r10,#0x58
0028efa8  beq 0x0028f284
0028efac  cpy r0,sp
0028efb0  add r0,r0,#0x8
0028efb4  cmp r5,#0x0
0028efb8  cpy r8,r0
0028efbc  beq 0x0028f264
0028efc0  cpy r1,r0
0028efc4  add r0,sp,#0x48
0028efc8  bl 0x0059ace8
0028efcc  add r3,sp,#0x48
0028efd0  cpy r0,r5
0028efd4  ldmia r3,{r1,r2}
0028efd8  bl 0x007e206c
0028efdc  movs r6,r0
0028efe0  nop
0028efe4  beq 0x0028f028
0028efe8  cpy r1,r8
0028efec  add r0,sp,#0x40
0028eff0  bl 0x0059abf0
0028eff4  add r3,sp,#0x40
0028eff8  cpy r0,r6
0028effc  ldmia r3,{r1,r2}
0028f000  bl 0x007f32bc
0028f004  cmp r0,#0x9d
0028f008  nop
0028f00c  beq 0x0028f060
0028f010  bgt 0x0028f054
0028f014  cmp r0,#0x11
0028f018  cmpne r0,#0x9c
0028f01c  beq 0x0028f060
0028f020  add r0,sp,#0x40
0028f024  cpy r0,r0
0028f028  add r0,sp,#0x48
0028f02c  cpy r0,r0
0028f030  b 0x0028f264
0028f034  add r0,sp,#0x10
0028f038  cpy r0,r0
0028f03c  cpy r0,sp
0028f040  nop
0028f044  cpy r0,r0
0028f048  add sp,sp,#0x68
0028f04c  mov r0,#0x1
0028f050  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,pc}
0028f054  cmp r0,#0x9e
0028f058  cmpne r0,#0x9f
0028f05c  bne 0x0028f020
0028f060  add r0,sp,#0x40
0028f064  cpy r0,r0
0028f068  add r0,sp,#0x48
0028f06c  nop
0028f070  cpy r0,r0
0028f074  ldr r0,[r4,#0x20]
0028f078  cmp r0,#0x0
0028f07c  cpy r0,sp
0028f080  beq 0x0028f1f8
0028f084  add r0,r0,#0x8
0028f088  cpy r1,r0
0028f08c  add r2,r4,#0x24
0028f090  add r0,sp,#0x58
0028f094  bl 0x007dc900
0028f098  add r0,sp,#0x58
0028f09c  ldmia r0,{r1,r2}
0028f0a0  ldr r0,[r4,#0x20]
0028f0a4  add r1,r1,r1, lsl #0x2
0028f0a8  add r2,r2,r2, lsl #0x2
0028f0ac  mov r2,r2, lsl #0x5
0028f0b0  add r1,r2,r1, lsl #0x1
0028f0b4  add r1,r1,r0
0028f0b8  add r0,sp,#0x34
0028f0bc  bl 0x00692a4c
0028f0c0  add r0,sp,#0x34
0028f0c4  nop
0028f0c8  ldrb r0,[r0,#0x8]
0028f0cc  cmp r0,#0x0
0028f0d0  nop
0028f0d4  beq 0x0028f144
0028f0d8  cpy r0,sp
0028f0dc  add r0,r0,#0x8
0028f0e0  cpy r1,r0
0028f0e4  add r0,sp,#0x60
0028f0e8  bl 0x0059ace8
0028f0ec  add r3,sp,#0x60
0028f0f0  cpy r0,r7
0028f0f4  ldmia r3,{r1,r2}
0028f0f8  bl 0x007e23e0
0028f0fc  cmp r0,#0x0
0028f100  nop
0028f104  beq 0x0028f13c
0028f108  ldrh r0,[r0,#0x0]
0028f10c  nop
0028f110  nop
0028f114  bl 0x00687d78
0028f118  cmp r0,#0x1
0028f11c  nop
0028f120  beq 0x0028f158
0028f124  cmp r0,#0x2
0028f128  beq 0x0028f17c
0028f12c  cmp r0,#0x3
0028f130  beq 0x0028f1a8
0028f134  cmp r0,#0x4
0028f138  beq 0x0028f1cc
0028f13c  add r0,sp,#0x60
0028f140  cpy r0,r0
0028f144  add r0,sp,#0x34
0028f148  cpy r0,r0
0028f14c  add r0,sp,#0x58
0028f150  nop
0028f154  b 0x0028f02c
0028f158  add r0,sp,#0x60
0028f15c  strb r9,[r4,#0x12]
0028f160  cpy r0,r0
0028f164  add r0,sp,#0x34
0028f168  nop
0028f16c  cpy r0,r0
0028f170  add r0,sp,#0x58
0028f174  nop
0028f178  b 0x0028f2c8
0028f17c  nop
0028f180  bl 0x00768acc
0028f184  strb r0,[r4,#0x12]
0028f188  add r0,sp,#0x60
0028f18c  cpy r0,r0
0028f190  add r0,sp,#0x34
0028f194  nop
0028f198  cpy r0,r0
0028f19c  add r0,sp,#0x58
0028f1a0  nop
0028f1a4  b 0x0028f2c8
0028f1a8  add r0,sp,#0x60
0028f1ac  strb r10,[r4,#0x12]
0028f1b0  cpy r0,r0
0028f1b4  add r0,sp,#0x34
0028f1b8  nop
0028f1bc  cpy r0,r0
0028f1c0  add r0,sp,#0x58
0028f1c4  nop
0028f1c8  b 0x0028f2c8
0028f1cc  nop
0028f1d0  bl 0x00768c80
0028f1d4  strb r0,[r4,#0x12]
0028f1d8  add r0,sp,#0x60
0028f1dc  cpy r0,r0
0028f1e0  add r0,sp,#0x34
0028f1e4  nop
0028f1e8  cpy r0,r0
0028f1ec  add r0,sp,#0x58
0028f1f0  nop
0028f1f4  b 0x0028f2c8
0028f1f8  nop
0028f1fc  add r0,r0,#0x8
0028f200  cpy r1,r0
0028f204  add r0,sp,#0x38
0028f208  bl 0x0059ace8
0028f20c  add r3,sp,#0x38
0028f210  cpy r0,r7
0028f214  ldmia r3,{r1,r2}
0028f218  bl 0x007e23e0
0028f21c  cmp r0,#0x0
0028f220  nop
0028f224  beq 0x0028f25c
0028f228  ldrh r0,[r0,#0x0]
0028f22c  nop
0028f230  nop
0028f234  bl 0x00687d78
0028f238  cmp r0,#0x1
0028f23c  nop
0028f240  beq 0x0028f2a4
0028f244  cmp r0,#0x2
0028f248  beq 0x0028f2ac
0028f24c  cmp r0,#0x3
0028f250  beq 0x0028f2c0
0028f254  cmp r0,#0x4
0028f258  beq 0x0028f2d0
0028f25c  add r0,sp,#0x38
0028f260  cpy r0,r0
0028f264  cpy r0,sp
0028f268  bl 0x0059b024
0028f26c  add r1,sp,#0x10
0028f270  cpy r0,sp
0028f274  bl 0x007dc980
0028f278  cmp r0,#0x0
0028f27c  nop
0028f280  bne 0x0028efac
0028f284  add r0,sp,#0x10
0028f288  cpy r0,r0
0028f28c  cpy r0,sp
0028f290  nop
0028f294  cpy r0,r0
0028f298  add sp,sp,#0x68
0028f29c  mov r0,#0x0
0028f2a0  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,pc}
0028f2a4  strb r9,[r4,#0x12]
0028f2a8  b 0x0028f2b8
0028f2ac  nop
0028f2b0  bl 0x00768acc
0028f2b4  strb r0,[r4,#0x12]
0028f2b8  add r0,sp,#0x38
0028f2bc  b 0x0028f2c8
0028f2c0  add r0,sp,#0x38
0028f2c4  strb r10,[r4,#0x12]
0028f2c8  cpy r0,r0
0028f2cc  b 0x0028f034
0028f2d0  nop
0028f2d4  bl 0x00768c80
0028f2d8  strb r0,[r4,#0x12]
0028f2dc  add r0,sp,#0x38
0028f2e0  cpy r0,r0
0028f2e4  nop
0028f2e8  nop
0028f2ec  b 0x0028f034
