/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0011fcdc. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_0011fcdc(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = *param_1;
  }
  else {
    uVar1 = *(undefined4 *)((uint)*(ushort *)((int)param_1 + 10) + param_2 + 4);
  }
  return uVar1;
}


