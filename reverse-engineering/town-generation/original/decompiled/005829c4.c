/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005829c4. Provisional types; not original source or a verified portable implementation. */

/* WARNING: Removing unreachable block (ram,0x00582aa8) */

void FUN_005829c4(byte *param_1,undefined4 param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = DAT_00582b28;
  if (param_3 == 0) {
    param_3 = *(uint *)(DAT_00582b28 + 0x234);
  }
  *param_1 = 0;
  uVar3 = param_3;
  if (param_3 == 0) {
    uVar3 = *(uint *)(iVar2 + 0x234);
  }
  iVar2 = FUN_007f3734(param_2);
  if ((-iVar2 & uVar3) == 0) {
    bVar1 = *param_1;
    if (0x1f < bVar1) {
      bVar1 = 0x20;
    }
    *param_1 = bVar1;
    iVar2 = FUN_007f3734(param_2);
    if ((((-iVar2 & param_3) != 0) && (iVar2 = FUN_007ea170(param_2,param_3 + 0x55a6), iVar2 != 0))
       || ((iVar2 = FUN_007f3734(param_2), (-iVar2 & param_3) != 0 &&
           (iVar2 = FUN_007e9a44(param_2,param_3 + 0x55a6), iVar2 != 0)))) {
      *param_1 = 0x20;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0063653c();
}


