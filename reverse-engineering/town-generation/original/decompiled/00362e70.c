/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00362e70. Provisional types; not original source or a verified portable implementation. */

undefined4
FUN_00362e70(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined1 auStack_1c [4];
  
  FUN_00756dbc(auStack_1c);
  iVar1 = FUN_00404d30(param_1,param_2,param_3,param_4,auStack_1c);
  if (iVar1 != 0) {
    if (param_5 != 0) {
      FUN_007972cc(param_1 + 0x50,auStack_1c,0);
      FUN_007972cc(param_1 + 0x50,param_3,0);
    }
    return 1;
  }
  return 0;
}


