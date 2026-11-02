/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0011afc4. Provisional types; not original source or a verified portable implementation. */

undefined8 FUN_0011afc4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  
  pcVar1 = (code *)*DAT_0011be48;
  if (pcVar1 != (code *)0x0) {
    *DAT_0011be48 = 0;
    (*pcVar1)(0,0,0,0,0,param_3);
  }
  software_interrupt(0x3c);
  return 0;
}


