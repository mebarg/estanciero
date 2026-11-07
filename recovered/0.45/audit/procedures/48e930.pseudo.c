/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

undefined4 FUN_0048e930(uint param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  int *piVar2;
  undefined2 extraout_var;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401656;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd4;
  local_c = &DAT_004015f0;
  local_8 = param_1 & 1;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar2 + 4))(piVar2);
  uVar1 = FUN_00486c10(CONCAT22(extraout_var,*param_2));
  *param_2 = uVar1;
  local_8 = 0;
  (**(code **)(*piVar2 + 8))(piVar2);
  ExceptionList = local_18;
  return local_8;
}


