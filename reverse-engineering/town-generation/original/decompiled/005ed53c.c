/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005ed53c. Provisional types; not original source or a verified portable implementation. */

undefined4
FUN_005ed53c(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
            int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  uStack_2c = param_1;
  local_28 = param_2;
  uStack_24 = param_3;
  uStack_20 = param_4;
  iVar2 = FUN_006a905c();
  if (iVar2 != 3) {
    iVar2 = param_6;
    if (param_6 <= param_5) {
      iVar2 = param_5;
      param_5 = param_6;
    }
    FUN_005cd428(&local_28,param_5);
    iVar1 = DAT_005ed620;
    local_38 = local_28;
    local_34 = uStack_24;
    uStack_30 = uStack_20;
    for (; param_5 <= iVar2; param_5 = param_5 + 1) {
      local_28 = local_38;
      uStack_24 = local_34;
      uStack_20 = uStack_30;
      iVar3 = FUN_006a905c();
      if (iVar3 != 3) {
        if (param_7 != 0) {
          FUN_005cd238(&local_38);
        }
        iVar3 = 0;
        do {
          piVar4 = *(int **)(iVar1 + iVar3 * 4);
          if (*(byte *)((int)piVar4 + 0x1b) == param_1) {
            iVar5 = (**(code **)(*piVar4 + 4))
                              (piVar4,local_38,(int)(char)local_34,(int)local_34._1_1_);
            if (iVar5 != 0) {
              return 1;
            }
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < 0x37);
      }
      FUN_005cd428(&local_28,1);
      local_38 = local_28;
      local_34 = uStack_24;
      uStack_30 = uStack_20;
    }
  }
  return 0;
}


