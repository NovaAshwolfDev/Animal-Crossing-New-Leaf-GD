/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0013c888. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_0013c888(int param_1)

{
  undefined1 uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  iVar3 = FUN_0013b8cc(param_1 + 0x108);
  if ((iVar3 == 0) || (iVar3 = FUN_0013b730(param_1 + 0x108), iVar3 != 0)) {
    bVar2 = false;
    iVar3 = FUN_0013b6a8(param_1 + 0x118);
    if (iVar3 != 0) {
      return 0;
    }
    FUN_0011a3e0(&local_28,param_1 + 0x118);
    local_30 = 0;
    uStack_2c = 0;
    iVar3 = FUN_004d7148(local_28,uStack_24,0);
  }
  else {
    bVar2 = true;
    if (*DAT_0013ca44 == '\0') goto LAB_0013c970;
    iVar4 = *(int *)(param_1 + 0xf4);
    if (iVar4 == 0) {
      return 0;
    }
    iVar3 = FUN_00107814();
    if (iVar4 != 1) {
      if (iVar4 == 2) {
        if (iVar3 == 1) {
          return 0;
        }
      }
      else {
        if (iVar4 != 3) {
          return 0;
        }
        if (iVar3 == 2) {
          return 0;
        }
      }
      goto LAB_0013c970;
    }
  }
  if (iVar3 == 0) {
    return 0;
  }
LAB_0013c970:
  local_30 = *(undefined4 *)(param_1 + 0x108);
  uStack_2c = *(undefined4 *)(param_1 + 0x10c);
  local_28 = *(undefined4 *)(param_1 + 0x110);
  uVar1 = *(undefined1 *)(param_1 + 0xf0);
  uVar6 = *(undefined8 *)(param_1 + 0xfc);
  uVar5 = *(undefined8 *)(param_1 + 0x118);
  iVar3 = (uint)((ulonglong)(uint)*(byte *)(param_1 + 0x10b) * (ulonglong)DAT_0013ca48 >> 0x21) * -3
          + (uint)*(byte *)(param_1 + 0x10b);
  if (*(int *)(param_1 + 0xe0) == 1) {
    iVar3 = iVar3 + 3;
  }
  iVar3 = (**(code **)(DAT_0013ca50 + 4))(DAT_0013ca4c,iVar3);
  FUN_0013ceec(param_1,iVar3,1,iVar3 + 0x48);
  FUN_00157bec(param_1 + 0xb4,DAT_0013ca54,0xb);
  if (!bVar2) {
    FUN_00157bec(param_1 + 0xca,DAT_0013ca58,0xb);
  }
  *(undefined1 *)(param_1 + 0xf0) = uVar1;
  *(int *)(param_1 + 0xfc) = (int)uVar6;
  *(int *)(param_1 + 0x100) = (int)((ulonglong)uVar6 >> 0x20);
  FUN_0080c0d4(param_1 + 0x108,&local_30);
  *(int *)(param_1 + 0x118) = (int)uVar5;
  *(int *)(param_1 + 0x11c) = (int)((ulonglong)uVar5 >> 0x20);
  return 1;
}


