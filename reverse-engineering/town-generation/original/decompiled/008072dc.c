/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 008072dc. Provisional types; not original source or a verified portable implementation. */

int FUN_008072dc(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  uVar3 = 0;
  do {
    iVar1 = uVar3 << 5;
    for (uVar2 = *(uint *)(param_1 + uVar3 * 4); uVar2 != 0; uVar2 = uVar2 >> 1) {
      if ((uVar2 & 1) != 0) {
        if (iVar4 == param_2) {
          return iVar1;
        }
        iVar4 = iVar4 + 1;
      }
      iVar1 = iVar1 + 1;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x8e);
  return -1;
}


