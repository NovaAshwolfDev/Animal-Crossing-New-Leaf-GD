/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00591f90. Provisional types; not original source or a verified portable implementation. */

undefined1 * FUN_00591f90(undefined4 param_1,undefined1 *param_2,int param_3,int param_4)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  byte bVar8;
  undefined4 *puVar9;
  short local_50;
  short local_4e;
  short local_4c;
  short local_4a;
  byte local_48;
  byte local_47;
  char local_40;
  char local_3f;
  char local_3e;
  char local_3d;
  undefined4 local_38;
  uint local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 local_24;
  
  bVar1 = *(byte *)(param_4 + 8);
  if ((bVar1 == 0 || bVar1 == 0xa0) || bVar1 == 0xa1) {
    puVar4 = (undefined1 *)FUN_00692a4c(param_1,param_3);
    return puVar4;
  }
  FUN_00692a4c(&local_50,param_3);
  FUN_00692910(&local_50,param_4);
  uVar2 = *(undefined1 *)(param_3 + 8);
  iVar3 = FUN_00767d2c(*param_2);
  iVar6 = DAT_00592330;
  local_48 = bVar1;
  bVar8 = bVar1;
  if (iVar3 == 0) {
    FUN_0063aef4(&local_38,uVar2);
    uVar5 = local_34 & 0xff;
    if (bVar1 != 0x5f) {
      if (bVar1 < 0x60) {
        if (bVar1 != 0x17) {
          if ((bVar1 != 0x5c && bVar1 != 0x5d) && bVar1 != 0x5e) goto LAB_00592230;
          goto LAB_00592208;
        }
        local_30 = *(undefined4 *)(iVar6 + 8);
        uStack_2c = *(undefined4 *)(iVar6 + 0xc);
        uStack_28 = *(undefined4 *)(iVar6 + 0x10);
        iVar6 = FUN_0063b1c4(uVar5);
        puVar9 = &local_30;
      }
      else if (bVar1 == 0x90) {
        local_30 = *(undefined4 *)(iVar6 + 0x14);
        uStack_2c = *(undefined4 *)(iVar6 + 0x18);
        uStack_28 = *(undefined4 *)(iVar6 + 0x1c);
        iVar6 = FUN_0063b1c4(uVar5);
        puVar9 = &local_30;
      }
      else if (bVar1 == 0x91) {
        local_30 = *(undefined4 *)(iVar6 + 0x20);
        uStack_2c = *(undefined4 *)(iVar6 + 0x24);
        uStack_28 = *(undefined4 *)(iVar6 + 0x28);
        iVar6 = FUN_0063b1c4(uVar5);
        puVar9 = &local_30;
      }
      else if (bVar1 == 0x92) {
        local_30 = *(undefined4 *)(iVar6 + 0x2c);
        uStack_2c = *(undefined4 *)(iVar6 + 0x30);
        uStack_28 = *(undefined4 *)(iVar6 + 0x34);
        iVar6 = FUN_0063b1c4(uVar5);
        puVar9 = &local_30;
      }
      else {
        if (bVar1 != 0x93) goto LAB_00592230;
        local_30 = *(undefined4 *)(iVar6 + 0x38);
        uStack_2c = *(undefined4 *)(iVar6 + 0x3c);
        uStack_28 = *(undefined4 *)(iVar6 + 0x40);
        iVar6 = FUN_0063b1c4(uVar5);
        puVar9 = &local_30;
      }
      goto LAB_00592204;
    }
  }
  else {
    FUN_0063aef4(&uStack_28,uVar2);
    if (bVar1 != 200) {
      if (bVar1 < 0xc9) {
        if (bVar1 == 0x18) {
          local_38 = *(undefined4 *)(iVar6 + 0x44);
          local_34 = *(uint *)(iVar6 + 0x48);
          local_30 = *(undefined4 *)(iVar6 + 0x4c);
          iVar6 = FUN_0063b1c4(local_24);
          puVar9 = &local_38;
          goto LAB_00592204;
        }
        if ((bVar1 != 0xc5 && bVar1 != 0xc6) && bVar1 != 199) goto LAB_00592230;
      }
      else {
        if (bVar1 == 0xe9) {
          local_38 = *(undefined4 *)(iVar6 + 0x50);
          local_34 = *(uint *)(iVar6 + 0x54);
          local_30 = *(undefined4 *)(iVar6 + 0x58);
          iVar6 = FUN_0063b1c4(local_24);
          puVar9 = &local_38;
        }
        else if (bVar1 == 0xea) {
          local_38 = *(undefined4 *)(iVar6 + 0x5c);
          local_34 = *(uint *)(iVar6 + 0x60);
          local_30 = *(undefined4 *)(iVar6 + 100);
          iVar6 = FUN_0063b1c4(local_24);
          puVar9 = &local_38;
        }
        else if (bVar1 == 0xeb) {
          local_38 = *(undefined4 *)(iVar6 + 0x68);
          local_34 = *(uint *)(iVar6 + 0x6c);
          local_30 = *(undefined4 *)(iVar6 + 0x70);
          iVar6 = FUN_0063b1c4(local_24);
          puVar9 = &local_38;
        }
        else {
          if (bVar1 != 0xec) goto LAB_00592230;
          local_38 = *(undefined4 *)(iVar6 + 0x74);
          local_34 = *(uint *)(iVar6 + 0x78);
          local_30 = *(undefined4 *)(iVar6 + 0x7c);
          iVar6 = FUN_0063b1c4(local_24);
          puVar9 = &local_38;
        }
LAB_00592204:
        bVar8 = *(byte *)((int)puVar9 + iVar6);
      }
LAB_00592208:
      if (bVar8 == 0) goto LAB_00592230;
    }
  }
  local_48 = bVar8;
LAB_00592230:
  FUN_0063aef4(&local_40,bVar1);
  if (local_40 == '\x17' || local_40 == '\x18') {
    local_50 = local_50 + 0x1084;
  }
  if (local_3f == '\x17' || local_3f == '\x18') {
    local_4e = local_4e + 0x1084;
  }
  if (local_3e == '\x17' || local_3e == '\x18') {
    local_4c = local_4c + 0x1084;
  }
  if (local_3d == '\x17' || local_3d == '\x18') {
    local_4a = local_4a + 0x1084;
  }
  local_47 = *(byte *)(param_4 + 9);
  if ((bVar1 != 0x17 && bVar1 != 0x18) && (iVar6 = FUN_0063ae74(local_48), iVar6 == 0)) {
    local_47 = local_47 & 0xbf;
  }
  uVar7 = FUN_007f34d0(param_3);
  FUN_00692954(&local_50,uVar7);
  FUN_00692a4c(param_1,&local_50);
  return (undefined1 *)&local_50;
}


