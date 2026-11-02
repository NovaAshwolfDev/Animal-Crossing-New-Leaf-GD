005eca74  ldr r0,[0x5ecad0]
005eca78  stmdb sp!,{r4,lr}
005eca7c  ldr r0,[r0,#0xc]
005eca80  tst r0,#0x1
005eca84  bne 0x005eca9c
005eca88  ldr r0,[0x5ecad4]
005eca8c  blx 0x003025cc
005eca90  cmp r0,#0x0
005eca94  ldrne r0,[0x5ecad4]
005eca98  cpy r0,r0
005eca9c  nop
005ecaa0  bl 0x0063653c
