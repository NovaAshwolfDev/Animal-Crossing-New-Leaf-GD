/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00697df4. Provisional types; not original source or a verified portable implementation. */

void FUN_00697df4(uint *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined8 uVar4;
  
  uVar2 = *param_1;
  if ((uint)*(byte *)((int)param_1 + 7) ==
      ((uVar2 >> 0x10) + (uVar2 >> 8) + uVar2 + (uVar2 >> 0x18) + 0xba & 0xff)) {
    uVar4 = FUN_00300d80(uVar2,0,0x1c - (uint)*(byte *)((int)param_1 + 6));
    uVar2 = ((int)uVar4 + (int)((ulonglong)uVar4 >> 0x20)) -
            ((uint)(ushort)param_1[1] + DAT_00697e90);
  }
  else {
    uVar2 = 0;
  }
  bVar3 = uVar2 + param_2 <= param_3;
  iVar1 = -((uint)CARRY4(uVar2,param_2) + (uint)!bVar3);
  if (-(uint)CARRY4(uVar2,param_2) < (uint)bVar3) {
    FUN_00697eec(param_1,uVar2 + param_2,iVar1);
    return;
  }
  FUN_00697eec(param_1,param_3,iVar1);
  return;
}


