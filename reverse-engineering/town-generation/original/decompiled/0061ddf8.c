/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0061ddf8. Provisional types; not original source or a verified portable implementation. */

/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_0061ddf8(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uStack_18;
  
  uStack_18 = param_4;
  iVar1 = FUN_006b08b8(param_2,param_4,param_5,param_6);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_0061da90(param_1,param_3);
  if (iVar1 != 0) {
    uVar2 = FUN_005cc158();
    FUN_00636e9c(iVar1 + 0xe4,uVar2);
    FUN_00756da4(&uStack_18,param_2 + 0x274);
    iVar3 = FUN_00802710(&uStack_18);
    if (iVar3 == 0) {
      iVar3 = FUN_007fe108(&uStack_18);
      if (iVar3 != 0x2c) {
        if (iVar3 < 0x2d) {
          if (iVar3 != 0xc) {
            if (iVar3 < 0xd) {
              if ((iVar3 != 3 && iVar3 != 4) && (iVar3 != 5 && iVar3 != 6)) {
                return 1;
              }
            }
            else if ((iVar3 != 0xd && iVar3 != 0x19) && (iVar3 != 0x24 && iVar3 != 0x27)) {
              return 1;
            }
          }
        }
        else if (iVar3 != 0x40) {
          if (iVar3 < 0x41) {
            if ((iVar3 != 0x2e && iVar3 != 0x36) && (iVar3 != 0x37 && iVar3 != 0x38)) {
              return 1;
            }
          }
          else if ((iVar3 != 0x54 && iVar3 != 0x55) && (iVar3 != 0x58 && iVar3 != 0x59)) {
            return 1;
          }
        }
      }
      iVar3 = iVar1 + 0x7e;
      uVar4 = 0;
      do {
        FUN_00756eb0(iVar3,iVar3 + -4);
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + -4;
      } while (uVar4 < 7);
      FUN_00756eb0(iVar1 + 0x62,&uStack_18);
    }
  }
  return 1;
}


