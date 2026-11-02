/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 001203f0. Provisional types; not original source or a verified portable implementation. */

void FUN_001203f0(int *param_1)

{
  uint uVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_18;
  
  iVar5 = 0;
  uVar1 = *(uint *)(*param_1 + 0x18);
  *(uint *)(*param_1 + 0x18) = uVar1 & 0xffffffbf;
  *(uint *)(*param_1 + 0x18) = uVar1 & 0xfffffdbf;
  local_18 = *(int *)(*param_1 + 0x288);
  if (local_18 == 0) {
    local_18 = 0;
  }
  else {
    local_18 = *param_1 + 0x288 + local_18;
  }
  if (local_18 != 0) {
    FUN_00124570(&local_18);
  }
  *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) & 0xffffff7f;
  iVar4 = *(int *)(*param_1 + 0x284);
  if (iVar4 == 0) {
    puVar2 = (uint *)0x0;
  }
  else {
    puVar2 = (uint *)(*param_1 + 0x284 + iVar4);
  }
  if ((puVar2 != (uint *)0x0) && ((~*puVar2 & 0x80000001) != 0)) {
    puVar2 = (uint *)0x0;
  }
  if (puVar2 != (uint *)0x0) {
    puVar2[7] = 0;
  }
  iVar4 = 0;
  *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) & 0xfffffeff;
  do {
    piVar3 = (int *)(*param_1 + iVar4 * 4 + 0x274);
    local_18 = *piVar3;
    if (local_18 == 0) {
      local_18 = 0;
    }
    else {
      local_18 = (int)piVar3 + local_18;
    }
    if (local_18 != 0) {
      FUN_0012453c(&local_18);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 3);
  iVar4 = *(int *)(*param_1 + 0x280);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *param_1 + 0x280 + iVar4;
  }
  if (iVar4 != 0) {
    iVar4 = *(int *)(*param_1 + 0x280);
    if (iVar4 != 0) {
      iVar5 = iVar4 + *param_1 + 0x280;
    }
    local_18 = iVar5;
    FUN_0012453c(&local_18);
  }
  return;
}


