/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 008b50f8. Provisional types; not original source or a verified portable implementation. */

int FUN_008b50f8(int *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int unaff_r7;
  int iVar8;
  uint in_r12;
  int local_30;
  int local_2c;
  
  (**(code **)(*param_1 + 8))(param_1);
  iVar6 = 0;
  do {
    if (*(char *)(param_1[1] + iVar6) == '\0') {
      if (iVar6 < 0x40001) goto LAB_008b514c;
      break;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x40001);
  iVar6 = 0;
LAB_008b514c:
  (**(code **)(*param_2 + 8))(param_2);
  iVar8 = 0;
  do {
    if (*(char *)(param_2[1] + iVar8) == '\0') {
      if (iVar8 < 0x40001) goto LAB_008b518c;
      break;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x40001);
  iVar8 = 0;
LAB_008b518c:
  iVar6 = iVar6 - iVar8;
  if (-1 < iVar6) {
    unaff_r7 = DAT_008b5288;
  }
  iVar7 = 0;
  if (-1 < iVar6) {
    do {
      local_2c = param_1[1] + iVar7;
      local_30 = unaff_r7;
      (**(code **)(unaff_r7 + 8))(&local_30);
      (**(code **)(local_30 + 8))(&local_30);
      iVar2 = local_2c;
      (**(code **)(*param_2 + 8))(param_2);
      iVar4 = param_2[1];
      if (iVar2 != iVar4) {
        if (iVar8 < 0x40001) {
          iVar2 = iVar8;
          if (iVar8 < 1) goto LAB_008b5250;
        }
        else {
          iVar2 = 0x40000;
        }
        iVar3 = 0;
        do {
          uVar5 = (uint)*(char *)(local_2c + iVar3);
          if (uVar5 == 0) {
            in_r12 = (uint)*(byte *)(iVar4 + iVar3);
          }
          if (uVar5 == 0 && in_r12 == 0) break;
          if (((uVar5 == 0) || (in_r12 = (uint)*(char *)(iVar4 + iVar3), in_r12 == 0)) ||
             (uVar5 != in_r12)) {
            bVar1 = false;
            goto LAB_008b525c;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar2);
      }
LAB_008b5250:
      bVar1 = true;
LAB_008b525c:
      if (bVar1) {
        return iVar7;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 <= iVar6);
  }
  return -1;
}


