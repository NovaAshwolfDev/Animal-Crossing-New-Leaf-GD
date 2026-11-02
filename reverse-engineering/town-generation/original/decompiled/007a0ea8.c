/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007a0ea8. Provisional types; not original source or a verified portable implementation. */

uint FUN_007a0ea8(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_00611914(0x20,param_1);
  if (iVar1 != 0) {
    return 1;
  }
  iVar2 = FUN_00611914(0x80,param_1);
  iVar1 = DAT_007a0fa8;
  if (iVar2 == 0) {
    iVar2 = FUN_00611914(0x2000,param_1);
    if (iVar2 == 0) {
      if (param_1 == 0x68) {
        return 0x1e;
      }
      iVar2 = FUN_00611914(0x100000,param_1);
      if (iVar2 == 0) {
        iVar1 = FUN_00611914(0x80000,param_1);
        if (iVar1 != 0) {
          return 0x1f;
        }
      }
      else {
        uVar3 = 0x20;
        do {
          if (param_1 == *(byte *)(iVar1 + (uVar3 & 0xff))) {
            return uVar3 & 0xff;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < 0x2a);
      }
    }
    else {
      uVar3 = 0x1a;
      do {
        if (param_1 == *(byte *)(iVar1 + (uVar3 & 0xff))) {
          return uVar3 & 0xff;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < 0x1e);
    }
  }
  else {
    uVar3 = 2;
    do {
      if (param_1 == *(byte *)(DAT_007a0fa8 + (uVar3 & 0xff))) {
        return uVar3 & 0xff;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x1a);
  }
  return 0;
}


