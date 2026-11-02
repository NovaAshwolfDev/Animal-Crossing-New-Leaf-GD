/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00274574. Provisional types; not original source or a verified portable implementation. */

void FUN_00274574(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar1 = *DAT_00274584;
  FUN_0011f990(iVar1 + 0x1a8);
  *(undefined4 *)(iVar1 + 0x1a4) = param_1;
  *(undefined1 *)(iVar1 + 0x28) = 0x24;
  *(undefined1 *)(iVar1 + 0x29) = 1;
  iVar2 = FUN_001227b4(iVar1 + 0x188);
  if (iVar2 != 0) {
    FUN_00121f40(iVar1 + 0x188);
  }
  FUN_0011e318(iVar1 + 0x2c);
  **(undefined1 **)(iVar1 + 0x13c) = 0;
  **(undefined1 **)(iVar1 + 0x194) = 0;
  *(undefined4 *)(iVar1 + 0x184) = 0;
  FUN_0065fa8c(*(undefined4 *)(iVar1 + 0x1c));
  puVar3 = *(undefined4 **)(iVar1 + 0x24);
  puVar4 = (undefined4 *)FUN_005cc158();
  uVar5 = *puVar4;
  uVar6 = puVar4[1];
  puVar3[2] = puVar4[2];
  *puVar3 = uVar5;
  puVar3[1] = uVar6;
  return;
}


