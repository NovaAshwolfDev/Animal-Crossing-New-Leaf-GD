/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007e9a44. Provisional types; not original source or a verified portable implementation. */

int FUN_007e9a44(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = FUN_007e7160();
  if (iVar1 != 0) {
    if (((int)((uint)*(byte *)(iVar1 + 0xb8) << 0x1e) < 0) &&
       (-1 < (int)((uint)*(byte *)(iVar1 + 0xbc) * 0x10000000))) {
      uVar2 = 0;
      while( true ) {
        iVar1 = param_1 + uVar2 * 0xf0;
        iVar3 = iVar1 + 0x8ee;
        if (((iVar3 != 0) && (iVar3 = FUN_007aae1c(iVar3), iVar3 != 0)) &&
           ((int)((uint)*(byte *)(iVar1 + 0x9aa) << 0x1e) < 0)) break;
        do {
          uVar2 = uVar2 + 1;
          if (0xf < uVar2) goto LAB_007e9b0c;
        } while (0xf < uVar2);
      }
      if (((-1 < (int)uVar2) && (uVar2 < 0x10)) &&
         ((iVar1 = param_1 + uVar2 * 0xf0 + 0x8ee, iVar1 != 0 &&
          (iVar3 = FUN_007aae48(iVar1,param_2), iVar3 == 0)))) {
        return iVar1;
      }
    }
LAB_007e9b0c:
    iVar1 = 0;
  }
  return iVar1;
}


