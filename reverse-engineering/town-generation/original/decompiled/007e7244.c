/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007e7244. Provisional types; not original source or a verified portable implementation. */

int FUN_007e7244(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  bool bVar4;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar1 = FUN_007f3734();
  if (iVar1 != 0) {
    if (param_2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)FUN_005cc158();
      local_18 = *puVar2;
      local_14 = puVar2[1];
      local_10 = puVar2[2];
    }
    else {
      local_18 = *param_2;
      local_14 = param_2[1];
      local_10 = param_2[2];
    }
    FUN_005cd238(&local_18);
    uVar3 = *(uint *)(DAT_007e7300 + 4);
    if ((uVar3 == 0) || (0x14c < *(ushort *)(param_1 + 0x2c))) {
      iVar1 = 0;
    }
    else {
      iVar1 = uVar3 + (uint)*(ushort *)(param_1 + 0x2c) * 0x22;
    }
    if (iVar1 != 0) {
      uVar3 = (uint)*(byte *)(iVar1 + 0x1c);
    }
    if (iVar1 != 0) {
      uVar3 = uVar3 & 0xf;
    }
    else {
      uVar3 = 1;
    }
    if (uVar3 == (int)(char)local_14) {
      bVar4 = iVar1 != 0;
      if (bVar4) {
        iVar1 = (int)*(char *)(iVar1 + 3);
      }
      if (!bVar4) {
        iVar1 = 1;
      }
      if (iVar1 == local_14._1_1_) {
        return 1;
      }
    }
    iVar1 = 0;
  }
  return iVar1;
}


