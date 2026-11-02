001bcf64  stmdb sp!,{r4,r5,r6,lr}
001bcf68  cpy r4,r0
001bcf6c  bl 0x007ecc64
001bcf70  cmp r0,#0x0
001bcf74  bne 0x001bd008
001bcf78  cpy r0,r4
001bcf7c  bl 0x007ecc0c
001bcf80  movs r5,r0
001bcf84  beq 0x001bd010
001bcf88  bl 0x0063653c
001bd008  mov r0,#0x0
001bd00c  ldmia sp!,{r4,r5,r6,pc}
001bd010  cpy r0,r4
001bd014  bl 0x007ecbac
001bd018  movs r4,r0
001bd01c  nop
001bd020  beq 0x001bd008
001bd024  bl 0x0063653c
