/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

void __cdecl FUN_0047a750(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_d4 [4];
  undefined4 local_c4 [4];
  undefined4 local_b4 [4];
  undefined4 local_a4 [9];
  undefined4 local_80 [2];
  undefined4 local_78;
  undefined4 local_70 [2];
  undefined4 local_68;
  undefined4 local_60 [2];
  undefined4 local_58;
  int *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  short *local_44;
  short *local_40;
  undefined4 local_3c [4];
  undefined4 local_2c [4];
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_00401656;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff10;
  local_c = &DAT_00401290;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_2c[0] = 0;
  local_3c[0] = 0;
  local_40 = (short *)0x0;
  local_44 = (short *)0x0;
  local_48 = 0;
  local_4c = 0;
  local_50 = (int *)0x0;
  local_60[0] = 0;
  local_70[0] = 0;
  local_80[0] = 0;
  local_a4[0] = 0;
  local_b4[0] = 0;
  local_c4[0] = 0;
  local_d4[0] = 0;
  __vbaRedim(0,8,&local_40,0,1,3,0);
  if (DAT_00491714 == (int *)0x0) {
    __vbaNew2(&LAB_00470d04,&DAT_00491714);
  }
  piVar1 = DAT_00491714;
  iVar2 = (**(code **)(*DAT_00491714 + 0x14))(DAT_00491714,&local_50);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_00470cf4,0x14);
  }
  piVar1 = local_50;
  iVar2 = (**(code **)(*local_50 + 0x50))(local_50,&local_48);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_00470f14,0x50);
  }
  __vbaStrCat(L"\\puntos.txt",local_48);
  uVar3 = __vbaStrMove();
  __vbaFileOpen(1,0xffffffff,1,uVar3);
  __vbaFreeStrList(2,&local_48,&local_4c);
  __vbaFreeObj();
  local_58 = 1;
  local_60[0] = 2;
  local_68 = 0x29;
  local_70[0] = 2;
  local_78 = 0;
  local_80[0] = 2;
  iVar2 = __vbaVarForInit(local_3c,local_a4,local_b4,local_80,local_70,local_60);
  while (iVar2 != 0) {
    local_58 = 1;
    local_60[0] = 2;
    local_68 = 3;
    local_70[0] = 2;
    local_78 = 0;
    local_80[0] = 2;
    iVar2 = __vbaVarForInit(local_2c,local_c4,local_d4,local_80,local_70,local_60);
    while (iVar2 != 0) {
      __vbaLineInputStr(&local_1c,1);
      if ((local_40 == (short *)0x0) || (*local_40 != 1)) {
        iVar2 = __vbaGenerateBoundsError();
      }
      else {
        iVar4 = __vbaI4Var(local_2c);
        iVar2 = *(int *)(local_40 + 10);
        if (*(uint *)(local_40 + 8) <= (uint)(iVar4 - iVar2)) {
          __vbaGenerateBoundsError();
        }
        iVar2 = (iVar4 - iVar2) * 8;
      }
      Ordinal_581(local_1c);
      uVar3 = __vbaFpI4();
      *(undefined4 *)(*(int *)(local_40 + 6) + iVar2) = uVar3;
      __vbaLineInputStr(&local_1c,1);
      if ((local_40 == (short *)0x0) || (*local_40 != 1)) {
        iVar2 = __vbaGenerateBoundsError();
      }
      else {
        iVar4 = __vbaI4Var(local_2c);
        iVar2 = *(int *)(local_40 + 10);
        if (*(uint *)(local_40 + 8) <= (uint)(iVar4 - iVar2)) {
          __vbaGenerateBoundsError();
        }
        iVar2 = (iVar4 - iVar2) * 8;
      }
      Ordinal_581(local_1c);
      uVar3 = __vbaFpI4();
      *(undefined4 *)(*(int *)(local_40 + 6) + 4 + iVar2) = uVar3;
      iVar2 = __vbaVarForNext(local_2c,local_c4,local_d4);
    }
    __vbaAryLock(&local_44,local_40);
    if ((local_44 == (short *)0x0) || (*local_44 != 1)) {
      iVar2 = __vbaGenerateBoundsError();
    }
    else {
      iVar2 = *(int *)(local_44 + 10);
      if (*(uint *)(local_44 + 8) <= (uint)-iVar2) {
        __vbaGenerateBoundsError();
      }
      iVar2 = iVar2 * -8;
    }
    uVar7 = 1;
    iVar2 = *(int *)(local_44 + 6) + iVar2;
    uVar6 = 4;
    uVar3 = FUN_00470bc8();
    __vbaSetSystemError(iVar2,uVar6,uVar7);
    __vbaAryUnlock(&local_44);
    uVar5 = __vbaI4Var(local_3c);
    if (0x29 < uVar5) {
      __vbaGenerateBoundsError();
    }
    *(undefined4 *)(param_1[0x11] + uVar5 * 4) = uVar3;
    iVar2 = __vbaVarForNext(local_3c,local_a4,local_b4);
  }
  __vbaFileClose(1);
  __vbaFreeVarList(4,local_a4,local_b4,local_c4,local_d4,&LAB_0047ab13);
  __vbaFreeStr();
  __vbaFreeVar();
  __vbaFreeVar();
  __vbaAryDestruct(0,&local_40);
  return;
}


