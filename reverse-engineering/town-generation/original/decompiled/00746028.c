/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00746028. Provisional types; not original source or a verified portable implementation. */

void FUN_00746028(int *param_1,int *param_2,uint *param_3,uint *param_4,uint param_5,uint param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = -1;
  iVar2 = param_5 + 1;
  if ((int)param_5 < 0) {
    iVar4 = ((int)(iVar2 + ((uint)(iVar2 >> 0x1f) >> 0x1c)) >> 4) + -1;
  }
  else {
    iVar4 = (int)param_5 >> 4;
  }
  *param_1 = iVar4;
  if (-1 < (int)param_6) {
    iVar3 = (int)param_6 >> 4;
  }
  uVar1 = param_6 + 1 + ((uint)((int)(param_6 + 1) >> 0x1f) >> 0x1c);
  if (-1 >= (int)param_6) {
    iVar3 = iVar3 + ((int)uVar1 >> 4);
  }
  *param_2 = iVar3;
  if ((int)param_5 < 0) {
    param_5 = param_5 + (iVar2 / 0x10) * -0x10 + 0x10;
  }
  else {
    param_5 = param_5 & 0xf;
  }
  if (-1 < (int)param_6) {
    uVar1 = param_6 & 0xf;
  }
  *param_3 = param_5;
  if (-1 >= (int)param_6) {
    uVar1 = (param_6 - (uVar1 & 0xfffffff0)) + 0x10;
  }
  *param_4 = uVar1;
  return;
}


