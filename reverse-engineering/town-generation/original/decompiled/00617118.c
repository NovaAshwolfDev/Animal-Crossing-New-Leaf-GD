/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00617118. Provisional types; not original source or a verified portable implementation. */

void FUN_00617118(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = param_1;
  do {
    iVar1 = iVar1 + 1;
    *(ushort *)(iVar2 + 0x24f0) = *(ushort *)(iVar2 + 0x24f0) & 0xfffb;
    iVar2 = iVar2 + 0x24f8;
  } while (iVar1 < 10);
  iVar1 = 0;
  iVar2 = param_1;
  do {
    FUN_0063aca4(iVar2 + 0x8be);
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 0x24f8;
  } while (iVar1 < 10);
  iVar2 = 0;
  do {
    iVar1 = FUN_007f3734(param_1);
    if ((iVar1 != 0) && (iVar1 = FUN_00582e28(param_1), iVar1 != 0)) {
      FUN_005829c4(iVar1 + 0x38,param_1,0);
    }
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 0x24f8;
  } while (iVar2 < 10);
  return;
}


