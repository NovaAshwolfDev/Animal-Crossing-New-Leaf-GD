/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 001f2048. Provisional types; not original source or a verified portable implementation. */

undefined4 * FUN_001f2048(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined4 local_588;
  undefined4 local_584;
  undefined4 local_580;
  undefined4 uStack_57c;
  undefined4 local_578;
  undefined4 uStack_574;
  undefined4 local_570;
  undefined4 local_56c;
  undefined4 uStack_568;
  undefined4 local_560;
  undefined4 uStack_55c;
  undefined1 auStack_558 [568];
  undefined1 auStack_320 [4];
  undefined1 auStack_31c [760];
  
  iVar2 = 0;
  do {
    FUN_00756eb0(param_1 + iVar2 + 8,DAT_001f2ee4);
    iVar9 = iVar2 + 1;
    *(undefined1 *)((int)param_1 + iVar2 + 0x80) = 0;
    iVar2 = iVar9;
  } while (iVar9 < 0x18);
  FUN_005cca58(&local_588);
  local_570 = local_588;
  local_56c = local_584;
  uStack_568 = local_580;
  local_578 = *param_1;
  uStack_574 = param_1[1];
  iVar2 = FUN_007edfa8(&local_578);
  if (iVar2 != 0) {
    local_560 = *param_1;
    uStack_55c = param_1[1];
    iVar2 = FUN_007edb84(&local_560,&local_570,1);
    if (iVar2 == 0) {
      return (undefined4 *)0x0;
    }
  }
  if (*(char *)(param_1 + 5) == '\0') {
    iVar9 = FUN_005ee68c(3);
    iVar2 = DAT_001f2eec;
    if (iVar9 == 0) {
      FUN_0079c070(auStack_558);
      FUN_0079aee4(auStack_558,0x2a);
      uVar3 = FUN_00756d40(&local_588,iVar2);
      FUN_0079ae8c(auStack_558,uVar3);
      FUN_001aea7c(param_1 + 8,1,auStack_558);
    }
    else {
      uVar3 = FUN_00756d40(&local_588,DAT_001f2eec + -4);
      FUN_00756eb0(param_1 + 8,uVar3);
    }
    uVar3 = FUN_00756d40(&local_588,iVar2);
    FUN_00756eb0(param_1 + 9,uVar3);
  }
  else {
    FUN_0079c070(auStack_558);
    FUN_0079aee4(auStack_558,0x2a);
    if (*(byte *)(param_1 + 5) < 5) {
      uVar8 = *(undefined1 *)(DAT_001f2ee8 + (uint)*(byte *)(param_1 + 5));
    }
    else {
      uVar8 = 0;
    }
    FUN_001aea7c(param_1 + 8,uVar8,auStack_558);
  }
  FUN_0079c070(auStack_558);
  FUN_0079aee4(auStack_558,0x2b);
  if (*(byte *)(param_1 + 5) < 5) {
    uVar8 = *(undefined1 *)(DAT_001f2ef0 + (uint)*(byte *)(param_1 + 5));
  }
  else {
    uVar8 = 0;
  }
  FUN_001aea7c(param_1 + 10,uVar8,auStack_558);
  FUN_0079c070(auStack_558);
  FUN_0079822c(auStack_558,3,1,0);
  if (*(byte *)(param_1 + 5) < 5) {
    uVar8 = *(undefined1 *)(DAT_001f2ef4 + (uint)*(byte *)(param_1 + 5));
  }
  else {
    uVar8 = 0;
  }
  FUN_001aea7c(param_1 + 0xc,uVar8,auStack_558);
  FUN_0079c070(auStack_558);
  FUN_0079822c(auStack_558,4,1,0);
  if (*(byte *)(param_1 + 5) < 5) {
    uVar8 = *(undefined1 *)(DAT_001f2ef8 + (uint)*(byte *)(param_1 + 5));
  }
  else {
    uVar8 = 0;
  }
  FUN_001aea7c(param_1 + 0xe,uVar8,auStack_558);
  FUN_0079c070(auStack_558);
  FUN_0079822c(auStack_558,0x49,0x1d,0);
  FUN_001aea7c(param_1 + 0x10,1,auStack_558);
  FUN_0079c070(auStack_558);
  FUN_0079822c(auStack_558,0x29,0x19,0);
  if (*(byte *)(param_1 + 5) < 5) {
    uVar8 = *(undefined1 *)(DAT_001f2efc + (uint)*(byte *)(param_1 + 5));
  }
  else {
    uVar8 = 0;
  }
  FUN_001aea7c(param_1 + 0x11,uVar8,auStack_558);
  FUN_0079c070(auStack_558);
  FUN_0079822c(auStack_558,0x2a,0x1a,0);
  if (*(byte *)(param_1 + 5) < 5) {
    uVar8 = *(undefined1 *)(DAT_001f2f00 + (uint)*(byte *)(param_1 + 5));
  }
  else {
    uVar8 = 0;
  }
  FUN_001aea7c(param_1 + 0x13,uVar8,auStack_558);
  FUN_0079c070(auStack_558);
  FUN_0079822c(auStack_558,0x4a,0x1b,0);
  if (*(byte *)(param_1 + 5) < 5) {
    uVar8 = *(undefined1 *)(DAT_001f2f04 + (uint)*(byte *)(param_1 + 5));
  }
  else {
    uVar8 = 0;
  }
  FUN_001aea7c(param_1 + 0x14,uVar8,auStack_558);
  FUN_0079c070(auStack_558);
  FUN_0079aee4(auStack_558,0x9b);
  FUN_0079aee4(auStack_558,0x9c);
  FUN_0079aee4(auStack_558,0x9d);
  FUN_0079aee4(auStack_558,0x9e);
  FUN_0079aee4(auStack_558,0x9f);
  uVar11 = DAT_001f2f08;
  do {
    FUN_00756d40(auStack_320,uVar11 & 0xffff);
    bVar1 = false;
    uVar10 = 0;
    do {
      iVar2 = FUN_0062e0bc(uVar10 & 0xff);
      if ((iVar2 != 0) && (iVar9 = FUN_007aae1c(iVar2 + 0x55a6), iVar9 != 0)) {
        uVar3 = FUN_00756da4(auStack_31c,auStack_320);
        iVar2 = FUN_008070e0(iVar2 + 0x6c00,uVar3);
        if (iVar2 != 0) {
          bVar1 = true;
        }
      }
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < 4);
    if (!bVar1) {
      FUN_0079ae8c(auStack_558,auStack_320);
    }
    uVar11 = uVar11 + 1;
  } while (uVar11 < 0x2181);
  FUN_0079aee4(auStack_558,0x40);
  FUN_0079aee4(auStack_558,0x41);
  FUN_0079aee4(auStack_558,0x42);
  FUN_0079aee4(auStack_558,0x43);
  FUN_0079aee4(auStack_558,0x44);
  if (*(byte *)(param_1 + 5) < 5) {
    uVar8 = *(undefined1 *)(DAT_001f2f0c + (uint)*(byte *)(param_1 + 5));
  }
  else {
    uVar8 = 0;
  }
  FUN_001aea7c(param_1 + 0x15,uVar8,auStack_558);
  FUN_0079c070(auStack_558);
  if ((char)local_56c == '\f') {
    FUN_0079aee4(auStack_558,0x1e);
  }
  if (((((char)local_56c == '\x02') && ('\0' < local_56c._1_1_)) && (local_56c._1_1_ < '\x04')) &&
     (iVar2 = FUN_0010d818(), iVar2 == 0)) {
    FUN_0079aee4(auStack_558,0x1f);
  }
  if ((char)local_56c == '\n') {
    FUN_0079aee4(auStack_558,0x20);
  }
  if ((char)local_56c == '\b') {
    FUN_0079aee4(auStack_558,0x83);
  }
  iVar9 = FUN_00807374(auStack_558);
  iVar2 = DAT_001f2f10;
  if ((iVar9 == 0) ||
     ((*(byte *)(param_1 + 5) < 5 && (1 < *(byte *)(DAT_001f2f10 + (uint)*(byte *)(param_1 + 5))))))
  {
    FUN_0079aee4(auStack_558,0x22);
  }
  if (*(byte *)(param_1 + 5) < 5) {
    uVar8 = *(undefined1 *)(iVar2 + (uint)*(byte *)(param_1 + 5));
  }
  else {
    uVar8 = 0;
  }
  FUN_001aea7c(param_1 + 0x17,uVar8,auStack_558);
  FUN_0079c070(auStack_558);
  FUN_0079aedc(auStack_558);
  if (*(byte *)(param_1 + 5) < 5) {
    uVar8 = *(undefined1 *)(DAT_001f2f14 + (uint)*(byte *)(param_1 + 5));
  }
  else {
    uVar8 = 0;
  }
  FUN_001aea7c(param_1 + 0x19,uVar8,auStack_558);
  FUN_0079c070(auStack_558);
  FUN_00798548(auStack_558,2);
  iVar2 = FUN_0010d818();
  if (iVar2 == 0) {
    FUN_0011df38(100);
  }
  iVar2 = 0;
  do {
    iVar9 = FUN_00802710(param_1 + iVar2 + 8);
    if (iVar9 == 0) {
      FUN_0079ae8c(auStack_558,param_1 + iVar2 + 8);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x18);
  if (*(byte *)(param_1 + 5) < 5) {
    uVar8 = *(undefined1 *)(DAT_001f2f18 + (uint)*(byte *)(param_1 + 5));
  }
  else {
    uVar8 = 0;
  }
  FUN_001aea7c(param_1 + 0x1b,uVar8,auStack_558);
  FUN_0079c070(auStack_558);
  FUN_00798548(auStack_558,1);
  iVar2 = FUN_0010d818();
  if (iVar2 == 0) {
    FUN_0011df38(100);
  }
  iVar2 = 0;
  do {
    iVar9 = FUN_00802710(param_1 + iVar2 + 8);
    if (iVar9 == 0) {
      FUN_0079ae8c(auStack_558,param_1 + iVar2 + 8);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x18);
  if (*(byte *)(param_1 + 5) < 5) {
    uVar8 = *(undefined1 *)(DAT_001f2f1c + (uint)*(byte *)(param_1 + 5));
  }
  else {
    uVar8 = 0;
  }
  FUN_001aea7c(param_1 + 0x1d,uVar8,auStack_558);
  iVar2 = DAT_001f2f20;
  puVar4 = (undefined1 *)(uint)*(byte *)(param_1 + 5);
  if ((puVar4 < &DAT_00000005) &&
     (puVar4 = (undefined1 *)(uint)(byte)puVar4[DAT_001f2f20], puVar4 != (undefined1 *)0x0)) {
    FUN_0079c070(auStack_558);
    FUN_00798548(auStack_558,1);
    iVar9 = 0;
    do {
      iVar5 = FUN_00802710(param_1 + iVar9 + 8);
      if (iVar5 == 0) {
        FUN_0079ae8c(auStack_558,param_1 + iVar9 + 8);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 0x18);
    if (*(byte *)(param_1 + 5) < 5) {
      uVar8 = *(undefined1 *)(iVar2 + (uint)*(byte *)(param_1 + 5));
    }
    else {
      uVar8 = 0;
    }
    FUN_001aea7c(param_1 + 0x1f,uVar8,auStack_558);
    puVar4 = auStack_558;
    FUN_0079c070(puVar4);
    if ((((char)local_56c == '\f') && ('\0' < local_56c._1_1_)) && (local_56c._1_1_ < '\x18')) {
      FUN_0079822c(puVar4,5,0x23,0);
      iVar9 = FUN_0010d818();
      if (iVar9 != 1) {
        uVar3 = FUN_00756d40(&local_588,DAT_001f2f24);
        FUN_0079ae8c(puVar4,uVar3);
        uVar3 = FUN_00756d40(&local_588,DAT_001f2f28);
        FUN_0079ae8c(puVar4,uVar3);
      }
    }
    if ((char)local_56c == '\n') {
      FUN_0079822c(puVar4,5,0x24,0);
    }
    if ((char)local_56c == '\v') {
      local_580 = 1;
      local_584 = 0x1e;
      local_588 = 0;
      iVar9 = FUN_005ed53c(3,local_570,local_56c,uStack_568);
      if (iVar9 != 0) {
        FUN_0079822c(puVar4,5,0x25,0);
      }
    }
    if ((((char)local_56c == '\x03') && ('\0' < local_56c._1_1_)) &&
       ((local_56c._1_1_ < '\x04' && (iVar9 = FUN_0010d818(), iVar9 == 0)))) {
      FUN_0079822c(puVar4,5,0x26,0);
    }
    if ((((char)local_56c == '\x05') && ('\0' < local_56c._1_1_)) &&
       ((local_56c._1_1_ < '\x06' && (iVar9 = FUN_0010d818(), iVar9 == 0)))) {
      FUN_0079822c(puVar4,5,0x27,0);
    }
    uVar11 = FUN_00807374(puVar4);
    if (*(byte *)(param_1 + 5) < 5) {
      uVar10 = (uint)*(byte *)(iVar2 + (uint)*(byte *)(param_1 + 5));
    }
    else {
      uVar10 = 0;
    }
    if (uVar11 < uVar10) {
      FUN_0079822c(puVar4,5,1,0);
      iVar9 = 0;
      do {
        iVar5 = FUN_00802710(param_1 + iVar9 + 8);
        if (iVar5 == 0) {
          FUN_0079ae8c(puVar4,param_1 + iVar9 + 8);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < 0x18);
    }
    FUN_00756da4(&local_588,DAT_001f2ee4);
    if (*(byte *)(param_1 + 5) < 5) {
      uVar8 = *(undefined1 *)(iVar2 + (uint)*(byte *)(param_1 + 5));
    }
    else {
      uVar8 = 0;
    }
    FUN_001aea7c(&local_588,uVar8,puVar4);
    iVar2 = FUN_00802710(&local_588);
    if (iVar2 == 0) {
      iVar2 = FUN_007fec74(&local_588);
      if (iVar2 == 0) {
        puVar6 = param_1 + 0x1f;
      }
      else {
        puVar6 = param_1 + 0x19;
      }
      FUN_00756eb0(puVar6,&local_588);
    }
  }
  FUN_007a7460(puVar4);
  if ((*(byte *)(param_1 + 5) < 5) &&
     (*(char *)(DAT_001f2f2c + (uint)*(byte *)(param_1 + 5)) != '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_0063653c();
  }
  iVar2 = 0x13;
  do {
    puVar6 = (undefined4 *)FUN_00802710(param_1 + iVar2 + 8);
    iVar9 = iVar2;
    if (puVar6 == (undefined4 *)0x0) {
      while (iVar5 = iVar9, iVar9 = iVar5 + 1, iVar9 < 0x18) {
        puVar6 = (undefined4 *)FUN_00802710(param_1 + iVar5 + 9);
        if (puVar6 == (undefined4 *)0x0) {
          uVar11 = FUN_007fe150(param_1 + iVar2 + 8);
          uVar10 = FUN_007fe150(param_1 + iVar5 + 9);
          if (uVar11 < uVar10) {
            FUN_00756da4(&local_580,param_1 + iVar2 + 8);
            FUN_00756eb0(param_1 + iVar2 + 8,param_1 + iVar5 + 9);
            FUN_00756eb0(param_1 + iVar5 + 9,&local_580);
            puVar6 = &local_580;
          }
          else {
            puVar7 = (undefined4 *)FUN_007fe150(param_1 + iVar2 + 8);
            puVar6 = (undefined4 *)FUN_007fe150(param_1 + iVar5 + 9);
            if (((puVar7 == puVar6) &&
                (puVar6 = (undefined4 *)FUN_00802840(param_1 + iVar2 + 8),
                puVar6 == (undefined4 *)0x0)) &&
               (puVar6 = (undefined4 *)FUN_00802840(param_1 + iVar5 + 9),
               puVar6 != (undefined4 *)0x0)) {
              FUN_00756da4(&uStack_57c,param_1 + iVar2 + 8);
              FUN_00756eb0(param_1 + iVar2 + 8,param_1 + iVar5 + 9);
              FUN_00756eb0(param_1 + iVar5 + 9,&uStack_57c);
              puVar6 = &uStack_57c;
            }
          }
        }
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x17);
  return puVar6;
}


