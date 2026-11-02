005f2ff4  stmdb sp!,{r4,lr}
005f2ff8  ldr r4,[0x5f3034]
005f2ffc  ldr r1,[r4,#0x0]
005f3000  cmp r1,#0x0
005f3004  beq 0x005f302c
005f3008  bl 0x007ff424
005f300c  ldr r1,[r4,#0x0]
005f3010  ldr r1,[r1,#0x4]
005f3014  cmp r1,#0x0
005f3018  beq 0x005f302c
005f301c  cmp r0,#0xfe
005f3020  rsbcc r0,r0,r0, lsl #0x3
005f3024  addcc r0,r1,r0, lsl #0x1
005f3028  bcc 0x005f3030
005f302c  mov r0,#0x0
005f3030  ldmia sp!,{r4,pc}
