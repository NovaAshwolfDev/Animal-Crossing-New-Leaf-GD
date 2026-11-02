/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007fe150. Provisional types; not original source or a verified portable implementation. */

uint FUN_007fe150(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_005a20f8();
  if (iVar1 == 0) {
    uVar2 = 3;
  }
  else {
    uVar2 = (uint)*(byte *)(iVar1 + 0x1e) << 0x1a;
    if (uVar2 >> 0x1e < 3) {
      uVar2 = uVar2 >> 0x1e;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}


