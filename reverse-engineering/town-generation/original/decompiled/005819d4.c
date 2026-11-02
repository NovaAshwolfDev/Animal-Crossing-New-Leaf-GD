/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005819d4. Provisional types; not original source or a verified portable implementation. */

void FUN_005819d4(undefined4 *param_1)

{
  undefined4 uVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  
  iVar3 = 0;
  pbVar2 = (byte *)((int)param_1 + 0x1e);
  *param_1 = 0;
  do {
    switch(iVar3) {
    case 0:
      *pbVar2 = *pbVar2 & 0xf0;
      goto switchD_005819e8_default;
    case 1:
      bVar4 = *pbVar2 & 0xef;
      break;
    case 2:
      bVar4 = *pbVar2 & 0xdf;
      break;
    case 3:
      bVar4 = *pbVar2 & 0xbf;
      break;
    case 4:
      bVar4 = *pbVar2 & 0x7f;
      break;
    case 5:
      *(byte *)((int)param_1 + 0x1f) = *(byte *)((int)param_1 + 0x1f) & 0xfe;
      goto switchD_005819e8_default;
    case 6:
      bVar4 = *(byte *)((int)param_1 + 0x1f) & 0xfd;
      goto LAB_00581a80;
    case 7:
      bVar4 = *(byte *)((int)param_1 + 0x1f) & 0xfb;
      goto LAB_00581a80;
    case 8:
      bVar4 = *(byte *)((int)param_1 + 0x1f) & 199;
      goto LAB_00581a80;
    case 9:
      bVar4 = *(byte *)((int)param_1 + 0x1f) & 0xbf;
LAB_00581a80:
      *(byte *)((int)param_1 + 0x1f) = bVar4;
    default:
      goto switchD_005819e8_default;
    }
    *pbVar2 = bVar4;
switchD_005819e8_default:
    iVar3 = iVar3 + 1;
    if (9 < iVar3) {
      param_1[8] = 0x80000;
      *(undefined1 *)(param_1 + 9) = 0x21;
      *(undefined1 *)((int)param_1 + 0x25) = 2;
      *(undefined1 *)(param_1 + 0xc) = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      *(undefined1 *)(param_1 + 0xd) = 0;
      uVar1 = DAT_00581b10;
      *(undefined1 *)(param_1 + 0xe) = 0;
      FUN_00756eb0((int)param_1 + 0x3a,uVar1);
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      *(undefined1 *)(param_1 + 0x13) = 0xff;
      *(undefined1 *)((int)param_1 + 0x4d) = 7;
      *(undefined1 *)((int)param_1 + 0x4e) = 0;
      *(undefined1 *)((int)param_1 + 0x4f) = 0;
      return;
    }
  } while( true );
}


