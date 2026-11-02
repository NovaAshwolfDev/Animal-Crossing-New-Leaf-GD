/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0011d83c. Provisional types; not original source or a verified portable implementation. */

void FUN_0011d83c(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  if (*(int *)(*param_1 + 0x18) < 1) {
    return;
  }
  do {
    iVar2 = *(int *)(*param_1 + 0x1c);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *param_1 + 0x1c + iVar2;
    }
    if (iVar2 != 0) {
      piVar1 = (int *)(iVar2 + iVar5 * 0x10 + 0x28);
      iVar2 = *piVar1;
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (int)piVar1 + iVar2;
      }
    }
    if ((*(int *)(iVar2 + 8) == 7) && (iVar4 = 0, 0 < *(int *)(iVar2 + 0x10))) {
      do {
        if (*(int *)(iVar2 + 0x14) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = iVar2 + 0x14 + *(int *)(iVar2 + 0x14);
        }
        piVar1 = (int *)(iVar3 + iVar4 * 4);
        iVar3 = *piVar1;
        iVar4 = iVar4 + 1;
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (int)piVar1 + iVar3;
        }
        *(undefined4 *)(iVar3 + 0x1c) = 0;
      } while (iVar4 < *(int *)(iVar2 + 0x10));
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < *(int *)(*param_1 + 0x18));
  return;
}


