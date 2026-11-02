/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0013fefc. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_0013fefc(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  
  uVar4 = 0;
  if (*(int *)(param_1 + 0x10) == -1) {
    return 0xfffffffe;
  }
  cVar1 = *param_2;
  while (cVar1 != '\0') {
    uVar4 = uVar4 + 1;
    cVar1 = param_2[uVar4];
  }
  piVar7 = (int *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10) * 0x10);
  iVar2 = FUN_00140418(param_2,*(undefined4 *)*piVar7);
  uVar8 = *(uint *)(*piVar7 + iVar2 * 8 + 4);
  iVar2 = *(int *)(*piVar7 + iVar2 * 8 + 8);
  uVar6 = 0;
  if (uVar8 != 0) {
    do {
      uVar5 = (uint)*(byte *)(*piVar7 + iVar2);
      if ((uVar5 == uVar4) && (iVar3 = FUN_00140468(param_2,iVar2 + 1 + *piVar7,uVar5), iVar3 != 0))
      {
        return *(undefined4 *)(*piVar7 + iVar2 + uVar5 + 1);
      }
      uVar6 = uVar6 + 1;
      iVar2 = iVar2 + uVar5 + 5;
    } while (uVar6 < uVar8);
  }
  return 0xffffffff;
}


