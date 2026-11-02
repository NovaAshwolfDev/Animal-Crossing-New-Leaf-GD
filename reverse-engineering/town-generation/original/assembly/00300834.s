00300834  orrs r3,r0,r1
00300838  bmi 0x00300974
0030083c  rsbs r3,r1,r0, lsr #0x1
00300840  bcc 0x00300958
00300844  movs r2,#0x0
00300848  rsbs r3,r1,r0, lsr #0x4
0030084c  bcc 0x00300924
00300850  rsbs r3,r1,r0, lsr #0x8
00300854  bcc 0x003008f4
00300858  rsbs r3,r1,r0, lsr #0xc
0030085c  bcc 0x003008c0
00300860  rsbs r3,r1,r0, lsr #0x10
00300864  bcc 0x00300890
00300868  mov r1,r1, lsl #0x8
0030086c  rsbs r3,r1,r0, lsr #0x10
00300870  orr r2,r2,#0xff000000
00300874  orrcs r2,r2,#0xff0000
00300878  movcs r1,r1, lsl #0x8
0030087c  rsbs r3,r1,r0, lsr #0xc
00300880  bcc 0x003008c0
00300884  rsbs r3,r1,#0x0
00300888  bcs 0x00300a50
0030088c  movcs r1,r1, lsr #0x8
00300890  rsbs r3,r1,r0, lsr #0xf
00300894  subcs r0,r0,r1, lsl #0xf
00300898  adcs r2,r2,r2
0030089c  rsbs r3,r1,r0, lsr #0xe
003008a0  subcs r0,r0,r1, lsl #0xe
003008a4  adcs r2,r2,r2
003008a8  rsbs r3,r1,r0, lsr #0xd
003008ac  subcs r0,r0,r1, lsl #0xd
003008b0  adcs r2,r2,r2
003008b4  rsbs r3,r1,r0, lsr #0xc
003008b8  subcs r0,r0,r1, lsl #0xc
003008bc  adcs r2,r2,r2
003008c0  rsbs r3,r1,r0, lsr #0xb
003008c4  subcs r0,r0,r1, lsl #0xb
003008c8  adcs r2,r2,r2
003008cc  rsbs r3,r1,r0, lsr #0xa
003008d0  subcs r0,r0,r1, lsl #0xa
003008d4  adcs r2,r2,r2
003008d8  rsbs r3,r1,r0, lsr #0x9
003008dc  subcs r0,r0,r1, lsl #0x9
003008e0  adcs r2,r2,r2
003008e4  rsbs r3,r1,r0, lsr #0x8
003008e8  subcs r0,r0,r1, lsl #0x8
003008ec  adcs r2,r2,r2
003008f0  bcs 0x0030088c
003008f4  rsbs r3,r1,r0, lsr #0x7
003008f8  subcs r0,r0,r1, lsl #0x7
003008fc  adcs r2,r2,r2
00300900  rsbs r3,r1,r0, lsr #0x6
00300904  subcs r0,r0,r1, lsl #0x6
00300908  adcs r2,r2,r2
0030090c  rsbs r3,r1,r0, lsr #0x5
00300910  subcs r0,r0,r1, lsl #0x5
00300914  adcs r2,r2,r2
00300918  rsbs r3,r1,r0, lsr #0x4
0030091c  subcs r0,r0,r1, lsl #0x4
00300920  adcs r2,r2,r2
00300924  rsbs r3,r1,r0, lsr #0x3
00300928  subcs r0,r0,r1, lsl #0x3
0030092c  adcs r2,r2,r2
00300930  rsbs r3,r1,r0, lsr #0x2
00300934  subcs r0,r0,r1, lsl #0x2
00300938  adcs r2,r2,r2
0030093c  rsbs r3,r1,r0, lsr #0x1
00300940  subcs r0,r0,r1, lsl #0x1
00300944  adcs r2,r2,r2
00300948  subs r1,r0,r1
0030094c  cpycc r1,r0
00300950  adc r0,r2,r2
00300954  bx lr
00300958  subs r1,r0,r1
0030095c  bcc 0x00300968
00300960  movs r0,#0x1
00300964  bx lr
00300968  cpy r1,r0
0030096c  movs r0,#0x0
00300970  bx lr
00300974  ands r2,r1,#0x80000000
00300978  rsbmi r1,r1,#0x0
0030097c  eors r12,r2,r0, asr #32
00300980  rsbcs r0,r0,#0x0
00300984  rsbs r3,r1,r0, lsr #0x4
00300988  bcc 0x00300a04
0030098c  rsbs r3,r1,r0, lsr #0x8
00300990  bcc 0x003009d4
00300994  mov r1,r1, lsl #0x6
00300998  rsbs r3,r1,r0, lsr #0x8
0030099c  orr r2,r2,#0xfc000000
003009a0  bcc 0x003009d4
003009a4  mov r1,r1, lsl #0x6
003009a8  rsbs r3,r1,r0, lsr #0x8
003009ac  orr r2,r2,#0x3f00000
003009b0  bcc 0x003009d4
003009b4  mov r1,r1, lsl #0x6
003009b8  rsbs r3,r1,r0, lsr #0x8
003009bc  orr r2,r2,#0xfc000
003009c0  movcs r1,r1, lsl #0x6
003009c4  orrcs r2,r2,#0x3f00
003009c8  rsbs r3,r1,#0x0
003009cc  bcs 0x00300a48
003009d0  movcs r1,r1, lsr #0x6
003009d4  rsbs r3,r1,r0, lsr #0x7
003009d8  subcs r0,r0,r1, lsl #0x7
003009dc  adcs r2,r2,r2
003009e0  rsbs r3,r1,r0, lsr #0x6
003009e4  subcs r0,r0,r1, lsl #0x6
003009e8  adcs r2,r2,r2
003009ec  rsbs r3,r1,r0, lsr #0x5
003009f0  subcs r0,r0,r1, lsl #0x5
003009f4  adcs r2,r2,r2
003009f8  rsbs r3,r1,r0, lsr #0x4
003009fc  subcs r0,r0,r1, lsl #0x4
00300a00  adcs r2,r2,r2
00300a04  rsbs r3,r1,r0, lsr #0x3
00300a08  subcs r0,r0,r1, lsl #0x3
00300a0c  adcs r2,r2,r2
00300a10  rsbs r3,r1,r0, lsr #0x2
00300a14  subcs r0,r0,r1, lsl #0x2
00300a18  adcs r2,r2,r2
00300a1c  bcs 0x003009d0
00300a20  rsbs r3,r1,r0, lsr #0x1
00300a24  subcs r0,r0,r1, lsl #0x1
00300a28  adcs r2,r2,r2
00300a2c  subs r1,r0,r1
00300a30  cpycc r1,r0
00300a34  adc r0,r2,r2
00300a38  movs r12,r12, asr #0x1f
00300a3c  rsbmi r0,r0,#0x0
00300a40  rsbcs r1,r1,#0x0
00300a44  bx lr
00300a48  movs r12,r12, asr #0x1f
00300a4c  rsbmi r0,r0,#0x0
00300a50  stmdb sp!,{r0,lr}
00300a54  movs r0,#0x0
00300a58  bl 0x00125b58
00300a5c  ldmia sp!,{r1,pc}
