/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00514e50. Provisional types; not original source or a verified portable implementation. */

void FUN_00514e50(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_18;
  
  iVar4 = *(int *)(param_1 + 0x38);
  iVar3 = 0;
  if (0 < iVar4) {
    do {
      if (*(int *)(param_1 + 0x3c) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = param_1 + 0x3c + *(int *)(param_1 + 0x3c);
      }
      piVar2 = (int *)(iVar1 + iVar3 * 4);
      local_18 = *piVar2;
      if (local_18 == 0) {
        local_18 = 0;
      }
      else {
        local_18 = (int)piVar2 + local_18;
      }
      FUN_005133a4(&local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
  }
  iVar4 = *(int *)(param_1 + 0x2c);
  iVar3 = 0;
  if (0 < iVar4) {
    do {
      if (*(int *)(param_1 + 0x30) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = param_1 + 0x30 + *(int *)(param_1 + 0x30);
      }
      piVar2 = (int *)(iVar1 + iVar3 * 4);
      local_18 = *piVar2;
      if (local_18 == 0) {
        local_18 = 0;
      }
      else {
        local_18 = (int)piVar2 + local_18;
      }
      FUN_005127a4(&local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
  }
  return;
}


