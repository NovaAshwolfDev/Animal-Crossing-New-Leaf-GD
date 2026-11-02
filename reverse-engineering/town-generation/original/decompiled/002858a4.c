/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 002858a4. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_002858a4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 6;
  iVar1 = FUN_00769904();
  if (iVar1 != 0) {
    switch(param_1) {
    case 0x8e:
    case 0x8f:
    case 0x90:
    case 0x91:
      uVar2 = 0;
      break;
    case 0x92:
    case 0x93:
    case 0x94:
    case 0x95:
      uVar2 = 1;
      break;
    case 0x96:
    case 0x97:
    case 0x98:
    case 0x99:
      uVar2 = 2;
      break;
    case 0x9a:
    case 0x9b:
    case 0x9c:
    case 0x9d:
      uVar2 = 3;
      break;
    case 0x9e:
    case 0x9f:
    case 0xa0:
    case 0xa1:
      uVar2 = 4;
      break;
    case 0xa2:
    case 0xa3:
    case 0xa4:
    case 0xa5:
      uVar2 = 5;
    }
  }
  return uVar2;
}


