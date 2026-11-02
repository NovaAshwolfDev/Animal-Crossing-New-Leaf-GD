/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007b19c8. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_007b19c8(undefined4 param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 local_78 [24];
  undefined1 auStack_60 [20];
  undefined1 local_4c [24];
  undefined1 auStack_34 [24];
  
  puVar2 = (undefined4 *)FUN_0066c09c(local_78,auStack_60,9);
  uVar5 = DAT_007b1af8;
  *puVar2 = DAT_007b1af8;
  iVar3 = FUN_00664320(puVar2 + 3);
  FUN_002fff30(iVar3 + 0xc,0x12);
  puVar1 = DAT_007b1afc;
  puVar4 = (undefined2 *)(iVar3 + 0xc);
  *(undefined2 *)(iVar3 + 0xc) = *DAT_007b1afc;
  iVar6 = 4;
  do {
    iVar6 = iVar6 + -1;
    puVar4[1] = *puVar1;
    puVar4 = puVar4 + 2;
    *puVar4 = *puVar1;
  } while (iVar6 != 0);
  FUN_005cdf04(iVar3 + -0xc,param_1,0);
  puVar2 = (undefined4 *)FUN_0066c09c(local_4c,auStack_34,9);
  *puVar2 = uVar5;
  iVar3 = FUN_00664320(puVar2 + 3);
  FUN_002fff30(iVar3 + 0xc,0x12);
  puVar4 = (undefined2 *)(iVar3 + 0xc);
  *(undefined2 *)(iVar3 + 0xc) = *puVar1;
  iVar6 = 4;
  do {
    iVar6 = iVar6 + -1;
    puVar4[1] = *puVar1;
    puVar4 = puVar4 + 2;
    *puVar4 = *puVar1;
  } while (iVar6 != 0);
  FUN_005cdf04(iVar3 + -0xc,param_2,0);
  uVar5 = FUN_007efeb0(local_78,local_4c);
  return uVar5;
}


