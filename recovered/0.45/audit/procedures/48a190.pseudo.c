/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

void __cdecl FUN_0048a190(uint param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
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
  local_c = &DAT_004014f0;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  local_20 = 0;
  uVar1 = (**(code **)(*piVar4 + 800))(piVar4);
  piVar2 = (int *)__vbaObjSet(&local_1c,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0xe0))(piVar2,&local_20);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_004735e8,0xe0);
  }
  bVar5 = (short)local_20 == -1;
  __vbaFreeObj();
  if (bVar5) {
    uVar1 = (**(code **)(*piVar4 + 0x300))(piVar4);
    piVar2 = (int *)__vbaObjSet(&local_1c,uVar1);
    iVar3 = (**(code **)(*piVar2 + 0x54))(piVar2,L"Servidor");
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_00471368,0x54);
    }
    __vbaFreeObj();
    uVar1 = (**(code **)(*piVar4 + 0x30c))(piVar4);
    piVar2 = (int *)__vbaObjSet(&local_1c,uVar1);
    iVar3 = (**(code **)(*piVar2 + 0x94))(piVar2,0);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_00472250,0x94);
    }
    __vbaFreeObj();
    uVar1 = (**(code **)(*piVar4 + 0x318))(piVar4);
    piVar2 = (int *)__vbaObjSet(&local_1c,uVar1);
    iVar3 = (**(code **)(*piVar2 + 0x9c))(piVar2,0);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_00471330,0x9c);
    }
    __vbaFreeObj();
    uVar1 = (**(code **)(*piVar4 + 0x2fc))(piVar4);
    piVar2 = (int *)__vbaObjSet(&local_1c,uVar1);
    iVar3 = (**(code **)(*piVar2 + 0x54))(piVar2,L"Servir");
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_004717a8,0x54);
    }
    __vbaFreeObj();
  }
  return;
}


