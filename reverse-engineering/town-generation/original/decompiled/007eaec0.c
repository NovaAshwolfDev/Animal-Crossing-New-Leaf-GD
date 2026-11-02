/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007eaec0. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_007eaec0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_38 [8];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  FUN_0063ae38(auStack_38,param_2,0xffffffff,0x7fffffff);
  iVar7 = 0;
  do {
    iVar5 = 0;
    do {
      iVar6 = param_1 + iVar7 * 0x80 + iVar5 * 0x40;
      iVar1 = FUN_007edfa8(iVar6);
      if ((iVar1 != 0) &&
         ((iVar1 = FUN_007edfa8(auStack_38), iVar1 == 0 ||
          (iVar1 = FUN_007eded4(iVar6,auStack_38), iVar1 < 0)))) {
        FUN_0011a3e0(auStack_38,iVar6);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 2);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 4);
  iVar7 = FUN_007edfa8(auStack_38);
  if (iVar7 != 0) {
    FUN_007edb08(&local_30,auStack_38);
    *param_2 = local_30;
    param_2[1] = uStack_2c;
    param_2[2] = uStack_28;
    return 0;
  }
  puVar2 = (undefined4 *)FUN_005cc158();
  uVar3 = *puVar2;
  uVar4 = puVar2[1];
  param_2[2] = puVar2[2];
  *param_2 = uVar3;
  param_2[1] = uVar4;
  return 1;
}


