/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 001f32d4. Provisional types; not original source or a verified portable implementation. */

undefined4 * FUN_001f32d4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_10;
  
  puVar1 = (undefined4 *)(uint)*(byte *)(param_1 + 0x14);
  if (puVar1 < &DAT_00000005) {
    if (*(char *)(DAT_001f3370 + (int)puVar1) == '\0') {
      if (*(char *)(DAT_001f3378 + (int)puVar1) == '\0') {
        return (undefined4 *)0x0;
      }
    }
    uStack_10 = param_4;
    iVar2 = FUN_0011df38(2);
    if (iVar2 == 0) {
      uVar3 = FUN_00756d40(&uStack_10,DAT_001f337c);
      FUN_00756eb0(param_1 + 0x30,uVar3);
      return &uStack_10;
    }
    uVar3 = FUN_00756d40(&uStack_10,DAT_001f3374);
    FUN_00756eb0(param_1 + 0x38,uVar3);
    puVar1 = &uStack_10;
  }
  return puVar1;
}


