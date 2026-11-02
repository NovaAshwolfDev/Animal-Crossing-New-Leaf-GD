/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007c3f50. Provisional types; not original source or a verified portable implementation. */

int FUN_007c3f50(int param_1,uint param_2,uint *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint local_10;
  
  if (param_3 == (uint *)0x0) {
    param_3 = &local_10;
  }
  local_10 = param_4 & 0xffffff00;
  if (param_2 < 0x10) {
    iVar2 = param_1 + param_2 * 4;
    *(undefined1 *)param_3 = *(undefined1 *)(param_1 + param_2 + 0x40);
    iVar1 = FUN_00802710(iVar2);
    if ((iVar1 != 0) || (iVar1 = FUN_007ff8b8(iVar2), iVar1 != 0)) {
      return iVar2;
    }
  }
  return DAT_007c3fac;
}


