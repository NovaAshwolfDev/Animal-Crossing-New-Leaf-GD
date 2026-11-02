/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 001198ec. Provisional types; not original source or a verified portable implementation. */

void FUN_001198ec(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = DAT_0011995c;
  param_1[1] = 0;
  piVar2 = DAT_00119960;
  *param_1 = uVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_2 != 0) {
    iVar3 = *piVar2;
    param_1[1] = *(undefined4 *)(iVar3 + 0x14);
    *(int *)(iVar3 + 0x14) = param_2;
  }
  if (param_3 != 0) {
    iVar3 = *piVar2;
    param_1[2] = *(undefined4 *)(iVar3 + 0x18);
    *(int *)(iVar3 + 0x18) = param_3;
  }
  if (param_4 != 0) {
    iVar3 = *piVar2;
    param_1[3] = *(undefined4 *)(iVar3 + 0x1c);
    *(int *)(iVar3 + 0x1c) = param_4;
  }
  return;
}


