/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005cc1fc. Provisional types; not original source or a verified portable implementation. */

void FUN_005cc1fc(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined4 local_28;
  int iStack_24;
  uint local_20;
  int iStack_1c;
  
  FUN_00110b20(&local_20,*param_1,(int)*(char *)(param_1 + 1),(int)*(char *)((int)param_1 + 5),
               (int)*(char *)((int)param_1 + 7),(int)*(char *)(param_1 + 2),
               (int)*(char *)((int)param_1 + 9),(int)*(short *)((int)param_1 + 10));
  iVar3 = iStack_1c;
  uVar2 = local_20;
  lVar1 = CONCAT44(iStack_1c,local_20);
  FUN_00110b20(&local_20,*param_2,(int)*(char *)(param_2 + 1),(int)*(char *)((int)param_2 + 5),
               (int)*(char *)((int)param_2 + 7),(int)*(char *)(param_2 + 2),
               (int)*(char *)((int)param_2 + 9),(int)*(short *)((int)param_2 + 10));
  if (((param_3 != 0) && ((*(byte *)(DAT_005cc2f0 + 2) & 1) != 0)) &&
     ((int)(iVar3 - (iStack_1c + (uint)(uVar2 < local_20))) < 0 !=
      (SBORROW4(iVar3,iStack_1c) != SBORROW4(iVar3 - iStack_1c,(uint)(uVar2 < local_20))))) {
    lVar4 = FUN_00119e54(DAT_005cc2f4,0x12,DAT_005cc2f8,DAT_005cc2fc,0x12);
    lVar1 = lVar4 + lVar1;
  }
  lVar4 = (ulonglong)DAT_005cc300 * (ulonglong)((uint)lVar1 - local_20);
  local_28 = (undefined4)lVar4;
  iStack_24 = ((int)((ulonglong)lVar1 >> 0x20) - (iStack_1c + (uint)((uint)lVar1 < local_20))) *
              DAT_005cc300 + (int)((ulonglong)lVar4 >> 0x20);
  FUN_00119e54(&local_28,iStack_24,DAT_005cc304,DAT_005cc308,0x2d);
  return;
}


