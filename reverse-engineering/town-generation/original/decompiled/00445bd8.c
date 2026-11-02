/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00445bd8. Provisional types; not original source or a verified portable implementation. */

int FUN_00445bd8(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int local_2c;
  int local_28;
  
  if (param_1[1] != 0) {
    local_28 = 0;
    local_2c = 0;
    uVar1 = (**(code **)(*param_1 + 8))(param_1,param_1[1],5,2,&local_2c);
    if (((uVar1 & 0x3ff) != 0x3f7) &&
       (((local_2c != 0 &&
         ((((uVar1 & 0x3fc00) != 0x4400 || ((uVar1 & 0x3ff) < 100)) || (0xb3 < (uVar1 & 0x3ff)))))
        || (iVar2 = (**(code **)(*param_1 + 0x28))(param_1,param_1[1],0,0,0), -1 < iVar2)))) {
      iVar2 = FUN_0012abfc(800,4);
      if (iVar2 == 0) {
        param_1[0x158] = 0;
      }
      else {
        iVar3 = (**(code **)(*param_1 + 0x34))(param_1,iVar2,local_2c,&local_28,param_1[1],5,0x12);
        if (-1 < iVar3) {
          if (local_28 != 0) {
            FUN_0011a3e0(param_1 + 0x157,iVar2);
          }
          uVar1 = DAT_00445e30;
          if ((*(ushort *)(param_1 + 0x157) == DAT_00445e30) &&
             (param_1[0x158] == local_2c - 8U >> 3)) {
LAB_00445de0:
            uVar1 = 0;
            iVar3 = iVar2;
            if (param_1[0x158] != 0) {
              do {
                iVar3 = iVar3 + 8;
                FUN_0011a3e0(param_1 + uVar1 * 2 + 0x159,iVar3);
                uVar1 = uVar1 + 1;
              } while (uVar1 < (uint)param_1[0x158]);
            }
            FUN_00126238(iVar2);
            return param_1[0x158];
          }
          iVar3 = (**(code **)(*param_1 + 0x28))(param_1,param_1[1],0,0,0);
          if (-1 < iVar3) {
            iVar3 = (**(code **)(*param_1 + 8))(param_1,param_1[1],5,2,&local_2c);
            if (-1 < iVar3) {
              iVar3 = (**(code **)(*param_1 + 0x34))
                                (param_1,iVar2,local_2c,&local_28,param_1[1],5,0x12);
              if (((-1 < iVar3) &&
                  (FUN_0011a3e0(param_1 + 0x157,iVar2), *(ushort *)(param_1 + 0x157) == uVar1)) &&
                 (param_1[0x158] == local_2c - 8U >> 3)) goto LAB_00445de0;
            }
            param_1[0x158] = 0;
          }
        }
        FUN_00126238(iVar2);
      }
    }
  }
  return 0;
}


