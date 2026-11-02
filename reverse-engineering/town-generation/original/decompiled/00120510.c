/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00120510. Provisional types; not original source or a verified portable implementation. */

void FUN_00120510(int *param_1)

{
  *(uint *)(*param_1 + 0x2c) = *(uint *)(*param_1 + 0x2c) & 0xfffffff7;
  if (*(int *)(*param_1 + 0x60) != 0) {
    (**(code **)(**(int **)(*param_1 + 0x80) + 0xc))();
    *(undefined4 *)(*param_1 + 0x60) = 0;
    *(undefined4 *)(*param_1 + 100) = 0;
    if (*(int *)(*param_1 + 0x68) != 0) {
      *(undefined4 *)(*param_1 + 0x68) = 0;
      *(undefined4 *)(*param_1 + 0x6c) = 0;
    }
  }
  return;
}


