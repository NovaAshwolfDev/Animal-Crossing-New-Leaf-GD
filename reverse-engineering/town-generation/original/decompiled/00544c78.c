/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00544c78. Provisional types; not original source or a verified portable implementation. */

undefined4 *
FUN_00544c78(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  undefined1 uVar2;
  int iVar3;
  ushort *puVar4;
  
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0x164;
  *(undefined1 *)((int)param_1 + 6) = 0x75;
  *(undefined1 *)((int)param_1 + 7) = 0x14;
  iVar3 = FUN_0074702c(param_4);
  if (iVar3 != 0) {
    puVar4 = (ushort *)FUN_007e23e0(iVar3,param_2,param_3);
    *param_1 = puVar4;
    if (puVar4 != (ushort *)0x0) {
      uVar1 = *puVar4;
      *(ushort *)(param_1 + 1) = uVar1;
      if (uVar1 < 0x164) {
        uVar2 = FUN_00687d78();
        *(undefined1 *)((int)param_1 + 6) = uVar2;
        uVar2 = FUN_00687d88(*(undefined2 *)(param_1 + 1));
        *(undefined1 *)((int)param_1 + 7) = uVar2;
      }
    }
  }
  return param_1;
}


