/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0074860c. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_0074860c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uStack_10;
  char *pcStack_c;
  
  uVar1 = 1;
  if (*(int *)(param_1 + 8) == 0) {
    uStack_10 = DAT_00748684;
    pcStack_c = "CecMessageBoxIcon";
    FUN_005c774c(param_1 + 0x34,0x1600,param_2,&uStack_10,1);
    uVar1 = thunk_FUN_005ca2fc(param_1 + 4,*DAT_00748688,*(undefined4 *)(param_1 + 0x38),0);
  }
  return uVar1;
}


