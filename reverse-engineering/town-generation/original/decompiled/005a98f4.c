/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005a98f4. Provisional types; not original source or a verified portable implementation. */

void FUN_005a98f4(char *param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  int local_40;
  undefined4 local_3c;
  
  FUN_008a17dc(&local_40);
  if (param_2 == 0) {
    uVar1 = FUN_005ae82c(&local_40,&LAB_005a9974,(int)*param_1);
  }
  else {
    uVar1 = FUN_005ae82c(&local_40,param_2,(int)*param_1);
  }
  (**(code **)(local_40 + 8))(&local_40);
  (**(code **)(*param_3 + 8))(param_3,local_3c,uVar1);
  return;
}


