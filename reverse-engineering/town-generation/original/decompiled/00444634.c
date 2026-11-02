/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00444634. Provisional types; not original source or a verified portable implementation. */

void FUN_00444634(int param_1)

{
  bool bVar1;
  int iVar2;
  uint unaff_r8;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  if ((*(int *)(param_1 + 0x10) << 8) >> 0x18 != 0) {
    return;
  }
  *(undefined4 *)(param_1 + 8) = in_stack_00000008;
  *(undefined4 *)(param_1 + 0xc) = in_stack_0000000c;
  do {
    bVar1 = (bool)hasExclusiveAccess((uint *)(param_1 + 0x10));
  } while (!bVar1);
  *(uint *)(param_1 + 0x10) = unaff_r8 & 0xff000000 | 0x10000;
  iVar2 = FUN_00136d48(*(undefined4 *)(param_1 + 0x18));
  if (iVar2 < 0) {
    FUN_00123b70();
  }
                    /* WARNING: Could not recover jumptable at 0x004446d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x14) + 0xc))(*(int **)(param_1 + 0x14),param_1);
  return;
}


