/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007ec268. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_007ec268(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(DAT_007ec2a0 + 0x234) == 0) ||
     (iVar1 = FUN_007b8ef0(*(int *)(DAT_007ec2a0 + 0x234) + 0x55a6,param_1), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


