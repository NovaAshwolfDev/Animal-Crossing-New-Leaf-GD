/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00572dbc. Provisional types; not original source or a verified portable implementation. */

undefined8
FUN_00572dbc(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            int param_5)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_5 != 0) {
    FUN_00444c7c(0);
  }
  uVar1 = FUN_00444e6c(param_3,0);
  uVar2 = FUN_00445e34(param_1,uVar1,param_4,*param_2,param_2[1],param_2[2],param_2[3],param_2[4],
                       param_2[5],param_2[6],param_2[7],param_2[8],0x19000);
  if ((uVar2 & 0x80000000) == 0) {
    uVar1 = 0;
    uVar3 = 0;
  }
  else if (uVar2 == DAT_00572e98) {
    uVar1 = 5;
    uVar3 = DAT_00572e98;
  }
  else if (uVar2 == DAT_00572e9c) {
    uVar1 = 6;
    uVar3 = DAT_00572e9c;
  }
  else if (uVar2 == DAT_00572ea0) {
    uVar1 = 1;
    uVar3 = DAT_00572ea0;
  }
  else {
    uVar3 = DAT_00572ea4;
    if (uVar2 != DAT_00572ea4) {
      uVar3 = DAT_00572ea8;
    }
    if (uVar2 != DAT_00572ea4 && uVar2 != uVar3) {
      uVar3 = DAT_00572eac;
    }
    uVar1 = 7;
  }
  return CONCAT44(uVar3,uVar1);
}


