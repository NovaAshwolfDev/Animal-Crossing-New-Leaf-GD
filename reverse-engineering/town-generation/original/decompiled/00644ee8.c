/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00644ee8. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_00644ee8(void)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  
  cVar1 = *DAT_00644f90;
  uVar2 = (uint)(byte)DAT_00644f90[1];
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      if (uVar2 == 1) {
        return 1;
      }
      if (uVar2 == 2) {
        return 3;
      }
      if (uVar2 == 5) {
        uVar3 = 2;
      }
      else {
        uVar3 = 1;
      }
      return uVar3;
    }
    if (cVar1 == '\x02') {
                    /* WARNING: Could not recover jumptable at 0x00644f48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar2 < 6) {
        uVar3 = (*(code *)(&switchD_00644f48::switchdataD_00644f50)[uVar2])();
        return uVar3;
      }
      return 4;
    }
    if (cVar1 == '\x05') {
      return 9;
    }
  }
  return 0;
}


