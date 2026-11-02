/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 001ec0a0. Provisional types; not original source or a verified portable implementation. */

void FUN_001ec0a0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  do {
    if ((*(ushort *)(param_1 + iVar1 * 0x1ac + 0x1aa) & 1) == 0) break;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0xf);
  if (iVar1 < 0xf) {
    param_1 = param_1 + iVar1 * 0x1ac;
  }
  else {
    iVar2 = 1;
    iVar1 = param_1;
    do {
      iVar3 = param_1 + iVar2 * 0x1ac;
      FUN_002febf4(iVar1,iVar3,0x1ac);
      iVar2 = iVar2 + 1;
      iVar1 = iVar3;
    } while (iVar2 < 0xf);
    param_1 = param_1 + 0x1768;
  }
  FUN_002febf4(param_1,param_2,0x1ac);
  if (-1 < *DAT_001ec148) {
    *DAT_001ec148 = *DAT_001ec148 + 1;
  }
  return;
}


