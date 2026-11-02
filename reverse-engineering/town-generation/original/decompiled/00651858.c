/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00651858. Provisional types; not original source or a verified portable implementation. */

void FUN_00651858(int param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0x60);
  bVar2 = iVar1 != 0;
  if (bVar2) {
    iVar1 = *param_2;
  }
  if (!bVar2 || iVar1 == 0) {
    return;
  }
  FUN_0066ff2c(param_1,param_2,DAT_00651894);
  FUN_0066fd88(param_1,DAT_00651894);
  return;
}


