/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00157bec. Provisional types; not original source or a verified portable implementation. */

void FUN_00157bec(int param_1,int param_2,int param_3)

{
  short sVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = 0;
  if (param_3 < 1) {
    return;
  }
  while (sVar1 = *(short *)(param_2 + iVar4 * 2), *(short *)(param_1 + iVar4 * 2) = sVar1,
        sVar1 != 0) {
    iVar4 = iVar4 + 1;
    if (param_3 <= iVar4) {
      return;
    }
  }
  uVar5 = param_3 - (iVar4 + 1);
  if ((int)uVar5 < 1) {
    return;
  }
  puVar2 = (undefined2 *)(param_1 + (iVar4 + 1) * 2);
  puVar3 = puVar2 + -1;
  if ((uVar5 & 1) != 0) {
    *puVar2 = 0;
    puVar3 = puVar2;
  }
  iVar4 = (int)uVar5 >> 1;
  if (iVar4 == 0) {
    return;
  }
  do {
    puVar3[1] = 0;
    iVar4 = iVar4 + -1;
    puVar3 = puVar3 + 2;
    *puVar3 = 0;
  } while (iVar4 != 0);
  return;
}


