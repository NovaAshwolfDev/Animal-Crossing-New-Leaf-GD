/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00588808. Provisional types; not original source or a verified portable implementation. */

int FUN_00588808(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int local_c88;
  int iStack_c84;
  int *local_c80;
  int *local_c7c;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [24];
  
  iVar1 = FUN_00697864(*param_1,param_1[1]);
  if (iVar1 != 0) {
    uVar2 = FUN_002869f8(*param_1,param_1[1],0);
    if (uVar2 < 3) {
      FUN_008a1584(&local_c88);
      uVar3 = FUN_005dc500();
      FUN_0059b104(auStack_70,uVar3);
      FUN_007dc9d8(auStack_50,auStack_70);
      FUN_007dca10(auStack_60,auStack_70);
      iVar1 = FUN_007dc980(auStack_60,auStack_50);
      if (iVar1 != 0) {
        do {
          FUN_0059adbc(auStack_40,param_1,auStack_58);
          piVar4 = local_c7c;
          if (local_c88 < iStack_c84) {
            if (local_c7c != (int *)0x0) {
              local_c7c = (int *)*local_c7c;
              piVar4 = (int *)FUN_0059afac(piVar4,auStack_40);
            }
            if (local_c88 < iStack_c84) {
              local_c80[local_c88] = (int)piVar4;
              local_c88 = local_c88 + 1;
            }
          }
          FUN_0059b024(auStack_60);
          iVar1 = FUN_007dc980(auStack_60,auStack_50);
        } while (iVar1 != 0);
      }
      if ((0 < local_c88) && (FUN_005a6734(&local_c88,param_3), local_c88 != 0)) {
        puVar5 = (undefined4 *)*local_c80;
        while (puVar5 != (undefined4 *)0x0) {
          iVar1 = FUN_005883e4(puVar5,param_2,1);
          if (iVar1 != 0) {
            FUN_002876dc(*puVar5,puVar5[1],param_2);
            return 1;
          }
          if (0 < local_c88) {
            piVar4 = (int *)*local_c80;
            *piVar4 = (int)local_c7c;
            local_c7c = piVar4;
          }
          FUN_005a66dc(&local_c88,0,1);
          if (local_c88 < 1) {
            return 0;
          }
          if (local_c88 == 0) {
            return 0;
          }
          puVar5 = (undefined4 *)*local_c80;
        }
      }
      return 0;
    }
    iVar1 = 0;
  }
  return iVar1;
}


