/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 001b7e8c. Provisional types; not original source or a verified portable implementation. */

void FUN_001b7e8c(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int *piVar7;
  int local_98;
  undefined1 *local_94;
  undefined4 local_90;
  undefined1 local_8c [20];
  int local_78;
  undefined2 **local_74;
  int local_70;
  undefined2 *local_6c;
  undefined4 local_68;
  undefined2 local_64;
  char local_60 [17];
  undefined1 uStack_4f;
  undefined1 uStack_48;
  undefined1 uStack_47;
  undefined4 local_44;
  undefined1 auStack_40 [28];
  int local_24 [2];
  
  piVar7 = &local_98;
  uVar1 = FUN_0074a424();
  uVar2 = FUN_00644ee8();
  puVar6 = DAT_001b8284;
  FUN_00756f28(DAT_001b8288,*DAT_001b8284,uVar2);
  local_98 = 0;
  FUN_001b8a74(param_1 + 0x2a,*puVar6,*DAT_001b828c,0);
  FUN_00756ef4(param_1 + 0x40,DAT_001b8288);
  switch(((uVar1 >> 4) << 0x18) >> 0x1c) {
  case 0:
    local_94 = local_8c;
    local_90 = 0x1e;
    local_70._0_2_ = (ushort)(byte)local_70;
    local_98 = DAT_001b8290;
    local_8c[0] = 0;
    uVar2 = FUN_005ad830(auStack_40,&local_98);
    iVar3 = FUN_005a9cd4(uVar2,"MyDesign/tex/myD_%02d.bin");
    local_64 = (short)(uVar1 & 0xf);
    iVar4 = FUN_005a9714(iVar3,local_60);
    if (iVar4 != 0) {
      if (local_60[0] == '\0') {
        pcVar5 = (char *)0x0;
      }
      else {
        pcVar5 = local_60;
      }
      FUN_005a9b88(&local_64,pcVar5,*(undefined4 *)(iVar3 + 4));
    }
    FUN_005a9c0c(iVar3);
    (**(code **)(local_98 + 8))(&local_98);
    FUN_001b848c(param_1,local_94);
    iVar3 = FUN_0062d120(uVar1 >> 4 & 0xf);
    FUN_001b8a6c(param_1 + 0x2a,iVar3 + 0x55a6);
    break;
  case 2:
    local_94 = local_8c;
    local_90 = 0x1e;
    local_70._0_2_ = (ushort)(byte)local_70;
    local_98 = DAT_001b8290;
    local_8c[0] = 0;
    uVar2 = FUN_005ad830(&uStack_48,&local_98);
    iVar3 = FUN_005a9cd4(uVar2,"MyDesign/tex/myD_%02d.bin");
    local_24[0] = (uVar1 & 0xf) + 10;
    iVar4 = FUN_005a9714(iVar3,&local_68);
    if (iVar4 != 0) {
      if ((char)local_68 == '\0') {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6 = &local_68;
      }
      FUN_005a9a80(local_24,puVar6,*(undefined4 *)(iVar3 + 4));
    }
    FUN_005a9c0c(iVar3);
    (**(code **)(local_98 + 8))(&local_98);
    FUN_001b848c(param_1,local_94);
    break;
  case 4:
    local_6c = &local_64;
    local_68 = 0x1e;
    uStack_47 = 0;
    local_70 = DAT_001b8290;
    local_64 = (ushort)local_64._1_1_ << 8;
    uVar2 = FUN_005ad830(auStack_40,&local_70);
    iVar3 = FUN_005a9cd4(uVar2,"MyDesign/tex/myD_%02d.bin");
    local_44 = 0x13;
    iVar4 = FUN_005a9714(iVar3,&local_90);
    if (iVar4 != 0) {
      uVar2 = *(undefined4 *)(iVar3 + 4);
      if ((char)local_90 != '\0') goto LAB_001b8114;
LAB_001b810c:
      puVar6 = (undefined4 *)0x0;
LAB_001b8118:
      FUN_005a9a80(&local_44,puVar6,uVar2);
    }
    goto LAB_001b8120;
  case 5:
    local_6c = &local_64;
    local_68 = 0x1e;
    uStack_47 = 0;
    local_70 = DAT_001b8290;
    local_64 = (ushort)local_64._1_1_ << 8;
    uVar2 = FUN_005ad830(auStack_40,&local_70);
    iVar3 = FUN_005a9cd4(uVar2,"MyDesign/tex/myD_%02d.bin");
    local_44 = 0x12;
    iVar4 = FUN_005a9714(iVar3,&local_90);
    if (iVar4 != 0) {
      uVar2 = *(undefined4 *)(iVar3 + 4);
      if ((char)local_90 == '\0') goto LAB_001b810c;
LAB_001b8114:
      puVar6 = &local_90;
      goto LAB_001b8118;
    }
LAB_001b8120:
    FUN_005a9c0c(iVar3);
    (**(code **)(local_70 + 8))(&local_70);
    FUN_001b848c(param_1,local_6c);
    break;
  case 6:
    local_74 = &local_6c;
    local_70 = 0x1e;
    uStack_4f = 0;
    local_78 = DAT_001b8290;
    local_6c = (undefined2 *)((uint)local_6c & 0xffffff00);
    uVar2 = FUN_005ad830(&uStack_48,&local_78);
    iVar3 = FUN_005a9cd4(uVar2,"MyDesign/tex/myD_%02d.bin");
    local_24[0] = 0x14;
    iVar4 = FUN_005a9714(iVar3,&local_98);
    if (iVar4 != 0) {
      if ((char)local_98 == '\0') {
        piVar7 = (int *)0x0;
      }
      FUN_005a9a80(local_24,piVar7,*(undefined4 *)(iVar3 + 4));
    }
    FUN_005a9c0c(iVar3);
    (**(code **)(local_78 + 8))(&local_78);
    FUN_001b848c(param_1,local_74);
  }
  FUN_001b6c20(param_1);
  return;
}


