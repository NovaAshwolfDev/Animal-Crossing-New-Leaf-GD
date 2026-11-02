/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005c78b8. Provisional types; not original source or a verified portable implementation. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c78b8(uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uStack_20;
  uint uStack_1c;
  
  iVar4 = *DAT_005c78dc;
  if (iVar4 != 0) {
    FUN_0011f990(iVar4 + 0x30);
    *(int *)(iVar4 + 0x1c) = *(int *)(iVar4 + 0x1c) + 1;
    uVar1 = FUN_00123b60();
    iVar2 = FUN_00125fd0();
    uVar5 = uVar1 + iVar2;
    uVar3 = param_1 + param_2;
    if (param_1 < uVar5 && uVar1 < uVar3) {
      if (param_1 < uVar1) {
        param_1 = uVar1;
      }
      if (uVar5 < uVar3) {
        uVar3 = uVar5;
      }
      if (*(char *)(iVar4 + 0x2c) == '\0') {
        if ((*(uint *)(iVar4 + 0x10) == 0) || (param_1 < *(uint *)(iVar4 + 0x10))) {
          *(uint *)(iVar4 + 0x10) = param_1;
        }
        if ((*(uint *)(iVar4 + 0x14) == 0) || (*(uint *)(iVar4 + 0x14) < uVar3)) {
          *(uint *)(iVar4 + 0x14) = uVar3;
        }
      }
      else {
        uStack_20 = param_1;
        uStack_1c = uVar3;
        FUN_00546588(_UNK_005c6d3c,&uStack_20);
      }
    }
    FUN_001214d0(iVar4 + 0x30);
    return;
  }
  return;
}


