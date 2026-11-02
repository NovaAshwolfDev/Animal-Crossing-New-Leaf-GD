/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00118de8. Provisional types; not original source or a verified portable implementation. */

int FUN_00118de8(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                undefined1 param_6,int param_7)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  puVar2 = (undefined4 *)FUN_0012188c(param_1,param_3);
  uVar1 = DAT_00118f38;
  puVar2[4] = DAT_00118f34;
  uVar5 = *(undefined4 *)(param_2 + 4);
  *puVar2 = uVar1;
  puVar2[5] = uVar5;
  puVar2[6] = param_4;
  puVar2[7] = param_5;
  puVar2[8] = param_3;
  puVar2[10] = puVar2 + 9;
  puVar2[0xb] = 0;
  puVar2[9] = puVar2 + 9;
  puVar2[0xc] = 0xffffffff;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  puVar2[0x10] = puVar2 + 0xf;
  puVar2[0x11] = 0;
  puVar2[0xf] = puVar2 + 0xf;
  puVar2[0x12] = 0xffffffff;
  *(undefined1 *)(puVar2 + 0x13) = param_6;
  iVar3 = FUN_001214d8(puVar2 + 0x14,param_3);
  *(undefined4 *)(iVar3 + 0x1c) = 4;
  if (param_7 != 0) {
    *(undefined4 *)(iVar3 + 0x1c) = 5;
  }
  uVar4 = *(uint *)(iVar3 + 0x1c) & 1;
  if (uVar4 != 0) {
    uVar4 = 1;
  }
  iVar7 = 0;
  if (uVar4 != 0) {
    FUN_0011f990();
    iVar7 = iVar3;
  }
  *(undefined4 *)(iVar3 + -0x20) = 0x34;
  *(undefined4 *)(iVar3 + -8) = 8;
  if (param_3 != 0) {
    uVar4 = *(uint *)(param_3 + 0x6c) & 1;
    if (uVar4 != 0) {
      uVar4 = 1;
    }
    iVar6 = 0;
    if (uVar4 != 0) {
      FUN_0011f990();
      iVar6 = param_3 + 0x50;
    }
    FUN_0011ddac(param_3 + 0x24,*(int *)(param_3 + 0x30) + iVar3 + -0x50);
    *(int *)(param_3 + 0x2c) = *(int *)(param_3 + 0x2c) + 1;
    if (iVar6 != 0) {
      FUN_001214d0(iVar6);
    }
  }
  if (iVar7 != 0) {
    FUN_001214d0(iVar7);
  }
  return iVar3 + -0x50;
}


