/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0023299c. Provisional types; not original source or a verified portable implementation. */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void category_promote_2b_26(void *arg0,void *arg1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int local_2b8;
  int local_2b4;
  int *local_2b0;
  undefined4 *local_2ac;
  undefined4 *local_2a8;
  undefined4 local_2a4 [98];
  undefined4 uStack_11c;
  undefined1 auStack_114 [200];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  int local_40;
  int local_3c;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [12];
  
  local_2ac = local_2a4;
  local_4c = *(undefined4 *)(DAT_00232c78 + 4);
  iVar4 = 0;
  iVar5 = 0x31;
  local_2b8 = 0;
  local_2b4 = 0;
  local_2b0 = (int *)0x0;
  do {
    iVar5 = iVar5 + -1;
    local_2ac[iVar4] = local_2ac + iVar4 + 2;
    iVar4 = iVar4 + 2;
  } while (iVar5 != 0);
  uStack_11c = 0;
  local_2a8 = local_2ac;
  FUN_005a6780(&local_2b8,0x32,auStack_114);
  if (((*DAT_00232c7c & 1) == 0) && (iVar4 = FUN_003025cc(DAT_00232c7c), iVar4 != 0)) {
    local_48 = 6;
    uStack_44 = 5;
    uVar1 = FUN_0059af60();
    FUN_0059b0e0(DAT_00232c80,uVar1,&local_48);
  }
  uVar1 = DAT_00232c80;
  FUN_007dc9d8(auStack_38,DAT_00232c80);
  FUN_007dca10(&local_48,uVar1);
  iVar4 = FUN_007dc980(&local_48,auStack_38);
  do {
    if (iVar4 == 0) {
      if (((0 < local_2b8) && (FUN_005a6734(&local_2b8,arg1), local_2b8 != 0)) &&
         (local_2b0 = (int *)*local_2b0, local_2b0 != (int *)0x0)) {
        switch(*(undefined1 *)((int)arg0 + *local_2b0 + local_2b0[1] * 7)) {
        default:
          uVar3 = 0x34;
          break;
        case 0x23:
          uVar3 = 0x37;
          break;
        case 0x26:
          uVar3 = 0x38;
          break;
        case 0x27:
          uVar3 = 0x39;
          break;
        case 0x2a:
          uVar3 = 0x3a;
          break;
        case 0x2b:
          uVar3 = 0x35;
          break;
        case 0x2c:
          uVar3 = 0x36;
        }
        *(undefined1 *)((int)arg0 + *local_2b0 + local_2b0[1] * 7) = uVar3;
      }
      return;
    }
    uVar6 = 0;
    do {
      if (*(char *)((int)arg0 + local_40 + local_3c * 7) == *(char *)((int)&local_4c + uVar6)) {
        FUN_0059afac(auStack_28,&local_40);
        puVar2 = local_2ac;
        if (local_2b8 < local_2b4) {
          if (local_2ac != (undefined4 *)0x0) {
            local_2ac = (undefined4 *)*local_2ac;
            puVar2 = (undefined4 *)FUN_0059afac(puVar2,auStack_28);
          }
          if (local_2b8 < local_2b4) {
            local_2b0[local_2b8] = (int)puVar2;
            local_2b8 = local_2b8 + 1;
          }
        }
        break;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 2);
    FUN_0059b024(&local_48);
    iVar4 = FUN_007dc980(&local_48,auStack_38);
  } while( true );
}


