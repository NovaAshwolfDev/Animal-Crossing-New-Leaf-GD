/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00444784. Provisional types; not original source or a verified portable implementation. */

void FUN_00444784(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  bool bVar2;
  uint *puVar3;
  uint uVar4;
  
  puVar3 = (uint *)(param_1 + 0x10);
  while( true ) {
    uVar4 = *puVar3;
    cVar1 = (char)uVar4;
    if (((int)cVar1 == 0) && ((int)(uVar4 << 0x10) >> 0x18 == 0)) break;
    param_4 = ((int)cVar1 | param_4 & 0xffffff00) & 0xff0000ff |
              ((int)(uVar4 << 0x10) >> 0x18 & 0xffU) << 8;
    bVar2 = (bool)hasExclusiveAccess(puVar3);
    if (bVar2) {
      *puVar3 = param_4;
      (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc),(int)cVar1);
      return;
    }
  }
  ClearExclusiveLocal();
  (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc),(int)cVar1);
  (**(code **)(**(int **)(param_1 + 0x14) + 0xc))(*(int **)(param_1 + 0x14),param_1);
  return;
}


