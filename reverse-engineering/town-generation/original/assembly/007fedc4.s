007fedc4  ldrh r0,[r0,#0x0]
007fedc8  ldr r1,[0x7fede4]
007fedcc  bic r0,r0,#0x8000
007fedd0  sub r2,r0,#0x2000
007fedd4  cmp r2,r1
007fedd8  subcc r0,r0,#0x2000
007feddc  mvncs r0,#0x0
007fede0  bx lr
