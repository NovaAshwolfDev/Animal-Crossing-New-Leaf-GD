/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00614d40. Provisional types; not original source or a verified portable implementation. */

void FUN_00614d40(int param_1,int param_2)

{
  ushort uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  ushort *puVar7;
  int iVar8;
  bool bVar9;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  
  iVar8 = param_1 + 0x171b8;
  if (param_2 < 1) {
    if ((*(byte *)(param_1 + 0x17262) & 0xf) != 0) {
      return;
    }
    if (9 < *(byte *)(param_1 + 0x1725e)) {
      return;
    }
    puVar2 = (undefined4 *)FUN_005cc158();
    FUN_007edb08(&local_34,iVar8);
    iVar3 = FUN_005cd080(local_34,uStack_30,uStack_2c,*puVar2,puVar2[1],puVar2[2]);
    if (iVar3 == 0) {
      puVar7 = (ushort *)(param_1 + DAT_00614f9c);
      uVar1 = *puVar7;
      bVar9 = uVar1 != 0;
      if (bVar9) {
        uVar1 = (ushort)(byte)puVar7[1];
      }
      if (!bVar9 || uVar1 == 0) {
        return;
      }
      if (*(char *)((int)puVar7 + 3) == '\0') {
        return;
      }
      FUN_007ec828(&local_38);
      iVar8 = FUN_005cd080(local_38,local_34,uStack_30,*puVar2,puVar2[1],puVar2[2]);
      if (iVar8 == 0) {
        return;
      }
      FUN_0061c4a8(param_1,puVar2);
      return;
    }
  }
  else {
    iVar3 = FUN_005ee68c(1);
    if ((((iVar3 != 0) || (iVar3 = FUN_005ee68c(2), iVar3 != 0)) ||
        (iVar3 = FUN_005ee68c(0xd), iVar3 != 0)) ||
       ((iVar3 = FUN_005ee68c(5), iVar3 != 0 || (iVar3 = FUN_005ee68c(3), iVar3 != 0)))) {
      uVar4 = FUN_005cc158();
      FUN_00627cc8(iVar8,uVar4);
      return;
    }
    if ((*(byte *)(param_1 + 0x17262) & 0xf) == 0) {
      uVar5 = (uint)*(char *)(param_1 + 0x1725e);
    }
    else {
      uVar5 = 0xffffffff;
    }
    if (uVar5 < 10) {
      iVar3 = param_1 + uVar5 * DAT_00614fa0 * 8;
      if ((iVar3 == 0) || (iVar6 = FUN_007f3768(iVar3), iVar6 == 0)) goto code_r0x00614f20;
    }
    else {
      iVar3 = 0;
    }
    if ((iVar3 == 0) || (iVar3 = FUN_007e7244(iVar3,0), iVar3 == 0)) {
code_r0x00614f20:
      puVar2 = (undefined4 *)FUN_005cc158();
      local_28 = *puVar2;
      uStack_24 = puVar2[1];
      local_20 = puVar2[2];
      FUN_005cd580(&local_28,-(param_2 + -1),0,0,0);
      do {
        iVar8 = FUN_0061c4a8(param_1,&local_28);
        if (iVar8 == 0) {
          return;
        }
        param_2 = param_2 + -1;
        FUN_005cd580(&local_28,1,0,0,0);
      } while (param_2 != 0);
      return;
    }
    puVar2 = (undefined4 *)FUN_005cc158();
  }
  FUN_00627cc8(iVar8,puVar2);
  return;
}


