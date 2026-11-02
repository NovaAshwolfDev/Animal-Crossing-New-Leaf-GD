/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005cc004. Provisional types; not original source or a verified portable implementation. */

uint FUN_005cc004(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  
  uVar1 = FUN_00610c2c();
  iVar2 = FUN_00611914(0x20000,uVar1);
  if (iVar2 == 0) {
    uVar3 = 0;
    puVar4 = DAT_005cc06c;
    while (*puVar4 < (ushort)((short)*(char *)(param_1 + 5) | (ushort)*(byte *)(param_1 + 4) << 8))
    {
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 1;
      if (0x16 < (int)uVar3) {
        return 0;
      }
    }
    uVar3 = uVar3 & 0xff;
  }
  else {
    uVar3 = 0xc;
  }
  return uVar3;
}


