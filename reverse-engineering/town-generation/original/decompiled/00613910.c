/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00613910. Provisional types; not original source or a verified portable implementation. */

void FUN_00613910(int param_1,uint *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (param_3 == 0) {
    return;
  }
  if (((param_2[2] != 0) && (iVar2 = FUN_005ee3a4(), iVar2 == 0x25)) &&
     (*(char *)(param_1 + 0x17519) == -1)) {
    puVar3 = (undefined4 *)FUN_005cc158();
    local_30 = *puVar3;
    uStack_2c = puVar3[1];
    local_28 = puVar3[2];
    FUN_005cd238(&local_30);
    iVar6 = param_1 + DAT_00613a5c;
    thunk_FUN_007edb08(&local_20);
    local_3c = local_20;
    uStack_38 = uStack_1c;
    uStack_34 = uStack_18;
    FUN_005cd238(&local_3c);
    iVar2 = FUN_005cc1fc(&local_30,&local_3c,1);
    if (iVar2 < 0) {
      thunk_FUN_0063ac18(iVar6,&local_30);
      iVar2 = 0;
    }
    if (*(char *)(param_1 + DAT_00613a60) == '\x02') {
      iVar2 = (iVar2 + -7) * 0x14;
    }
    else {
      iVar2 = (iVar2 + -2) * 5;
      if (0x32 < iVar2) {
        iVar2 = 0x32;
      }
    }
    iVar4 = FUN_0011df34(100);
    if (iVar4 < iVar2) {
      uVar5 = FUN_007f2db0(param_2);
      FUN_006271a0(iVar6,uVar5);
      if ((uint)(int)(char)*(byte *)(param_1 + 0x17519) < *param_2) {
        uVar1 = 1 << (uint)*(byte *)(param_1 + 0x17519);
        if ((param_2[1] & uVar1) != 0) {
          param_2[1] = param_2[1] & ~uVar1;
          param_2[2] = param_2[2] - 1;
        }
      }
    }
  }
  return;
}


