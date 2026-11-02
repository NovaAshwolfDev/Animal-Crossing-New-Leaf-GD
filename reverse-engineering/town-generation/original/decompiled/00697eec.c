/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00697eec. Provisional types; not original source or a verified portable implementation. */

void FUN_00697eec(int *param_1,int param_2)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar2 = FUN_0011df38(0x10000);
  *(undefined2 *)(param_1 + 1) = uVar2;
  bVar1 = FUN_0011df38(0x1a);
  iVar3 = DAT_00697f58;
  *(byte *)((int)param_1 + 6) = bVar1;
  uVar4 = FUN_00300d80((uint)*(ushort *)(param_1 + 1) + iVar3 + param_2,0,bVar1 + 4);
  iVar3 = (int)uVar4 + (int)((ulonglong)uVar4 >> 0x20);
  *param_1 = iVar3;
  *(char *)((int)param_1 + 7) =
       (char)iVar3 + (char)((uint)iVar3 >> 0x18) +
       (char)((uint)iVar3 >> 0x10) + (char)((uint)iVar3 >> 8) + -0x46;
  return;
}


