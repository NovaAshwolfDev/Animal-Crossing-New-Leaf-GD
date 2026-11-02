/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0012611c. Provisional types; not original source or a verified portable implementation. */

int FUN_0012611c(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1];
  iVar1 = DAT_001261f0;
  if (iVar2 != 0) {
    if (param_2 == 0) {
      iVar1 = (**(code **)(*param_1 + 0x30))(param_1,param_3,0x20,iVar2,3,0x14);
      if (-1 < iVar1) {
        iVar1 = FUN_001289e8(param_1,param_1 + 0x7f,param_1 + 0x87,param_1[0xea],0);
        *(undefined1 *)((int)param_1 + 10) = 0;
        return iVar1;
      }
    }
    else {
      iVar1 = (**(code **)(*param_1 + 0x30))(param_1,param_3,0x20,iVar2,4,0x14);
      if (-1 < iVar1) {
        iVar1 = FUN_001289e8(param_1,param_1 + 0xeb,param_1 + 0xf3,param_1[0x156],1);
        *(undefined1 *)((int)param_1 + 0xb) = 0;
      }
    }
  }
  return iVar1;
}


