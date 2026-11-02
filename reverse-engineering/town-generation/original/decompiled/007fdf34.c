/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007fdf34. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_007fdf34(ushort *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_005a20f8();
  if (((((iVar1 == 0) || (0x92 < *(byte *)(iVar1 + 10))) || (*(byte *)(iVar1 + 10) != 0x47)) &&
      (((iVar1 = FUN_005a20f8(param_1), iVar1 == 0 || (0x92 < *(byte *)(iVar1 + 10))) ||
       (*(byte *)(iVar1 + 10) != 0x48)))) && ((*param_1 & 0x7fff) != 0x9d)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


