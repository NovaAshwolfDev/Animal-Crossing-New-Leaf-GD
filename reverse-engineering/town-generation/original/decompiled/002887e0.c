/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 002887e0. Provisional types; not original source or a verified portable implementation. */

char FUN_002887e0(undefined4 param_1,char param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = -8;
  switch(param_1) {
  case 0x94:
  case 0x98:
    cVar1 = -0x6f;
    break;
  case 0x95:
  case 0x99:
    cVar1 = -0x71;
    break;
  case 0x96:
  case 0x9a:
    cVar1 = -0x72;
    break;
  case 0x97:
  case 0x9b:
    cVar1 = -0x70;
  }
  iVar2 = FUN_00769904(cVar1);
  if (iVar2 != 0) {
    cVar1 = cVar1 + param_2 * '\x04';
  }
  return cVar1;
}


