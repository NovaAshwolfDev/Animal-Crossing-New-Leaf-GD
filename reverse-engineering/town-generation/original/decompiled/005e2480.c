/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005e2480. Provisional types; not original source or a verified portable implementation. */

int FUN_005e2480(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00611914(0x80,param_1);
  if ((iVar1 == 0) && (iVar1 = FUN_00611914(0x2000,param_1), iVar1 == 0)) {
    iVar1 = FUN_00611914(0x40,param_1);
    if (iVar1 == 0) {
      iVar1 = FUN_00611914(0x4000,param_1);
      if (iVar1 == 0) {
        if (param_1 == 0x25) {
          return DAT_005e260c;
        }
        iVar1 = FUN_00611914(0x400000,param_1);
        if (iVar1 != 0) {
          return DAT_005e2610;
        }
        if (param_1 == 0x55) {
          return DAT_005e2614;
        }
        if (param_1 == 0x46) {
          iVar1 = FUN_00768a98(0);
          if (iVar1 != 0) {
            return DAT_005e2630;
          }
        }
        else {
          if (param_1 == 0x2b) {
            return DAT_005e2618;
          }
          if (param_1 == 0x3e) {
            return DAT_005e261c;
          }
          if (param_1 == 0x3f) {
            return DAT_005e2620;
          }
          if (param_1 == 0x40) {
            return DAT_005e2624;
          }
          if (param_1 == 0x42) {
            return DAT_005e2628;
          }
          if (param_1 == 0x67) {
            return DAT_005e262c;
          }
          iVar1 = 0;
        }
        iVar1 = FUN_00789368(iVar1);
        if (iVar1 == 0) {
          return 0;
        }
        iVar1 = FUN_006115e0(param_1);
        if (iVar1 == 0) {
          return 0;
        }
        uVar2 = param_1 - 0x81;
        iVar1 = DAT_005e2634;
      }
      else {
        uVar2 = FUN_007a2498(param_1);
        iVar1 = DAT_005e2608;
      }
      if (5 < uVar2) {
        return 0;
      }
      iVar1 = iVar1 + uVar2 * 0x40;
    }
    else {
      uVar2 = FUN_0061113c(0x40);
      if (9 < uVar2) {
        return 0;
      }
      iVar1 = DAT_005e2604 + uVar2 * 0x40;
    }
  }
  else {
    iVar1 = FUN_007a12e4(param_1);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = iVar1 + 0x22;
  }
  return iVar1;
}


