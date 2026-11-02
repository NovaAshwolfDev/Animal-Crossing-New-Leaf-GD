/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0012603c. Provisional types; not original source or a verified portable implementation. */

uint FUN_0012603c(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = DAT_00126110;
  pcVar1 = DAT_0012610c;
  uVar4 = 0;
  if ((*DAT_0012610c != '\0') || (iVar3 = FUN_00128e08(), iVar3 != 0)) {
    uVar2 = DAT_00126114;
    FUN_0011f998(DAT_00126114);
    if (param_1 != 0) {
      iVar3 = FUN_00128e08();
      uVar4 = DAT_00126118;
      if (iVar3 == 0 && pcVar1[4] == '\0') goto LAB_001260dc;
      uVar4 = FUN_00128e18(0xe);
    }
    if (pcVar1[1] == '\0') {
      FUN_0011fa98(uVar2);
      return uVar5;
    }
    if (pcVar1[2] != '\0') {
      uVar4 = FUN_0012902c(0);
      if ((uVar4 & 0x80000000) != 0) {
LAB_001260dc:
        FUN_0011fa98(uVar2);
        return uVar4;
      }
      pcVar1[2] = '\0';
    }
    FUN_0011fa98(uVar2);
    uVar5 = uVar4;
  }
  return uVar5;
}


