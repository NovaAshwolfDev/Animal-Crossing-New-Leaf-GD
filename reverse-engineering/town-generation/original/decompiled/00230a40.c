/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00230a40. Provisional types; not original source or a verified portable implementation. */

uint FUN_00230a40(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  
  if (*(int *)(param_1 + 0xd8) != 0) {
    iVar4 = *(int *)(param_1 + 0xd8);
    uVar2 = 0;
    uVar3 = (uint)*(byte *)(iVar4 + param_4 + 2);
    if (param_4 != 0) {
      pbVar5 = (byte *)(iVar4 + 1);
      if ((param_4 & 1) != 0) {
        pbVar5 = (byte *)(iVar4 + 2);
        uVar2 = (uint)*pbVar5;
      }
      iVar4 = 0;
      for (param_4 = param_4 >> 1; param_4 != 0; param_4 = param_4 - 1) {
        pbVar1 = pbVar5 + 1;
        pbVar5 = pbVar5 + 2;
        uVar2 = uVar2 + *pbVar1;
        iVar4 = iVar4 + (uint)*pbVar5;
      }
      uVar2 = uVar2 + iVar4;
    }
    if (uVar3 * 6 <= param_3) {
      FUN_001151b0(param_2,*(int *)(param_1 + 0xd8) + **(ushort **)(param_1 + 0xd8) + 2 + uVar2 * 6,
                   uVar3 * 6);
      return uVar3;
    }
  }
  return 0;
}


