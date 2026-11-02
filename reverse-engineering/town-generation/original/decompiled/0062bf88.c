/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0062bf88. Provisional types; not original source or a verified portable implementation. */

void FUN_0062bf88(int *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((param_2 != (uint *)0x0) && ((DAT_0062bfe8 & ~*param_2) != 0)) {
    param_2 = (uint *)0x0;
  }
  if (param_2[0xe] == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)param_2 + param_2[0xe] + 0x38;
  }
  iVar3 = *(int *)(iVar1 + 0xc);
  if (iVar3 != 0) {
    iVar2 = iVar3 + iVar1 + 0xc;
  }
  *param_1 = iVar2;
  param_1[1] = param_2[7];
  param_1[2] = param_2[6];
  return;
}


