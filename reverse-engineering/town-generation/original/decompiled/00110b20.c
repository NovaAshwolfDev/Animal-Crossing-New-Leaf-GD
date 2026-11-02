/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00110b20. Provisional types; not original source or a verified portable implementation. */

void FUN_00110b20(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,int param_6,int param_7,int param_8)

{
  int iVar1;
  
  iVar1 = FUN_00116c18(param_2,param_3,param_4);
  *param_1 = (longlong)DAT_00110b8c * (longlong)iVar1 +
             (longlong)DAT_00110b88 * (longlong)param_5 + (longlong)param_8 +
             (longlong)param_7 * 1000 + (longlong)param_6 * (longlong)DAT_00110b84;
  return;
}


