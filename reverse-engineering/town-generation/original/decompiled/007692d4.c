/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007692d4. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_007692d4(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00636410(param_3);
  if ((iVar1 != 0) && (iVar1 = FUN_006364e0(param_3), iVar1 != 0)) {
    uVar2 = FUN_002857a0();
    iVar1 = FUN_007fc798();
    if ((iVar1 == 0) ||
       (((iVar1 = FUN_007fc774(uVar2), iVar1 != param_3 ||
         (iVar1 = FUN_007fc6ec(uVar2), iVar1 != param_1)) ||
        (iVar1 = FUN_007fc710(uVar2), iVar1 != param_2)))) {
      return 1;
    }
  }
  return 0;
}


