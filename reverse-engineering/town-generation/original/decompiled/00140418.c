/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00140418. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_00140418(int param_1)

{
  int iVar1;
  undefined4 extraout_r1;
  int iVar2;
  
  iVar1 = 0;
  for (iVar2 = 0; *(char *)(param_1 + iVar2) != 0; iVar2 = iVar2 + 1) {
    iVar1 = (int)*(char *)(param_1 + iVar2) + iVar1 * 0x492;
  }
  FUN_00129b80(iVar1);
  return extraout_r1;
}


