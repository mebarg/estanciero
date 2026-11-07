/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

void __cdecl FUN_00480c30(uint param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  byte local_40 [8];
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401656;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffa4;
  local_c = &LAB_004013b0;
  local_8 = param_1 & 1;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar2 + 4))(piVar2);
  local_1c = 0;
  local_40[0] = 0;
  DAT_0049108d = __vbaUI1I2();
  if (DAT_00491714 == (int *)0x0) {
    __vbaNew2(&LAB_00470d04,&DAT_00491714);
  }
  piVar1 = DAT_00491714;
  if (DAT_00491100 == (int *)0x0) {
    __vbaNew2(&DAT_0046d63c,&DAT_00491100);
  }
  iVar4 = *piVar1;
  uVar3 = __vbaObjSetAddref(&local_1c,DAT_00491100);
  iVar4 = (**(code **)(iVar4 + 0xc))(piVar1,uVar3);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar1,&DAT_00470cf4,0xc);
  }
  __vbaFreeObj();
  if (DAT_00491100 == (int *)0x0) {
    __vbaNew2(&DAT_0046d63c,&DAT_00491100);
  }
  piVar1 = DAT_00491100;
  iVar4 = (**(code **)(*DAT_00491100 + 0x2b0))
                    (DAT_00491100,2,local_28,1,local_20,10,local_38,0x80020004,local_30);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar1,&DAT_00471ca0,0x2b0);
  }
  local_40[0] = __vbaUI1I2();
  FUN_00489260(local_40);
  FUN_00489260(&DAT_0049107a);
  iVar4 = (**(code **)(*piVar2 + 0x708))(piVar2,&DAT_0049107a);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar2,&DAT_00470614,0x708);
  }
  return;
}


