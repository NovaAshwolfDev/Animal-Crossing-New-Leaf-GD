/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007ef908. Provisional types; not original source or a verified portable implementation. */

int * FUN_007ef908(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_30;
  int local_2c;
  
  piVar2 = *(int **)(param_1 + 8);
  if (piVar2 != (int *)(param_1 + 8)) {
    iVar3 = DAT_007ef9c8;
    do {
      piVar1 = piVar2 + -0x21;
      local_30 = iVar3;
      local_2c = param_2;
      (**(code **)(piVar2[-0x21] + 8))(piVar1);
      (**(code **)(*piVar1 + 8))(piVar1);
      iVar4 = piVar2[-0x20];
      (**(code **)(local_30 + 8))(&local_30);
      if (iVar4 == local_2c) {
LAB_007ef9c0:
        return piVar2 + -100;
      }
      iVar4 = 0;
      do {
        if (*(char *)(piVar2[-0x20] + iVar4) != *(char *)(local_2c + iVar4)) break;
        if (*(char *)(piVar2[-0x20] + iVar4) == '\0') goto LAB_007ef9c0;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x40001);
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)(param_1 + 8));
  }
  return (int *)0x0;
}


