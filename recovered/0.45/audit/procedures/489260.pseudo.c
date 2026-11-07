/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

void __cdecl FUN_00489260(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined1 *local_c;
  undefined1 *local_8;
  
  puStack_10 = &LAB_00401656;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffb0;
  local_8 = &LAB_004014b0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = (int *)0x0;
  ExceptionList = &pvStack_14;
  puVar3 = &stack0xffffffb0;
  if (DAT_00491010 == (int *)0x0) {
    ExceptionList = &pvStack_14;
    __vbaNew2(&DAT_0046f194,&DAT_00491010);
    puVar3 = local_c;
  }
  local_c = puVar3;
  uVar4 = (**(code **)(*DAT_00491010 + 0x318))(DAT_00491010);
  piVar5 = (int *)__vbaObjSet(&local_24,uVar4);
  iVar6 = (**(code **)(*piVar5 + 0x40))(piVar5,*param_1,&local_28);
  if (iVar6 < 0) {
    __vbaHresultCheckObj(iVar6,piVar5,&DAT_00470e74,0x40);
  }
  piVar5 = local_28;
  bVar1 = *param_1;
  if (5 < bVar1 - 1) {
    __vbaGenerateBoundsError();
  }
  bVar2 = *param_1;
  if (5 < bVar2 - 1) {
    __vbaGenerateBoundsError();
  }
  iVar6 = *piVar5;
  __vbaStrCat(&DAT_004732dc,*(undefined4 *)(DAT_0049106c + 4 + (bVar1 - 1) * 0x2c));
  uVar4 = __vbaStrMove();
  __vbaStrR4(*(undefined4 *)(DAT_0049106c + 8 + (bVar2 - 1) * 0x2c),uVar4);
  uVar4 = __vbaStrMove();
  __vbaStrCat(uVar4);
  uVar4 = __vbaStrMove();
  iVar6 = (**(code **)(iVar6 + 0x54))(piVar5,uVar4);
  if (iVar6 < 0) {
    __vbaHresultCheckObj(iVar6,piVar5,&DAT_00471330,0x54);
  }
  __vbaFreeStrList(3,&local_18,&local_1c,&local_20);
  __vbaFreeObjList(2,&local_24,&local_28);
  return;
}


