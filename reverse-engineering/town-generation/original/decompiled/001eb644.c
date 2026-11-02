/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 001eb644. Provisional types; not original source or a verified portable implementation. */

void FUN_001eb644(byte *param_1)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = 0;
  do {
    switch(iVar1) {
    case 0:
      bVar2 = *param_1 & 0xf8;
      goto LAB_001eb714;
    case 1:
      bVar2 = *param_1 & 199;
      goto LAB_001eb714;
    case 2:
      bVar2 = *param_1 & 0xbf;
      goto LAB_001eb714;
    case 3:
      bVar2 = *param_1 & 0x7f;
LAB_001eb714:
      *param_1 = bVar2;
      break;
    case 4:
      bVar2 = param_1[1] & 0xfe;
      goto LAB_001eb730;
    case 5:
      bVar2 = param_1[1] & 0xe1;
LAB_001eb730:
      param_1[1] = bVar2;
      break;
    case 6:
      bVar2 = param_1[2] & 0xfe;
      param_1[1] = param_1[1] & 0x1f;
      goto LAB_001eb770;
    case 7:
      bVar2 = param_1[2] & 0xfd;
      goto LAB_001eb770;
    case 8:
      bVar2 = param_1[2] & 0xfb;
      goto LAB_001eb770;
    case 9:
      bVar2 = param_1[2] & 199;
LAB_001eb770:
      param_1[2] = bVar2;
      break;
    case 10:
      param_1[2] = param_1[2] & 0x3f;
      param_1[3] = param_1[3] & 0xfe;
      break;
    case 0xb:
      param_1[3] = param_1[3] & 1 | 0x32;
      param_1[4] = param_1[4] & 0xfe;
      break;
    case 0xc:
      bVar2 = param_1[4] & 0xf1;
      goto LAB_001eb7c8;
    case 0xd:
      bVar2 = param_1[4] & 0x8f;
LAB_001eb7c8:
      param_1[4] = bVar2;
      break;
    case 0xe:
      param_1[4] = param_1[4] & 0x7f;
      break;
    case 0xf:
      bVar2 = param_1[5] & 0xfe;
      goto LAB_001eb824;
    case 0x10:
      bVar2 = param_1[5] & 0xfd;
      goto LAB_001eb824;
    case 0x11:
      bVar2 = param_1[5] & 0xfb;
      goto LAB_001eb824;
    case 0x12:
      bVar2 = param_1[5] & 0xf7;
      goto LAB_001eb824;
    case 0x13:
      bVar2 = param_1[5] & 0xef;
      goto LAB_001eb824;
    case 0x14:
      bVar2 = param_1[5] & 0xdf;
LAB_001eb824:
      param_1[5] = bVar2;
      break;
    case 0x15:
      param_1[5] = param_1[5] & 0x3f;
      break;
    case 0x16:
      bVar2 = param_1[6] & 0xfe;
      goto LAB_001eb898;
    case 0x17:
      bVar2 = param_1[6] & 0xfd;
      goto LAB_001eb898;
    case 0x18:
      bVar2 = param_1[6] & 0xfb;
      goto LAB_001eb898;
    case 0x19:
      bVar2 = param_1[6] & 0xf7;
      goto LAB_001eb898;
    case 0x1a:
      bVar2 = param_1[6] & 0xef;
      goto LAB_001eb898;
    case 0x1b:
      bVar2 = param_1[6] & 0xdf;
      goto LAB_001eb898;
    case 0x1c:
      bVar2 = param_1[6] & 0xbf;
      goto LAB_001eb898;
    case 0x1d:
      bVar2 = param_1[6] & 0x7f;
LAB_001eb898:
      param_1[6] = bVar2;
      break;
    case 0x1e:
      bVar2 = param_1[7] & 0xfe;
      goto LAB_001eb8e4;
    case 0x1f:
      bVar2 = param_1[7] & 0xfd;
      goto LAB_001eb8e4;
    case 0x20:
      bVar2 = param_1[7] & 0xfb;
      goto LAB_001eb8e4;
    case 0x21:
      bVar2 = param_1[7] & 0xf7;
      goto LAB_001eb8e4;
    case 0x22:
      bVar2 = param_1[7] & 0xef;
      goto LAB_001eb8e4;
    case 0x23:
      bVar2 = param_1[7] & 0xdf;
LAB_001eb8e4:
      param_1[7] = bVar2;
      break;
    case 0x24:
      param_1[7] = param_1[7] & 0xbf;
    }
    iVar1 = iVar1 + 1;
    if (0x24 < iVar1) {
      return;
    }
  } while( true );
}


