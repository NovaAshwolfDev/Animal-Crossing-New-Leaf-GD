/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 001aebcc. Provisional types; not original source or a verified portable implementation. */

undefined4 *
FUN_001aebcc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uStack_18;
  
  uStack_18 = param_4;
  iVar1 = FUN_00807374(param_3);
  if ((iVar1 != 0) && (iVar1 = FUN_008072dc(param_3,param_2), iVar1 != 1)) {
    FUN_00756d40(&uStack_18,iVar1 + 0x2000U & 0xffff);
    FUN_00756da4(param_1,&uStack_18);
    return &uStack_18;
  }
  puVar2 = (undefined4 *)FUN_00756da4(param_1,DAT_001aec38);
  return puVar2;
}


