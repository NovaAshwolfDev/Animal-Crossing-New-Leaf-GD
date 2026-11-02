/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 003267b8. Provisional types; not original source or a verified portable implementation. */

int FUN_003267b8(void)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  
  puVar2 = (undefined4 *)FUN_0064cdfc();
  *puVar2 = DAT_0032682c;
  iVar3 = FUN_0066c0b4(puVar2 + 0x2c);
  puVar2 = (undefined4 *)FUN_0066c09c(iVar3 + 0xc,iVar3 + 0x24,9);
  *puVar2 = DAT_00326830;
  iVar3 = FUN_00664320(puVar2 + 3);
  FUN_002fff30(iVar3 + 0xc,0x12);
  puVar1 = DAT_00326834;
  puVar4 = (undefined2 *)(iVar3 + 0xc);
  *(undefined2 *)(iVar3 + 0xc) = *DAT_00326834;
  iVar5 = 4;
  do {
    iVar5 = iVar5 + -1;
    puVar4[1] = *puVar1;
    puVar4 = puVar4 + 2;
    *puVar4 = *puVar1;
  } while (iVar5 != 0);
  return iVar3 + -200;
}


