/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

undefined4 FUN_00480210(uint param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401656;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &DAT_00401368;
  local_8 = param_1 & 1;
  piVar3 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar3 + 4))(piVar3);
  uVar1 = (uint)DAT_0049107a;
  if (5 < uVar1 - 1) {
    __vbaGenerateBoundsError();
  }
  *(undefined2 *)(DAT_0049106c + 0x16 + (uVar1 - 1) * 0x2c) = 0;
  FUN_00486d20(&DAT_0049107a,(byte *)&DAT_0049108e);
  if (DAT_0049108e == '*') {
    *(undefined2 *)((int)piVar3 + 0x52) = 0;
    uVar1 = (uint)DAT_0049107a;
    if (5 < uVar1 - 1) {
      __vbaGenerateBoundsError();
    }
    *(undefined2 *)(DAT_0049106c + 0x28 + (uVar1 - 1) * 0x2c) = 0;
  }
  if (DAT_0049108e == '+') {
    *(undefined2 *)(piVar3 + 0x15) = 0;
    uVar1 = (uint)DAT_0049107a;
    if (5 < uVar1 - 1) {
      __vbaGenerateBoundsError();
    }
    *(undefined2 *)(DAT_0049106c + 0x26 + (uVar1 - 1) * 0x2c) = 0;
  }
  iVar2 = (**(code **)(*piVar3 + 0x708))(piVar3,&DAT_0049107a);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar3,&DAT_00470614,0x708);
  }
  local_8 = 0;
  (**(code **)(*piVar3 + 8))(piVar3);
  ExceptionList = local_18;
  return local_8;
}


