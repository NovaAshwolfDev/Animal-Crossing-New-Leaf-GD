/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 001226fc. Provisional types; not original source or a verified portable implementation. */

int FUN_001226fc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = DAT_001227ac;
  FUN_0011f990(DAT_001227ac);
  puVar3 = *(undefined4 **)(iVar1 + -0x14);
  puVar4 = puVar3 + *(int *)(iVar1 + -0x1c);
  for (; puVar3 != puVar4; puVar3 = puVar3 + 1) {
    iVar2 = FUN_00121530(*puVar3,param_2);
    if (iVar2 != 0) goto LAB_0012277c;
  }
  puVar3 = (undefined4 *)DAT_001227b0[2];
  puVar4 = puVar3 + *DAT_001227b0;
  while( true ) {
    if (puVar3 == puVar4) {
      FUN_001214d0(iVar1);
      return 0;
    }
    iVar2 = FUN_00121530(*puVar3,param_2);
    if (iVar2 != 0) break;
    puVar3 = puVar3 + 1;
  }
LAB_0012277c:
  FUN_001214d0(iVar1);
  return iVar2;
}


