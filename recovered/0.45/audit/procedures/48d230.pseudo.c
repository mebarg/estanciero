/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

void __cdecl FUN_0048d230(uint param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401656;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc8;
  local_c = &DAT_00401570;
  local_8 = param_1 & 1;
  piVar5 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar5 + 4))(piVar5);
  local_1c = 0;
  if (DAT_00491714 == (int *)0x0) {
    __vbaNew2(&LAB_00470d04,&DAT_00491714);
  }
  piVar1 = DAT_00491714;
  iVar3 = *DAT_00491714;
  uVar2 = __vbaObjSetAddref(&local_1c,piVar5);
  iVar3 = (**(code **)(iVar3 + 0x10))(piVar1,uVar2);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar1,&DAT_00470cf4,0x10);
  }
  __vbaFreeObj();
  uVar4 = *(byte *)((int)piVar5 + 0x35) - 1;
  if (5 < uVar4) {
    __vbaGenerateBoundsError();
  }
  *(int *)(DAT_0049106c + 0x20 + uVar4 * 0x2c) = piVar5[0xe];
  return;
}


