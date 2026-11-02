007fdfd8  stmdb sp!,{r4,r5,r6,lr}
007fdfdc  cpy r4,r0
007fdfe0  cpy r5,r2
007fdfe4  cpy r6,r1
007fdfe8  add r0,r0,#0x274
007fdfec  bl 0x00756eb0
007fdff0  ldrb r0,[r4,#0x270]
007fdff4  mov r1,r5, lsl #0x3
007fdff8  and r1,r1,#0x18
007fdffc  bic r0,r0,#0x18
007fe000  orr r0,r0,r1
007fe004  strb r0,[r4,#0x270]
007fe008  cpy r0,r6
007fe00c  ldmia sp!,{r4,r5,r6,lr}
007fe010  cpy r0,r0
