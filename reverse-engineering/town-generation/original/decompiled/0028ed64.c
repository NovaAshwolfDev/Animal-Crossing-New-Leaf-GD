/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0028ed64. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_0028ed64(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 auStack_70 [8];
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  int iStack_5c;
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [4];
  uint local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  uVar1 = *(undefined1 *)(param_1 + 0x10);
  iVar2 = FUN_00285804();
  FUN_007dca10(&local_88,param_1);
  FUN_007dc9d8(&local_78,param_1);
  iVar3 = FUN_007dc980(&local_88,&local_78);
  while (iVar3 != 0) {
    if ((((iVar2 != 0) && (iVar3 = FUN_007bfff8(iVar2,local_80,local_7c), iVar3 != 0)) &&
        (FUN_00285474(auStack_58,local_80,local_7c,uVar1), (local_50 & 0xff) < 0xf8)) &&
       (iVar3 = FUN_00636488(), iVar3 != 0)) {
      if (*(int *)(param_1 + 0x20) == 0) {
        return 1;
      }
      FUN_007dc900(&local_60,&local_80,param_1 + 0x24);
      FUN_00692a4c(auStack_58,iStack_5c * 0xa0 + local_60 * 10 + *(int *)(param_1 + 0x20));
      if ((char)local_50 != '\0') {
        FUN_00285474(&local_38,local_80,local_7c,*(undefined1 *)(param_1 + 0x10));
        if (0xf7 < (local_30 & 0xff)) {
          return 1;
        }
        *(char *)(param_1 + 0x12) = (char)local_30;
        *(undefined4 *)(param_1 + 0x14) = local_38;
        *(undefined4 *)(param_1 + 0x18) = uStack_34;
        return 1;
      }
    }
    FUN_0059b024(&local_88);
    iVar3 = FUN_007dc980(&local_88,&local_78);
  }
  iVar2 = FUN_0074702c(*(undefined1 *)(param_1 + 0x11));
  if (iVar2 != 0) {
    iVar3 = FUN_0074702c(*(undefined1 *)(param_1 + 0x11));
    FUN_007dca10(&local_68,param_1);
    local_88 = local_68;
    local_84 = local_64;
    FUN_0059afd4(&local_80,&local_60);
    FUN_007dc9d8(&local_68,param_1);
    local_78 = local_68;
    local_74 = local_64;
    FUN_0059afd4(auStack_70,&local_60);
    iVar4 = FUN_007dc980(&local_88,&local_78);
    while (iVar4 != 0) {
      if (iVar3 != 0) {
        FUN_0059ace8(&local_40,&local_80);
        iVar4 = FUN_007e206c(iVar3,local_40,uStack_3c);
        if (iVar4 != 0) {
          FUN_0059abf0(&local_48,&local_80);
          iVar4 = FUN_007f32bc(iVar4,local_48,uStack_44);
          if (iVar4 == 0x9d) {
LAB_0028f060:
            if (*(int *)(param_1 + 0x20) == 0) {
              FUN_0059ace8(&local_50,&local_80);
              puVar5 = (undefined2 *)FUN_007e23e0(iVar2,local_50,local_4c);
              if (puVar5 != (undefined2 *)0x0) {
                iVar4 = FUN_00687d78(*puVar5);
                if (iVar4 == 1) {
                  *(undefined1 *)(param_1 + 0x12) = 0x59;
                  return 1;
                }
                if (iVar4 == 2) {
                  uVar1 = FUN_00768acc();
                  *(undefined1 *)(param_1 + 0x12) = uVar1;
                  return 1;
                }
                if (iVar4 == 3) {
                  *(undefined1 *)(param_1 + 0x12) = 0x58;
                  return 1;
                }
                if (iVar4 == 4) {
                  uVar1 = FUN_00768c80();
                  *(undefined1 *)(param_1 + 0x12) = uVar1;
                  return 1;
                }
              }
            }
            else {
              FUN_007dc900(&local_30,&local_80,param_1 + 0x24);
              FUN_00692a4c(auStack_54,iStack_2c * 0xa0 + local_30 * 10 + *(int *)(param_1 + 0x20));
              if ((char)local_4c != '\0') {
                FUN_0059ace8(&local_28,&local_80);
                puVar5 = (undefined2 *)FUN_007e23e0(iVar2,local_28,uStack_24);
                if (puVar5 != (undefined2 *)0x0) {
                  iVar4 = FUN_00687d78(*puVar5);
                  if (iVar4 == 1) {
                    *(undefined1 *)(param_1 + 0x12) = 0x59;
                    return 1;
                  }
                  if (iVar4 == 2) {
                    uVar1 = FUN_00768acc();
                    *(undefined1 *)(param_1 + 0x12) = uVar1;
                    return 1;
                  }
                  if (iVar4 == 3) {
                    *(undefined1 *)(param_1 + 0x12) = 0x58;
                    return 1;
                  }
                  if (iVar4 == 4) {
                    uVar1 = FUN_00768c80();
                    *(undefined1 *)(param_1 + 0x12) = uVar1;
                    return 1;
                  }
                }
              }
            }
          }
          else if (iVar4 < 0x9e) {
            if (iVar4 == 0x11 || iVar4 == 0x9c) goto LAB_0028f060;
          }
          else if (iVar4 == 0x9e || iVar4 == 0x9f) goto LAB_0028f060;
        }
      }
      FUN_0059b024(&local_88);
      iVar4 = FUN_007dc980(&local_88,&local_78);
    }
  }
  return 0;
}


