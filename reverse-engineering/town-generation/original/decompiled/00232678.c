/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00232678. Provisional types; not original source or a verified portable implementation. */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void category_promote_08_13(void *arg0,void *arg1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  int local_2c8;
  int local_2c4;
  int *local_2c0;
  int *local_2bc;
  int local_2b8;
  int local_2b4 [98];
  undefined4 uStack_12c;
  undefined1 auStack_124 [204];
  undefined4 local_58;
  undefined4 uStack_54;
  int local_50;
  int local_4c;
  undefined1 auStack_48 [16];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined1 auStack_28 [12];
  
  local_38 = *(undefined4 *)(DAT_00232988 + 0x1c);
  local_34 = *(undefined4 *)(DAT_00232988 + 0x20);
  uStack_30 = *(undefined4 *)(DAT_00232988 + 0x24);
  local_2c8 = 0;
  local_2c4 = 0;
  local_2c0 = (int *)0x0;
  local_2bc = local_2b4;
  iVar1 = 0;
  iVar5 = 0x31;
  do {
    iVar5 = iVar5 + -1;
    local_2bc[iVar1] = (int)(local_2bc + iVar1 + 2);
    iVar1 = iVar1 + 2;
  } while (iVar5 != 0);
  uStack_12c = 0;
  local_2b8 = (int)local_2bc;
  FUN_005a6780(&local_2c8,0x32,auStack_124);
  if (((*DAT_0023298c & 1) == 0) && (iVar1 = FUN_003025cc(DAT_0023298c), iVar1 != 0)) {
    local_58 = 6;
    uStack_54 = 5;
    uVar2 = FUN_0059af60();
    FUN_0059b0e0(DAT_00232990,uVar2,&local_58);
  }
  uVar2 = DAT_00232990;
  FUN_007dc9d8(auStack_48,DAT_00232990);
  FUN_007dca10(&local_58,uVar2);
  iVar1 = FUN_007dc980(&local_58,auStack_48);
  do {
    if (iVar1 == 0) {
      if (((0 < local_2c8) && (FUN_005a6734(&local_2c8,arg1), local_2c8 != 0)) &&
         (local_2c0 = (int *)*local_2c0, local_2c0 != (int *)0x0)) {
        switch(*(undefined1 *)((int)arg0 + *local_2c0 + local_2c0[1] * 7)) {
        default:
          uVar4 = 0x14;
          break;
        case 9:
          uVar4 = 0x15;
          break;
        case 10:
          uVar4 = 0x16;
          break;
        case 0xb:
          uVar4 = 0x17;
          break;
        case 0xc:
          uVar4 = 0x18;
          break;
        case 0xd:
          uVar4 = 0x19;
          break;
        case 0xe:
          uVar4 = 0x1a;
          break;
        case 0xf:
          uVar4 = 0x1b;
          break;
        case 0x10:
          uVar4 = 0x1c;
          break;
        case 0x11:
          uVar4 = 0x1d;
          break;
        case 0x12:
          uVar4 = 0x1e;
          break;
        case 0x13:
          uVar4 = 0x1f;
        }
        *(undefined1 *)((int)arg0 + *local_2c0 + local_2c0[1] * 7) = uVar4;
      }
      return;
    }
    uVar6 = 0;
    do {
      if (*(char *)((int)arg0 + local_50 + local_4c * 7) == *(char *)((int)&local_38 + uVar6)) {
        FUN_0059afac(auStack_28,&local_50);
        piVar3 = local_2bc;
        if (local_2c8 < local_2c4) {
          if (local_2bc != (int *)0x0) {
            local_2bc = (int *)*local_2bc;
            piVar3 = (int *)FUN_0059afac(piVar3,auStack_28);
          }
          if (local_2c8 < local_2c4) {
            local_2c0[local_2c8] = (int)piVar3;
            local_2c8 = local_2c8 + 1;
          }
        }
        break;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0xc);
    FUN_0059b024(&local_58);
    iVar1 = FUN_007dc980(&local_58,auStack_48);
  } while( true );
}


