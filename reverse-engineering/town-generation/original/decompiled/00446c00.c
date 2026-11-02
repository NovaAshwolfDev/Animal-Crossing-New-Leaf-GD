/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00446c00. Provisional types; not original source or a verified portable implementation. */

int FUN_00446c00(undefined4 *param_1)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  undefined4 local_4;
  
  pbVar2 = (byte *)&local_10;
  local_4 = 0;
  local_10 = *param_1;
  local_10._0_1_ = (byte)*param_1;
  local_c = param_1[1];
  local_8 = (uint)*(byte *)(param_1 + 2);
  iVar1 = 0;
  while ((byte)local_10 != 0) {
    uVar3 = (uint)*pbVar2;
    iVar1 = iVar1 * 0x10;
    if (uVar3 - 0x30 < 10) {
      iVar4 = uVar3 - 0x30;
    }
    else {
      iVar4 = uVar3 - 0x57;
    }
    if (iVar4 - 1U < 0xf) {
      iVar1 = iVar1 + iVar4;
    }
    pbVar2 = pbVar2 + 1;
    local_10._0_1_ = *pbVar2;
  }
  return iVar1;
}


