/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00100c18. Provisional types; not original source or a verified portable implementation. */

void FUN_00100c18(uint *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar1 = 0;
  for (; param_3 != 0 || param_4 != 0; param_3 = param_3 >> 3 | uVar4) {
    *(byte *)((int)param_1 + iVar1 + 0x24) = ((byte)param_3 & 7) + 0x30;
    uVar4 = param_4 << 0x1d;
    iVar1 = iVar1 + 1;
    param_4 = param_4 >> 3;
  }
  uVar3 = 0;
  puVar2 = &DAT_00100c80;
  if (((int)(*param_1 << 0x1c) < 0) && ((*param_1 & 0x20) != 0 || iVar1 != 0)) {
    uVar3 = 1;
    puVar2 = &DAT_00100c84;
    param_1[7] = param_1[7] - 1;
  }
  FUN_002fe71c(param_1,iVar1,puVar2,uVar3);
  return;
}


