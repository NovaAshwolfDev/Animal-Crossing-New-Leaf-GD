/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 001e9800. Provisional types; not original source or a verified portable implementation. */

uint FUN_001e9800(undefined4 param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  
  if (*(int *)(DAT_001e98a4 + 0xd8) != 0) {
    iVar3 = *(int *)(DAT_001e98a4 + 0xd8);
    uVar2 = 0;
    uVar5 = (uint)*(byte *)(iVar3 + param_3 + 2);
    if (param_3 != 0) {
      pbVar4 = (byte *)(iVar3 + 1);
      if ((param_3 & 1) != 0) {
        pbVar4 = (byte *)(iVar3 + 2);
        uVar2 = (uint)*pbVar4;
      }
      iVar3 = 0;
      for (param_3 = param_3 >> 1; param_3 != 0; param_3 = param_3 - 1) {
        pbVar1 = pbVar4 + 1;
        pbVar4 = pbVar4 + 2;
        uVar2 = uVar2 + *pbVar1;
        iVar3 = iVar3 + (uint)*pbVar4;
      }
      uVar2 = uVar2 + iVar3;
    }
    if (uVar5 << 2 <= param_2) {
      FUN_002febf4(param_1,*(int *)(DAT_001e98a4 + 0xd8) +
                           **(ushort **)(DAT_001e98a4 + 0xd8) + 2 + uVar2 * 4,uVar5 << 2);
      return uVar5;
    }
  }
  return 0;
}


