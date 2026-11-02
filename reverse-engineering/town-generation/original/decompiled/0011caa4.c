/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0011caa4. Provisional types; not original source or a verified portable implementation. */

void FUN_0011caa4(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_18;
  
  iVar3 = 0;
  iVar4 = *(int *)(*param_1 + 0xc4);
  if (0 < iVar4) {
    do {
      iVar2 = *(int *)(*param_1 + 200);
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *param_1 + 200 + iVar2;
      }
      piVar1 = (int *)(iVar2 + iVar3 * 4);
      iVar2 = *piVar1;
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (int)piVar1 + iVar2;
      }
      if ((*(uint *)(iVar2 + 0x18) & 1) != 0) {
        iVar2 = *(int *)(*param_1 + 200);
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *param_1 + 200 + iVar2;
        }
        piVar1 = (int *)(iVar2 + iVar3 * 4);
        local_18 = *piVar1;
        if (local_18 == 0) {
          local_18 = 0;
        }
        else {
          local_18 = (int)piVar1 + local_18;
        }
        FUN_0012057c(&local_18);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
  }
  iVar3 = 0;
  iVar4 = *(int *)(*param_1 + 0xbc);
  if (0 < iVar4) {
    do {
      local_18 = *(int *)(*param_1 + 0xc0);
      if (local_18 == 0) {
        local_18 = 0;
      }
      else {
        local_18 = *param_1 + 0xc0 + local_18;
      }
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + iVar3 * 0x10 + 0x28);
        local_18 = *piVar1;
        if (local_18 == 0) {
          local_18 = 0;
        }
        else {
          local_18 = (int)piVar1 + local_18;
        }
      }
      FUN_001203f0(&local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
  }
  iVar3 = 0;
  iVar4 = *(int *)(*param_1 + 0xb4);
  if (0 < iVar4) {
    do {
      iVar2 = *(int *)(*param_1 + 0xb8);
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *param_1 + 0xb8 + iVar2;
      }
      piVar1 = (int *)(iVar2 + iVar3 * 4);
      local_18 = *piVar1;
      if (local_18 == 0) {
        local_18 = 0;
      }
      else {
        local_18 = (int)piVar1 + local_18;
      }
      FUN_00120510(&local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
  }
  return;
}


