/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0064cdfc. Provisional types; not original source or a verified portable implementation. */

void FUN_0064cdfc(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)FUN_00664298();
  uVar1 = DAT_0064cec8;
  puVar3[1] = 0;
  *puVar3 = uVar1;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[6] = puVar3 + 8;
  puVar3[7] = 0x20;
  uVar1 = DAT_0064cecc;
  *(undefined1 *)(puVar3[6] + 0x1f) = 0;
  *(undefined1 *)puVar3[6] = 0;
  uVar2 = DAT_0064ced4;
  puVar3[5] = DAT_0064ced4;
  puVar3[0x10] = uVar1;
  puVar3[0x11] = puVar3 + 0x13;
  puVar3[0x12] = 0x20;
  *(undefined1 *)(puVar3[0x11] + 0x1f) = 0;
  *(undefined1 *)puVar3[0x11] = 0;
  puVar3[0x10] = uVar2;
  puVar3[0x1b] = uVar1;
  puVar3[0x1c] = puVar3 + 0x1e;
  puVar3[0x1d] = 0x20;
  *(undefined1 *)((int)puVar3 + 0x97) = 0;
  *(undefined1 *)puVar3[0x1c] = 0;
  puVar3[0x26] = 0xffffffff;
  puVar3[0x1b] = uVar2;
  puVar3[0x27] = 0xffffffff;
  puVar3[0x28] = 0xffffffff;
  puVar3[0x29] = 0xffffffff;
  puVar3[0x2a] = 0xffffffff;
  *(undefined1 *)(puVar3 + 0x2b) = 3;
  *(undefined1 *)((int)puVar3 + 0xad) = 4;
  return;
}


