/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 006ac054. Provisional types; not original source or a verified portable implementation. */

void FUN_006ac054(int *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  if ((param_1[1] != 0) && ((char)param_1[0x11] == '\0')) {
    iVar1 = *DAT_006ac0bc;
    bVar3 = (*(byte *)(iVar1 + 0x1312a) & 1) == 0;
    iVar2 = iVar1;
    if (bVar3) {
      iVar2 = param_1[2];
    }
    if (bVar3 && param_1[1] == iVar2) {
      if ((iVar2 == 0) || (0x16800 < (iVar2 - *param_1) + 6U)) {
        *(byte *)(iVar1 + 0x1312a) = *(byte *)(iVar1 + 0x1312a) | 1;
      }
      else {
        param_1[2] = iVar2 + 6;
      }
    }
  }
  return;
}


