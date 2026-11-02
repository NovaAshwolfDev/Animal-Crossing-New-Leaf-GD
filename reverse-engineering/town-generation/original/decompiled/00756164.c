/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00756164. Provisional types; not original source or a verified portable implementation. */

void FUN_00756164(ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = FUN_007fe37c();
  if (iVar2 == 0xe) {
    uVar1 = FUN_001bc884(*param_1 & 0x7fff);
  }
  else if (iVar2 < 0xf) {
    if (iVar2 == 0xb) {
      uVar1 = FUN_001bc8c4(*param_1 & 0x7fff);
    }
    else if (iVar2 == 0xc) {
      uVar1 = FUN_001bc8a4(*param_1 & 0x7fff);
    }
    else {
      if (iVar2 != 0xd) {
        return;
      }
      uVar1 = FUN_001bc8e4(*param_1 & 0x7fff);
    }
  }
  else if (iVar2 == 0x10) {
    uVar1 = FUN_001bc924(*param_1 & 0x7fff);
  }
  else if (iVar2 == 0x1b) {
    uVar1 = FUN_001bc864(*param_1 & 0x7fff);
  }
  else {
    if (iVar2 != 0x1c) {
      return;
    }
    uVar1 = FUN_001bc904(*param_1 & 0x7fff);
  }
  param_1[1] = uVar1 & 0x3fff | param_1[1] & 0x3f00 | param_1[1] & 0xc000;
  return;
}


