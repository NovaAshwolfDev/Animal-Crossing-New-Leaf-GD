/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005a55cc. Provisional types; not original source or a verified portable implementation. */

uint FUN_005a55cc(int *param_1,int *param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_2c [2];
  
  uVar1 = (uint)*(byte *)(param_1 + 0x13);
  if (uVar1 != 0) {
    if (param_3 == 0) {
      return 0;
    }
    uVar1 = (**(code **)(*param_1 + 0x20))(param_1,param_3);
    if (uVar1 != 0) {
      if (param_4 == 0) {
        return 0;
      }
      if (*(int *)(param_3 + 0x34) == 0) {
        uVar1 = (**(code **)(*param_1 + 0x34))(param_1,param_2,param_3,param_4,param_5);
        return uVar1;
      }
      iVar3 = 0;
      do {
        uVar1 = *(uint *)(param_3 + 0x34);
        if ((int)param_5 < (int)*(uint *)(param_3 + 0x34)) {
          uVar1 = param_5;
        }
        local_2c[0] = 0;
        iVar2 = (**(code **)(*param_1 + 0x34))(param_1,local_2c,param_3,param_4,uVar1);
        if (iVar2 == 0) {
          if (param_2 == (int *)0x0) {
            return 0;
          }
          *param_2 = iVar3;
          return 0;
        }
        iVar3 = iVar3 + local_2c[0];
        if (local_2c[0] < uVar1) break;
        param_5 = param_5 - uVar1;
        param_4 = param_4 + local_2c[0];
      } while (param_5 != 0);
      uVar1 = 1;
      if (param_2 != (int *)0x0) {
        *param_2 = iVar3;
      }
    }
  }
  return uVar1;
}


