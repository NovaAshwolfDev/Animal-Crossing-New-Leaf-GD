/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005fc8dc. Provisional types; not original source or a verified portable implementation. */

void FUN_005fc8dc(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  iVar2 = DAT_005fc974;
  if (*(int *)(DAT_005fc974 + 4) == 0) {
    return;
  }
  FUN_0060046c(*(int *)(DAT_005fc974 + 4),param_1,param_2,0);
  if (param_3 != 0) {
    iVar5 = *(int *)(iVar2 + 4);
    iVar4 = *(int *)(DAT_005fc978 + iVar5);
    while (iVar1 = iVar4, iVar1 != 0) {
      iVar3 = *(int *)(iVar1 + 0x28);
      iVar4 = *(int *)(iVar1 + 8);
      bVar6 = iVar3 == param_1;
      if (bVar6) {
        iVar3 = *(int *)(iVar1 + 0x2c);
      }
      if (bVar6 && iVar3 == param_2) {
        FUN_005fc97c(iVar5,iVar1,0);
      }
    }
  }
  FUN_00600500(*(int *)(iVar2 + 4) + 0x360c,param_1,param_2);
  return;
}


