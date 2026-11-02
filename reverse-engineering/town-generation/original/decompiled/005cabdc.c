/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005cabdc. Provisional types; not original source or a verified portable implementation. */

void FUN_005cabdc(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint in_r12;
  bool bVar11;
  int local_58;
  undefined1 *local_54;
  int local_48;
  int local_30;
  undefined1 *local_2c;
  
  cVar1 = *(char *)(param_1 + 0xf4);
  if (cVar1 == '\x03' || cVar1 == '\x05') {
    return;
  }
  if (cVar1 == '\x06') {
    return;
  }
  if (*(char *)(param_1 + 0xf7) != '\0') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0xf4);
  bVar11 = cVar1 != '\x01';
  if (bVar11) {
    cVar1 = *(char *)(param_1 + 0xf4);
  }
  if (bVar11 && cVar1 != '\x02') {
    uVar5 = (uint)*(byte *)(param_1 + 0xf4);
    bVar11 = uVar5 == 4;
    if (bVar11) {
      uVar5 = *(uint *)(param_1 + 0xdc);
    }
    if (!bVar11 || uVar5 != 0) {
      return;
    }
    uVar6 = FUN_0043e170(*(undefined4 *)(param_1 + 0xd8));
    *(undefined4 *)(param_1 + 0xe4) = uVar6;
    uVar6 = (**(code **)(**(int **)(param_1 + 0xd4) + 0x18))
                      (*(int **)(param_1 + 0xd4),*(undefined4 *)(param_1 + 0xe4),
                       *(undefined4 *)(param_1 + 0xf0));
    *(undefined4 *)(param_1 + 0xdc) = uVar6;
    if (*(int *)(param_1 + 0xdc) != 0) {
      return;
    }
    goto LAB_005cabb8;
  }
  if (*(int *)(param_1 + 0xd8) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0xe0) == 0) {
    if (*(int *)(param_1 + 0x44) == 0) {
      if ((*(char *)(param_1 + 0xf4) == '\x02') || (*(char *)(DAT_005caee8 + 2) < '\b')) {
        iVar8 = FUN_005caf08(param_1);
        iVar7 = DAT_005caeec;
        if (iVar8 == 0) goto LAB_005cabb8;
        local_2c = &DAT_005caef0;
        local_30 = DAT_005caeec;
        (**(code **)(*(int *)(param_1 + 0x48) + 8))(param_1 + 0x48);
        local_48 = 0;
        do {
          if (*(char *)(*(int *)(param_1 + 0x4c) + local_48) == '\0') {
            if (local_48 < 0x40001) goto LAB_005cad9c;
            break;
          }
          local_48 = local_48 + 1;
        } while (local_48 < 0x40001);
        local_48 = 0;
LAB_005cad9c:
        (**(code **)(local_30 + 8))(&local_30);
        iVar8 = 0;
        do {
          if (local_2c[iVar8] == '\0') {
            if (iVar8 < 0x40001) goto LAB_005caddc;
            break;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < 0x40001);
        iVar8 = 0;
LAB_005caddc:
        local_48 = local_48 - iVar8;
        iVar10 = 0;
        if (-1 < local_48) {
          do {
            local_58 = iVar7;
            local_54 = (undefined1 *)(*(int *)(param_1 + 0x4c) + iVar10);
            (**(code **)(iVar7 + 8))(&local_58);
            (**(code **)(local_58 + 8))(&local_58);
            puVar4 = local_54;
            (**(code **)(local_30 + 8))(&local_30);
            if (puVar4 != local_2c) {
              if (iVar8 < 0x40001) {
                iVar3 = iVar8;
                if (iVar8 < 1) goto LAB_005cae9c;
              }
              else {
                iVar3 = 0x40000;
              }
              iVar9 = 0;
              do {
                uVar5 = (uint)(char)local_54[iVar9];
                if (uVar5 == 0) {
                  in_r12 = (uint)(byte)local_2c[iVar9];
                }
                if (uVar5 == 0 && in_r12 == 0) break;
                if (((uVar5 == 0) || (in_r12 = (uint)(char)local_2c[iVar9], in_r12 == 0)) ||
                   (uVar5 != in_r12)) {
                  bVar11 = false;
                  goto LAB_005caea8;
                }
                iVar9 = iVar9 + 1;
              } while (iVar9 < iVar3);
            }
LAB_005cae9c:
            bVar11 = true;
LAB_005caea8:
            if (bVar11) {
              if (iVar10 != -1) {
                uVar2 = 1;
                goto LAB_005caed4;
              }
              break;
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 <= local_48);
        }
        uVar2 = 0;
LAB_005caed4:
        *(undefined1 *)(param_1 + 0xf6) = uVar2;
        if (*(int *)(param_1 + 0x44) != 0) goto LAB_005cac9c;
      }
    }
    else {
LAB_005cac9c:
      iVar7 = FUN_005ca474(param_1 + 0xc);
      *(int *)(param_1 + 0xe0) = iVar7;
      *(int *)(param_1 + 0xe0) = iVar7;
      if (iVar7 == 0) goto LAB_005cabb8;
      if (*(int *)(param_1 + 0xe8) == 0) {
        *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0xe0);
      }
    }
  }
  if (*(int *)(param_1 + 0xe0) != 0) {
    uVar6 = (**(code **)(**(int **)(param_1 + 0xd4) + 0x18))
                      (*(int **)(param_1 + 0xd4),*(undefined4 *)(param_1 + 0xe0));
    *(undefined4 *)(param_1 + 0xd8) = uVar6;
    if (*(int *)(param_1 + 0xd8) == 0) {
LAB_005cabb8:
      if (*(int *)(param_1 + 0x44) != 0) {
        FUN_0011df64(param_1);
      }
      *(undefined1 *)(param_1 + 0xf4) = 5;
      return;
    }
  }
  return;
}


