007fddc0  stmdb sp!,{r4,lr}
007fddc4  cpy r4,r0
007fddc8  bl 0x005a20f8
007fddcc  cmp r0,#0x0
007fddd0  beq 0x007fde00
007fddd4  bl 0x007dcdac
007fddd8  cmp r0,#0x0
007fdddc  beq 0x007fde00
007fdde0  cpy r0,r4
007fdde4  bl 0x005a20f8
007fdde8  ldrb r0,[r0,#0x1e]
007fddec  mov r1,#0x3
007fddf0  mov r0,r0, lsl #0x1a
007fddf4  cmp r1,r0, lsr #0x1e
007fddf8  movhi r0,r0, lsr #0x1e
007fddfc  bhi 0x007fde04
007fde00  mov r0,#0x0
007fde04  ldmia sp!,{r4,pc}
