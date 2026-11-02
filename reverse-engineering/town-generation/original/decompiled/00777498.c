/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00777498. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_00777498(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 local_18 [2];
  undefined1 auStack_10 [6];
  char local_a;
  
  FUN_00544c78(auStack_10,param_1,param_2,param_3);
  uVar2 = 0;
  local_18[0] = *(undefined4 *)(DAT_007774f0 + 0x14);
  uVar3 = 0;
  do {
    pcVar1 = (char *)((int)local_18 + uVar3);
    uVar3 = uVar3 + 1;
    if (*pcVar1 == local_a) {
      uVar2 = 1;
    }
  } while (uVar3 < 3);
  return uVar2;
}


