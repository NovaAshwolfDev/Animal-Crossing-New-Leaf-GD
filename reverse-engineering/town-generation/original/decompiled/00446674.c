/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00446674. Provisional types; not original source or a verified portable implementation. */

int FUN_00446674(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int local_1c;
  undefined1 auStack_18 [8];
  
  local_1c = 0;
  iVar1 = (**(code **)(*param_1 + 0x34))(param_1,param_1 + 4,0x18c,&local_1c,param_1[1],1,0x12);
  if (DAT_004467b4 != iVar1 * 0x400000) {
    if (local_1c == 0) {
      FUN_004467b8(param_1);
      (**(code **)(*param_1 + 0x28))(param_1,param_1[1],0,0,5);
      return 0;
    }
    if ((-1 < iVar1) && ((short)param_1[4] == 0x6868)) {
      uVar3 = 0;
      if (param_1[6] != 0) {
        do {
          uVar2 = FUN_00446c00(param_1 + uVar3 * 4 + 7);
          iVar1 = (**(code **)(*param_1 + 8))(param_1,uVar2,0xb,0,auStack_18);
          if (iVar1 < 0) {
            iVar1 = FUN_004467b8(param_1);
            if (-1 < iVar1) {
              return local_1c;
            }
            return 0;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < (uint)param_1[6]);
      }
      return local_1c;
    }
    FUN_004467b8(param_1);
  }
  return 0;
}


