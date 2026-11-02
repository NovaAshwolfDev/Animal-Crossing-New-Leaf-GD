/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00119964. Provisional types; not original source or a verified portable implementation. */

void FUN_00119964(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = DAT_001199a8;
  *param_1 = DAT_001199a4;
  if (param_1[1] != 0) {
    *(undefined4 *)(*piVar1 + 0x14) = param_1[1];
  }
  if (param_1[2] != 0) {
    *(undefined4 *)(*piVar1 + 0x18) = param_1[2];
  }
  if (param_1[3] != 0) {
    *(undefined4 *)(*piVar1 + 0x1c) = param_1[3];
  }
  return;
}


