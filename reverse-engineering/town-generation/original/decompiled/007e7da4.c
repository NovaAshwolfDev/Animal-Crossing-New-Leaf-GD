/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007e7da4. Provisional types; not original source or a verified portable implementation. */

int FUN_007e7da4(undefined4 param_1,uint param_2,int param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  int local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  int local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  iVar1 = FUN_007f3734();
  if ((((iVar1 != 0) && (param_2 < 0x1e)) && (-1 < param_3)) && (param_3 < 0x1e)) {
    if (param_4 == (int *)0x0) {
      piVar2 = (int *)FUN_005cc158();
      local_4c = *piVar2;
      local_48 = piVar2[1];
      local_44 = piVar2[2];
    }
    else {
      local_4c = *param_4;
      local_48 = param_4[1];
      local_44 = param_4[2];
    }
    FUN_005cd238(&local_4c);
    uVar4 = 0;
    uVar5 = 0;
    FUN_005cd0b8(&local_40,local_4c);
    iVar1 = local_4c;
    if (param_2 != 0 || param_3 != 0) {
      local_2c = local_40;
      local_28 = local_3c;
      uStack_24 = uStack_38;
      FUN_005cd014(&local_2c,-param_2,0,0,0,uVar4);
      local_20 = local_40;
      local_1c = local_3c;
      uStack_18 = uStack_38;
      FUN_005cd014(&local_20,param_3,0,0,0);
      if (local_2c == local_20) {
        iVar3 = FUN_005cb9a4(local_4c,local_48,local_44,local_2c,local_28,uStack_24);
        if (iVar3 == 0) {
          return -1;
        }
        iVar3 = FUN_005cb9a4(local_20,local_1c,uStack_18,local_4c,local_48,local_44);
        if (iVar3 == 0) {
          return -1;
        }
      }
      else if (((char)local_28 < (char)local_48) ||
              (((char)local_48 == (char)local_28 && (local_28._1_1_ <= local_48._1_1_)))) {
        if ((char)local_3c < (char)local_28) {
          return iVar1 + 1;
        }
      }
      else {
        if ((char)local_1c <= (char)local_48) {
          if ((char)local_48 != (char)local_1c) {
            return -1;
          }
          if (local_1c._1_1_ < local_48._1_1_) {
            return -1;
          }
        }
        if ((char)local_1c < (char)local_3c) {
          return iVar1 + -1;
        }
      }
      return iVar1;
    }
    iVar1 = FUN_005cbd4c(local_4c,local_48,local_44,local_40,local_3c,uStack_38,uVar5);
    if (iVar1 != 0) {
      return local_40;
    }
  }
  return -1;
}


