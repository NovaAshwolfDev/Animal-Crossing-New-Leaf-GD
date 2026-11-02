/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 006abe20. Provisional types; not original source or a verified portable implementation. */

void FUN_006abe20(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return;
  }
  if ((char)param_1[0x11] == '\0') {
    bVar1 = *(byte *)(*DAT_006abeac + 0x1312a);
    if (((bVar1 & 1) == 0) && (iVar2 = param_1[2], param_1[1] != iVar2)) {
      if ((iVar2 == 0) || (0x16800 < (uint)((iVar2 - *param_1) + param_3))) {
        *(byte *)(*DAT_006abeac + 0x1312a) = bVar1 | 1;
        return;
      }
      FUN_002febf4(iVar2,param_2,param_3);
      param_1[2] = param_1[2] + param_3;
    }
  }
  return;
}


