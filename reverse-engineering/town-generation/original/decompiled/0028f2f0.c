/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0028f2f0. Provisional types; not original source or a verified portable implementation. */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_0028f2f0(int param_1)

{
  undefined1 uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int *local_228;
  int local_224;
  int *local_220;
  int *local_21c;
  int *local_218;
  int local_214 [3];
  int *local_208;
  int local_204;
  uint auStack_200 [2];
  int *local_1f8;
  int local_1f4;
  undefined1 auStack_1f0 [16];
  int *local_1e0;
  int local_1dc;
  undefined1 auStack_1d8 [8];
  undefined1 auStack_1d0 [24];
  undefined1 auStack_1b8 [8];
  uint local_1b0;
  undefined4 uStack_e4;
  undefined1 auStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  int local_64;
  uint local_60;
  int iStack_5c;
  undefined1 auStack_58 [32];
  int local_38;
  int iStack_34;
  undefined1 auStack_30 [8];
  char local_28;
  
  iVar3 = FUN_00767d84(*(undefined1 *)(param_1 + 0x1c));
  if (iVar3 == 0) {
    uVar1 = *(undefined1 *)(param_1 + 0x10);
    iVar3 = FUN_00285804();
    FUN_007dca10(&local_1e0,param_1);
    FUN_007dc9d8(&local_1f8,param_1);
    local_208 = local_1f8;
    local_204 = local_1f4;
    FUN_0059afac(auStack_200,auStack_1f0);
    local_228 = local_1e0;
    local_224 = local_1dc;
    FUN_0059afac(&local_220,auStack_1d8);
    iVar7 = FUN_007dc980(&local_228,&local_208);
    local_218 = local_208;
    local_214[0] = local_204;
    while (local_208 = local_218, local_204 = local_214[0], iVar7 != 0) {
      if ((((iVar3 != 0) && (iVar7 = FUN_007bfff8(iVar3,local_220,local_21c), iVar7 != 0)) &&
          (FUN_00285474(auStack_1b8,local_220,local_21c,uVar1), (local_1b0 & 0xff) < 0xf8)) &&
         (iVar7 = FUN_00636410(), iVar7 != 0)) {
        local_218 = local_228;
        local_214[0] = local_224;
        FUN_0059afac(local_214 + 1,&local_220);
        goto LAB_0028f9fc;
      }
      FUN_0059b024(&local_228);
      iVar7 = FUN_007dc980(&local_228,&local_208);
      local_218 = local_208;
      local_214[0] = local_204;
    }
    FUN_0059afac(local_214 + 1,auStack_200);
LAB_0028f9fc:
    FUN_007dc9d8(auStack_1d0,param_1);
    iVar3 = FUN_007dc980(&local_218,auStack_1d0);
    if (iVar3 != 0) {
      FUN_00285474(&local_208,local_214[1],local_214[2],*(undefined1 *)(param_1 + 0x10));
      if ((auStack_200[0] & 0xff) < 0xf8) {
        *(char *)(param_1 + 0x12) = (char)auStack_200[0];
        *(int **)(param_1 + 0x14) = local_208;
        *(int *)(param_1 + 0x18) = local_204;
      }
      return 1;
    }
  }
  else {
    local_21c = local_214;
    iVar3 = 0;
    iVar7 = 0x13;
    local_228 = (int *)0x0;
    local_224 = 0;
    local_220 = (int *)0x0;
    do {
      iVar7 = iVar7 + -1;
      local_21c[iVar3] = (int)(local_21c + iVar3 + 4);
      iVar3 = iVar3 + 4;
    } while (iVar7 != 0);
    uStack_e4 = 0;
    local_218 = local_21c;
    FUN_005a6780(&local_228,0x14);
    iVar3 = FUN_00285804();
    FUN_007dca10(auStack_78,param_1);
    FUN_007dc9d8(auStack_58,param_1);
    iVar7 = FUN_007dc980(auStack_78,auStack_58);
    piVar6 = local_228;
    while (local_228 = piVar6, iVar7 != 0) {
      if ((iVar3 != 0) && (iVar7 = FUN_007bfff8(iVar3,local_70), iVar7 != 0)) {
        FUN_00285474(&local_68,local_70);
        uVar8 = local_60 & 0xff;
        if ((uVar8 < 0xf8) &&
           ((iVar7 = FUN_00636410(uVar8), iVar7 != 0 && (iVar7 = FUN_00769904(uVar8), iVar7 == 0))))
        {
          if (*(int *)(param_1 + 0x20) == 0) {
            FUN_00285474(&local_68,local_70,local_6c,*(undefined1 *)(param_1 + 0x10));
            iVar10 = iStack_5c;
            uVar8 = local_60;
            iVar7 = local_68;
            piVar6 = local_21c;
            if ((local_60 & 0xff) < 0xf8) {
              if ((int)local_228 < local_224) {
                if (local_21c != (int *)0x0) {
                  piVar9 = (int *)*local_21c;
                  local_21c[1] = local_64;
                  *local_21c = iVar7;
                  local_21c[2] = uVar8;
                  local_21c[3] = iVar10;
                  local_21c = piVar9;
                }
                if ((int)local_228 < local_224) {
                  local_220[(int)local_228] = (int)piVar6;
                  local_228 = (int *)((int)local_228 + 1);
                }
              }
              pcVar2 = DAT_0028faa0;
              iVar7 = 0;
              if (0 < (int)((int)local_228 - 1U)) {
                do {
                  iVar10 = iVar7 + 1;
                  if (iVar10 < (int)local_228) {
                    do {
                      iVar4 = (*pcVar2)(local_220[iVar7],local_220[iVar10]);
                      if (iVar4 == 0) {
                        iVar4 = iVar10;
                        if (iVar10 + 1 <= (int)local_228) {
                          do {
                            piVar6 = (int *)local_220[iVar4];
                            iVar4 = iVar4 + 1;
                            *piVar6 = (int)local_21c;
                            local_21c = piVar6;
                          } while (iVar4 < iVar10 + 1);
                        }
                        FUN_005a66dc(&local_228,iVar10);
                      }
                      else {
                        iVar10 = iVar10 + 1;
                      }
                    } while (iVar10 < (int)local_228);
                  }
                  iVar7 = iVar7 + 1;
                } while (iVar7 < (int)((int)local_228 - 1U));
              }
            }
          }
          else {
            FUN_007dc900(&local_38,&local_70,param_1 + 0x24);
            FUN_00692a4c(auStack_30,*(int *)(param_1 + 0x20) + iStack_34 * 0xa0 + local_38 * 10);
            if ((local_28 != '\0') &&
               (FUN_00285474(&local_68,local_70,local_6c,*(undefined1 *)(param_1 + 0x10)),
               iVar4 = iStack_5c, iVar10 = local_64, iVar7 = local_68, piVar6 = local_21c,
               (local_60 & 0xff) < 0xf8)) {
              if ((int)local_228 < local_224) {
                if (local_21c != (int *)0x0) {
                  piVar9 = (int *)*local_21c;
                  local_21c[2] = local_60;
                  local_21c[3] = iVar4;
                  *local_21c = iVar7;
                  local_21c[1] = iVar10;
                  local_21c = piVar9;
                }
                if ((int)local_228 < local_224) {
                  local_220[(int)local_228] = (int)piVar6;
                  local_228 = (int *)((int)local_228 + 1);
                }
              }
              pcVar2 = DAT_0028faa0;
              iVar7 = 0;
              if (0 < (int)((int)local_228 - 1U)) {
                do {
                  iVar10 = iVar7 + 1;
                  if (iVar10 < (int)local_228) {
                    do {
                      iVar4 = (*pcVar2)(local_220[iVar7],local_220[iVar10]);
                      if (iVar4 == 0) {
                        iVar4 = iVar10;
                        if (iVar10 + 1 <= (int)local_228) {
                          do {
                            piVar6 = (int *)local_220[iVar4];
                            iVar4 = iVar4 + 1;
                            *piVar6 = (int)local_21c;
                            local_21c = piVar6;
                          } while (iVar4 < iVar10 + 1);
                        }
                        FUN_005a66dc(&local_228,iVar10);
                      }
                      else {
                        iVar10 = iVar10 + 1;
                      }
                    } while (iVar10 < (int)local_228);
                  }
                  iVar7 = iVar7 + 1;
                } while (iVar7 < (int)((int)local_228 - 1U));
              }
            }
          }
        }
      }
      FUN_0059b024(auStack_78);
      iVar7 = FUN_007dc980(auStack_78,auStack_58);
      piVar6 = local_228;
    }
    if (piVar6 == (int *)0x0) {
      return 0;
    }
    piVar9 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      do {
        if (piVar9 < local_228) {
          iVar3 = local_220[(int)piVar9];
          puVar5 = (undefined4 *)local_220[(int)piVar9];
        }
        else {
          puVar5 = (undefined4 *)0x0;
          iVar3 = 0;
        }
        iVar3 = FUN_007692d4(*puVar5,*(undefined4 *)(iVar3 + 4));
        if (iVar3 == 0) {
          if (piVar9 < local_228) {
            iVar3 = local_220[(int)piVar9];
          }
          else {
            iVar3 = 0;
          }
          *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(iVar3 + 8);
          if (piVar9 < local_228) {
            puVar5 = (undefined4 *)local_220[(int)piVar9];
          }
          else {
            puVar5 = (undefined4 *)0x0;
          }
          *(undefined4 *)(param_1 + 0x14) = *puVar5;
          if (piVar9 < local_228) {
            iVar3 = local_220[(int)piVar9];
          }
          else {
            iVar3 = 0;
          }
          *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar3 + 4);
          return 1;
        }
        piVar9 = (int *)((int)piVar9 + 1);
      } while (piVar9 < piVar6);
    }
    if (local_228 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *local_220;
    }
    *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(iVar3 + 8);
  }
  return 0;
}


