/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00647f6c. Provisional types; not original source or a verified portable implementation. */

void FUN_00647f6c(int *param_1,int *param_2)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = -1;
  param_1[2] = -1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  iVar1 = *param_2;
  if (iVar1 != 0) {
    *param_1 = iVar1;
    param_1[1] = (uint)*(ushort *)(iVar1 + 2);
    param_1[2] = (uint)*(ushort *)(iVar1 + 4);
    param_1[3] = (uint)*(ushort *)(iVar1 + 6);
    param_1[4] = *param_2 + 8;
    param_1[5] = param_1[3] + 8;
  }
  return;
}


