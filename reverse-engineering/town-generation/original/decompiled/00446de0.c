/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00446de0. Provisional types; not original source or a verified portable implementation. */

int FUN_00446de0(void)

{
  if (*DAT_00446dfc != 0) {
    software_interrupt(0x23);
    return *DAT_00446dfc;
  }
  return DAT_00446e00;
}


