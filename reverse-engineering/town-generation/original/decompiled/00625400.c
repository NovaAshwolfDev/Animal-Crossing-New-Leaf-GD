/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00625400. Provisional types; not original source or a verified portable implementation. */

/* WARNING: Removing unreachable block (ram,0x00625a2c) */

undefined1 * FUN_00625400(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_268;
  undefined4 local_264;
  undefined1 auStack_260 [576];
  
  FUN_0079c070(auStack_260);
  switch(param_2) {
  case 0:
    if (param_3 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (uint)(*(byte *)(param_3 + 0xb9) >> 1) + (*(byte *)(param_3 + 0xba) & 1) * 0x80;
    }
    uVar2 = FUN_00623ec0(iVar5);
    if ((1 < uVar2) ||
       (iVar3 = FUN_0011df34(DAT_00625c10), iVar3 + iVar5 * -4 < 0 == SBORROW4(iVar3,iVar5 * 4))) {
LAB_006254e8:
      local_268 = 1;
      local_264 = 1;
      FUN_00799da4(auStack_260,8,0,1);
      FUN_0079aee4(auStack_260,9);
      FUN_0079aedc(auStack_260);
      FUN_0079aee4(auStack_260,0x1c);
                    /* WARNING: Subroutine does not return */
      FUN_0063653c();
    }
    FUN_00756d40(&local_268,param_4 + 0x2ee7 & 0xffff);
    iVar5 = FUN_007fe108(&local_268);
    if (iVar5 != 0x84) goto LAB_006254e8;
LAB_00625560:
    FUN_0079ae5c(auStack_260,&local_268);
    break;
  case 1:
    local_268 = 1;
    local_264 = 1;
    FUN_00799da4(auStack_260,6,0,1);
    local_268 = 1;
    local_264 = 1;
    FUN_00799da4(auStack_260,7,0,1);
    FUN_0079aedc(auStack_260);
    FUN_00799260(auStack_260,DAT_00625c14);
    break;
  case 2:
    local_268 = 1;
    local_264 = 1;
    FUN_00799da4(auStack_260,5,0,1);
    local_268 = 0;
    FUN_0079a704(auStack_260,6,10,1);
    FUN_00799260(auStack_260,2000);
    FUN_00798424(auStack_260,1);
    break;
  case 5:
    if (param_3 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (uint)(*(byte *)(param_3 + 0xb9) >> 1) + (*(byte *)(param_3 + 0xba) & 1) * 0x80;
    }
    iVar3 = FUN_00623ec0(iVar5);
    if ((iVar3 == 0) &&
       (iVar3 = FUN_0011df34(DAT_00625c10), iVar3 + iVar5 * -4 < 0 != SBORROW4(iVar3,iVar5 * 4))) {
      FUN_00756d40(&local_268,param_4 + 0x2ee7 & 0xffff);
      iVar5 = FUN_007fe108(&local_268);
      if (iVar5 == 0x84) goto LAB_00625560;
    }
    iVar5 = FUN_0011df34(100);
    if (iVar5 < 10) {
      FUN_0079822c(auStack_260,0x33,0);
    }
    else {
      local_268 = 1;
      local_264 = 1;
      FUN_00799da4(auStack_260,1,0,1);
      local_268 = 0;
      FUN_0079a704(auStack_260,6,10,1);
    }
    break;
  case 6:
    FUN_0079822c(auStack_260,0x33,0);
    FUN_0079822c(auStack_260,0x52,0x20,0);
    break;
  case 7:
    if (param_3 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (uint)(*(byte *)(param_3 + 0xb9) >> 1) + (*(byte *)(param_3 + 0xba) & 1) * 0x80;
    }
    uVar2 = FUN_00623ec0(iVar5);
    if ((2 < uVar2) ||
       (iVar3 = FUN_0011df34(DAT_00625c10), (int)(iVar5 * 4 + (param_4 & 0xffff) * 0x32) <= iVar3))
    {
      FUN_001609cc(param_1,param_3);
      return auStack_260;
    }
    FUN_00756d40(&local_268,DAT_00625c18 + (param_4 >> 0x10) & 0xffff);
    iVar5 = FUN_007fe108(&local_268);
    goto joined_r0x00625a98;
  case 8:
    FUN_00756da4(&local_268,DAT_00625c1c);
    iVar5 = FUN_0011df34(100);
    if ((iVar5 < 0x46) && (param_3 != 0)) {
      FUN_001609cc(&local_264,param_3);
      FUN_00756eb0(&local_268,&local_264);
    }
    else {
      FUN_00625400(&local_264,6,0);
      FUN_00756eb0(&local_268,&local_264);
    }
    goto LAB_00625aa0;
  case 9:
    FUN_00798240(auStack_260,1);
    FUN_00798240(auStack_260,2);
    FUN_0079b55c(auStack_260,5);
    break;
  case 10:
    FUN_0079957c(auStack_260,1,6);
    FUN_0079957c(auStack_260,2,6);
    FUN_0079957c(auStack_260,1,7);
    FUN_0079957c(auStack_260,2,7);
    break;
  case 0xb:
    FUN_00798240(auStack_260,0);
    FUN_00798240(auStack_260,1);
    FUN_00798240(auStack_260,2);
    FUN_00798240(auStack_260,3);
    FUN_00798240(auStack_260,4);
    FUN_0079b55c(auStack_260,5);
    break;
  case 0xc:
    FUN_0079aee4(auStack_260,0x33);
    break;
  case 0xd:
    if (param_3 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (uint)(*(byte *)(param_3 + 0xb9) >> 1) + (*(byte *)(param_3 + 0xba) & 1) * 0x80;
    }
    iVar3 = FUN_00623ec0(iVar5);
    if ((iVar3 != 0) ||
       (iVar3 = FUN_0011df34(DAT_00625c10), iVar3 + iVar5 * -4 < 0 == SBORROW4(iVar3,iVar5 * 4))) {
      local_268 = 1;
      local_264 = 1;
      FUN_00799da4(auStack_260,1,0,1);
                    /* WARNING: Subroutine does not return */
      FUN_0063653c();
    }
    FUN_00756d40(&local_268,DAT_00625c18 + (param_4 >> 0x10) & 0xffff);
    iVar5 = FUN_007fe108(&local_268);
joined_r0x00625a98:
    if (iVar5 == 0x84) {
LAB_00625aa0:
      FUN_00756da4(param_1,&local_268);
      return auStack_260;
    }
    break;
  case 0xe:
    local_268 = 1;
    local_264 = 1;
    FUN_00799da4(auStack_260,5,0,1);
    FUN_00799260(auStack_260,2000);
    FUN_00798424(auStack_260,1);
  }
  if (param_3 == 0) {
LAB_00625bf0:
    FUN_001aec3c(param_1,auStack_260);
    return auStack_260;
  }
  iVar5 = 0;
LAB_00625bc4:
  iVar3 = param_3 + 0x62;
  do {
    uVar2 = 0;
    do {
      iVar4 = iVar3 + uVar2 * 4;
      iVar1 = FUN_00802710(iVar4);
      if (iVar1 != 0) break;
      FUN_0079ae8c(auStack_260,iVar4);
      uVar2 = uVar2 + 1;
    } while (uVar2 < 8);
    iVar5 = iVar5 + 1;
    if (1 < iVar5) goto LAB_00625bf0;
    if (iVar5 == 0) goto LAB_00625bc4;
    iVar3 = param_3 + 0x82;
  } while( true );
}


