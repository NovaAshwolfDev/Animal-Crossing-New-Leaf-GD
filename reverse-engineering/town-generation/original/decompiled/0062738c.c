/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0062738c. Provisional types; not original source or a verified portable implementation. */

void FUN_0062738c(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  puVar1 = (undefined4 *)FUN_005cc158();
  local_48 = *puVar1;
  uStack_44 = puVar1[1];
  local_40 = puVar1[2];
  FUN_005cd238(&local_48);
  FUN_007edb08(&local_58,param_1);
  local_38 = local_58;
  uStack_34 = uStack_54;
  uStack_30 = uStack_50;
  FUN_005cd238(&local_38);
  uVar2 = FUN_005cc1fc(&local_48,&local_38,1);
  if (*(char *)(param_1 + 0xb) == -1) {
    if ((int)uVar2 < 0) {
      FUN_0063ac18(param_1,&local_48);
      return;
    }
  }
  else if (uVar2 < 2) {
    if ((uVar2 == 1) && (local_4c = FUN_0074702c(1), local_4c != 0)) {
      iVar7 = 0x10;
      do {
        iVar5 = 0x10;
        do {
          iVar3 = FUN_007e2290(local_4c,iVar5,iVar7,0);
          if ((iVar3 != 0) && (iVar3 = FUN_007fe108(), iVar3 == 0x4e)) {
            local_58 = 0;
            FUN_005e0f70(local_4c,DAT_0062768c,iVar5,iVar7);
            goto LAB_00627510;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 0x60);
        iVar7 = iVar7 + 1;
        if (0x4f < iVar7) {
          return;
        }
      } while( true );
    }
  }
  else {
    local_4c = FUN_0074702c(1);
    if (local_4c != 0) {
      iVar7 = 0x10;
      do {
        iVar5 = 0x10;
        do {
          iVar3 = FUN_007e2290(local_4c,iVar5,iVar7,0);
          if ((iVar3 != 0) && (iVar3 = FUN_007fe108(), iVar3 == 0x4e)) {
            local_58 = 0;
            FUN_005e0f70(local_4c,DAT_0062768c,iVar5,iVar7);
            goto code_r0x00627478;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 0x60);
        iVar7 = iVar7 + 1;
      } while (iVar7 < 0x50);
    }
code_r0x00627478:
    iVar7 = FUN_00636e3c();
    uVar2 = 0;
    do {
      iVar5 = FUN_002d57dc(iVar7 + 0x20,uVar2 & 0xff);
      if ((iVar5 != 0) && (iVar3 = FUN_007aae1c(iVar5 + 0x55a6), iVar3 != 0)) {
        uVar6 = 0;
        do {
          uVar4 = FUN_007c3f50(iVar5 + 0x6bb0,uVar6,0);
          FUN_00756da4(&local_4c,uVar4);
          iVar3 = FUN_007fe108(&local_4c);
          if (iVar3 == 0x4e) {
            iVar7 = FUN_007549e8(&local_4c,0x4e,0x4f);
            if (iVar7 != 0) {
              local_58 = 1;
              FUN_00362e70(iVar5 + 0x6bb0,uVar6,&local_4c,0);
            }
            FUN_00636e3c();
            iVar7 = FUN_006378a0();
            iVar7 = FUN_006138d4(iVar7 + 4,(int)*(char *)(param_1 + 0xb));
            if (iVar7 != 0) {
              FUN_0061f8ac(iVar7,0xfffffffe,iVar5,1);
            }
            goto LAB_00627510;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < 0x10);
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 4);
LAB_00627510:
    *(undefined1 *)(param_1 + 8) = 0x21;
    *(undefined1 *)(param_1 + 9) = 1;
    *(undefined1 *)(param_1 + 0xb) = 0xff;
  }
  return;
}


