/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005a59c0. Provisional types; not original source or a verified portable implementation. */

void FUN_005a59c0(uint *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = DAT_005a5a2c;
  piVar3 = (int *)param_1[4];
  *param_1 = DAT_005a5a2c;
  if (piVar3 != (int *)0x0) {
    uVar1 = (uint)*(byte *)(piVar3 + 0x13);
  }
  if (((piVar3 != (int *)0x0 && uVar1 != 0) &&
      (iVar2 = (**(code **)(*piVar3 + 0x20))(piVar3,param_1), iVar2 != 0)) &&
     (iVar2 = (**(code **)(*piVar3 + 0x30))(piVar3,param_1), iVar2 != 0)) {
    param_1[4] = 0;
  }
  FUN_001249fc(param_1);
  return;
}


