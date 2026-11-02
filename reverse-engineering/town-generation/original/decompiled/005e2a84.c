/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005e2a84. Provisional types; not original source or a verified portable implementation. */

void FUN_005e2a84(int param_1)

{
  int iVar1;
  undefined1 auStack_54 [44];
  undefined1 auStack_28 [24];
  undefined1 local_10 [4];
  
  if ((((*(char *)(param_1 + 0xa8) != '\0') &&
       (iVar1 = FUN_0013912c(auStack_54,4,param_1,0,0), iVar1 == 0)) &&
      (iVar1 = FUN_00139ecc(local_10,auStack_28), iVar1 != 0)) &&
     (iVar1 = FUN_001394e4(param_1,0), iVar1 == 0)) {
    *(undefined1 *)(param_1 + 0xa8) = 1;
  }
  return;
}


