/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 006386f8. Provisional types; not original source or a verified portable implementation. */

void FUN_006386f8(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_007fe108(param_2);
  if (iVar1 == 0x2a) {
    *(byte *)(param_1 + 0x270) = *(byte *)(param_1 + 0x270) | 0x20;
  }
  uVar2 = FUN_007fede8(param_2);
  if (0xff < uVar2) {
    uVar2 = 0;
  }
  *(char *)(param_1 + 0x26f) = (char)uVar2;
  return;
}


