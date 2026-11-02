/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 006ac0fc. Provisional types; not original source or a verified portable implementation. */

void FUN_006ac0fc(int param_1,undefined1 param_2,byte param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  byte local_25;
  undefined1 local_24;
  byte local_23;
  
  piVar1 = DAT_006ac1cc;
  if ((*(char *)(param_1 + 0x44) == '\0') && ((*(byte *)(*DAT_006ac1cc + 0x1312a) & 1) == 0)) {
    iVar4 = *(int *)(param_1 + 4);
    uVar2 = *(int *)(param_1 + 8) - iVar4;
    if (5 < uVar2) {
      iVar3 = uVar2 - 6;
      local_24 = FUN_00610c2c();
      if (iVar4 != 0) {
        local_27 = (undefined1)iVar3;
        local_26 = (undefined1)((uint)iVar3 >> 8);
        local_23 = local_23 & 0xfc | *(byte *)(*piVar1 + 0x13128) & 3;
        local_25 = local_25 & 0xe0 | (byte)((uint)(iVar3 * 0x4000) >> 0x1e) | (param_3 & 7) << 2;
        local_28 = param_2;
        FUN_0080c0f0(iVar4,&local_28);
      }
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 8);
    }
  }
  return;
}


