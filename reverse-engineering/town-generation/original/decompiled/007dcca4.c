/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007dcca4. Provisional types; not original source or a verified portable implementation. */

uint FUN_007dcca4(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)*(byte *)(param_1 + 10);
  if (0x92 < uVar1) {
    uVar1 = 0;
  }
  if ((*(int *)(DAT_007dccfc + 4) == 0) || (0x92 < uVar1)) {
    iVar2 = 0;
  }
  else {
    iVar2 = uVar1 * 3 + *(int *)(DAT_007dccfc + 4);
  }
  if (iVar2 == 0) {
    uVar1 = 1;
  }
  else if (*(char *)(iVar2 + 1) < '\0') {
    uVar1 = ((uint)*(byte *)(param_1 + 0x1f) << 0x1e) >> 0x1f;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


