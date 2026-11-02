/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005893d4. Provisional types; not original source or a verified portable implementation. */

int FUN_005893d4(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  
  iVar1 = FUN_005dc594(param_3 + 1,param_4);
  if (iVar1 != 0) {
    iVar1 = FUN_005dc594(param_3 + -2,param_4);
    if (iVar1 != 0) {
      iVar1 = FUN_005dc594(param_3 + -1,param_4);
      if (iVar1 != 0) {
        iVar1 = FUN_005dc594(param_3 + -2,param_4 + 1);
        if (iVar1 != 0) {
          iVar1 = FUN_005dc594(param_3 + -1,param_4 + 1);
          if (iVar1 != 0) {
            iVar1 = FUN_005dc594(param_3,param_4 + 1);
            if (iVar1 != 0) {
              iVar1 = FUN_005dc594(param_3 + 1,param_4 + 1);
              if (iVar1 != 0) {
                iVar1 = FUN_007f32bc(param_2,param_3,param_4);
                if ((((iVar1 == 0x36) &&
                     (iVar1 = FUN_007f32bc(param_2,param_3 + -1,param_4), iVar1 == 0x36)) &&
                    (iVar1 = FUN_007f32bc(param_2,param_3 + -2,param_4), iVar1 == 0x36)) &&
                   (iVar1 = FUN_007f32bc(param_2,param_3 + 1,param_4), iVar1 == 0x36)) {
                  uVar2 = FUN_007f32bc(param_2,param_3 + -2,param_4 + 1);
                  uVar3 = FUN_007f32bc(param_2,param_3 + -1,param_4 + 1);
                  uVar4 = FUN_007f32bc(param_2,param_3,param_4 + 1);
                  uVar5 = FUN_007f32bc(param_2,param_3 + 1,param_4 + 1);
                  iVar1 = FUN_0063b048(uVar2);
                  if (((iVar1 == 2) && (iVar1 = FUN_0063b048(uVar3), iVar1 == 2)) &&
                     ((iVar1 = FUN_0063b048(uVar4), iVar1 == 2 &&
                      ((iVar1 = FUN_0063b048(uVar5), iVar1 == 2 &&
                       (piVar6 = (int *)FUN_005ca634(param_1 + 4,8,4), piVar6 != (int *)0x0)))))) {
                    piVar6[1] = param_4;
                    *piVar6 = param_3;
                    if (*(int *)(param_1 + 0xc) < *(int *)(param_1 + 0x10)) {
                      *(int **)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0xc) * 4) = piVar6;
                      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
                    }
                  }
                }
                iVar1 = 0;
              }
            }
          }
        }
      }
    }
  }
  return iVar1;
}


