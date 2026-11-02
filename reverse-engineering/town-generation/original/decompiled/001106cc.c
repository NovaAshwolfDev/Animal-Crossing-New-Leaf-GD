/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 001106cc. Provisional types; not original source or a verified portable implementation. */

uint FUN_001106cc(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = FUN_001110ec();
  if (iVar1 < 0) {
    FUN_0011afc4();
  }
  uVar3 = DAT_00110720;
  if (*param_1 == 0) {
    uVar2 = FUN_00301bac(param_2);
    uVar3 = FUN_00111154(param_1,param_2,uVar2,0);
    if ((uVar3 & 0x80000000) != 0) {
      uVar3 = DAT_00110724;
    }
  }
  return uVar3;
}


