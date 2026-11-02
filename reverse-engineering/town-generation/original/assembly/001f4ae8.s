001f4ae8  stmdb sp!,{r4,lr}
001f4aec  sub sp,sp,#0x18
001f4af0  cpy r4,r0
001f4af4  add r0,sp,#0xc
001f4af8  bl 0x005cca58
001f4afc  add r3,sp,#0xc
001f4b00  ldmia r3,{r0,r1,r2}
001f4b04  stmia sp,{r0,r1,r2}
001f4b08  cpy r0,sp
001f4b0c  bl 0x005cc004
001f4b10  ldr r1,[0x1f4b28]
001f4b14  add r0,r0,r0, lsl #0x2
001f4b18  add r0,r1,r0, lsl #0x3
001f4b1c  ldr r0,[r0,r4,lsl #0x2]
001f4b20  add sp,sp,#0x18
001f4b24  ldmia sp!,{r4,pc}
