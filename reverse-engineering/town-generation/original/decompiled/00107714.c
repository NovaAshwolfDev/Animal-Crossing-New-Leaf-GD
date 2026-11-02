/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00107714. Provisional types; not original source or a verified portable implementation. */

void FUN_00107714(int param_1)

{
  char *pcVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  
  pcVar3 = DAT_0010b3b4;
  pcVar1 = DAT_001077a0;
  if (param_1 == 0) {
    iVar5 = *(int *)(DAT_001077a0 + 4);
    if (0 < iVar5) {
      iVar5 = iVar5 + -1;
      *(int *)(DAT_001077a0 + 4) = iVar5;
    }
    piVar2 = DAT_001077a4;
    if ((iVar5 == 0) && (*pcVar1 != '\0')) {
      *pcVar1 = '\0';
      iVar5 = *piVar2;
      if (iVar5 != 0) {
        software_interrupt(0x23);
        if (iVar5 < 0) {
          FUN_0011afc4();
        }
        *piVar2 = *DAT_001077a8;
      }
    }
  }
  else {
    if (param_1 == 1) {
      iVar5 = *(int *)(DAT_0010b3b4 + 4);
      if (0 < iVar5) {
        iVar5 = iVar5 + -1;
        *(int *)(DAT_0010b3b4 + 4) = iVar5;
      }
      if (iVar5 == 0) {
        if (*pcVar3 != '\0') {
          *pcVar3 = '\0';
          iVar5 = FUN_00110688(DAT_0010b3b8);
          if (-1 < iVar5) {
            *DAT_0010b3c0 = *DAT_0010b3bc;
          }
          return;
        }
        return;
      }
      return;
    }
    if (param_1 == 2) {
      iVar5 = *DAT_0010b410;
      if (0 < iVar5) {
        iVar5 = iVar5 + -1;
        *DAT_0010b410 = iVar5;
      }
      if (iVar5 == 0) {
        iVar5 = FUN_00110688(DAT_0010b414);
        if (-1 < iVar5) {
          uVar4 = *DAT_0010b418;
          *DAT_0010b41c = uVar4;
          *DAT_0010b420 = uVar4;
        }
        return;
      }
      return;
    }
  }
  return;
}


