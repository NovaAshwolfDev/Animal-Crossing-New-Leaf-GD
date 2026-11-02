/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007fdfd8. Provisional types; not original source or a verified portable implementation. */

bool FUN_007fdfd8(int param_1,ushort *param_2,byte param_3)

{
  FUN_00756eb0(param_1 + 0x274);
  *(byte *)(param_1 + 0x270) = *(byte *)(param_1 + 0x270) & 0xe7 | (param_3 & 3) << 3;
  return (*param_2 & 0x6000) == 0x4000;
}


