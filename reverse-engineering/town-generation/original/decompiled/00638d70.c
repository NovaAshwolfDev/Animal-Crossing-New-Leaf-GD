/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00638d70. Provisional types; not original source or a verified portable implementation. */

void FUN_00638d70(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = *(char *)(param_1 + 0x30);
  if (cVar1 == '\x01') {
LAB_00638da8:
    uVar2 = 3;
  }
  else {
    if (cVar1 != '\x02') {
      if (cVar1 == '\x03') goto LAB_00638da8;
      if (cVar1 != '\x04') {
        *(undefined1 *)(param_1 + 0x30) = 5;
        return;
      }
    }
    uVar2 = 4;
  }
  *(undefined1 *)(param_1 + 0x30) = uVar2;
  return;
}


