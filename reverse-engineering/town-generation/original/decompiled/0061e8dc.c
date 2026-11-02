/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0061e8dc. Provisional types; not original source or a verified portable implementation. */

void FUN_0061e8dc(int param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 < 0x10) {
    if ((int)param_2 < 0xc) {
      iVar1 = param_1;
      if (10 < (int)param_2) {
        iVar1 = param_1 + 0x24ca;
      }
      if (param_2 == 10) {
        iVar1 = param_1 + 0x2400;
      }
      uVar2 = param_2;
      if (9 < (int)param_2) {
        uVar2 = param_3;
      }
      if (param_2 == 10) {
        iVar1 = iVar1 + 0xc6;
      }
      if ((int)param_2 < 10) {
        FUN_00620ff8(iVar1,uVar2,param_3,param_4,param_4);
      }
      else {
        FUN_00756eb0();
      }
    }
    else {
      FUN_0061daf4(param_1,param_2 - 0xc);
    }
    if (param_4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0063653c();
    }
  }
  return;
}


