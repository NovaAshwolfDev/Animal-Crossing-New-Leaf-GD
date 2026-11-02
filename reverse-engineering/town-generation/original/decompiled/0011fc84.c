/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0011fc84. Provisional types; not original source or a verified portable implementation. */

int FUN_0011fc84(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar2 = FUN_0011fcdc(param_1,iVar2);
    if (iVar2 == 0) {
      return 0;
    }
  } while ((param_2 < *(uint *)(iVar2 + 0x18)) || (*(uint *)(iVar2 + 0x1c) <= param_2));
  iVar1 = FUN_0011fc84(iVar2 + 0xc,param_2);
  if (iVar1 == 0) {
    iVar1 = iVar2;
  }
  return iVar1;
}


