/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00446560. Provisional types; not original source or a verified portable implementation. */

void FUN_00446560(int *param_1,int param_2,undefined1 *param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = param_1[1];
  if ((iVar1 != 0) && (param_4 < 0x2801)) {
    if (param_2 == 0x8c) {
      *(undefined1 *)(param_1 + 0x77) = *param_3;
      FUN_001261f4();
      return;
    }
    if (param_2 == 0x8d) {
      *(undefined1 *)((int)param_1 + 0x1dd) = *param_3;
      FUN_001261f4();
      return;
    }
    if (param_2 == 0x8e) {
      *(undefined1 *)((int)param_1 + 0x1de) = *param_3;
      FUN_001261f4();
      return;
    }
    if (param_2 == 0x8f) {
      *(undefined1 *)((int)param_1 + 0x1df) = *param_3;
      FUN_001261f4();
      return;
    }
    if (param_2 - 0x65U < 99) {
      if (param_4 == 0 || param_3 == (undefined1 *)0x0) {
        (**(code **)(*param_1 + 0x24))(param_1,iVar1,param_2,0,0,0);
        return;
      }
      (**(code **)(*param_1 + 0x30))(param_1,param_3,param_4,iVar1,param_2,0x14);
    }
  }
  return;
}


