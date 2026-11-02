/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005ce23c. Provisional types; not original source or a verified portable implementation. */

void FUN_005ce23c(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  
  iVar1 = FUN_007f3734(param_2);
  if (iVar1 != 0) {
    if (((*(int *)(DAT_005ce320 + 4) != 0) && (*(ushort *)(param_2 + 0x2c) < 0x14d)) &&
       (iVar1 = *(int *)(DAT_005ce320 + 4) + (uint)*(ushort *)(param_2 + 0x2c) * 0x22, iVar1 != 0))
    {
      *(undefined1 *)(iVar1 + 0xf) = 0;
      iVar2 = FUN_007f0be0(*DAT_005ce328,param_1,DAT_005ce324,iVar1 + 10);
      if (iVar2 != 0) {
        puVar3 = (undefined1 *)(**(code **)(*param_1 + 0x24))(param_1);
        if (puVar3 == (undefined1 *)0x0) {
switchD_005ce2cc_default:
          return;
        }
        switch(*(byte *)(iVar1 + 0x1c) >> 4) {
        case 0:
        case 1:
        case 2:
        case 3:
          uVar4 = 1;
          break;
        case 4:
        case 5:
        case 6:
        case 7:
          uVar4 = 2;
          break;
        default:
          goto switchD_005ce2cc_default;
        }
        *puVar3 = uVar4;
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x005ce31c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1c))(param_1);
  return;
}


