/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00444c7c. Provisional types; not original source or a verified portable implementation. */

int FUN_00444c7c(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_38 [3];
  int local_2c;
  undefined1 auStack_28 [8];
  
  iVar9 = DAT_00444e2c;
  pcVar2 = DAT_00444e28;
  if ((*DAT_00444e28 != '\0') || (iVar4 = FUN_00128e08(), iVar4 != 0)) {
    uVar3 = DAT_00444e30;
    FUN_0011f998(DAT_00444e30);
    if (pcVar2[1] == '\0') {
      FUN_0011fa98(uVar3);
      return iVar9;
    }
    if (pcVar2[2] == '\0') {
      iVar4 = FUN_0044baa8(0);
      if (iVar4 < 0) {
        FUN_0011fa98(uVar3);
        return iVar4;
      }
      FUN_0011690c(DAT_00444e34,0);
      pcVar2[2] = '\x01';
    }
    if (param_2 == 0) {
      iVar10 = 0;
      local_38[0] = 0;
      uVar6 = FUN_00446ee4(local_38);
      iVar4 = 0;
      if ((uVar6 & 0x80000000) == 0) {
        iVar4 = local_38[0];
      }
      if (param_1 == 0) {
        iVar7 = FUN_00447324(0xb);
        iVar1 = DAT_00444e38;
      }
      else {
        iVar7 = FUN_00447324(0xc);
        iVar1 = DAT_00444e38;
      }
      while( true ) {
        local_38[0] = DAT_00444e3c;
        local_38[1] = 0;
        local_2c = iVar4;
        iVar8 = FUN_001229cc(auStack_28,&local_2c,1,0);
        if (iVar8 < 0) {
          FUN_00123b70();
        }
        iVar5 = iVar7;
        if (((iVar1 != iVar8 * 0x400000) || (FUN_00446ce4(local_38 + 2), local_38[2] == 1)) ||
           (iVar5 = iVar9, 0x3c < iVar10)) break;
        iVar10 = iVar10 + 1;
      }
      if (iVar4 != 0) {
        software_interrupt(0x23);
      }
    }
    else if (param_1 == 0) {
      iVar5 = FUN_00447324(0xb);
    }
    else {
      iVar5 = FUN_00447324(0xc);
    }
    FUN_0011fa98(uVar3);
    iVar9 = iVar5;
  }
  return iVar9;
}


