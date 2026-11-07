/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

void __cdecl FUN_0048ea80(uint param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int *local_44;
  int *local_40;
  int *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401656;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff4c;
  local_c = &DAT_00401608;
  local_8 = param_1 & 1;
  piVar5 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar5 + 4))(piVar5);
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  local_3c = (int *)0x0;
  local_40 = (int *)0x0;
  local_44 = (int *)0x0;
  local_48 = 0;
  local_4c = 0;
  local_50 = 0;
  local_54 = 0;
  uVar1 = (**(code **)(*piVar5 + 0x308))(piVar5);
  piVar2 = (int *)__vbaObjSet(&local_48,uVar1);
  if (DAT_00491714 == (int *)0x0) {
    __vbaNew2(&LAB_00470d04,&DAT_00491714);
  }
  piVar4 = DAT_00491714;
  iVar3 = (**(code **)(*DAT_00491714 + 0x14))(DAT_00491714,&local_3c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4,&DAT_00470cf4,0x14);
  }
  piVar4 = local_3c;
  iVar3 = (**(code **)(*local_3c + 0xb8))(local_3c,&local_4c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4,&DAT_00470f14,0xb8);
  }
  if (DAT_00491714 == (int *)0x0) {
    __vbaNew2(&LAB_00470d04,&DAT_00491714);
  }
  piVar4 = DAT_00491714;
  iVar3 = (**(code **)(*DAT_00491714 + 0x14))(DAT_00491714,&local_40);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4,&DAT_00470cf4,0x14);
  }
  piVar4 = local_40;
  iVar3 = (**(code **)(*local_40 + 0xc0))(local_40,&local_50);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4,&DAT_00470f14,0xc0);
  }
  if (DAT_00491714 == (int *)0x0) {
    __vbaNew2(&LAB_00470d04,&DAT_00491714);
  }
  piVar4 = DAT_00491714;
  iVar3 = (**(code **)(*DAT_00491714 + 0x14))(DAT_00491714,&local_44);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4,&DAT_00470cf4,0x14);
  }
  piVar4 = local_44;
  iVar3 = (**(code **)(*local_44 + 200))(local_44,&local_54);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4,&DAT_00470f14,200);
  }
  iVar3 = *piVar2;
  __vbaStrI2(local_4c,&DAT_00473e40);
  uVar1 = __vbaStrMove();
  __vbaStrCat(uVar1);
  uVar1 = __vbaStrMove();
  __vbaStrCat(&DAT_00470f28,uVar1);
  uVar1 = __vbaStrMove();
  __vbaStrI2(local_50,uVar1);
  uVar1 = __vbaStrMove();
  __vbaStrCat(uVar1);
  uVar1 = __vbaStrMove();
  __vbaStrCat(&DAT_00470f28,uVar1);
  uVar1 = __vbaStrMove();
  __vbaStrI2(local_54,uVar1);
  uVar1 = __vbaStrMove();
  __vbaStrCat(uVar1);
  uVar1 = __vbaStrMove();
  iVar3 = (**(code **)(iVar3 + 0x54))(piVar2,uVar1);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00471330,0x54);
  }
  __vbaFreeStrList(8,&local_1c,&local_20,&local_24,&local_28,&local_2c,&local_30,&local_34,&local_38
                  );
  __vbaFreeObjList(4,&local_3c,&local_40,&local_44,&local_48);
  uVar1 = (**(code **)(*piVar5 + 0x304))(piVar5);
  piVar2 = (int *)__vbaObjSet(&local_40,uVar1);
  uVar1 = (**(code **)(*piVar5 + 0x304))(piVar5);
  piVar4 = (int *)__vbaObjSet(&local_3c,uVar1);
  iVar3 = (**(code **)(*piVar4 + 0x50))(piVar4,&local_1c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4,&DAT_00471330,0x50);
  }
  iVar3 = *piVar2;
  __vbaStrCat(&DAT_00473e58,local_1c);
  uVar1 = __vbaStrMove();
  __vbaStrCat(&DAT_0047375c,uVar1);
  uVar1 = __vbaStrMove();
  iVar3 = (**(code **)(iVar3 + 0x54))(piVar2,uVar1);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00471330,0x54);
  }
  __vbaFreeStrList(3,&local_1c,&local_20,&local_24);
  __vbaFreeObjList(2,&local_3c,&local_40);
  uVar1 = (**(code **)(*piVar5 + 0x304))(piVar5);
  piVar2 = (int *)__vbaObjSet(&local_40,uVar1);
  uVar1 = (**(code **)(*piVar5 + 0x304))(piVar5);
  piVar4 = (int *)__vbaObjSet(&local_3c,uVar1);
  iVar3 = (**(code **)(*piVar4 + 0x50))(piVar4,&local_1c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4,&DAT_00471330,0x50);
  }
  iVar3 = *piVar2;
  __vbaStrCat(L"Reporte los bugs a MEBARG@GMAIL.COM",local_1c);
  uVar1 = __vbaStrMove();
  iVar3 = (**(code **)(iVar3 + 0x54))(piVar2,uVar1);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00471330,0x54);
  }
  __vbaFreeStrList(2,&local_1c,&local_20);
  __vbaFreeObjList(2,&local_3c,&local_40);
  uVar1 = (**(code **)(*piVar5 + 0x304))(piVar5);
  piVar2 = (int *)__vbaObjSet(&local_40,uVar1);
  uVar1 = (**(code **)(*piVar5 + 0x304))(piVar5);
  piVar4 = (int *)__vbaObjSet(&local_3c,uVar1);
  iVar3 = (**(code **)(*piVar4 + 0x50))(piVar4,&local_1c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4,&DAT_00471330,0x50);
  }
  iVar3 = *piVar2;
  __vbaStrCat(&DAT_0047375c,local_1c);
  uVar1 = __vbaStrMove();
  __vbaStrCat(&DAT_0047375c,uVar1);
  uVar1 = __vbaStrMove();
  iVar3 = (**(code **)(iVar3 + 0x54))(piVar2,uVar1);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00471330,0x54);
  }
  __vbaFreeStrList(3,&local_1c,&local_20,&local_24);
  __vbaFreeObjList(2,&local_3c,&local_40);
  uVar1 = (**(code **)(*piVar5 + 0x304))(piVar5);
  piVar2 = (int *)__vbaObjSet(&local_40,uVar1);
  uVar1 = (**(code **)(*piVar5 + 0x304))(piVar5);
  piVar4 = (int *)__vbaObjSet(&local_3c,uVar1);
  iVar3 = (**(code **)(*piVar4 + 0x50))(piVar4,&local_1c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4,&DAT_00471330,0x50);
  }
  iVar3 = *piVar2;
  __vbaStrCat(L" SI QUERES DIVERTIRTE ENTRA A WWW.AUDODCLAN.COM.AR     :D",local_1c);
  uVar1 = __vbaStrMove();
  __vbaStrCat(&DAT_0047375c,uVar1);
  uVar1 = __vbaStrMove();
  iVar3 = (**(code **)(iVar3 + 0x54))(piVar2,uVar1);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00471330,0x54);
  }
  __vbaFreeStrList(3,&local_1c,&local_20,&local_24);
  __vbaFreeObjList(2,&local_3c,&local_40);
  uVar1 = (**(code **)(*piVar5 + 0x304))(piVar5);
  piVar2 = (int *)__vbaObjSet(&local_40,uVar1);
  uVar1 = (**(code **)(*piVar5 + 0x304))(piVar5);
  piVar5 = (int *)__vbaObjSet(&local_3c,uVar1);
  iVar3 = (**(code **)(*piVar5 + 0x50))(piVar5,&local_1c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar5,&DAT_00471330,0x50);
  }
  iVar3 = *piVar2;
  __vbaStrCat(&PTR_DAT_00473fc0,local_1c);
  uVar1 = __vbaStrMove();
  iVar3 = (**(code **)(iVar3 + 0x54))(piVar2,uVar1);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00471330,0x54);
  }
  __vbaFreeStrList(2,&local_1c,&local_20);
  __vbaFreeObjList(2,&local_3c,&local_40);
  return;
}


