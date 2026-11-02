/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 003d56fc. Provisional types; not original source or a verified portable implementation. */

longlong FUN_003d56fc(int param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  uint extraout_r1;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar2 = *(int *)(param_1 + 0xd8);
  if (iVar2 == 0) {
    local_18 = DAT_003d5778;
    local_14 = param_2;
    iVar2 = FUN_005ca878(param_1,&local_18,param_3,4);
    if (iVar2 == 0) {
      FUN_00121a94(param_1);
      *(undefined4 *)(param_1 + 0xf8) = 0;
      return (ulonglong)extraout_r1 << 0x20;
    }
    lVar1 = (ulonglong)*(uint *)(param_1 + 0xe0) * (ulonglong)DAT_003d577c;
    iVar2 = (int)lVar1;
    *(uint *)(param_1 + 0xf8) = (uint)((ulonglong)lVar1 >> 0x25);
  }
  return CONCAT44(iVar2,1);
}


