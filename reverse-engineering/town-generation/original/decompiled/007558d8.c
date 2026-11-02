/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007558d8. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_007558d8(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = FUN_007fdf34();
  if (iVar1 == 0) {
    return 0;
  }
  switch(param_2) {
  case 0:
    if (7 < param_3) {
      return 0;
    }
    break;
  case 1:
    if (9 < param_3) {
      return 0;
    }
    break;
  case 2:
  case 3:
  case 5:
  case 6:
    if (param_3 != 0) {
      return 0;
    }
    break;
  case 4:
    if (3 < param_3) {
      return 0;
    }
    break;
  default:
    goto LAB_007559b8;
  }
  switch(param_2) {
  case 0:
    if (9 < param_4) {
      return 0;
    }
    goto switchD_00755958_default;
  case 1:
  case 4:
  case 5:
    if (param_4 != 0) {
      return 0;
    }
    goto switchD_00755958_default;
  case 2:
    break;
  case 3:
    break;
  case 6:
    break;
  default:
    goto switchD_00755958_default;
  }
  if (7 < param_4) {
LAB_007559b8:
    return 0;
  }
switchD_00755958_default:
  *(ushort *)(param_1 + 2) =
       ((ushort)(param_2 << 8) | (ushort)(param_3 << 4) | (ushort)param_4) & 0x3fff |
       *(ushort *)(param_1 + 2) & 0xc000;
  return 1;
}


