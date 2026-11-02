/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0065bbe0. Provisional types; not original source or a verified portable implementation. */

int FUN_0065bbe0(int param_1,int *param_2,int *param_3,undefined1 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_80 [104];
  undefined4 local_18;
  
  *(undefined1 *)(param_1 + 0x90) = param_4;
  *(undefined1 *)(param_1 + 0x91) = 1;
  uVar1 = (**(code **)(*param_2 + 8))(param_2);
  *(undefined4 *)(param_1 + 0x94) = uVar1;
  *(undefined4 *)(param_1 + 0x98) = uVar1;
  iVar2 = (**(code **)(*param_2 + 0x10))(param_2);
  *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + iVar2 * 2 + -2;
  FUN_00670130(param_1);
  iVar2 = FUN_007efef0(param_3);
  if (iVar2 == 0) {
    local_18 = (**(code **)(*param_3 + 0xc))(param_3);
    (**(code **)(*param_2 + 0x1c))(param_2);
    FUN_00651898(auStack_80,*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x8c) + 4) + 4));
    FUN_00651858(auStack_80,&local_18);
    FUN_0066fff8(auStack_80);
    FUN_0066ff2c(param_1,&local_18,DAT_0065bce0);
    FUN_0066fd88(param_1,DAT_0065bce0);
  }
  return (int)*(char *)(param_1 + 0x91);
}


