/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 001192d0. Provisional types; not original source or a verified portable implementation. */

void FUN_001192d0(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = (undefined4 *)FUN_00113bb8();
  *puVar2 = DAT_00119354;
  iVar3 = FUN_00113b84(puVar2 + 3);
  *(int *)(iVar3 + 0x40) = iVar3 + 0x48;
  *(undefined4 *)(iVar3 + 0x44) = 0x80;
  *(undefined1 *)(*(int *)(iVar3 + 0x40) + 0x7f) = 0;
  **(undefined1 **)(iVar3 + 0x40) = 0;
  uVar1 = DAT_00119360;
  *(undefined4 *)(iVar3 + 200) = 0;
  *(undefined4 *)(iVar3 + 0x3c) = uVar1;
  *(undefined4 *)(iVar3 + 0xcc) = 0;
  *(undefined4 *)(iVar3 + 0xd0) = 0;
  *(undefined4 *)(iVar3 + 0xd4) = 0;
  *(undefined4 *)(iVar3 + 0xd8) = 0;
  *(undefined4 *)(iVar3 + 0xdc) = 0;
  *(undefined4 *)(iVar3 + 0xe0) = 0;
  *(undefined4 *)(iVar3 + 0xe4) = 0;
  *(undefined1 *)(iVar3 + 0xe8) = 0;
  *(undefined1 *)(iVar3 + 0xe9) = 0;
  *(undefined1 *)(iVar3 + 0xea) = 0;
  *(undefined1 *)(iVar3 + 0xeb) = 0;
  return;
}


