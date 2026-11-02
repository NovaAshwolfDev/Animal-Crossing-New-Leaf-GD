/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005a9cd4. Provisional types; not original source or a verified portable implementation. */

int * FUN_005a9cd4(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  int *piVar4;
  bool bVar5;
  int local_68;
  int local_64;
  char local_38;
  char local_37;
  
  if (*param_1 == 0) {
    *param_1 = param_2;
    iVar1 = FUN_00301bac(param_2);
    param_1[3] = iVar1;
  }
  else {
    iVar1 = FUN_005a9714(param_1,&local_38);
    if (iVar1 != 0) {
      bVar5 = local_38 == '\0';
      if (!bVar5) {
        local_38 = local_37;
      }
      if (bVar5 || local_38 == 's') {
        piVar4 = (int *)param_1[1];
        uVar2 = FUN_00301bac(param_2);
        pcVar3 = *(code **)(*piVar4 + 8);
        local_64 = param_2;
      }
      else {
        piVar4 = (int *)param_1[1];
        FUN_008a17dc(&local_68);
        uVar2 = FUN_005ae82c(&local_68,&local_38,param_2);
        (**(code **)(local_68 + 8))(&local_68);
        pcVar3 = *(code **)(*piVar4 + 8);
      }
      (*pcVar3)(piVar4,local_64,uVar2);
    }
  }
  return param_1;
}


