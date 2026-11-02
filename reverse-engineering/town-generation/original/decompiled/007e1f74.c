/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007e1f74. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_007e1f74(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (param_4 < 2) {
    uStack_30 = param_2;
    uStack_2c = param_3;
    if (((*DAT_007e205c & 1) == 0) && (iVar1 = FUN_003025cc(DAT_007e205c), iVar1 != 0)) {
      uStack_28 = 0xf;
      uStack_24 = 0xf;
      uVar2 = FUN_0059af60();
      FUN_0059b0e0(DAT_007e2060,uVar2,&uStack_28);
    }
    iVar1 = FUN_007dca50(DAT_007e2060,&uStack_30);
    if ((iVar1 != 0) && (iVar1 = *(int *)(param_1 + param_4 * 4 + 4), iVar1 != 0)) {
      uVar2 = FUN_007976c8(iVar1,param_2,param_3);
      return uVar2;
    }
  }
  return 0;
}


