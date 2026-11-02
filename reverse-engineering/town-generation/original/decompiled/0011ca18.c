/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0011ca18. Provisional types; not original source or a verified portable implementation. */

void FUN_0011ca18(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int local_10;
  
  puVar4 = (uint *)*param_1;
  if ((puVar4 != (uint *)0x0) && ((DAT_0011caa0 & ~*puVar4) != 0)) {
    puVar4 = (uint *)0x0;
  }
  if (puVar4 != (uint *)0x0) {
    iVar5 = 0;
    if (puVar4[0x46] == 0) {
      local_10 = 0;
    }
    else {
      local_10 = (int)puVar4 + puVar4[0x46] + 0x118;
    }
    if (local_10 != 0) {
      FUN_00124508(&local_10);
    }
    uVar1 = puVar4[0x47];
    if (uVar1 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = uVar1 + (int)(puVar4 + 0x47);
    }
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + 8);
      if (iVar3 != 0) {
        iVar5 = iVar3 + iVar2 + 8;
      }
      if (iVar5 != 0) {
        local_10 = iVar5;
        FUN_00124508(&local_10);
      }
    }
  }
  return;
}


