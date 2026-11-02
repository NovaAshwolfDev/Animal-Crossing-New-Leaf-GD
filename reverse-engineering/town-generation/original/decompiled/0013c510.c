/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0013c510. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_0013c510(int param_1,int param_2,int *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_20;
  
  local_20 = param_4;
  iVar1 = FUN_001229f4();
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = 0;
  if (param_3 != (int *)0x0) {
    iVar1 = *param_3;
  }
  switch(param_2) {
  case 0:
    if (param_1 == 0) {
      return 2;
    }
    if (99 < param_4) {
      return 2;
    }
    iVar1 = FUN_0015639c(param_4,1);
    if (iVar1 == 0) {
      return 6;
    }
    FUN_0013ceec(param_1,iVar1,1,iVar1 + 0x48);
    iVar1 = FUN_0013d81c(param_1,1);
joined_r0x0013c71c:
    if (iVar1 == 0) {
      return 6;
    }
    break;
  default:
    return 1;
  case 2:
    if (5 < param_4) {
      return 2;
    }
    iVar1 = (**(code **)(DAT_0013c788 + 4))(DAT_0013c784,param_4);
    FUN_0013ceec(param_1,iVar1,1,iVar1 + 0x48);
    break;
  case 3:
    if (param_3 == (int *)0x0) {
      return 2;
    }
    if (iVar1 != DAT_0013c780) {
      return 2;
    }
    if ((param_4 < *(ushort *)(param_3 + 4)) && (*(short *)((int)param_3 + 0x12) != 0)) {
      iVar2 = param_3[3] + param_4 * 0x5c;
      iVar1 = FUN_0013b77c(iVar2 + 0xc);
      if (iVar1 == 0) {
        FUN_0013ceec(param_1,iVar2,1,iVar2 + 0x48);
        break;
      }
    }
    goto LAB_0013c668;
  case 4:
  case 5:
    if (param_3 == (int *)0x0 || iVar1 == DAT_0013c780) {
      return 2;
    }
    param_3 = param_3 + param_4 * 0x18;
    iVar1 = FUN_0014d6bc(0,param_3,0x60);
    if (iVar1 != 0) {
      return 6;
    }
    if ((param_2 == 4) && (iVar1 = FUN_00139ecc(&local_20,param_3 + 3), iVar1 != 0)) {
      if (param_1 == 0) {
        return 2;
      }
      if (99 < (local_20 & 0xffff)) {
        return 2;
      }
      iVar1 = FUN_0015639c(local_20 & 0xffff,1);
      if (iVar1 == 0) {
        return 6;
      }
      FUN_0013ceec(param_1,iVar1,1,iVar1 + 0x48);
      iVar1 = FUN_0013d81c(param_1,1);
      goto joined_r0x0013c71c;
    }
    FUN_0013ceec(param_1,param_3,1,param_3 + 0x12);
  }
  uVar3 = 0;
  iVar1 = FUN_0013b77c(param_1 + 0x108);
  if ((iVar1 != 0) || (iVar1 = FUN_0013d81c(param_1,1), iVar1 == 0)) {
LAB_0013c668:
    uVar3 = 6;
  }
  return uVar3;
}


