002fff34  stmdb sp!,{lr}
002fff38  cpy r3,r2
002fff3c  cpy r12,r2
002fff40  cpy lr,r2
002fff44  subs r1,r1,#0x20
002fff48  stmiacs r0!,{r2,r3,r12,lr}
002fff4c  stmiacs r0!,{r2,r3,r12,lr}
002fff50  subcss r1,r1,#0x20
002fff54  bcs 0x002fff48
002fff58  movs r1,r1, lsl #0x1c
002fff5c  stmiacs r0!,{r2,r3,r12,lr}
002fff60  stmiami r0!,{r2,r3}
002fff64  ldmia sp!,{lr}
002fff68  movs r1,r1, lsl #0x2
002fff6c  strcs r2,[r0],#0x4
002fff70  bxeq lr
002fff74  strhmi r2,[r0],#0x2
002fff78  tst r1,#0x40000000
002fff7c  strbne r2,[r0],#0x1
002fff80  bx lr
