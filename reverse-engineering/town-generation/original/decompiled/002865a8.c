/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 002865a8. Provisional types; not original source or a verified portable implementation. */

void FUN_002865a8(uint param_1,void *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = DAT_00286704;
  if (param_1 == 0) {
    return;
  }
  uVar5 = 8;
  do {
    iVar3 = FUN_001e7bf0(DAT_00286708,uVar5,param_2);
    if (iVar3 == 0) {
      FUN_001e6de8(DAT_00286708,uVar5,param_2);
    }
    uVar4 = 1;
LAB_00286698:
    while( true ) {
      if (param_1 <= uVar4) {
        return;
      }
      uVar5 = uVar4 + 8 & 0xff;
      if (uVar4 < 3) break;
      uVar2 = rng_next_u32(param_2);
      if (uVar2 + (uint)((ulonglong)uVar2 * (ulonglong)uVar1 >> 0x25) * -100 < 0x28) {
        iVar3 = FUN_001e6f7c();
        if (iVar3 != 0) goto LAB_00286694;
        iVar3 = FUN_001e7f04(DAT_00286708,uVar5,param_2);
      }
      else {
        iVar3 = FUN_001e7bf0(DAT_00286708,uVar5,param_2,(int)((ulonglong)uVar2 * (ulonglong)uVar1));
      }
      if (iVar3 == 0) {
        FUN_001e6de8(DAT_00286708,uVar5,param_2);
      }
LAB_00286694:
      uVar4 = uVar4 + 1;
    }
  } while (uVar4 == 0);
  if (uVar4 == 1) {
    iVar3 = FUN_001e7bf0(DAT_00286708,uVar5,param_2);
    if (iVar3 == 0) {
      FUN_001e6de8(DAT_00286708,uVar5,param_2);
    }
    uVar4 = 2;
  }
  else {
    iVar3 = FUN_001e6de8();
    if (iVar3 != 0) goto LAB_00286694;
  }
  goto LAB_00286698;
}


