/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

void __cdecl FUN_00480ac0(int *param_1,byte *param_2,float *param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  ushort uVar7;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_00401656;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc8;
  local_c = &DAT_004013a0;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  bVar1 = *param_2;
  if (5 < bVar1 - 1) {
    __vbaGenerateBoundsError();
  }
  uVar7 = 0;
  if (*(float *)(DAT_0049106c + 8 + (bVar1 - 1) * 0x2c) <= *param_3) {
    uVar3 = FUN_004878c0(param_2,param_3);
    if ((short)uVar3 == 0) {
      bVar1 = *param_2;
      if (5 < bVar1 - 1) {
        __vbaGenerateBoundsError();
      }
      *(float *)(DAT_0049106c + 0x20 + (bVar1 - 1) * 0x2c) = *param_3;
      uVar4 = (**(code **)(*param_1 + 0x300))(param_1);
      piVar5 = (int *)__vbaObjSet(&local_1c,uVar4);
      iVar6 = (**(code **)(*piVar5 + 0x94))(piVar5,0xffffffff);
      if (iVar6 < 0) {
        __vbaHresultCheckObj(iVar6,piVar5,&DAT_004717a8,0x94);
      }
      __vbaFreeObj();
    }
    else {
      FUN_00487930(param_2);
    }
  }
  else {
    bVar1 = *param_2;
    if (5 < bVar1 - 1) {
      __vbaGenerateBoundsError();
    }
    bVar2 = *param_2;
    if (5 < bVar2 - 1) {
      __vbaGenerateBoundsError();
    }
    *(float *)(DAT_0049106c + 8 + (bVar2 - 1) * 0x2c) =
         *(float *)(DAT_0049106c + 8 + (bVar1 - 1) * 0x2c) - *param_3;
    if ((uVar7 & 0xd) != 0) {
      __vbaFPException();
      return;
    }
  }
  return;
}


