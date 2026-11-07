/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

void __cdecl FUN_0048f150(uint param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  byte local_54 [4];
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_28;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401656;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff84;
  local_c = &DAT_00401618;
  local_8 = param_1 & 1;
  piVar5 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar5 + 4))(piVar5);
  local_28 = 0;
  local_38 = 0;
  local_3c = 0;
  local_40 = 0;
  local_50 = 0;
  local_54[0] = 0;
  uVar1 = (**(code **)(*piVar5 + 0x304))(piVar5);
  piVar2 = (int *)__vbaObjSet(&local_40,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0x50))(piVar2,&local_3c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_004717a8,0x50);
  }
  iVar3 = __vbaStrCmp(L"Usar la tarjeta y salir",local_3c);
  __vbaFreeStr();
  __vbaFreeObj();
  if (iVar3 == 0) {
    uVar4 = (uint)DAT_0049107a;
    if (5 < uVar4 - 1) {
      __vbaGenerateBoundsError();
    }
    *(undefined2 *)(DAT_0049106c + 0x16 + (uVar4 - 1) * 0x2c) = 0;
    uVar4 = (uint)DAT_0049107a;
    if (5 < uVar4 - 1) {
      __vbaGenerateBoundsError();
    }
    if (*(short *)(DAT_0049106c + 0x28 + (uVar4 - 1) * 0x2c) == 0) {
      uVar4 = (uint)DAT_0049107a;
      if (5 < uVar4 - 1) {
        __vbaGenerateBoundsError();
      }
      if (*(short *)(DAT_0049106c + 0x26 + (uVar4 - 1) * 0x2c) != 0) {
        local_54[0] = __vbaUI1I2();
        FUN_00486d20(&DAT_0049107a,local_54);
        local_48 = 0;
        local_50 = 0xb;
        __vbaVarMove();
        uVar4 = (uint)DAT_0049107a;
        if (5 < uVar4 - 1) {
          __vbaGenerateBoundsError();
        }
        *(undefined2 *)(DAT_0049106c + 0x26 + (uVar4 - 1) * 0x2c) = 0;
      }
    }
    else {
      local_54[0] = __vbaUI1I2();
      FUN_00486d20(&DAT_0049107a,local_54);
      local_48 = 0;
      local_50 = 0xb;
      __vbaVarMove();
      uVar4 = (uint)DAT_0049107a;
      if (5 < uVar4 - 1) {
        __vbaGenerateBoundsError();
      }
      *(undefined2 *)(DAT_0049106c + 0x28 + (uVar4 - 1) * 0x2c) = 0;
    }
    if (DAT_00491714 == (int *)0x0) {
      __vbaNew2(&LAB_00470d04,&DAT_00491714);
    }
    piVar2 = DAT_00491714;
    iVar3 = *DAT_00491714;
    uVar1 = __vbaObjSetAddref(&local_40,piVar5);
    iVar3 = (**(code **)(iVar3 + 0x10))(piVar2,uVar1);
  }
  else {
    if (DAT_00491714 == (int *)0x0) {
      __vbaNew2(&LAB_00470d04,&DAT_00491714);
    }
    piVar2 = DAT_00491714;
    iVar3 = *DAT_00491714;
    uVar1 = __vbaObjSetAddref(&local_40,piVar5);
    iVar3 = (**(code **)(iVar3 + 0x10))(piVar2,uVar1);
  }
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00470cf4,0x10);
  }
  __vbaFreeObj();
  local_8 = 0;
  __vbaFreeVar(&LAB_0048f3fc);
  __vbaFreeVar();
  return;
}


