/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0074a424. Provisional types; not original source or a verified portable implementation. */

uint FUN_0074a424(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  do {
    iVar1 = FUN_0062d120(uVar5 & 0xff);
    if (iVar1 != 0) {
      uVar4 = 0;
      do {
        iVar2 = FUN_0023bcf8(iVar1 + 0x2c,uVar4);
        if (iVar2 == param_1) {
          return (uVar5 & 0xfff) << 4 | uVar4;
        }
        uVar4 = uVar4 + 1 & 0xffff;
      } while (uVar4 < 10);
    }
    uVar5 = uVar5 + 1 & 0xffff;
  } while (uVar5 < 8);
  iVar2 = FUN_00636e3c();
  iVar1 = DAT_0074a624;
  uVar5 = 0;
  iVar2 = iVar2 + DAT_0074a624;
  do {
    iVar3 = FUN_001ebfc8(iVar2 + 0xe8,uVar5);
    if (iVar3 == param_1) {
      return uVar5 | 0x200;
    }
    uVar5 = uVar5 + 1 & 0xffff;
  } while (uVar5 < 8);
  iVar2 = FUN_00636e3c();
  uVar5 = 0;
  do {
    if (iVar2 + iVar1 + uVar5 * 0x870 + 0x46cc == param_1) {
      return uVar5 | 0x300;
    }
    uVar5 = uVar5 + 1 & 0xffff;
  } while (uVar5 < 8);
  iVar1 = FUN_00636e3c();
  uVar5 = 0;
  do {
    if (iVar1 + 0x49610 + uVar5 * 0x878 == param_1) {
      return uVar5 | 0x600;
    }
    uVar5 = uVar5 + 1 & 0xffff;
  } while (uVar5 < 8);
  uVar5 = 0;
  while( true ) {
    FUN_00636e3c();
    iVar1 = FUN_006378a0();
    iVar2 = FUN_006138d4(iVar1 + 4,uVar5);
    iVar1 = DAT_0074a628;
    if ((iVar2 != 0) && (iVar2 + 0x30 == param_1)) break;
    uVar5 = uVar5 + 1 & 0xffff;
    if (9 < uVar5) {
      uVar5 = 0;
      do {
        iVar2 = FUN_00636e3c();
        iVar2 = FUN_00757510(iVar2 + iVar1,uVar5 & 0xff);
        if (iVar2 + 0x304 == param_1) {
          return (uVar5 & 0xfff) << 4 | 0x400;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < 4);
      iVar1 = FUN_00636e3c();
      uVar5 = DAT_0074a630;
      if (iVar1 + DAT_0074a62c == param_1) {
        uVar5 = 0x500;
      }
      return uVar5;
    }
  }
  return (uVar5 & 0xfff) << 4 | 0x100;
}


