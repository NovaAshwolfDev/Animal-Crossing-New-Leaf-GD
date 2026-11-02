/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005cc318. Provisional types; not original source or a verified portable implementation. */

undefined8 FUN_005cc318(undefined4 *param_1)

{
  longlong lVar1;
  uint local_10;
  int local_c;
  
  FUN_00110b20(&local_10,*param_1,(int)*(char *)(param_1 + 1),(int)*(char *)((int)param_1 + 5),
               (int)*(char *)((int)param_1 + 7),(int)*(char *)(param_1 + 2),
               (int)*(char *)((int)param_1 + 9),(int)*(short *)((int)param_1 + 10));
  lVar1 = (ulonglong)DAT_005cc384 * (ulonglong)(local_10 - *DAT_005cc380);
  return CONCAT44((local_c - (DAT_005cc380[1] + (uint)(local_10 < *DAT_005cc380))) * DAT_005cc384 +
                  (int)((ulonglong)lVar1 >> 0x20),(int)lVar1);
}


