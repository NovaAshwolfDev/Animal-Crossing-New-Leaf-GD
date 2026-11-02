/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00757b9c. Provisional types; not original source or a verified portable implementation. */

undefined1 * FUN_00757b9c(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int local_18 [4];
  
  puVar1 = (undefined4 *)FUN_0066c09c(local_18,param_1,9);
  *puVar1 = DAT_00757bfc;
  if (param_2 == 0) {
    (**(code **)(local_18[0] + 0x1c))(local_18);
  }
  else {
    (**(code **)(local_18[0] + 0x14))(local_18,param_2);
  }
  return (undefined1 *)local_18;
}


