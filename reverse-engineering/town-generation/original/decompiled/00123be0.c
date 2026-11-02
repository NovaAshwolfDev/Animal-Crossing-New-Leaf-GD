/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00123be0. Provisional types; not original source or a verified portable implementation. */

void FUN_00123be0(int *param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined1 auStack_24 [8];
  
  uVar2 = DAT_00123dd0;
  FUN_0011f998(DAT_00123dd0);
  pcVar3 = DAT_00123dd4;
  if (param_1[1] != 0) {
    if (*(char *)((int)param_1 + 10) != '\0') {
      FUN_0012611c(param_1,0,param_1 + 0x7f,param_1 + 0x87);
    }
    if (*(char *)((int)param_1 + 0xb) != '\0') {
      FUN_0012611c(param_1,1,param_1 + 0xeb,param_1 + 0xf3);
    }
    if (*pcVar3 != '\0') {
      (**(code **)(*param_1 + 8))(param_1,param_1[1],0x96,0x14,auStack_24);
      FUN_001261f4(param_1);
    }
  }
  (**(code **)(*param_1 + 0x28))(param_1,param_1[1],0,0,5);
  param_1[1] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  FUN_002fff30(param_1 + 0x87,0x18c);
  FUN_002fff30(param_1 + 0xf3,0x18c);
  param_1[0x157] = 0;
  param_1[0x158] = 0;
  FUN_002fff30(param_1 + 0x159,0x318);
  uVar4 = DAT_00123dd8;
  FUN_0011f998();
  if (pcVar3[3] != '\0') {
    FUN_00126238(param_1[0xea]);
    pcVar3[3] = '\0';
  }
  FUN_0011fa98(uVar4);
  uVar4 = DAT_00123dd8;
  FUN_0011f998();
  if (pcVar3[4] != '\0') {
    FUN_00126238(param_1[0x156]);
    pcVar3[4] = '\0';
  }
  FUN_0011fa98(uVar4);
  uVar4 = DAT_00123de0;
  uVar1 = (undefined2)DAT_00123ddc;
  *(undefined2 *)(param_1 + 0x7f) = uVar1;
  *(undefined2 *)(param_1 + 0xeb) = uVar1;
  *(short *)(param_1 + 0x157) = (short)uVar4;
  FUN_0012603c(0);
  pcVar3[1] = '\0';
  *pcVar3 = '\0';
  FUN_0011fa98(uVar2);
  return;
}


