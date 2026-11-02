/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 006388c4. Provisional types; not original source or a verified portable implementation. */

undefined4
FUN_006388c4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined8 param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  undefined1 auStack_158 [320];
  
  FUN_002745a4(auStack_158);
  FUN_00274574(auStack_158);
  if (param_6 != (undefined4 *)0x0) {
    uVar1 = FUN_00274588(auStack_158);
    (**(code **)*param_6)(param_6,uVar1);
  }
  uVar1 = FUN_00274588(auStack_158);
  FUN_006387cc(param_1,uVar1,param_4);
  FUN_00273e70(auStack_158,param_1,param_2,param_3,param_4,(int)param_5,
               (int)((ulonglong)param_5 >> 0x20));
  FUN_00274560(auStack_158);
  uVar1 = FUN_007ef588(auStack_158);
  FUN_0027461c(auStack_158);
  return uVar1;
}


