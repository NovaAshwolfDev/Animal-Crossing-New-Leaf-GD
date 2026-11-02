/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00121940. Provisional types; not original source or a verified portable implementation. */

void FUN_00121940(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  puVar1 = DAT_001219e0;
  uVar4 = (uint)*(byte *)(param_1 + 3);
  piVar2 = (int *)*param_1;
  if (uVar4 == 0) {
    if (piVar2 != (int *)0x0) {
      if (param_1[1] != 0) {
        param_3 = param_1[2];
      }
      if (param_1[1] != 0 && param_3 != 0) {
        (**(code **)(*piVar2 + 0x1c))();
      }
    }
  }
  else {
    if (piVar2 != (int *)0x0) {
      uVar4 = param_1[1];
    }
    if (piVar2 != (int *)0x0 && uVar4 != 0) {
      iVar3 = FUN_0011919c(*DAT_001219e0,piVar2);
      FUN_003019cc(*DAT_001219e4,param_1[1]);
      if (iVar3 != 1) {
        FUN_0011919c(*puVar1,iVar3);
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}


