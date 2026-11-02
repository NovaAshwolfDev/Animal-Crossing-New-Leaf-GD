/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 001079ec. Provisional types; not original source or a verified portable implementation. */

uint FUN_001079ec(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  uVar1 = DAT_00107a7c;
  while( true ) {
    uVar2 = FUN_0010f6c0(DAT_00107a80,param_1);
    if ((uVar2 & 0x80000000) == 0) {
      uVar3 = uVar2 >> 0x1b;
    }
    else {
      uVar3 = (uVar2 >> 0x1b) - 0x20;
    }
    if (uVar3 != 0xfffffffb) break;
    uVar3 = uVar2 & 0x7e00000;
    bVar4 = uVar3 == 0x800000;
    if (bVar4) {
      uVar3 = uVar2 & 0x3ff;
    }
    if (!bVar4 || uVar3 != uVar1) break;
    FUN_0011690c(DAT_00107a88,0);
  }
  if (-1 < (int)uVar2) {
    uVar2 = FUN_0010b8e8();
    *DAT_00107a84 = *DAT_00107a84 + 1;
  }
  return uVar2;
}


