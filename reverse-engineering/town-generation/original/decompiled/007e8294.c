/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007e8294. Provisional types; not original source or a verified portable implementation. */

undefined4
FUN_007e8294(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  
  if (param_2 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)FUN_005cc158();
    uVar4 = (undefined1)((uint)puVar3[1] >> 0x18);
    uVar5 = *puVar3;
    uVar6 = (undefined1)puVar3[2];
  }
  else {
    uVar4 = (undefined1)((uint)param_2[1] >> 0x18);
    uVar5 = *param_2;
    uVar6 = (undefined1)param_2[2];
  }
  uVar1 = FUN_007f37b0(param_1);
  iVar2 = FUN_006a905c();
  if ((iVar2 != 3) && (uVar1 < 8)) {
                    /* WARNING: Subroutine does not return */
    FUN_0063653c(DAT_007e8414 + uVar1 * 8,CONCAT11(uVar6,uVar4),param_3,param_4,uVar5);
  }
  return 0;
}


