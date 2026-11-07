/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

void __cdecl FUN_0048e250(uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401656;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc0;
  local_c = &DAT_004015c0;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  local_20 = 0;
  if (DAT_00491010 == (int *)0x0) {
    __vbaNew2(&DAT_0046f194,&DAT_00491010);
  }
  piVar1 = DAT_00491010;
  local_20 = 0x43480000;
  iVar2 = (**(code **)(*DAT_00491010 + 0x720))(DAT_00491010,&DAT_0049107a,&local_20);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_00470614,0x720);
  }
  if (DAT_00491714 == (int *)0x0) {
    __vbaNew2(&LAB_00470d04,&DAT_00491714);
  }
  piVar1 = DAT_00491714;
  iVar2 = *DAT_00491714;
  uVar3 = __vbaObjSetAddref(&local_1c,piVar4);
  iVar2 = (**(code **)(iVar2 + 0x10))(piVar1,uVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_00470cf4,0x10);
  }
  __vbaFreeObj();
  return;
}


