/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005cd080. Provisional types; not original source or a verified portable implementation. */

bool FUN_005cd080(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_10 = param_1;
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  uVar4 = FUN_005cc318(&uStack_10);
  iVar1 = (int)((ulonglong)uVar4 >> 0x20);
  uVar5 = FUN_005cc318(&uStack_4);
  iVar2 = (int)((ulonglong)uVar5 >> 0x20);
  bVar3 = (uint)uVar4 < (uint)uVar5;
  return (int)(iVar1 - (iVar2 + (uint)bVar3)) < 0 ==
         (SBORROW4(iVar1,iVar2) != SBORROW4(iVar1 - iVar2,(uint)bVar3));
}


