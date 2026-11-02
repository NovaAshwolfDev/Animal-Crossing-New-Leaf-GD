/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 002d57fc. Provisional types; not original source or a verified portable implementation. */

uint FUN_002d57fc(uint param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1 + 0x27c40;
  if (param_1 < uVar2) {
    do {
      iVar1 = FUN_007b8ef0(param_1 + 0x55a6,param_2);
      if (iVar1 != 0) {
        return param_1;
      }
      param_1 = param_1 + 0x9f10;
    } while (param_1 < uVar2);
  }
  return 0;
}


