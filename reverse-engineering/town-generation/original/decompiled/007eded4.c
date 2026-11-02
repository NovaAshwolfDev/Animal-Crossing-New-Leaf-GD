/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007eded4. Provisional types; not original source or a verified portable implementation. */

uint FUN_007eded4(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint local_18;
  uint uStack_14;
  
  uVar3 = FUN_007edf28(param_2);
  uVar2 = (uint)((ulonglong)uVar3 >> 0x20);
  uVar1 = (uint)uVar3;
  FUN_0011a3e0(&local_18,param_1);
  if ((int)(uVar2 - (uStack_14 + (uVar1 < local_18))) < 0 ==
      (SBORROW4(uVar2,uStack_14) != SBORROW4(uVar2 - uStack_14,(uint)(uVar1 < local_18)))) {
    uVar1 = local_18 ^ uVar1 | uVar2 ^ uStack_14;
    if (uVar1 != 0) {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


