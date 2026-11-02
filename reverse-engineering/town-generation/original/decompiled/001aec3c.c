/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 001aec3c. Provisional types; not original source or a verified portable implementation. */

undefined4 *
FUN_001aec3c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  iVar2 = FUN_00807374(param_2);
  if (iVar2 != 0) {
    uVar3 = FUN_0011df38();
    sVar1 = FUN_008072dc(param_2,uVar3);
    FUN_00756d40(&uStack_10,sVar1 + 0x2000);
    FUN_00756da4(param_1,&uStack_10);
    return &uStack_10;
  }
  puVar4 = (undefined4 *)FUN_00756da4(param_1,DAT_001aeca0);
  return puVar4;
}


