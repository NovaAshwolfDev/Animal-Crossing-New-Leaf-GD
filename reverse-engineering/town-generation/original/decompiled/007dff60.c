/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007dff60. Provisional types; not original source or a verified portable implementation. */

uint FUN_007dff60(undefined4 param_1)

{
  uint uVar1;
  int local_34;
  int local_30;
  int local_28;
  int local_24;
  undefined1 auStack_18 [12];
  
  FUN_0063ac18(auStack_18,param_1);
  FUN_0063ac4c(auStack_18);
  FUN_005cca58(&local_28);
  FUN_007edb08(&local_34,auStack_18);
  if (((local_28 == local_34) && ((char)local_24 == (char)local_30)) &&
     ((local_24 << 0x10) >> 0x18 == (local_30 << 0x10) >> 0x18)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1 ^ 1;
}


