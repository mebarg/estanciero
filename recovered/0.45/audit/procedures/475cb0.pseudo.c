/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

undefined4 FUN_00475cb0(uint param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 local_1c [4];
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401656;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffcc;
  local_c = &DAT_004011b0;
  local_8 = param_1 & 1;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar2 + 4))(piVar2);
  local_1c[0] = 0;
  local_1c[0] = __vbaUI1I2();
  iVar1 = (**(code **)(*piVar2 + 0x728))(piVar2,local_1c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar2,&DAT_00470614,0x728);
  }
  local_8 = 0;
  (**(code **)(*piVar2 + 8))(piVar2);
  ExceptionList = local_18;
  return local_8;
}


