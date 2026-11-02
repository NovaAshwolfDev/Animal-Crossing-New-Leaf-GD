/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005cb9a4. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_005cb9a4(int param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  if (param_1 == param_4) {
    if ((char)param_2 == (char)param_5) {
      if ((param_5 << 0x10) >> 0x18 <= (param_2 << 0x10) >> 0x18) {
        return 1;
      }
    }
    else if ((char)param_5 <= (char)param_2) {
      return 1;
    }
  }
  else if (param_4 <= param_1) {
    return 1;
  }
  return 0;
}


