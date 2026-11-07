/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

undefined4
FUN_004784d0(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int *piVar2;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401656;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &DAT_00401238;
  local_8 = param_1 & 1;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar2 + 4))(piVar2);
  iVar1 = (**(code **)(*piVar2 + 0x750))(piVar2,param_3,param_4,param_5,param_6);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar2,&DAT_00470614,0x750);
  }
  local_8 = 0;
  (**(code **)(*piVar2 + 8))(piVar2);
  ExceptionList = local_18;
  return local_8;
}


