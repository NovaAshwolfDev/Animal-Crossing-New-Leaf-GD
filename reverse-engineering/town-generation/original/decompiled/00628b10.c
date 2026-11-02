/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00628b10. Provisional types; not original source or a verified portable implementation. */

void FUN_00628b10(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  if (0x20 < *(byte *)(param_1 + 0x1e)) {
    return;
  }
  if ((*(char *)(param_1 + 0x1f) != '\x03') && ((*(byte *)(param_1 + 0x24) & 1) == 0)) {
    puVar2 = (undefined4 *)FUN_005cc158();
    FUN_007edb08(&local_20,param_1 + 0x16);
    uVar1 = local_20;
    local_20 = local_1c;
    local_1c = uStack_18;
    iVar3 = FUN_005cd080(*puVar2,puVar2[1],puVar2[2],uVar1);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0063653c();
    }
  }
  FUN_006289e8(param_1);
  return;
}


