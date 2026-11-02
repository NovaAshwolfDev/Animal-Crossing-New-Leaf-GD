/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0066becc. Provisional types; not original source or a verified portable implementation. */

void FUN_0066becc(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_80 [112];
  
  uVar1 = (**(code **)(*param_2 + 0x2c))(param_2);
  uVar2 = (**(code **)(*param_1 + 0x2c))(param_1);
  if (uVar1 != 0 || uVar2 != 0) {
    if ((uVar2 & ~uVar1) != 0) {
      FUN_00658b40(auStack_80);
      FUN_00658a5c(auStack_80,param_1,param_2);
      FUN_00658b68(auStack_80);
      return;
    }
    if ((uVar1 & ~uVar2) != 0) {
      FUN_00656200(auStack_80);
      iVar3 = FUN_00656198(auStack_80,param_2);
      FUN_00656220(auStack_80);
      if (iVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0066bfac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x1c))(param_1);
        return;
      }
    }
  }
  FUN_00645890(auStack_80);
  FUN_00645750(auStack_80,param_1,param_2);
  FUN_006458b4(auStack_80);
  return;
}


