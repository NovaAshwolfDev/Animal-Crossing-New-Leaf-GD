/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00761248. Provisional types; not original source or a verified portable implementation. */

uint FUN_00761248(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0074702c(param_5);
  if (((iVar1 == 0) || (iVar1 = FUN_007e206c(iVar1,param_1,param_2), iVar1 == 0)) ||
     (uVar2 = FUN_007f32bc(iVar1,param_3,param_4), 0xfc < uVar2)) {
    uVar2 = 0;
  }
  return uVar2;
}


