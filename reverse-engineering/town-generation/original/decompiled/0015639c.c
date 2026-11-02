/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0015639c. Provisional types; not original source or a verified portable implementation. */

int FUN_0015639c(uint param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_138 [264];
  undefined1 auStack_30 [24];
  
  iVar6 = 0;
  if ((((param_1 < 100) && (iVar2 = FUN_001229f4(), pbVar1 = DAT_00156480, iVar2 != 0)) &&
      (iVar2 = *(int *)(DAT_00156480 + 0x10), iVar2 != 0)) &&
     ((iVar3 = FUN_0011edc4(1), iVar3 == 0 && (iVar3 = FUN_0011edc4(0), iVar3 == 0)))) {
    iVar2 = iVar2 + param_1 * 0x5c;
    iVar5 = iVar2 + 8;
    iVar3 = FUN_0013b77c(iVar2 + 0x14);
    if (iVar3 == 0) {
      FUN_0013ceec(auStack_138,iVar5,1,iVar2 + 0x50);
      iVar2 = FUN_0013d81c(auStack_138,1);
      if (((iVar2 != 0) && (iVar2 = FUN_0013b8bc(auStack_30), iVar2 == 0)) &&
         (iVar6 = iVar5, param_2 != 0)) {
        uVar4 = FUN_0013b730(auStack_30);
        bVar7 = uVar4 == 0;
        if (bVar7) {
          uVar4 = (uint)*pbVar1;
        }
        if (bVar7 && uVar4 == 0) {
          return 0;
        }
      }
    }
  }
  return iVar6;
}


