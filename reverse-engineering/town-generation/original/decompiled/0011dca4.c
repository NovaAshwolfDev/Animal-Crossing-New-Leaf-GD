/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0011dca4. Provisional types; not original source or a verified portable implementation. */

void FUN_0011dca4(uint param_1,uint param_2)

{
  longlong lVar1;
  
  lVar1 = (ulonglong)param_1 * 3 +
          ((ulonglong)
           (((int)param_2 >> 0x1f) * DAT_0011dcec +
           (int)((ulonglong)DAT_0011dcec * (ulonglong)param_2 >> 0x20)) << 0x20 |
          (ulonglong)DAT_0011dcec * (ulonglong)param_2 & 0xffffffff) +
          CONCAT44(param_2 * 3,(int)((ulonglong)DAT_0011dcec * (ulonglong)param_1 >> 0x20));
  FUN_0011690c((int)lVar1,(int)((ulonglong)lVar1 >> 0x20));
  return;
}


