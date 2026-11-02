/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0062f8d0. Provisional types; not original source or a verified portable implementation. */

undefined1 FUN_0062f8d0(uint param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  if (param_1 < 4) {
    param_1 = param_1 & 3;
  }
  else {
    param_1 = FUN_006a9af0();
  }
  uVar1 = *(undefined1 *)((param_1 & 3) + DAT_0062f910 + 0x27c40);
  iVar2 = FUN_002d5e84(uVar1);
  if (iVar2 == 0) {
    uVar1 = 8;
  }
  return uVar1;
}


