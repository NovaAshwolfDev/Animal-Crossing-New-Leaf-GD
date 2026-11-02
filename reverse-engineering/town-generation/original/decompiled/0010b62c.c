/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0010b62c. Provisional types; not original source or a verified portable implementation. */

void FUN_0010b62c(byte *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  bool bVar6;
  int local_20 [2];
  
  uVar3 = DAT_0010b73c;
  puVar2 = DAT_0010b738;
  piVar1 = DAT_0010b734;
  while( true ) {
    uVar4 = DAT_0010b740;
    FUN_0011f998(DAT_0010b740);
    if ((*piVar1 != 0) || (uVar5 = FUN_0010f6c0(DAT_0010b734,puVar2[2]), -1 < (int)uVar5)) {
      uVar5 = 0;
    }
    if (-1 < (int)uVar5) break;
    bVar6 = uVar5 == uVar3;
    if (bVar6) {
      uVar5 = (uint)*param_1;
    }
    if (!bVar6 || uVar5 != 2) goto LAB_0010b6cc;
    FUN_0011690c(DAT_0010b744,0);
    FUN_0011fa98(uVar4);
  }
  FUN_0010f6d8(param_1 + 0xc,*puVar2);
  local_20[0] = *piVar1;
  FUN_0011089c(local_20,param_1);
  if (*piVar1 != 0) {
    software_interrupt(0x23);
    *piVar1 = puVar2[1];
  }
LAB_0010b6cc:
  FUN_0011fa98(uVar4);
  if (*param_1 != 2 && *param_1 != 5) {
    local_20[0] = 0;
    local_20[1] = 0;
    FUN_001104bc(local_20,1);
    FUN_0011641c(local_20);
  }
  return;
}


