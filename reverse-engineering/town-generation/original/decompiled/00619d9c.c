/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00619d9c. Provisional types; not original source or a verified portable implementation. */

void FUN_00619d9c(int param_1,int param_2,code *param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  uint local_28;
  uint local_24;
  int local_20;
  
  iVar1 = DAT_00619e5c;
  local_28 = 7;
  local_24 = 0x7f;
  local_20 = 7;
  do {
    if (*(int *)(param_2 + 8) == 0) {
      return;
    }
    uVar2 = FUN_007f2db0(&local_28);
    if (uVar2 < 7) {
      piVar4 = (int *)(iVar1 + uVar2 * 8);
      bVar5 = (piVar4[1] & 1U) == 0;
      if (bVar5) {
        param_3 = (code *)*piVar4;
      }
      piVar3 = (int *)(param_1 + (piVar4[1] >> 1));
      if (!bVar5) {
        param_3 = *(code **)(*piVar3 + *piVar4);
      }
      (*param_3)(piVar3,param_2);
      if ((uVar2 < local_28) && (uVar2 = 1 << (uVar2 & 0xff), (local_24 & uVar2) != 0)) {
        local_24 = local_24 & ~uVar2;
        local_20 = local_20 + -1;
      }
    }
  } while (local_20 != 0);
  return;
}


