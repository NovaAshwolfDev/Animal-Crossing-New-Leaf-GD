/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00121530. Provisional types; not original source or a verified portable implementation. */

int * FUN_00121530(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  uVar1 = DAT_00121628;
  FUN_0011f990();
  iVar2 = (**(code **)(*param_1 + 0x40))(param_1,param_2);
  if (iVar2 == 0) {
    FUN_001214d0(uVar1);
    return (int *)0x0;
  }
  uVar3 = param_1[0x1b] & 1;
  if (uVar3 != 0) {
    uVar3 = 1;
  }
  piVar5 = (int *)0x0;
  if (uVar3 != 0) {
    FUN_0011f990();
    piVar5 = param_1 + 0x14;
  }
  iVar2 = param_1[10];
  iVar6 = param_1[0xc];
  while( true ) {
    piVar4 = (int *)(iVar2 - iVar6);
    if (piVar4 == (int *)((int)param_1 + (0x24 - param_1[0xc]))) {
      if (piVar5 != (int *)0x0) {
        FUN_001214d0(piVar5);
      }
      FUN_001214d0(uVar1);
      return param_1;
    }
    iVar2 = (**(code **)(*piVar4 + 0x40))(piVar4,param_2);
    if (iVar2 != 0) break;
    iVar2 = *(int *)((int)piVar4 + iVar6 + 4);
  }
  piVar4 = (int *)FUN_00121530(piVar4,param_2);
  if (piVar5 != (int *)0x0) {
    FUN_001214d0(piVar5);
  }
  FUN_001214d0(uVar1);
  return piVar4;
}


