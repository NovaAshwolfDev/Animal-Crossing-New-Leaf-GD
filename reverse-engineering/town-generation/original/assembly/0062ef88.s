0062ef88  stmdb sp!,{r4,lr}
0062ef8c  bl 0x00689d10
0062ef90  cmp r0,#0x0
0062ef94  ldreq r0,[0x62efa4]
0062ef98  movne r0,#0x0
0062ef9c  ldreq r0,[r0,#0x230]
0062efa0  ldmia sp!,{r4,pc}
