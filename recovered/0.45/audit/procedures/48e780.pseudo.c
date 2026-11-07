/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0048e780(uint param_1)

{
  byte bVar4;
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  uint uVar5;
  int *piVar6;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401656;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc4;
  local_c = &DAT_004015e0;
  local_8 = param_1 & 1;
  piVar6 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar6 + 4))(piVar6);
  local_1c = 0;
  bVar4 = (byte)((ushort)_DAT_0049108d >> 8);
  if (bVar4 < 0x2a) {
    uVar1 = (**(code **)(*piVar6 + 0x310))(piVar6);
    piVar2 = (int *)__vbaObjSet(&local_1c,uVar1);
    uVar5 = (uint)DAT_0049108e;
    if (0x29 < uVar5) {
      __vbaGenerateBoundsError();
    }
    iVar3 = (**(code **)(*piVar2 + 0x54))(piVar2,*(undefined4 *)(DAT_00491034 + 8 + uVar5 * 0x74));
  }
  else if (bVar4 == 0x2a) {
    uVar1 = (**(code **)(*piVar6 + 0x310))(piVar6);
    piVar2 = (int *)__vbaObjSet(&local_1c,uVar1);
    iVar3 = (**(code **)(*piVar2 + 0x54))(piVar2,L"Tarjeta suerte para salir de la carcel");
  }
  else {
    if (bVar4 != 0x2b) goto LAB_0048e898;
    uVar1 = (**(code **)(*piVar6 + 0x310))(piVar6);
    piVar2 = (int *)__vbaObjSet(&local_1c,uVar1);
    iVar3 = (**(code **)(*piVar2 + 0x54))(piVar2,L"Tarjeta destino para salir de la carcel");
  }
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00471330,0x54);
  }
  __vbaFreeObj();
LAB_0048e898:
  uVar1 = (**(code **)(*piVar6 + 0x308))(piVar6);
  piVar6 = (int *)__vbaObjSet(&local_1c,uVar1);
  uVar5 = (uint)DAT_0049108d;
  if (5 < uVar5 - 1) {
    __vbaGenerateBoundsError();
  }
  iVar3 = (**(code **)(*piVar6 + 0x54))
                    (piVar6,*(undefined4 *)(DAT_0049106c + 4 + (uVar5 - 1) * 0x2c));
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar6,&DAT_00471330,0x54);
  }
  __vbaFreeObj();
  return;
}


