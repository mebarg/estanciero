/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

undefined4 __cdecl FUN_00489400(char *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  ushort in_FPUStatusWord;
  undefined4 local_90 [4];
  undefined4 local_80 [7];
  undefined4 local_64 [2];
  undefined4 local_5c;
  undefined4 local_54 [2];
  undefined1 local_4c;
  undefined4 local_44 [2];
  undefined4 local_3c;
  undefined4 local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24 [4];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &LAB_00401656;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff4c;
  local_8 = &DAT_004014c0;
  local_24[0] = 0;
  local_28 = 0;
  local_2c = 0.0;
  local_34 = 0;
  local_54[0] = 0;
  local_64[0] = 0;
  local_80[0] = 0;
  local_90[0] = 0;
  if (*param_1 == '\x10') {
    local_28 = 4000;
    local_34 = 800;
  }
  else if (*param_1 == '\n') {
    local_28 = 0x9c4;
    local_34 = 500;
  }
  uVar7 = (uint)DAT_0049107a;
  local_3c = 1;
  local_44[0] = 2;
  ExceptionList = &pvStack_14;
  puVar1 = &stack0xffffff4c;
  if (5 < uVar7 - 1) {
    ExceptionList = &pvStack_14;
    __vbaGenerateBoundsError();
    puVar1 = local_c;
  }
  local_c = puVar1;
  local_4c = *(undefined1 *)(DAT_0049106c + 0x12 + (uVar7 - 1) * 0x2c);
  local_54[0] = 0x11;
  local_5c = 1;
  local_64[0] = 2;
  iVar2 = __vbaVarForInit(local_24,local_80,local_90,local_64,local_54,local_44);
  do {
    if (iVar2 == 0) {
      local_30 = local_2c;
      __vbaFreeVarList(2,local_80,local_90,&LAB_0048995a);
      uVar4 = __vbaFreeVar();
      return uVar4;
    }
    if (5 < DAT_0049107a - 1) {
      __vbaGenerateBoundsError();
    }
    uVar7 = (uint)DAT_0049107a;
    if (5 < uVar7 - 1) {
      __vbaGenerateBoundsError();
    }
    iVar2 = (uVar7 - 1) * 0x2c;
    if (*(int *)(iVar2 + 0xc + DAT_0049106c) == 0) {
LAB_004895b0:
      iVar3 = __vbaGenerateBoundsError();
    }
    else {
      uVar7 = (uint)DAT_0049107a;
      if (5 < uVar7 - 1) {
        __vbaGenerateBoundsError();
      }
      iVar2 = (uVar7 - 1) * 0x2c;
      if (**(short **)(iVar2 + 0xc + DAT_0049106c) != 1) goto LAB_004895b0;
      uVar7 = (uint)DAT_0049107a;
      if (5 < uVar7 - 1) {
        __vbaGenerateBoundsError();
      }
      iVar2 = __vbaI4Var(local_24);
      uVar6 = iVar2 - *(int *)(*(int *)(DAT_0049106c + 0xc + (uVar7 - 1) * 0x2c) + 0x14);
      uVar7 = (uint)DAT_0049107a;
      if (5 < uVar7 - 1) {
        __vbaGenerateBoundsError();
      }
      iVar2 = (uVar7 - 1) * 0x2c;
      if (*(uint *)(*(int *)(iVar2 + 0xc + DAT_0049106c) + 0x10) <= uVar6) {
        __vbaGenerateBoundsError();
      }
      iVar3 = uVar6 * 2;
    }
    if (*(short *)(*(int *)(*(int *)(iVar2 + 0xc + DAT_0049106c) + 0xc) + iVar3) < 0x2a) {
      if (5 < DAT_0049107a - 1) {
        __vbaGenerateBoundsError();
      }
      uVar7 = (uint)DAT_0049107a;
      if (5 < uVar7 - 1) {
        __vbaGenerateBoundsError();
      }
      iVar2 = (uVar7 - 1) * 0x2c;
      if (*(int *)(iVar2 + 0xc + DAT_0049106c) == 0) {
LAB_00489693:
        iVar3 = __vbaGenerateBoundsError();
      }
      else {
        uVar7 = (uint)DAT_0049107a;
        if (5 < uVar7 - 1) {
          __vbaGenerateBoundsError();
        }
        iVar2 = (uVar7 - 1) * 0x2c;
        if (**(short **)(iVar2 + 0xc + DAT_0049106c) != 1) goto LAB_00489693;
        uVar7 = (uint)DAT_0049107a;
        if (5 < uVar7 - 1) {
          __vbaGenerateBoundsError();
        }
        iVar2 = __vbaI4Var(local_24);
        uVar6 = (uint)DAT_0049107a;
        uVar7 = iVar2 - *(int *)(*(int *)(DAT_0049106c + 0xc + (uVar7 - 1) * 0x2c) + 0x14);
        if (5 < uVar6 - 1) {
          __vbaGenerateBoundsError();
        }
        iVar2 = (uVar6 - 1) * 0x2c;
        if (*(uint *)(*(int *)(iVar2 + 0xc + DAT_0049106c) + 0x10) <= uVar7) {
          __vbaGenerateBoundsError();
        }
        iVar3 = uVar7 * 2;
      }
      uVar7 = (uint)*(short *)(*(int *)(*(int *)(iVar2 + 0xc + DAT_0049106c) + 0xc) + iVar3);
      if (0x29 < uVar7) {
        __vbaGenerateBoundsError();
      }
      if (*(byte *)(DAT_00491034 + 0x66 + uVar7 * 0x74) < 5) {
        if (5 < DAT_0049107a - 1) {
          __vbaGenerateBoundsError();
        }
        uVar7 = (uint)DAT_0049107a;
        if (5 < uVar7 - 1) {
          __vbaGenerateBoundsError();
        }
        iVar2 = (uVar7 - 1) * 0x2c;
        if (*(int *)(iVar2 + 0xc + DAT_0049106c) == 0) {
LAB_00489792:
          iVar3 = __vbaGenerateBoundsError();
        }
        else {
          uVar7 = (uint)DAT_0049107a;
          if (5 < uVar7 - 1) {
            __vbaGenerateBoundsError();
          }
          iVar2 = (uVar7 - 1) * 0x2c;
          if (**(short **)(iVar2 + 0xc + DAT_0049106c) != 1) goto LAB_00489792;
          uVar7 = (uint)DAT_0049107a;
          if (5 < uVar7 - 1) {
            __vbaGenerateBoundsError();
          }
          iVar2 = __vbaI4Var(local_24);
          uVar6 = iVar2 - *(int *)(*(int *)(DAT_0049106c + 0xc + (uVar7 - 1) * 0x2c) + 0x14);
          uVar7 = (uint)DAT_0049107a;
          if (5 < uVar7 - 1) {
            __vbaGenerateBoundsError();
          }
          iVar2 = (uVar7 - 1) * 0x2c;
          if (*(uint *)(*(int *)(iVar2 + 0xc + DAT_0049106c) + 0x10) <= uVar6) {
            __vbaGenerateBoundsError();
          }
          iVar3 = uVar6 * 2;
        }
        uVar7 = (uint)*(short *)(*(int *)(*(int *)(iVar2 + 0xc + DAT_0049106c) + 0xc) + iVar3);
        if (0x29 < uVar7) {
          __vbaGenerateBoundsError();
        }
        iVar2 = (int)(short)(ushort)*(byte *)(DAT_00491034 + 0x66 + uVar7 * 0x74) *
                (int)(short)local_34;
        sVar5 = (short)iVar2;
        if (sVar5 != iVar2) {
          __vbaErrorOverflow();
          return 0;
        }
      }
      else {
        if (5 < DAT_0049107a - 1) {
          __vbaGenerateBoundsError();
        }
        uVar7 = (uint)DAT_0049107a;
        if (5 < uVar7 - 1) {
          __vbaGenerateBoundsError();
        }
        iVar2 = (uVar7 - 1) * 0x2c;
        if (*(int *)(iVar2 + 0xc + DAT_0049106c) == 0) {
LAB_004898b9:
          iVar3 = __vbaGenerateBoundsError();
        }
        else {
          uVar7 = (uint)DAT_0049107a;
          if (5 < uVar7 - 1) {
            __vbaGenerateBoundsError();
          }
          iVar2 = (uVar7 - 1) * 0x2c;
          if (**(short **)(iVar2 + 0xc + DAT_0049106c) != 1) goto LAB_004898b9;
          uVar7 = (uint)DAT_0049107a;
          if (5 < uVar7 - 1) {
            __vbaGenerateBoundsError();
          }
          iVar2 = __vbaI4Var(local_24);
          uVar6 = (uint)DAT_0049107a;
          uVar7 = iVar2 - *(int *)(*(int *)(DAT_0049106c + 0xc + (uVar7 - 1) * 0x2c) + 0x14);
          if (5 < uVar6 - 1) {
            __vbaGenerateBoundsError();
          }
          iVar2 = (uVar6 - 1) * 0x2c;
          if (*(uint *)(*(int *)(iVar2 + 0xc + DAT_0049106c) + 0x10) <= uVar7) {
            __vbaGenerateBoundsError();
          }
          iVar3 = uVar7 * 2;
        }
        uVar7 = (uint)*(short *)(*(int *)(*(int *)(iVar2 + 0xc + DAT_0049106c) + 0xc) + iVar3);
        if (0x29 < uVar7) {
          __vbaGenerateBoundsError();
        }
        if (*(char *)(DAT_00491034 + 0x66 + uVar7 * 0x74) != '\x05') goto LAB_00489914;
        sVar5 = (short)local_28;
      }
      local_2c = (float)(int)sVar5 + local_2c;
      if ((in_FPUStatusWord & 0xd) != 0) {
        uVar4 = __vbaFPException();
        return uVar4;
      }
    }
LAB_00489914:
    iVar2 = __vbaVarForNext(local_24,local_80,local_90);
  } while( true );
}


