/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005cdc18. Provisional types; not original source or a verified portable implementation. */

void FUN_005cdc18(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  puVar1 = DAT_005cdca4;
  uVar4 = param_1[1];
  uVar5 = param_1[2];
  *DAT_005cdca4 = *param_1;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  uVar6 = FUN_005cc318();
  iVar2 = DAT_005cdca8;
  *(undefined8 *)(DAT_005cdca8 + 0x10) = uVar6;
  uVar4 = FUN_00610c2c();
  iVar3 = FUN_00611914(0x80000,uVar4);
  if (iVar3 == 0) {
    uVar4 = FUN_00610c2c();
    iVar3 = FUN_00611914(0x100000,uVar4);
    if (iVar3 == 0) {
      *(uint *)(iVar2 + 0x20) = *(uint *)(iVar2 + 0x10) - *(uint *)(iVar2 + 0x18);
      *(uint *)(iVar2 + 0x24) =
           *(int *)(iVar2 + 0x14) -
           (*(int *)(iVar2 + 0x1c) + (uint)(*(uint *)(iVar2 + 0x10) < *(uint *)(iVar2 + 0x18)));
      return;
    }
  }
  *(uint *)(iVar2 + 0x30) = *(uint *)(iVar2 + 0x10) - *(uint *)(iVar2 + 0x18);
  *(uint *)(iVar2 + 0x34) =
       *(int *)(iVar2 + 0x14) -
       (*(int *)(iVar2 + 0x1c) + (uint)(*(uint *)(iVar2 + 0x10) < *(uint *)(iVar2 + 0x18)));
  return;
}


