/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0062c1c8. Provisional types; not original source or a verified portable implementation. */

undefined4 thunk_FUN_005ca2fc(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int *piStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined1 uStack_1c;
  
  puVar1 = DAT_005ca450;
  if (param_1[1] != 0) {
    return 1;
  }
  if (*param_1 == 0) {
    uStack_40 = DAT_005ca448;
    uStack_38 = 0;
    uStack_28 = 0;
    uStack_34 = 0;
    uStack_1c = 0;
    iStack_24 = 0;
    uStack_20 = 0;
    uStack_3c = param_2;
    piStack_30 = param_3;
    uStack_2c = param_4;
    iVar3 = FUN_005a7a70(*DAT_005ca450,&uStack_40);
    param_1[1] = iVar3;
    if (iVar3 != 0) {
      *param_1 = (int)param_3;
      puVar2 = DAT_005ca454;
      if (iStack_24 != 0) {
        param_1[2] = iStack_24;
        FUN_005c78b8(iVar3);
        *(undefined1 *)(param_1 + 3) = 1;
        return 1;
      }
      if ((char)param_1[3] == '\0') {
        if ((param_3 != (int *)0x0) && (param_1[2] != 0)) {
          (**(code **)(*param_3 + 0x1c))(param_3,iVar3);
        }
      }
      else if (param_3 != (int *)0x0) {
        iVar3 = FUN_0011919c(*DAT_005ca454,param_3);
        FUN_003019cc(*puVar1,param_1[1]);
        if (iVar3 != 1) {
          FUN_0011919c(*puVar2,iVar3);
        }
      }
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      *(undefined1 *)(param_1 + 3) = 0;
      return 0;
    }
  }
  return 0;
}


