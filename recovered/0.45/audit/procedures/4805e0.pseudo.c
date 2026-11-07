/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

void __cdecl FUN_004805e0(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_54 [2];
  undefined4 local_4c;
  undefined4 local_44 [4];
  undefined4 local_34;
  int *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_00401656;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff4c;
  local_c = &DAT_00401388;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  uVar1 = (uint)DAT_0049107a;
  local_20 = 0;
  local_24 = (int *)0x0;
  local_28 = 0;
  local_2c = 0;
  local_30 = (int *)0x0;
  local_34 = 0;
  local_44[0] = 0;
  local_54[0] = 0;
  if (5 < uVar1 - 1) {
    __vbaGenerateBoundsError();
  }
  if ((*(float *)(DAT_0049106c + 0x20 + (uVar1 - 1) * 0x2c) == 0.0) && ((short)param_1[0x14] == 0))
  {
    uVar1 = (uint)DAT_0049107a;
    if (5 < uVar1 - 1) {
      __vbaGenerateBoundsError();
    }
    if (*(short *)(DAT_0049106c + 0x18 + (uVar1 - 1) * 0x2c) == 0) {
      uVar1 = (uint)DAT_0049107a;
      if (5 < uVar1 - 1) {
        __vbaGenerateBoundsError();
      }
      if (*(short *)(DAT_0049106c + 0x1a + (uVar1 - 1) * 0x2c) == 0) {
        uVar2 = (**(code **)(*param_1 + 0x374))(param_1,0x80010007,0xb,local_60,0xffffffff,local_58)
        ;
        uVar2 = __vbaObjSet(&local_1c,uVar2);
        __vbaLateIdSt(uVar2);
        __vbaFreeObj();
        uVar2 = (**(code **)(*param_1 + 0x308))(param_1);
        piVar3 = (int *)__vbaObjSet(&local_2c,uVar2);
        iVar4 = (**(code **)(*piVar3 + 0x40))(piVar3,1,&local_30);
        if (iVar4 < 0) {
          __vbaHresultCheckObj(iVar4,piVar3,&DAT_00470e74,0x40);
        }
        piVar3 = local_30;
        uVar2 = (**(code **)(*param_1 + 0x38c))(param_1,4,0,&DAT_00470e54);
        uVar2 = __vbaObjSet(&local_1c,uVar2);
        uVar2 = __vbaLateIdCallLd(local_44,uVar2);
        uVar2 = __vbaCastObjVar(uVar2);
        piVar5 = (int *)__vbaObjSet(&local_20,uVar2);
        local_4c = 7;
        local_54[0] = 2;
        iVar4 = (**(code **)(*piVar5 + 0x24))(piVar5,local_54,&local_24);
        if (iVar4 < 0) {
          __vbaHresultCheckObj(iVar4,piVar5,&DAT_00470e54,0x24);
        }
        piVar5 = local_24;
        iVar4 = (**(code **)(*local_24 + 0x34))(local_24,&local_28);
        if (iVar4 < 0) {
          __vbaHresultCheckObj(iVar4,piVar5,&DAT_00470e64,0x34);
        }
        uVar2 = local_28;
        local_28 = 0;
        iVar4 = *piVar3;
        uVar2 = __vbaObjSet(&local_34,uVar2);
        iVar4 = (**(code **)(iVar4 + 0x5c))(piVar3,uVar2);
        if (iVar4 < 0) {
          __vbaHresultCheckObj(iVar4,piVar3,&DAT_00470e84,0x5c);
        }
        __vbaFreeObjList(6,&local_1c,&local_20,&local_24,&local_2c,&local_34,&local_30);
        __vbaFreeVarList(2,local_44,local_54);
        uVar2 = (**(code **)(*param_1 + 0x308))(param_1);
        piVar3 = (int *)__vbaObjSet(&local_2c,uVar2);
        iVar4 = (**(code **)(*piVar3 + 0x40))(piVar3,2,&local_30);
        if (iVar4 < 0) {
          __vbaHresultCheckObj(iVar4,piVar3,&DAT_00470e74,0x40);
        }
        piVar3 = local_30;
        uVar2 = (**(code **)(*param_1 + 0x38c))(param_1,4,0,&DAT_00470e54);
        uVar2 = __vbaObjSet(&local_1c,uVar2);
        uVar2 = __vbaLateIdCallLd(local_44,uVar2);
        uVar2 = __vbaCastObjVar(uVar2);
        piVar5 = (int *)__vbaObjSet(&local_20,uVar2);
        local_4c = 7;
        local_54[0] = 2;
        iVar4 = (**(code **)(*piVar5 + 0x24))(piVar5,local_54,&local_24);
        if (iVar4 < 0) {
          __vbaHresultCheckObj(iVar4,piVar5,&DAT_00470e54,0x24);
        }
        piVar5 = local_24;
        iVar4 = (**(code **)(*local_24 + 0x34))(local_24,&local_28);
        if (iVar4 < 0) {
          __vbaHresultCheckObj(iVar4,piVar5,&DAT_00470e64,0x34);
        }
        uVar2 = local_28;
        local_28 = 0;
        iVar4 = *piVar3;
        uVar2 = __vbaObjSet(&local_34,uVar2);
        iVar4 = (**(code **)(iVar4 + 0x5c))(piVar3,uVar2);
        if (iVar4 < 0) {
          __vbaHresultCheckObj(iVar4,piVar3,&DAT_00470e84,0x5c);
        }
        __vbaFreeObjList(6,&local_1c,&local_20,&local_24,&local_2c,&local_34,&local_30);
        __vbaFreeVarList(2,local_44,local_54);
        uVar1 = (uint)DAT_0049107a;
        if (5 < uVar1 - 1) {
          __vbaGenerateBoundsError();
        }
        *(undefined2 *)(DAT_0049106c + 0x14 + (uVar1 - 1) * 0x2c) = 0xffff;
      }
    }
  }
  return;
}


