/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 006b08b8. Provisional types; not original source or a verified portable implementation. */

int FUN_006b08b8(undefined4 param_1,undefined4 param_2,int param_3,undefined1 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  
  iVar3 = 1;
  uVar4 = 3;
  switch(param_2) {
  case 0:
    iVar3 = FUN_001bcf64();
    break;
  case 1:
    iVar3 = FUN_001bcf64();
    if (iVar3 != 0) break;
    iVar3 = FUN_001bd1f0(param_1);
    goto joined_r0x006b0a40;
  case 2:
    iVar3 = FUN_001bd1f0();
    break;
  case 3:
    iVar3 = FUN_001bcf64();
    if ((iVar3 != 0) || (iVar3 = FUN_001bd1f0(param_1), iVar3 != 0)) break;
    goto LAB_006b09d8;
  case 4:
    iVar1 = FUN_0062ef88();
    if (iVar1 == 0) break;
    iVar2 = FUN_007bcf30();
    if (-1 < iVar2) {
      FUN_003633f0(iVar1 + 0x6f38,param_1);
      break;
    }
    iVar3 = FUN_001bcf64(param_1);
    goto joined_r0x006b0a5c;
  case 5:
    iVar3 = FUN_001bcf64();
joined_r0x006b0a1c:
    if (iVar3 == 0) {
      iVar3 = FUN_001bd1f0(param_1);
    }
    break;
  case 6:
    if (param_3 == 1) {
      iVar3 = FUN_001bcf64();
      goto joined_r0x006b0a1c;
    }
    if (param_3 != 0) break;
    iVar3 = FUN_001bd1f0();
joined_r0x006b0a40:
    if (iVar3 == 0) {
      uVar4 = 1;
    }
    break;
  case 7:
    iVar3 = FUN_001bd1f0();
    goto joined_r0x006b0a5c;
  case 8:
    iVar3 = FUN_001bcf64();
joined_r0x006b0a5c:
    if (iVar3 == 0) {
LAB_006b09d8:
      uVar4 = 2;
    }
  }
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = uVar4;
  }
  return iVar3;
}


