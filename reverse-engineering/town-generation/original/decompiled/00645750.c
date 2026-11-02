/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00645750. Provisional types; not original source or a verified portable implementation. */

void FUN_00645750(int param_1,int *param_2,int *param_3,uint param_4)

{
  undefined2 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined2 *puVar4;
  uint uVar5;
  uint uVar6;
  uint local_20;
  
  local_20 = param_4;
  uVar2 = (**(code **)(*param_3 + 0xc))(param_3);
  uVar3 = (**(code **)(*param_3 + 0x10))(param_3);
  if ((param_2 != (int *)0x0 && uVar2 != 0) && (uVar3 != 0 && param_2 != param_3)) {
    puVar4 = (undefined2 *)(**(code **)(*param_2 + 8))(param_2);
    uVar5 = (**(code **)(*param_2 + 0x10))(param_2);
    if (puVar4 != (undefined2 *)0x0 && uVar5 != 0) {
      uVar6 = uVar5;
      if (uVar3 <= uVar5) {
        uVar6 = uVar3;
      }
      *(uint *)(param_1 + 0x60) = uVar2 + uVar6 * 2 + -2;
      puVar1 = DAT_00645868;
      *(uint *)(param_1 + 100) = uVar2;
      *puVar4 = *puVar1;
      if (uVar2 < *(uint *)(param_1 + 0x60)) {
        local_20 = uVar2;
        FUN_0066ff2c(param_1,&local_20,DAT_0064586c);
        FUN_0066fd88(param_1,DAT_0064586c);
        if (uVar2 < *(uint *)(param_1 + 100)) {
          uVar3 = (int)(*(uint *)(param_1 + 100) - uVar2) >> 1;
          if (uVar3 < uVar5) {
            FUN_001151b0(puVar4,uVar2,uVar3 << 1);
            FUN_00128418(puVar4 + uVar3,(uVar5 - uVar3) * 2);
          }
        }
      }
    }
  }
  return;
}


