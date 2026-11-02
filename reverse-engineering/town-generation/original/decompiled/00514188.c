/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00514188. Provisional types; not original source or a verified portable implementation. */

void FUN_00514188(uint *param_1)

{
  int iVar1;
  
  if ((param_1 == (uint *)0x0) || ((DAT_005141fc & ~*param_1) != 0)) {
    param_1 = (uint *)0x0;
  }
  if (param_1[0xb] != 0) {
    if (param_1[0xe] == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (int)param_1 + param_1[0xe] + 0x38;
    }
    if (*(int *)(iVar1 + 0x1c) != 0) {
      (*(code *)*DAT_00514204)
                (*(int *)(iVar1 + 0x1c),DAT_00514200,param_1[0xb],*(undefined4 *)(iVar1 + 0x18));
      *(undefined4 *)(iVar1 + 0x18) = 0;
    }
    param_1[0xb] = 0;
  }
  return;
}


