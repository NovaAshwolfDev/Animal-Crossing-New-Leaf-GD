/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00624aa0. Provisional types; not original source or a verified portable implementation. */

void FUN_00624aa0(int param_1,uint param_2)

{
  undefined1 uVar1;
  
  if (param_2 < 8) {
    param_1 = param_1 + param_2 * 0x40;
  }
  switch(*(undefined1 *)(param_1 + 9)) {
  case 0:
  case 1:
    uVar1 = 3;
    break;
  default:
    return;
  case 4:
    uVar1 = 7;
    break;
  case 5:
    *(undefined1 *)(param_1 + 9) = 8;
    return;
  case 6:
                    /* WARNING: Subroutine does not return */
    FUN_0063653c(param_1);
  }
  *(undefined1 *)(param_1 + 9) = uVar1;
  return;
}


