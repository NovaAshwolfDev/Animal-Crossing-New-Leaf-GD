/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 006387cc. Provisional types; not original source or a verified portable implementation. */

undefined1 * FUN_006387cc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined1 local_40 [24];
  undefined1 auStack_28 [20];
  
  puVar2 = (undefined4 *)FUN_0066c09c(local_40,auStack_28,9);
  *puVar2 = DAT_00638870;
  iVar3 = FUN_00664320(puVar2 + 3);
  FUN_002fff30(iVar3 + 0xc,0x12);
  puVar1 = DAT_00638874;
  puVar4 = (undefined2 *)(iVar3 + 0xc);
  *(undefined2 *)(iVar3 + 0xc) = *DAT_00638874;
  iVar5 = 4;
  do {
    iVar5 = iVar5 + -1;
    puVar4[1] = *puVar1;
    puVar4 = puVar4 + 2;
    *puVar4 = *puVar1;
  } while (iVar5 != 0);
  FUN_005ce23c(iVar3 + -0xc,param_3);
  FUN_0065f9ac(param_2,local_40,0);
  return local_40;
}


