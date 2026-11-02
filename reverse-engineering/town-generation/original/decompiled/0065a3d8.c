/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0065a3d8. Provisional types; not original source or a verified portable implementation. */

undefined4
FUN_0065a3d8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_007f0fb4(*DAT_0065a428,param_1 + 0x28);
  if ((iVar1 != 0) &&
     (iVar1 = FUN_0065bbe0(*(undefined4 *)(param_1 + 0x18),param_2,param_1 + 0x28,param_5),
     iVar1 != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}


