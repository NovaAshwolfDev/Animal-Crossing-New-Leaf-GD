/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005cdf04. Provisional types; not original source or a verified portable implementation. */

undefined1 * FUN_005cdf04(int *param_1,undefined4 param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined1 auStack_18 [12];
  
  FUN_00648aa4(auStack_18,param_2,9);
  (**(code **)(*param_1 + 0x14))(param_1,auStack_18);
  bVar3 = param_3 == 0;
  if (bVar3) {
    param_3 = 1;
  }
  uVar2 = (undefined1)param_3;
  if (!bVar3) {
    uVar2 = 2;
  }
  puVar1 = (undefined1 *)(**(code **)(*param_1 + 0x24))(param_1);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = uVar2;
  }
  return auStack_18;
}


