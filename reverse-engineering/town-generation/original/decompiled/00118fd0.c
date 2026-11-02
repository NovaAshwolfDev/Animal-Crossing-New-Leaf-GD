/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00118fd0. Provisional types; not original source or a verified portable implementation. */

undefined4 * FUN_00118fd0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_00118de8();
  *puVar1 = DAT_00119070;
  *(undefined1 *)(puVar1 + 0x1c) = 0;
  puVar3 = puVar1 + 0x1d;
  puVar1[0x1e] = puVar3;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0xffffffff;
  *puVar3 = puVar3;
  puVar1[0x22] = puVar1 + 0x21;
  puVar1[0x23] = 0;
  puVar1[0x21] = puVar1 + 0x21;
  puVar1[0x24] = 0xffffffff;
  uVar2 = puVar1[0x1b] & 1;
  if (uVar2 != 0) {
    uVar2 = 1;
  }
  puVar3 = (undefined4 *)0x0;
  if (uVar2 != 0) {
    FUN_0011f990(puVar1 + 0x14);
    puVar3 = puVar1 + 0x14;
  }
  puVar1[0x20] = 0;
  puVar1[0x24] = 0;
  if (puVar3 != (undefined4 *)0x0) {
    FUN_001214d0(puVar3);
  }
  return puVar1;
}


