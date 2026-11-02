/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007a0858. Provisional types; not original source or a verified portable implementation. */

undefined4 **** FUN_007a0858(int param_1,int param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int local_90;
  undefined4 local_8c;
  undefined1 auStack_88 [8];
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 auStack_78 [8];
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined4 ***local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 auStack_34 [16];
  
  if (param_1 == 0) {
    return (undefined4 ****)0x0;
  }
  local_40 = *(undefined4 ****)(param_1 + 0x28);
  if ((undefined4 ****)local_40 != (undefined4 ****)0x0 && param_2 != 0) {
    uStack_3c = 0x80;
    uStack_38 = 0x80;
    FUN_007dc9d8(auStack_60,param_1);
    uVar2 = FUN_005dc500();
    FUN_007dc9d8(auStack_50,uVar2);
    FUN_007dca10(auStack_88,param_1);
    iVar3 = FUN_007dc980(auStack_88,auStack_60);
    if (iVar3 != 0) {
      do {
        puVar4 = (ushort *)FUN_007e23e0(param_1,local_80,local_7c);
        if (puVar4 != (ushort *)0x0) {
          uVar1 = *puVar4;
          iVar3 = FUN_007e206c(param_1,local_80,local_7c);
          if ((uVar1 < 0x164) && (iVar3 != 0)) {
            iVar5 = FUN_00687d40(uVar1);
            piVar6 = (int *)(*(int *)(param_2 + 8) + 0x28);
            iVar10 = *piVar6;
            local_90 = 0;
            if (iVar10 != 0) {
              local_90 = (int)piVar6 + iVar10;
            }
            if (local_90 == 0 || iVar5 == 0) {
LAB_007a09c4:
              iVar10 = 0;
            }
            else {
              uVar7 = FUN_00301bac(iVar5);
              iVar5 = FUN_007ce0d4(&local_90,iVar5,uVar7);
              if (iVar5 == 0) goto LAB_007a09c4;
              iVar11 = *(int *)(iVar5 + 0xc);
              iVar10 = 0;
              if (iVar11 != 0) {
                iVar10 = iVar11 + iVar5 + 0xc;
              }
            }
            if (iVar10 != 0) {
              local_68 = 0;
              local_64 = 0;
              local_90 = 0;
              local_8c = 0;
              FUN_00745ff8(&local_68,&local_64,local_80,local_7c);
              FUN_00742e30(auStack_34,iVar10);
              FUN_007dca10(auStack_78,uVar2);
              iVar5 = FUN_007dc980(auStack_78,auStack_50);
              while (iVar5 != 0) {
                uVar7 = FUN_007f32bc(iVar3,local_70,local_6c);
                uVar8 = FUN_007fc638(auStack_34,local_70,local_6c);
                uVar9 = FUN_0063aedc(uVar7);
                if ((int)uVar8 < 0) {
                  uVar8 = 0;
                }
                else if ((int)uVar9 < (int)uVar8) {
                  uVar8 = uVar9;
                }
                FUN_00742e14(&local_40,local_68 + local_70,local_6c + local_64,uVar8 & 0xff);
                FUN_0059b024(auStack_78);
                iVar5 = FUN_007dc980(auStack_78,auStack_50);
              }
            }
          }
        }
        FUN_0059b024(auStack_88);
        iVar3 = FUN_007dc980(auStack_88,auStack_60);
      } while (iVar3 != 0);
    }
    local_40 = &local_40;
  }
  return (undefined4 ****)local_40;
}


