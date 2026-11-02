/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00615854. Provisional types; not original source or a verified portable implementation. */

void FUN_00615854(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint local_40;
  uint local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  
  iVar11 = 0;
  uVar7 = 0;
  *DAT_00615dac = 0;
  iVar10 = param_1;
  do {
    iVar2 = FUN_007f3734(iVar10);
    if (iVar2 != 0) {
      iVar11 = iVar11 + 1;
    }
    uVar7 = uVar7 + 1;
    iVar10 = iVar10 + 0x24f8;
  } while (uVar7 < 10);
  uVar7 = iVar11 + 1U >> 1;
  if ((((param_2 != 0) && (*(int *)(DAT_00615db0 + 0x234) != 0)) &&
      (*(char *)(*(int *)(DAT_00615db0 + 0x234) + 0x5702) < '\0')) &&
     (iVar10 = FUN_005ee68c(0x23), iVar10 != 0)) {
    FUN_006196b8(param_1);
  }
  uVar3 = FUN_005812e8();
  local_40 = 10;
  local_34 = 10;
  local_30 = 0;
  local_2c = 0;
  local_3c = 0;
  local_38 = 0;
  FUN_005ee68c(0xd);
  uVar8 = 0;
  iVar10 = param_1;
  do {
    iVar11 = FUN_007f3734(iVar10);
    if (iVar11 != 0) {
      iVar11 = FUN_00582e64(uVar8);
      if (iVar11 != 0) {
        uVar6 = *(uint *)(iVar11 + 0x44);
        *(undefined4 *)(iVar11 + 0x44) = 0;
        if (uVar8 == uVar3) {
          *(undefined4 *)(iVar11 + 0x44) = 0x20;
        }
        if ((uVar6 & 0x40) != 0) {
          *(uint *)(iVar11 + 0x44) = *(uint *)(iVar11 + 0x44) | 0x40;
        }
      }
      if (uVar8 == uVar3) {
        uVar7 = uVar7 - 1;
        *(undefined1 *)(DAT_00615db4 + iVar10) = 0;
      }
      else {
        iVar11 = FUN_007e8000(iVar10);
        if (iVar11 == 1) {
          *(undefined1 *)(DAT_00615db4 + iVar10) = 1;
        }
        else {
          if ((uVar8 < local_34) && (uVar6 = 1 << (uVar8 & 0xff), (local_30 & uVar6) == 0)) {
            local_30 = uVar6 | local_30;
            local_2c = local_2c + 1;
          }
          *(undefined1 *)(DAT_00615db4 + iVar10) = 1;
          if (((iVar11 == 0) && (uVar8 < local_40)) &&
             (uVar6 = 1 << (uVar8 & 0xff), (local_3c & uVar6) == 0)) {
            local_3c = uVar6 | local_3c;
            local_38 = local_38 + 1;
          }
        }
      }
    }
    uVar8 = uVar8 + 1;
    iVar10 = iVar10 + 0x24f8;
  } while ((int)uVar8 < 10);
  while ((int)uVar7 < local_38) {
    uVar3 = FUN_007f2db0(&local_40);
    if ((uVar3 < local_40) && (uVar3 = 1 << (uVar3 & 0xff), (local_3c & uVar3) != 0)) {
      local_3c = local_3c & ~uVar3;
      local_38 = local_38 + -1;
    }
  }
joined_r0x00615a94:
  if (local_38 != 0) {
    if ((local_38 != 0) && (uVar3 = 0, 0 < (int)local_40)) {
      do {
        if ((local_3c & 1 << (uVar3 & 0xff)) != 0) goto LAB_00615ad0;
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < (int)local_40);
    }
    uVar3 = 0xffffffff;
LAB_00615ad0:
    if ((uVar3 < local_40) && (uVar8 = 1 << (uVar3 & 0xff), (local_3c & uVar8) != 0)) {
      local_3c = local_3c & ~uVar8;
      local_38 = local_38 + -1;
    }
    if (uVar3 < 10) goto code_r0x00615b10;
    iVar10 = 0;
    goto LAB_00615b34;
  }
  goto LAB_00615c18;
code_r0x00615b10:
  iVar10 = param_1 + uVar3 * DAT_00615db8 * 8;
  if ((iVar10 != 0) && (iVar11 = FUN_007f3768(iVar10), iVar11 != 0)) {
LAB_00615b34:
    if (iVar10 != 0) {
      *(undefined1 *)(iVar10 + 0x24ee) = 0;
      if ((uVar3 < local_34) && (uVar3 = 1 << (uVar3 & 0xff), (local_30 & uVar3) != 0)) {
        local_30 = local_30 & ~uVar3;
        local_2c = local_2c + -1;
      }
      uVar7 = uVar7 - 1;
    }
  }
  goto joined_r0x00615a94;
LAB_00615c18:
  if (((int)uVar7 < 1) || (local_2c == 0)) {
    iVar10 = FUN_005ee3a4();
    bVar1 = false;
    if ((iVar10 == 0 || iVar10 == 3) || (iVar10 == 10 || iVar10 == 0xc)) {
      bVar1 = true;
    }
    iVar2 = -1;
    iVar12 = -1;
    iVar11 = param_1 + DAT_00615dbc;
    iVar10 = FUN_007eb480(iVar11 + 0x16);
    if (((iVar10 != 0) && (iVar10 = FUN_007ec268(iVar11), iVar10 != 0)) &&
       (iVar10 = FUN_007ec0b4(iVar11), iVar10 == 0)) {
      iVar2 = (int)*(char *)(iVar11 + 0x21);
    }
    iVar10 = FUN_007eb480(param_1 + 0x1727a);
    if ((iVar10 != 0) && (iVar10 = FUN_007ec0b4(param_1 + 0x17264), iVar10 == 0)) {
      iVar12 = (int)*(char *)(param_1 + 0x17285);
    }
    iVar9 = 0;
    iVar10 = param_1;
    do {
      iVar4 = FUN_007f3734(iVar10);
      if (((iVar4 != 0) && (*(char *)(DAT_00615db4 + iVar10) == '\0')) &&
         (iVar4 = FUN_00582e64(iVar9), iVar4 != 0)) {
        if (bVar1) {
          *(uint *)(iVar4 + 0x44) = *(uint *)(iVar4 + 0x44) | 1;
        }
        if (iVar2 == iVar9) {
          *(uint *)(iVar4 + 0x44) = *(uint *)(iVar4 + 0x44) | 4;
          iVar5 = FUN_007ec2a4(iVar11);
          if (iVar5 != 0) {
            *(undefined1 *)(DAT_00615dc0 + iVar10) = 2;
          }
        }
        if (iVar12 == iVar9) {
          *(uint *)(iVar4 + 0x44) = *(uint *)(iVar4 + 0x44) | 2;
        }
      }
      iVar9 = iVar9 + 1;
      iVar10 = iVar10 + 0x24f8;
    } while (iVar9 < 10);
    FUN_00618234(param_1);
    if (!bVar1) {
      FUN_0061a4a8(param_1);
    }
    FUN_00618414(param_1);
    FUN_0061871c(param_1);
    return;
  }
  uVar3 = FUN_007f2db0(&local_34);
  if (uVar3 < 10) goto code_r0x00615ba8;
  iVar10 = 0;
  goto LAB_00615bcc;
code_r0x00615ba8:
  iVar10 = param_1 + uVar3 * DAT_00615db8 * 8;
  if ((iVar10 != 0) && (iVar11 = FUN_007f3768(iVar10), iVar11 != 0)) {
LAB_00615bcc:
    if (iVar10 != 0) {
      *(undefined1 *)(iVar10 + 0x24ee) = 0;
      if ((uVar3 < local_34) && (uVar3 = 1 << (uVar3 & 0xff), (local_30 & uVar3) != 0)) {
        local_30 = local_30 & ~uVar3;
        local_2c = local_2c + -1;
      }
      uVar7 = uVar7 - 1;
    }
  }
  goto LAB_00615c18;
}


