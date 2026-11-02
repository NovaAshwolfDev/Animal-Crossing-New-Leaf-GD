/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0079bc00. Provisional types; not original source or a verified portable implementation. */

undefined4 * FUN_0079bc00(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uStack_20;
  
  uStack_20 = param_4;
  FUN_00756d40(&uStack_20,0x2000);
  iVar3 = FUN_005a20f8(&uStack_20);
  iVar4 = FUN_00636e3c();
  uVar2 = DAT_0079bca4;
  bVar1 = *(byte *)(iVar4 + DAT_0079bca0);
  uVar5 = 0;
  do {
    uVar6 = (uint)*(byte *)(iVar3 + 0xc);
    if (0x66 < uVar6) {
      uVar6 = 0;
    }
    if ((uVar6 == param_2) &&
       ((bVar1 >> 4 == 0 || (-1 < (int)((uint)*(byte *)(iVar3 + 0x1f) << 0x19))))) {
      *(uint *)(param_1 + (uVar5 >> 5) * 4) =
           *(uint *)(param_1 + (uVar5 >> 5) * 4) | 1 << (uVar5 & 0x1f);
    }
    uVar5 = uVar5 + 1;
    iVar3 = iVar3 + 0x22;
  } while (uVar5 < uVar2);
  return &uStack_20;
}


