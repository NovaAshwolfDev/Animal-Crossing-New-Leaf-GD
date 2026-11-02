/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007dca50. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_007dca50(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar2 = *param_2;
  iVar3 = *param_1;
  bVar4 = SBORROW4(iVar3,iVar2);
  iVar1 = iVar3 - iVar2;
  if (iVar3 <= iVar2) {
    iVar3 = param_1[2];
    bVar4 = SBORROW4(iVar2,iVar3);
    iVar1 = iVar2 - iVar3;
  }
  if (iVar3 == iVar2 || iVar1 < 0 != bVar4) {
    iVar3 = param_2[1];
    iVar2 = param_1[1];
    bVar4 = SBORROW4(iVar2,iVar3);
    iVar1 = iVar2 - iVar3;
    if (iVar2 <= iVar3) {
      iVar2 = param_1[3];
      bVar4 = SBORROW4(iVar3,iVar2);
      iVar1 = iVar3 - iVar2;
    }
    if (iVar2 == iVar3 || iVar1 < 0 != bVar4) {
      return 1;
    }
  }
  return 0;
}


