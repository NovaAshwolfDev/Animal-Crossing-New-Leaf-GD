/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005883e4. Provisional types; not original source or a verified portable implementation. */

int FUN_005883e4(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int local_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  undefined1 auStack_28 [20];
  
  iVar1 = FUN_00769904(param_2);
  if (iVar1 == 0) {
    pcVar4 = (char *)FUN_00636178(param_2);
    iStack_54 = (int)pcVar4[1];
    local_58 = (int)*pcVar4;
    iStack_4c = (int)pcVar4[3];
    local_50 = (int)pcVar4[2];
    FUN_0059b0e0(auStack_28,&local_58,&local_50);
    local_58 = param_3;
    FUN_00290014(&iStack_54,*param_1,param_1[1],auStack_28);
    iVar1 = FUN_007b44a8(&iStack_54);
    iVar5 = 0;
    if ((((((iVar1 == 0) && (iVar1 = FUN_0028eb78(&iStack_54), iVar1 == 0)) &&
          (iVar1 = FUN_0028f2f0(&iStack_54), iVar1 == 0)) &&
         ((iVar1 = FUN_007b483c(&iStack_54), iVar1 == 0 &&
          (iVar1 = FUN_0028ed64(&iStack_54), iVar1 == 0)))) &&
        ((iVar1 = FUN_0028fc84(&iStack_54), iVar1 == 0 &&
         ((iVar1 = FUN_0028faa4(&iStack_54), iVar1 == 0 &&
          (iVar1 = FUN_007b433c(&iStack_54), iVar1 == 0)))))) &&
       (iVar1 = FUN_0028e998(&iStack_54), iVar1 == 0)) {
      FUN_0059b140(&iStack_54);
      iVar5 = 1;
    }
    else {
      FUN_0059b140(&iStack_54);
    }
    return iVar5;
  }
  uVar2 = FUN_007611f8(*param_1,param_1[1],param_3 == 1);
  iVar1 = FUN_002873e0();
  if (iVar1 != 0) {
    uVar3 = FUN_002858a4(param_2);
    iVar1 = FUN_002887e0(uVar2,uVar3);
    if (iVar1 == param_2) {
      iVar1 = 1;
    }
    else {
      iVar1 = 0;
    }
  }
  return iVar1;
}


