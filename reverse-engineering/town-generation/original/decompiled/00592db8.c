/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00592db8. Provisional types; not original source or a verified portable implementation. */

int * FUN_00592db8(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 auStack_70 [8];
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  piVar2 = (int *)FUN_00591d40(param_2,param_3,param_4);
  if (piVar2 != (int *)0x0) {
    puVar3 = DAT_00592fb4;
    if (param_1 < 4) {
      puVar3 = DAT_00592fb4 + param_1;
    }
    uVar6 = *puVar3;
    local_30 = param_2;
    uStack_2c = param_3;
    uVar4 = FUN_005dc500();
    FUN_0059b104(auStack_70,uVar4);
    local_28 = 7;
    uStack_24 = 7;
    FUN_007dcaa4(auStack_40,auStack_70,&local_28);
    FUN_007dcaec(&local_60,auStack_40,&local_30);
    FUN_007dc9d8(auStack_50,&local_60);
    FUN_007dca10(auStack_70,&local_60);
    iVar5 = FUN_007dc980(auStack_70,auStack_50);
    while (iVar5 != 0) {
      if ((-1 < local_68) && (-1 < local_64)) {
        cVar1 = *(char *)((int)piVar2 +
                         (local_68 - local_60) * 10 + (local_64 - local_5c) * 0xa0 + 8);
        iVar5 = FUN_00769904(param_4);
        if (iVar5 == 0) {
          if (cVar1 != '\0') goto LAB_00592f30;
        }
        else if (cVar1 == -0x5f) {
LAB_00592f30:
          FUN_003c25a8(uVar6,local_68,local_64,0xffffffff);
        }
      }
      FUN_0059b024(auStack_70);
      iVar5 = FUN_007dc980(auStack_70,auStack_50);
    }
    piVar2 = &local_60;
  }
  return piVar2;
}


