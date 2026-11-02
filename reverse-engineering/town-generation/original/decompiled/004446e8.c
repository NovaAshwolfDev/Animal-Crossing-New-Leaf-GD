/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 004446e8. Provisional types; not original source or a verified portable implementation. */

void FUN_004446e8(int param_1,undefined4 param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  
  puVar3 = (uint *)(param_1 + 0x10);
  do {
    if ((int)(*puVar3 << 8) >> 0x18 == 0) {
      ClearExclusiveLocal();
      return;
    }
    param_3 = param_3 & 0xff000000 | 1 | ((int)(*puVar3 << 0x10) >> 0x18 & 0xffU) << 8 | 0x10000;
    bVar1 = (bool)hasExclusiveAccess(puVar3);
  } while (!bVar1);
  *puVar3 = param_3;
  iVar2 = FUN_00136d48(*(undefined4 *)(param_1 + 0x18),0,0,0,0,0);
  if (-1 < iVar2) {
    return;
  }
  FUN_00123b70();
  return;
}


