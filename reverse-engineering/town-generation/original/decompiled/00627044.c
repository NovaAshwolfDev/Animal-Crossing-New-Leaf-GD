/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00627044. Provisional types; not original source or a verified portable implementation. */

void FUN_00627044(int param_1,int param_2)

{
  byte bVar1;
  bool bVar2;
  
  if (param_2 == 0) {
    bVar1 = *(byte *)(param_1 + 0x4e);
    bVar2 = 0x20 < bVar1;
    if (!bVar2) {
      bVar1 = *(byte *)(param_1 + 0x4f);
    }
    if (bVar2 || 3 < bVar1) {
      return;
    }
  }
  else {
    if (0 < param_2) {
      param_2 = param_2 + *(char *)(param_1 + 0x59);
      if (param_2 + 2 < 0 == SCARRY4(param_2,2)) {
        if (10 < param_2) {
          param_2 = 10;
        }
      }
      else {
        param_2 = -2;
      }
      *(char *)(param_1 + 0x59) = (char)param_2;
    }
    if (0x20 < *(byte *)(param_1 + 0x4e)) {
      return;
    }
  }
  FUN_00626fc4();
  return;
}


