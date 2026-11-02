/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00616d98. Provisional types; not original source or a verified portable implementation. */

void FUN_00616d98(int param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  
  uVar2 = FUN_007f2db0(param_2);
  if (uVar2 < 10) {
    if (uVar2 < *param_2) {
      uVar3 = 1 << (uVar2 & 0xff);
      if ((param_2[1] & uVar3) != 0) {
        param_2[1] = param_2[1] & ~uVar3;
        param_2[2] = param_2[2] - 1;
      }
    }
    uVar3 = FUN_007f2db0(param_2);
    if (uVar3 < 10) {
      if (uVar3 < *param_2) {
        uVar1 = 1 << (uVar3 & 0xff);
        if ((param_2[1] & uVar1) != 0) {
          param_2[1] = param_2[1] & ~uVar1;
          param_2[2] = param_2[2] - 1;
        }
      }
      iVar4 = param_1 + uVar2 * DAT_00616e78 * 8;
      if (param_3 == 0) {
        iVar4 = iVar4 + 0x2400;
      }
      param_1 = param_1 + uVar3 * DAT_00616e78 * 8;
      if (param_3 == 0) {
        puVar5 = (undefined1 *)(iVar4 + 0xf3);
        puVar6 = (undefined1 *)(param_1 + 0x24f3);
      }
      else {
        puVar5 = (undefined1 *)(iVar4 + 0x24f4);
        puVar6 = (undefined1 *)(param_1 + 0x24f4);
      }
      *puVar5 = (char)uVar3;
      *puVar6 = (char)uVar2;
    }
  }
  return;
}


