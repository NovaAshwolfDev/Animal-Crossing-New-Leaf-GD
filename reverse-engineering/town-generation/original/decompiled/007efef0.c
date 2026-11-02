/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007efef0. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_007efef0(int *param_1)

{
  short *psVar1;
  int iVar2;
  undefined4 uVar3;
  
  psVar1 = (short *)(**(code **)(*param_1 + 0xc))(param_1);
  iVar2 = (**(code **)(*param_1 + 0x10))(param_1);
  uVar3 = 1;
  if ((psVar1 != (short *)0x0 && iVar2 != 0) && (*psVar1 != 0)) {
    uVar3 = 0;
  }
  return uVar3;
}


