/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

void __cdecl FUN_004800a0(uint param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401656;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffa8;
  local_c = &DAT_00401358;
  local_8 = param_1 & 1;
  ExceptionList = &pvStack_18;
  (**(code **)(*(int *)(param_1 & 0xfffffffe) + 4))((int *)(param_1 & 0xfffffffe));
  local_1c = 0;
  if (DAT_00491714 == (int *)0x0) {
    __vbaNew2(&LAB_00470d04,&DAT_00491714);
  }
  piVar1 = DAT_00491714;
  if (DAT_004910ec == (int *)0x0) {
    __vbaNew2(&DAT_0046c928,&DAT_004910ec);
  }
  iVar3 = *piVar1;
  uVar2 = __vbaObjSetAddref(&local_1c,DAT_004910ec);
  iVar3 = (**(code **)(iVar3 + 0xc))(piVar1,uVar2);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar1,&DAT_00470cf4,0xc);
  }
  __vbaFreeObj();
  if (DAT_004910ec == (int *)0x0) {
    __vbaNew2(&DAT_0046c928,&DAT_004910ec);
  }
  piVar1 = DAT_004910ec;
  iVar3 = (**(code **)(*DAT_004910ec + 0x2b0))
                    (DAT_004910ec,2,local_28,1,local_20,10,local_38,0x80020004,local_30);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar1,&DAT_00471bc8,0x2b0);
  }
  return;
}


