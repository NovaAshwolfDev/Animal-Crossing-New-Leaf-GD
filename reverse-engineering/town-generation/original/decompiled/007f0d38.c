/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007f0d38. Provisional types; not original source or a verified portable implementation. */

bool FUN_007f0d38(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_28 [20];
  
  iVar1 = FUN_007ef908(param_1 + 0x14,param_3);
  iVar2 = 0;
  if ((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + 0x188), iVar1 != 0)) {
    FUN_0011f990();
    FUN_0060edf8(auStack_28);
    FUN_0060eddc(auStack_28,iVar1);
    iVar2 = FUN_0013fe98(auStack_28,param_4);
    FUN_00121f40(auStack_28);
    FUN_001214d0(param_1 + 0x24);
  }
  if (iVar2 != 0) {
    FUN_0066c0d0(param_2);
  }
  else {
    FUN_0066c0d0(param_2,DAT_007f0e0c);
  }
  return iVar2 != 0;
}


