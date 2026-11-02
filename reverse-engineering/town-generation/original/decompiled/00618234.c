/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00618234. Provisional types; not original source or a verified portable implementation. */

void FUN_00618234(int param_1)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint local_30;
  uint local_2c;
  int local_28;
  
  local_30 = 10;
  local_2c = 0;
  local_28 = 0;
  uVar5 = 0;
  iVar4 = param_1;
  if ((*(byte *)(DAT_0061837c + param_1) & 0xf) == 0) {
    uVar6 = (uint)*(char *)(DAT_00618380 + param_1);
  }
  else {
    uVar6 = 0xffffffff;
  }
  do {
    iVar3 = FUN_007f3734(iVar4);
    if (iVar3 != 0) {
      uVar2 = *(ushort *)(DAT_00618384 + iVar4);
      if ((((((uVar2 & 2) == 0) || ((uVar2 & 1) != 0)) &&
           (((uint)uVar2 << 0x15) >> 0x1e != 2 && uVar6 != uVar5)) &&
          (((uVar2 & 1) == 0 && (uVar5 < local_30)))) &&
         (uVar1 = 1 << (uVar5 & 0xff), (local_2c & uVar1) == 0)) {
        local_2c = uVar1 | local_2c;
        local_28 = local_28 + 1;
      }
    }
    uVar5 = uVar5 + 1;
    iVar3 = DAT_00618388 + 1;
    *(undefined1 *)(DAT_00618388 + iVar4) = 0xff;
    *(undefined1 *)(iVar3 + iVar4) = 0xff;
    iVar4 = iVar4 + 0x24f8;
  } while ((int)uVar5 < 10);
  if (((1 < local_28) && (FUN_00616d98(param_1,&local_30,0), 1 < local_28)) &&
     (FUN_00616d98(param_1,&local_30,1), 1 < local_28)) {
    FUN_00616d98(param_1,&local_30,0);
  }
  return;
}


