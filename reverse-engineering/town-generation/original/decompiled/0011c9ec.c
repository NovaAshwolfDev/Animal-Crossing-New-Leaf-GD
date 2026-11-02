/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0011c9ec. Provisional types; not original source or a verified portable implementation. */

void FUN_0011c9ec(int *param_1)

{
  int local_8 [2];
  
  local_8[0] = *(int *)(*param_1 + 0xc4);
  if (local_8[0] == 0) {
    local_8[0] = 0;
  }
  else {
    local_8[0] = *param_1 + 0xc4 + local_8[0];
  }
  if (local_8[0] != 0) {
    FUN_00124508(local_8);
  }
  return;
}


