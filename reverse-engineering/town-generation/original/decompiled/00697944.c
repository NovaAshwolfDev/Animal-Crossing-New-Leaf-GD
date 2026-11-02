/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00697944. Provisional types; not original source or a verified portable implementation. */

void FUN_00697944(undefined1 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = 2;
  param_1[1] = 3;
  uVar2 = 0;
  param_1[2] = 3;
  do {
    uVar1 = 0;
    do {
      FUN_00697420(param_1 + uVar1 * 2 + uVar2 * 0xe + 4);
      uVar1 = uVar1 + 1;
    } while (uVar1 < 7);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 6);
  uVar2 = 0;
  do {
    uVar1 = 0;
    do {
      FUN_0079762c(param_1 + uVar1 * 0x400 + uVar2 * 0x1400 + 0x58);
      uVar1 = uVar1 + 1;
    } while (uVar1 < 5);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  uVar2 = 0;
  do {
    uVar1 = 0;
    do {
      FUN_00128410(param_1 + uVar1 * 0x100 + uVar2 * 0x500 + 0x5058);
      uVar1 = uVar1 + 1;
    } while (uVar1 < 5);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  FUN_00128418(param_1 + 0x6480,0x4000);
  return;
}


