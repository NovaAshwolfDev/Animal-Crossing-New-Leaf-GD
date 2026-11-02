/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005ed250. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_005ed250(uint param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  iVar1 = FUN_006a905c();
  if (iVar1 == 3) {
    return 0;
  }
  iVar1 = FUN_007dff60(param_2);
  if (iVar1 == 0) {
    local_18 = *param_2;
    uStack_14 = param_2[1];
    uStack_10 = param_2[2];
    UNRECOVERED_JUMPTABLE = (code *)DAT_005ed340[2];
    for (iVar1 = *(int *)(DAT_005ed344 + 8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      if (*(byte *)(iVar1 + 0x1b) == param_1) {
        piVar2 = (int *)(iVar1 + (DAT_005ed340[3] >> 1));
        if ((DAT_005ed340[3] & 1U) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *piVar2);
        }
        uVar3 = (*UNRECOVERED_JUMPTABLE)(piVar2,&local_18);
        return uVar3;
      }
    }
  }
  else {
    UNRECOVERED_JUMPTABLE = (code *)*DAT_005ed340;
    for (iVar1 = *(int *)(DAT_005ed344 + 8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      if (*(byte *)(iVar1 + 0x1b) == param_1) {
        piVar2 = (int *)(iVar1 + (DAT_005ed340[1] >> 1));
        if ((DAT_005ed340[1] & 1U) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *piVar2);
        }
                    /* WARNING: Could not recover jumptable at 0x005ed2c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*UNRECOVERED_JUMPTABLE)(piVar2,0);
        return uVar3;
      }
    }
  }
  return 0;
}


