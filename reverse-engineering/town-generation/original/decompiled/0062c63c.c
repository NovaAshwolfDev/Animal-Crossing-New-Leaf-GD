/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0062c63c. Provisional types; not original source or a verified portable implementation. */

void FUN_0062c63c(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  FUN_00125b48(DAT_0062c6b8,4,8);
  uVar2 = DAT_0062c6c0;
  puVar1 = DAT_0062c6bc;
  puVar5 = DAT_0062c6bc + 1;
  puVar6 = DAT_0062c6bc + 2;
  *DAT_0062c6bc = 0;
  *puVar5 = 0;
  *puVar6 = 0;
  uVar3 = DAT_0062c6c4;
  puVar1[3] = 0;
  FUN_002fff30(uVar3,uVar2);
  FUN_00631578();
  puVar4 = DAT_0062c6c8;
  *DAT_0062c6c8 = 0;
  FUN_0062c384(puVar4 + 4);
  *(undefined2 *)(puVar1 + 0x4c) = 0;
  FUN_00635004(puVar1 + 0x4d);
  *puVar1 = 0;
  *puVar5 = 0;
  *puVar6 = 0;
  puVar1[3] = 0;
  return;
}


