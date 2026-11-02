/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007776cc. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_007776cc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 local_14;
  undefined1 auStack_10 [4];
  short local_c;
  char local_9;
  
  FUN_00544c78(auStack_10,param_1,param_2,param_3);
  uVar2 = 0;
  local_14 = *(undefined4 *)(DAT_00777734 + 0x18);
  uVar3 = 0;
  do {
    iVar1 = uVar3 - 4;
    uVar3 = uVar3 + 1;
    if (auStack_10[iVar1] == local_9) {
      uVar2 = 1;
    }
  } while (uVar3 < 4);
  if (local_c == 0x9b || local_c == 0xa4) {
    uVar2 = 1;
  }
  return uVar2;
}


