/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00629768. Provisional types; not original source or a verified portable implementation. */

void FUN_00629768(int param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [12];
  
  if (param_3 == 0) {
    return;
  }
  bVar1 = *(byte *)(param_1 + 9);
  if (4 < bVar1) {
    return;
  }
  iVar6 = param_2 + 0x6bb0;
  if (param_3 < 0) {
    if (param_2 != 0) {
      uVar5 = 0;
      do {
        iVar2 = FUN_007c40a4(iVar6,uVar5);
        if (iVar2 == 2) {
          uVar3 = FUN_007c3f50(iVar6,uVar5,0);
          iVar2 = FUN_007fdfb8(uVar3,param_1 + 0x6c);
          if (iVar2 != 0) {
            FUN_00405174(iVar6,uVar5,3);
            break;
          }
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < 0x10);
    }
    if (bVar1 != 0) goto LAB_00629a58;
    FUN_00636e3c();
    iVar6 = FUN_006378a0();
    iVar2 = FUN_00616cb4(iVar6 + 4,*(undefined2 *)(param_1 + 0x38));
    if (iVar2 != 0) {
      FUN_0061f8ac(iVar2,0xfffffff9,param_2,1);
    }
    iVar6 = FUN_00616cb4(iVar6 + 4,*(undefined2 *)(param_1 + 0x68));
  }
  else {
    uVar7 = FUN_005cb794();
    uVar3 = (undefined4)((ulonglong)uVar7 >> 0x20);
    FUN_0063ae38(auStack_38,uVar3,(int)uVar7,uVar3);
    iVar2 = FUN_007ec334(param_1,auStack_38);
    if (iVar2 == 0) {
      return;
    }
    if ((bVar1 != 0) || (param_2 == 0)) goto LAB_00629a58;
    uVar5 = 0;
    do {
      iVar2 = FUN_007c40a4(iVar6,uVar5);
      if (iVar2 == 2) {
        uVar3 = FUN_007c3f50(iVar6,uVar5,0);
        iVar2 = FUN_007fdfb8(uVar3,param_1 + 0x6c);
        if (iVar2 != 0) {
          FUN_00405174(iVar6,uVar5,3);
          break;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x10);
    FUN_0011a3e0(auStack_30,param_1);
    FUN_0063ac4c(auStack_30);
    FUN_0063ad54(auStack_30,0,0x12,0,0);
    if (*(char *)(param_1 + 10) == '\x04') {
      FUN_0063ad54(auStack_30,1,0,0,0);
    }
    FUN_007edb08(&local_44,auStack_30);
    local_50 = local_44;
    local_4c = uStack_40;
    uStack_48 = uStack_3c;
    FUN_005cd238(&local_50);
    FUN_005cd580(&local_50,1,0,0,0);
    puVar4 = (undefined4 *)FUN_005cc158();
    iVar6 = FUN_005cd080(*puVar4,puVar4[1],puVar4[2],local_50,local_4c,uStack_48);
    if (iVar6 == 0) {
      return;
    }
    FUN_00636e3c();
    iVar6 = FUN_006378a0();
    iVar2 = FUN_00616cb4(iVar6 + 4,*(undefined2 *)(param_1 + 0x38));
    if (iVar2 != 0) {
      FUN_0061f8ac(iVar2,0xfffffff9,param_2,1);
    }
    iVar6 = FUN_00616cb4(iVar6 + 4,*(undefined2 *)(param_1 + 0x68));
  }
  if (iVar6 != 0) {
    FUN_0061f8ac(iVar6,0xffffffff,param_2,1);
  }
LAB_00629a58:
  FUN_00629700(param_1);
  return;
}


