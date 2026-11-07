/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

void __cdecl FUN_0048f420(uint param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
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
  undefined1 *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401656;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff58;
  local_c = &LAB_00401628;
  local_8 = param_1 & 1;
  piVar6 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar6 + 4))(piVar6);
  local_1c = 0;
  local_20 = 0;
  local_24 = (int *)0x0;
  local_28 = 0;
  local_2c = 0;
  local_30 = (int *)0x0;
  local_34 = 0;
  local_44[0] = 0;
  local_54[0] = 0;
  uVar1 = (**(code **)(*piVar6 + 0x300))(piVar6);
  piVar2 = (int *)__vbaObjSet(&local_2c,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0x40))(piVar2,1,&local_30);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00470e74,0x40);
  }
  piVar2 = local_30;
  if (DAT_00491010 == (int *)0x0) {
    __vbaNew2(&DAT_0046f194,&DAT_00491010);
  }
  uVar1 = (**(code **)(*DAT_00491010 + 0x38c))(DAT_00491010,4,0,&DAT_00470e54);
  uVar1 = __vbaObjSet(&local_1c,uVar1);
  uVar1 = __vbaLateIdCallLd(local_44,uVar1);
  uVar1 = __vbaCastObjVar(uVar1);
  piVar4 = (int *)__vbaObjSet(&local_20,uVar1);
  local_4c = 1;
  local_54[0] = 2;
  iVar3 = (**(code **)(*piVar4 + 0x24))(piVar4,local_54,&local_24);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4,&DAT_00470e54,0x24);
  }
  piVar4 = local_24;
  iVar3 = (**(code **)(*local_24 + 0x34))(local_24,&local_28);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4,&DAT_00470e64,0x34);
  }
  uVar1 = local_28;
  local_28 = 0;
  iVar3 = *piVar2;
  uVar1 = __vbaObjSet(&local_34,uVar1);
  iVar3 = (**(code **)(iVar3 + 0x5c))(piVar2,uVar1);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00470e84,0x5c);
  }
  __vbaFreeObjList(6,&local_1c,&local_20,&local_24,&local_2c,&local_34,&local_30);
  __vbaFreeVarList(2,local_44,local_54);
  uVar1 = (**(code **)(*piVar6 + 0x300))(piVar6);
  piVar2 = (int *)__vbaObjSet(&local_2c,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0x40))(piVar2,2,&local_30);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00470e74,0x40);
  }
  piVar2 = local_30;
  if (DAT_00491010 == (int *)0x0) {
    __vbaNew2(&DAT_0046f194,&DAT_00491010);
  }
  uVar1 = (**(code **)(*DAT_00491010 + 0x38c))(DAT_00491010,4,0,&DAT_00470e54);
  uVar1 = __vbaObjSet(&local_1c,uVar1);
  uVar1 = __vbaLateIdCallLd(local_44,uVar1);
  uVar1 = __vbaCastObjVar(uVar1);
  piVar4 = (int *)__vbaObjSet(&local_20,uVar1);
  local_4c = 1;
  local_54[0] = 2;
  iVar3 = (**(code **)(*piVar4 + 0x24))(piVar4,local_54,&local_24);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4,&DAT_00470e54,0x24);
  }
  piVar4 = local_24;
  iVar3 = (**(code **)(*local_24 + 0x34))(local_24,&local_28);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4,&DAT_00470e64,0x34);
  }
  uVar1 = local_28;
  local_28 = 0;
  iVar3 = *piVar2;
  uVar1 = __vbaObjSet(&local_34,uVar1);
  iVar3 = (**(code **)(iVar3 + 0x5c))(piVar2,uVar1);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00470e84,0x5c);
  }
  __vbaFreeObjList(6,&local_1c,&local_20,&local_24,&local_2c,&local_34,&local_30);
  __vbaFreeVarList(2,local_44,local_54);
  *(undefined2 *)(piVar6 + 0xd) = 0;
  uVar5 = (uint)DAT_0049107a;
  if (5 < uVar5 - 1) {
    __vbaGenerateBoundsError();
  }
  if (*(short *)(DAT_0049106c + 0x26 + (uVar5 - 1) * 0x2c) == 0) {
    uVar5 = (uint)DAT_0049107a;
    if (5 < uVar5 - 1) {
      __vbaGenerateBoundsError();
    }
    if (*(short *)(DAT_0049106c + 0x28 + (uVar5 - 1) * 0x2c) == 0) {
      return;
    }
  }
  uVar1 = (**(code **)(*piVar6 + 0x2fc))(piVar6);
  piVar2 = (int *)__vbaObjSet(&local_1c,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0x94))(piVar2,0);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00471368,0x94);
  }
  __vbaFreeObj();
  return;
}


