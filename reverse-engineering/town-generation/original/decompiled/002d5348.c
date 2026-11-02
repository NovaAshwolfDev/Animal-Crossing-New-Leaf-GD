/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 002d5348. Provisional types; not original source or a verified portable implementation. */

void FUN_002d5348(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  do {
    iVar2 = param_1 + uVar1 * 0x878;
    FUN_001b8448(iVar2);
    uVar1 = uVar1 + 1;
    *(undefined4 *)(iVar2 + 0x870) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x874) = 0xffffffff;
  } while (uVar1 < 8);
  return;
}


