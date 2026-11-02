/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0010819c. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_0010819c(int param_1,undefined4 param_2,int *param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar1 = DAT_001082a0;
  FUN_0011f990();
  if ((param_3 != (int *)0x0) ||
     (param_3 = (int *)FUN_0011a378(*DAT_001082a4), param_3 != (int *)0x0)) {
    if (param_1 == 0) {
      param_1 = (**(code **)(*param_3 + 0x3c))(param_3,4);
    }
    uVar4 = param_1 + 3U & 0xfffffffc;
    if ((0xa4 < uVar4) &&
       (iVar2 = (**(code **)(*param_3 + 0x18))(param_3,uVar4,param_4 << 2), iVar2 != 0)) {
      iVar3 = iVar2;
      if ((param_4 == 1) || (iVar3 = (uVar4 - 0x94) + iVar2, iVar3 != 0)) {
        uVar5 = FUN_00118fd0(iVar3,param_2,param_3,iVar2,uVar4,param_4,param_5);
      }
      else {
        uVar5 = 0;
      }
      FUN_00118f3c(uVar5);
      FUN_001214d0(uVar1);
      return uVar5;
    }
  }
  FUN_001214d0(uVar1);
  return 0;
}


