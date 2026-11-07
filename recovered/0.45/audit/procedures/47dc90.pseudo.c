/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

void __cdecl FUN_0047dc90(uint param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
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
  local_10 = &stack0xffffffa4;
  local_c = &DAT_00401338;
  local_8 = param_1 & 1;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar2 + 4))(piVar2);
  local_1c = 0;
  if (DAT_00491714 == (int *)0x0) {
    __vbaNew2(&LAB_00470d04,&DAT_00491714);
  }
  piVar1 = DAT_00491714;
  if (DAT_004910c4 == (int *)0x0) {
    __vbaNew2(&DAT_0046db78,&DAT_004910c4);
  }
  iVar4 = *piVar1;
  uVar3 = __vbaObjSetAddref(&local_1c,DAT_004910c4);
  iVar4 = (**(code **)(iVar4 + 0xc))(piVar1,uVar3);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar1,&DAT_00470cf4,0xc);
  }
  __vbaFreeObj();
  if (DAT_004910c4 == (int *)0x0) {
    __vbaNew2(&DAT_0046db78,&DAT_004910c4);
  }
  piVar1 = DAT_004910c4;
  iVar4 = (**(code **)(*DAT_004910c4 + 0x2b0))
                    (DAT_004910c4,2,local_28,1,local_20,10,local_38,0x80020004,local_30);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar1,&DAT_004713bc,0x2b0);
  }
  if (DAT_00491084 != 0) {
    uVar3 = (**(code **)(*piVar2 + 0x374))(piVar2,0x80010007,0xb,local_28,0,local_20);
    uVar3 = __vbaObjSet(&local_1c,uVar3);
    __vbaLateIdSt(uVar3);
    __vbaFreeObj();
  }
  FUN_00489260(&DAT_0049107a);
  uVar5 = (uint)DAT_0049107a;
  if (5 < uVar5 - 1) {
    __vbaGenerateBoundsError();
  }
  if ((*(float *)(DAT_0049106c + 0x20 + (uVar5 - 1) * 0x2c) == 0.0) &&
     (iVar4 = (**(code **)(*piVar2 + 0x718))(piVar2), iVar4 < 0)) {
    __vbaHresultCheckObj(iVar4,piVar2,&DAT_00470614,0x718);
  }
  return;
}


