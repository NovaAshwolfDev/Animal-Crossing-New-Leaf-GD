00285eb8  stmdb sp!,{r4,r5,r6,r7,lr}
00285ebc  sub sp,sp,#0xb4
00285ec0  add r0,sp,#0x58
00285ec4  ldr r4,[0x2861b0]
00285ec8  ldr r1,[r4,#0x0]
00285ecc  bl 0x007acd50
00285ed0  ldr r1,[r4,#0x0]
00285ed4  cpy r0,sp
00285ed8  bl 0x007acdd0
00285edc  add r1,sp,#0x58
00285ee0  cpy r0,sp
00285ee4  bl 0x007acd1c
00285ee8  cmp r0,#0x0
00285eec  beq 0x0028617c
00285ef0  cpy r0,sp
00285ef4  add r0,r0,#0x8
00285ef8  ldr r4,[r0,#0x4]
00285efc  cpy r0,sp
00285f00  add r0,r0,#0x8
00285f04  ldr r1,[r0,#0x0]
00285f08  cpy r2,r4
00285f0c  add r0,sp,#0x78
00285f10  stmia r0,{r1,r2}
00285f14  cpy r5,r0
00285f18  cpy r0,sp
00285f1c  add r0,r0,#0x8
00285f20  ldrb r4,[r0,#0x8]
00285f24  mov r0,#0x1
00285f28  bl 0x0074702c
00285f2c  movs r6,r0
00285f30  nop
00285f34  beq 0x00286118
00285f38  cpy r0,r4
00285f3c  bl 0x00636178
00285f40  ldrsb r2,[r0,#0x3]
00285f44  ldrsb r1,[r0,#0x2]
00285f48  cpy r4,r0
00285f4c  add r0,sp,#0x80
00285f50  stmia r0,{r1,r2}
00285f54  cpy r7,r0
00285f58  ldrsb r2,[r4,#0x1]
00285f5c  ldrsb r1,[r4,#0x0]
00285f60  add r0,sp,#0xa0
00285f64  stmia r0,{r1,r2}
00285f68  cpy r1,r0
00285f6c  cpy r2,r7
00285f70  add r0,sp,#0x90
00285f74  bl 0x0059b0e0
00285f78  cpy r1,r0
00285f7c  cpy r2,r5
00285f80  add r0,sp,#0x28
00285f84  bl 0x007dcaec
00285f88  add r0,sp,#0x90
00285f8c  nop
00285f90  cpy r0,r0
00285f94  add r0,sp,#0xa0
00285f98  nop
00285f9c  cpy r0,r0
00285fa0  add r0,sp,#0x80
00285fa4  nop
00285fa8  cpy r0,r0
00285fac  add r1,sp,#0x28
00285fb0  add r0,sp,#0x38
00285fb4  bl 0x007dc9d8
00285fb8  add r1,sp,#0x28
00285fbc  add r0,sp,#0x48
00285fc0  bl 0x007dca10
00285fc4  add r1,sp,#0x38
00285fc8  add r0,sp,#0x48
00285fcc  bl 0x007dc980
00285fd0  cmp r0,#0x0
00285fd4  nop
00285fd8  beq 0x002860f8
00285fdc  add r0,sp,#0x48
00285fe0  add r0,r0,#0x8
00285fe4  cpy r1,r0
00285fe8  add r0,sp,#0xa8
00285fec  bl 0x0059afac
00285ff0  add r1,sp,#0xa8
00285ff4  add r0,sp,#0x70
00285ff8  bl 0x0059ace8
00285ffc  add r1,sp,#0xa8
00286000  add r0,sp,#0x20
00286004  bl 0x0059abf0
00286008  add r3,sp,#0x70
0028600c  cpy r0,r6
00286010  ldmia r3,{r1,r2}
00286014  bl 0x007e23e0
00286018  cmp r0,#0x0
0028601c  nop
00286020  beq 0x002860b4
00286024  ldrh r0,[r0,#0x0]
00286028  cpy r4,r0
0028602c  nop
00286030  bl 0x001cd62c
00286034  cpy r1,r4
00286038  nop
0028603c  bl 0x001cd81c
00286040  movs r4,r0
00286044  nop
00286048  beq 0x002860b4
0028604c  ldr r0,[sp,#0x24]
00286050  ldr r1,[sp,#0x20]
00286054  add r0,r0,r0, lsl #0x2
00286058  add r1,r1,r1, lsl #0x2
0028605c  add r0,r4,r0, lsl #0x5
00286060  add r0,r0,r1, lsl #0x1
00286064  ldrb r0,[r0,#0x8]
00286068  cmp r0,#0x0
0028606c  nop
00286070  beq 0x002860b4
00286074  add r3,sp,#0x70
00286078  cpy r0,r6
0028607c  ldmia r3,{r1,r2}
00286080  bl 0x007e206c
00286084  cmp r0,#0x0
00286088  nop
0028608c  beq 0x002860b4
00286090  ldr r1,[sp,#0x24]
00286094  ldr r3,[sp,#0x20]
00286098  cpy r2,r1
0028609c  add r12,r1,r1, lsl #0x2
002860a0  cpy r1,r3
002860a4  add r3,r3,r3, lsl #0x2
002860a8  add r12,r4,r12, lsl #0x5
002860ac  add r3,r12,r3, lsl #0x1
002860b0  bl 0x00692aa4
002860b4  add r0,sp,#0x20
002860b8  cpy r0,r0
002860bc  add r0,sp,#0x70
002860c0  nop
002860c4  cpy r0,r0
002860c8  add r0,sp,#0xa8
002860cc  nop
002860d0  cpy r0,r0
002860d4  add r0,sp,#0x48
002860d8  nop
002860dc  bl 0x0059b024
002860e0  add r1,sp,#0x38
002860e4  add r0,sp,#0x48
002860e8  bl 0x007dc980
002860ec  cmp r0,#0x0
002860f0  nop
002860f4  bne 0x00285fdc
002860f8  add r0,sp,#0x48
002860fc  cpy r0,r0
00286100  add r0,sp,#0x38
00286104  nop
00286108  cpy r0,r0
0028610c  add r0,sp,#0x28
00286110  nop
00286114  cpy r0,r0
00286118  add r0,sp,#0x78
0028611c  cpy r0,r0
00286120  cpy r0,sp
00286124  nop
00286128  add r0,r0,#0x8
0028612c  ldrb r5,[r0,#0x8]
00286130  cpy r0,sp
00286134  add r0,r0,#0x8
00286138  ldr r4,[r0,#0x4]
0028613c  cpy r0,sp
00286140  add r0,r0,#0x8
00286144  ldr r1,[r0,#0x0]
00286148  cpy r3,r5
0028614c  cpy r2,r4
00286150  mov r0,#0x1
00286154  bl 0x00592db8
00286158  cpy r0,sp
0028615c  nop
00286160  bl 0x001cbd60
00286164  add r1,sp,#0x58
00286168  cpy r0,sp
0028616c  bl 0x007acd1c
00286170  cmp r0,#0x0
00286174  nop
00286178  bne 0x00285ef0
0028617c  nop
00286180  bl 0x00636e3c
00286184  add r0,r0,#0x49000
00286188  add r0,r0,#0x520
0028618c  bl 0x0063a874
00286190  cpy r0,sp
00286194  nop
00286198  cpy r0,r0
0028619c  add r0,sp,#0x58
002861a0  nop
002861a4  cpy r0,r0
002861a8  add sp,sp,#0xb4
002861ac  ldmia sp!,{r4,r5,r6,r7,pc}
