/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0062efcc. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_0062efcc(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  iVar1 = FUN_00689d10();
  if (iVar1 == 0) {
    if (param_1 < 4) {
      param_1 = param_1 & 3;
    }
    else {
      param_1 = FUN_006a9af0();
    }
    uVar2 = FUN_006a9af0();
    if (uVar2 == param_1) {
      return *(undefined4 *)(DAT_0062f060 + 0x230);
    }
    if (param_1 < 4) {
      param_1 = param_1 & 3;
    }
    else {
      param_1 = FUN_006a9af0();
    }
    uVar5 = (uint)*(byte *)((param_1 & 3) + DAT_0062f064 + 0x27c40);
    uVar3 = FUN_002d5e84(uVar5);
    uVar2 = uVar3;
    if (uVar3 != 0) {
      uVar2 = uVar5;
    }
    if (uVar3 != 0 && uVar5 != 8) {
      uVar4 = FUN_0062d120(uVar2);
      return uVar4;
    }
  }
  return 0;
}


