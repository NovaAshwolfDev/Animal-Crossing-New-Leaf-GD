/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007dc980. Provisional types; not original source or a verified portable implementation. */

uint FUN_007dc980(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = *param_1;
  bVar3 = iVar2 != 0;
  if (bVar3) {
    iVar2 = param_1[1];
  }
  if (bVar3 && iVar2 != 0) {
    iVar2 = *param_2;
    bVar3 = iVar2 != 0;
    if (bVar3) {
      iVar2 = param_2[1];
    }
    if (((bVar3 && iVar2 != 0) && (param_2[2] == param_1[2])) && (param_2[3] == param_1[3])) {
      uVar1 = 1;
      goto LAB_007dc9d0;
    }
  }
  uVar1 = 0;
LAB_007dc9d0:
  return uVar1 ^ 1;
}


