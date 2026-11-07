/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

void __cdecl FUN_0047bca0(int *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  code *pcVar8;
  undefined4 local_124 [4];
  undefined4 local_114 [5];
  int *local_100;
  int *local_e8;
  undefined4 local_d0 [2];
  undefined *local_c8;
  undefined4 local_c0 [2];
  wchar_t *local_b8;
  undefined4 local_b0 [2];
  undefined4 local_a8;
  undefined4 local_a0 [2];
  undefined4 local_98;
  undefined4 local_90 [2];
  undefined4 local_88;
  undefined4 local_80 [2];
  undefined4 local_78;
  undefined4 local_70 [2];
  undefined4 local_68;
  undefined4 local_60 [2];
  undefined4 local_58;
  undefined4 local_50 [4];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28 [4];
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_00401656;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xfffffec0;
  local_c = &LAB_004012e0;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_28[0] = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  local_40 = 0;
  local_50[0] = 0;
  local_60[0] = 0;
  local_70[0] = 0;
  local_80[0] = 0;
  local_90[0] = 0;
  local_a0[0] = 0;
  local_b0[0] = 0;
  local_c0[0] = 0;
  local_d0[0] = 0;
  local_114[0] = 0;
  local_124[0] = 0;
  uVar3 = (**(code **)(*param_1 + 0x30c))(param_1);
  local_e8 = (int *)__vbaObjSet(&local_38,uVar3);
  bVar1 = *param_2;
  if (5 < bVar1 - 1) {
    __vbaGenerateBoundsError();
  }
  iVar4 = *local_e8;
  __vbaStrCat(*(undefined4 *)(DAT_0049106c + 4 + (bVar1 - 1) * 0x2c),L"Propiedades de ");
  uVar3 = __vbaStrMove();
  piVar5 = local_e8;
  iVar4 = (**(code **)(iVar4 + 0x54))(local_e8,uVar3);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar5,&DAT_00471368,0x54);
  }
  __vbaFreeStr();
  __vbaFreeObj();
  uVar3 = (**(code **)(*param_1 + 0x388))(param_1,7,0,&DAT_004711c4);
  uVar3 = __vbaObjSet(&local_38,uVar3);
  uVar3 = __vbaLateIdCallLd(local_50,uVar3);
  uVar3 = __vbaCastObjVar(uVar3);
  piVar5 = (int *)__vbaObjSet(&local_3c,uVar3);
  iVar4 = (**(code **)(*piVar5 + 0x2c))(piVar5);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar5,&DAT_004711c4,0x2c);
  }
  __vbaFreeObjList(2,&local_38,&local_3c);
  __vbaFreeVar();
  local_a8 = 1;
  bVar1 = *param_2;
  local_b0[0] = 2;
  if (5 < bVar1 - 1) {
    __vbaGenerateBoundsError();
  }
  local_b8 = (wchar_t *)
             CONCAT31(local_b8._1_3_,*(undefined1 *)(DAT_0049106c + 0x12 + (bVar1 - 1) * 0x2c));
  local_c0[0] = 0x11;
  local_c8 = (undefined *)0x1;
  local_d0[0] = 2;
  iVar4 = __vbaVarForInit(local_28,local_114,local_124,local_d0,local_c0,local_b0);
  do {
    if (iVar4 == 0) {
      __vbaFreeVarList(2,local_114,local_124,&LAB_0047d026);
      __vbaFreeVar();
      __vbaFreeObj();
      return;
    }
    if (5 < *param_2 - 1) {
      __vbaGenerateBoundsError();
    }
    bVar1 = *param_2;
    if (5 < bVar1 - 1) {
      __vbaGenerateBoundsError();
    }
    iVar4 = (bVar1 - 1) * 0x2c;
    if (*(int *)(iVar4 + 0xc + DAT_0049106c) == 0) {
LAB_0047bf93:
      iVar6 = __vbaGenerateBoundsError();
    }
    else {
      bVar1 = *param_2;
      if (5 < bVar1 - 1) {
        __vbaGenerateBoundsError();
      }
      iVar4 = (bVar1 - 1) * 0x2c;
      if (**(short **)(iVar4 + 0xc + DAT_0049106c) != 1) goto LAB_0047bf93;
      bVar1 = *param_2;
      if (5 < bVar1 - 1) {
        __vbaGenerateBoundsError();
      }
      iVar4 = __vbaI4Var(local_28);
      bVar2 = *param_2;
      uVar7 = iVar4 - *(int *)(*(int *)(DAT_0049106c + 0xc + (bVar1 - 1) * 0x2c) + 0x14);
      if (5 < bVar2 - 1) {
        __vbaGenerateBoundsError();
      }
      iVar4 = (bVar2 - 1) * 0x2c;
      if (*(uint *)(*(int *)(iVar4 + 0xc + DAT_0049106c) + 0x10) <= uVar7) {
        __vbaGenerateBoundsError();
      }
      iVar6 = uVar7 * 2;
    }
    if (*(short *)(*(int *)(*(int *)(iVar4 + 0xc + DAT_0049106c) + 0xc) + iVar6) < 0x2a) {
      if (5 < *param_2 - 1) {
        __vbaGenerateBoundsError();
      }
      bVar1 = *param_2;
      if (5 < bVar1 - 1) {
        __vbaGenerateBoundsError();
      }
      iVar4 = (bVar1 - 1) * 0x2c;
      if (*(int *)(iVar4 + 0xc + DAT_0049106c) == 0) {
LAB_0047c080:
        iVar6 = __vbaGenerateBoundsError();
      }
      else {
        bVar1 = *param_2;
        if (5 < bVar1 - 1) {
          __vbaGenerateBoundsError();
        }
        iVar4 = (bVar1 - 1) * 0x2c;
        if (**(short **)(iVar4 + 0xc + DAT_0049106c) != 1) goto LAB_0047c080;
        bVar1 = *param_2;
        if (5 < bVar1 - 1) {
          __vbaGenerateBoundsError();
        }
        iVar4 = __vbaI4Var(local_28);
        bVar2 = *param_2;
        uVar7 = iVar4 - *(int *)(*(int *)(DAT_0049106c + 0xc + (bVar1 - 1) * 0x2c) + 0x14);
        if (5 < bVar2 - 1) {
          __vbaGenerateBoundsError();
        }
        iVar4 = (bVar2 - 1) * 0x2c;
        if (*(uint *)(*(int *)(iVar4 + 0xc + DAT_0049106c) + 0x10) <= uVar7) {
          __vbaGenerateBoundsError();
        }
        iVar6 = uVar7 * 2;
      }
      uVar7 = (uint)*(short *)(*(int *)(*(int *)(iVar4 + 0xc + DAT_0049106c) + 0xc) + iVar6);
      if (0x29 < uVar7) {
        __vbaGenerateBoundsError();
      }
      if (*(short *)(DAT_00491034 + 0x6c + uVar7 * 0x74) == -1) {
        uVar3 = (**(code **)(*param_1 + 0x388))();
        uVar3 = __vbaObjSet(&local_38,uVar3);
        uVar3 = __vbaLateIdCallLd(local_50,uVar3);
        uVar3 = __vbaCastObjVar(uVar3);
        local_100 = (int *)__vbaObjSet(&local_3c,uVar3);
        pcVar8 = __vbaGenerateBoundsError_exref;
        local_98 = 0x80020004;
        local_a0[0] = 10;
        if (5 < *param_2 - 1) {
          __vbaGenerateBoundsError();
        }
        bVar1 = *param_2;
        if (5 < bVar1 - 1) {
          __vbaGenerateBoundsError();
        }
        iVar4 = (bVar1 - 1) * 0x2c;
        if (*(int *)(iVar4 + 0xc + DAT_0049106c) == 0) {
LAB_0047c1e3:
          iVar6 = __vbaGenerateBoundsError();
        }
        else {
          bVar1 = *param_2;
          if (5 < bVar1 - 1) {
            __vbaGenerateBoundsError();
          }
          iVar4 = (bVar1 - 1) * 0x2c;
          if (**(short **)(iVar4 + 0xc + DAT_0049106c) != 1) goto LAB_0047c1e3;
          bVar1 = *param_2;
          if (5 < bVar1 - 1) {
            __vbaGenerateBoundsError();
          }
          iVar4 = __vbaI4Var(local_28);
          bVar2 = *param_2;
          uVar7 = iVar4 - *(int *)(*(int *)(DAT_0049106c + 0xc + (bVar1 - 1) * 0x2c) + 0x14);
          if (5 < bVar2 - 1) {
            __vbaGenerateBoundsError();
          }
          iVar4 = (bVar2 - 1) * 0x2c;
          if (*(uint *)(*(int *)(iVar4 + 0xc + DAT_0049106c) + 0x10) <= uVar7) {
            __vbaGenerateBoundsError();
          }
          iVar6 = uVar7 * 2;
          pcVar8 = __vbaGenerateBoundsError_exref;
        }
        __vbaStrI2(*(undefined2 *)(*(int *)(*(int *)(iVar4 + 0xc + DAT_0049106c) + 0xc) + iVar6),
                   &DAT_00471908);
        uVar3 = __vbaStrMove();
        local_88 = __vbaStrCat(uVar3);
        local_90[0] = 8;
        if (5 < *param_2 - 1) {
          (*pcVar8)();
        }
        bVar1 = *param_2;
        if (5 < bVar1 - 1) {
          (*pcVar8)();
        }
        iVar4 = (bVar1 - 1) * 0x2c;
        if (*(int *)(iVar4 + 0xc + DAT_0049106c) == 0) {
LAB_0047c2e4:
          iVar6 = (*pcVar8)();
        }
        else {
          bVar1 = *param_2;
          if (5 < bVar1 - 1) {
            (*pcVar8)();
          }
          iVar4 = (bVar1 - 1) * 0x2c;
          if (**(short **)(iVar4 + 0xc + DAT_0049106c) != 1) goto LAB_0047c2e4;
          bVar1 = *param_2;
          if (5 < bVar1 - 1) {
            (*pcVar8)();
          }
          iVar4 = __vbaI4Var(local_28);
          bVar2 = *param_2;
          uVar7 = iVar4 - *(int *)(*(int *)(DAT_0049106c + 0xc + (bVar1 - 1) * 0x2c) + 0x14);
          if (5 < bVar2 - 1) {
            __vbaGenerateBoundsError();
          }
          iVar4 = (bVar2 - 1) * 0x2c;
          if (*(uint *)(*(int *)(iVar4 + 0xc + DAT_0049106c) + 0x10) <= uVar7) {
            __vbaGenerateBoundsError();
          }
          iVar6 = uVar7 * 2;
        }
        uVar7 = (uint)*(short *)(*(int *)(*(int *)(iVar4 + 0xc + DAT_0049106c) + 0xc) + iVar6);
        if (0x29 < uVar7) {
          __vbaGenerateBoundsError();
        }
        local_78 = __vbaStrCat(L" HIPOTECADA",*(undefined4 *)(DAT_00491034 + 8 + uVar7 * 0x74));
        local_80[0] = 8;
        if (5 < *param_2 - 1) {
          __vbaGenerateBoundsError();
        }
        bVar1 = *param_2;
        if (5 < bVar1 - 1) {
          __vbaGenerateBoundsError();
        }
        iVar4 = (bVar1 - 1) * 0x2c;
        if (*(int *)(iVar4 + 0xc + DAT_0049106c) == 0) {
LAB_0047c3ed:
          iVar6 = __vbaGenerateBoundsError();
        }
        else {
          bVar1 = *param_2;
          if (5 < bVar1 - 1) {
            __vbaGenerateBoundsError();
          }
          iVar4 = (bVar1 - 1) * 0x2c;
          if (**(short **)(iVar4 + 0xc + DAT_0049106c) != 1) goto LAB_0047c3ed;
          bVar1 = *param_2;
          if (5 < bVar1 - 1) {
            __vbaGenerateBoundsError();
          }
          iVar4 = __vbaI4Var(local_28);
          uVar7 = iVar4 - *(int *)(*(int *)(DAT_0049106c + 0xc + (bVar1 - 1) * 0x2c) + 0x14);
          bVar1 = *param_2;
          if (5 < bVar1 - 1) {
            __vbaGenerateBoundsError();
          }
          iVar4 = (bVar1 - 1) * 0x2c;
          if (*(uint *)(*(int *)(iVar4 + 0xc + DAT_0049106c) + 0x10) <= uVar7) {
            __vbaGenerateBoundsError();
          }
          iVar6 = uVar7 * 2;
        }
        iVar4 = *(int *)(iVar4 + 0xc + DAT_0049106c);
        __vbaStrI2(CONCAT22((short)((uint)iVar4 >> 0x10),
                            *(undefined2 *)(*(int *)(iVar4 + 0xc) + iVar6)),&DAT_004718e4);
        uVar3 = __vbaStrMove();
        local_68 = __vbaStrCat(uVar3);
        piVar5 = local_100;
        local_70[0] = 8;
        local_58 = 0x80020004;
        local_60[0] = 10;
        iVar4 = (**(code **)(*local_100 + 0x28))
                          (local_100,local_60,local_70,local_80,local_90,local_a0,&local_40);
        if (iVar4 < 0) {
          __vbaHresultCheckObj(iVar4,piVar5,&DAT_004711c4,0x28);
        }
        uVar3 = __vbaCastObj(local_40,&DAT_004711d4);
        __vbaObjSet(&local_2c,uVar3);
        __vbaFreeStrList(2,&local_30,&local_34);
        __vbaFreeObjList(3,&local_38,&local_3c,&local_40);
        __vbaFreeVarList(6,local_50,local_60,local_70,local_80,local_90,local_a0);
      }
      else {
        uVar3 = (**(code **)(*param_1 + 0x388))(param_1,7,0,&DAT_004711c4);
        uVar3 = __vbaObjSet(&local_38,uVar3);
        uVar3 = __vbaLateIdCallLd(local_50,uVar3);
        uVar3 = __vbaCastObjVar(uVar3);
        local_100 = (int *)__vbaObjSet(&local_3c,uVar3);
        pcVar8 = __vbaGenerateBoundsError_exref;
        local_88 = 0x80020004;
        local_90[0] = 10;
        if (5 < *param_2 - 1) {
          __vbaGenerateBoundsError();
        }
        bVar1 = *param_2;
        if (5 < bVar1 - 1) {
          __vbaGenerateBoundsError();
        }
        iVar4 = (bVar1 - 1) * 0x2c;
        if (*(int *)(iVar4 + 0xc + DAT_0049106c) == 0) {
LAB_0047c5f5:
          iVar6 = __vbaGenerateBoundsError();
        }
        else {
          bVar1 = *param_2;
          if (5 < bVar1 - 1) {
            __vbaGenerateBoundsError();
          }
          iVar4 = (bVar1 - 1) * 0x2c;
          if (**(short **)(iVar4 + 0xc + DAT_0049106c) != 1) goto LAB_0047c5f5;
          bVar1 = *param_2;
          if (5 < bVar1 - 1) {
            __vbaGenerateBoundsError();
          }
          iVar4 = __vbaI4Var(local_28);
          bVar2 = *param_2;
          uVar7 = iVar4 - *(int *)(*(int *)(DAT_0049106c + 0xc + (bVar1 - 1) * 0x2c) + 0x14);
          if (5 < bVar2 - 1) {
            __vbaGenerateBoundsError();
          }
          iVar4 = (bVar2 - 1) * 0x2c;
          if (*(uint *)(*(int *)(iVar4 + 0xc + DAT_0049106c) + 0x10) <= uVar7) {
            __vbaGenerateBoundsError();
          }
          iVar6 = uVar7 * 2;
          pcVar8 = __vbaGenerateBoundsError_exref;
        }
        __vbaStrI2(*(undefined2 *)(*(int *)(*(int *)(iVar4 + 0xc + DAT_0049106c) + 0xc) + iVar6),
                   &DAT_00471908);
        uVar3 = __vbaStrMove();
        local_78 = __vbaStrCat(uVar3);
        local_80[0] = 8;
        if (5 < *param_2 - 1) {
          (*pcVar8)();
        }
        bVar1 = *param_2;
        if (5 < bVar1 - 1) {
          (*pcVar8)();
        }
        iVar4 = (bVar1 - 1) * 0x2c;
        if (*(int *)(iVar4 + 0xc + DAT_0049106c) == 0) {
LAB_0047c6f0:
          iVar6 = (*pcVar8)();
        }
        else {
          bVar1 = *param_2;
          if (5 < bVar1 - 1) {
            (*pcVar8)();
          }
          iVar4 = (bVar1 - 1) * 0x2c;
          if (**(short **)(iVar4 + 0xc + DAT_0049106c) != 1) goto LAB_0047c6f0;
          bVar1 = *param_2;
          if (5 < bVar1 - 1) {
            (*pcVar8)();
          }
          iVar4 = __vbaI4Var(local_28);
          bVar2 = *param_2;
          uVar7 = iVar4 - *(int *)(*(int *)(DAT_0049106c + 0xc + (bVar1 - 1) * 0x2c) + 0x14);
          if (5 < bVar2 - 1) {
            __vbaGenerateBoundsError();
          }
          iVar4 = (bVar2 - 1) * 0x2c;
          if (*(uint *)(*(int *)(iVar4 + 0xc + DAT_0049106c) + 0x10) <= uVar7) {
            __vbaGenerateBoundsError();
          }
          iVar6 = uVar7 * 2;
        }
        uVar7 = (uint)*(short *)(*(int *)(*(int *)(iVar4 + 0xc + DAT_0049106c) + 0xc) + iVar6);
        if (0x29 < uVar7) {
          __vbaGenerateBoundsError();
        }
        local_c0[0] = 0x4008;
        local_b8 = (wchar_t *)(DAT_00491034 + 8 + uVar7 * 0x74);
        if (5 < *param_2 - 1) {
          __vbaGenerateBoundsError();
        }
        bVar1 = *param_2;
        if (5 < bVar1 - 1) {
          __vbaGenerateBoundsError();
        }
        iVar4 = (bVar1 - 1) * 0x2c;
        if (*(int *)(iVar4 + 0xc + DAT_0049106c) == 0) {
LAB_0047c801:
          iVar6 = __vbaGenerateBoundsError();
        }
        else {
          bVar1 = *param_2;
          if (5 < bVar1 - 1) {
            __vbaGenerateBoundsError();
          }
          iVar4 = (bVar1 - 1) * 0x2c;
          if (**(short **)(iVar4 + 0xc + DAT_0049106c) != 1) goto LAB_0047c801;
          bVar1 = *param_2;
          if (5 < bVar1 - 1) {
            __vbaGenerateBoundsError();
          }
          iVar4 = __vbaI4Var(local_28);
          uVar7 = iVar4 - *(int *)(*(int *)(DAT_0049106c + 0xc + (bVar1 - 1) * 0x2c) + 0x14);
          bVar1 = *param_2;
          if (5 < bVar1 - 1) {
            __vbaGenerateBoundsError();
          }
          iVar4 = (bVar1 - 1) * 0x2c;
          if (*(uint *)(*(int *)(iVar4 + 0xc + DAT_0049106c) + 0x10) <= uVar7) {
            __vbaGenerateBoundsError();
          }
          iVar6 = uVar7 * 2;
        }
        iVar4 = *(int *)(iVar4 + 0xc + DAT_0049106c);
        __vbaStrI2(CONCAT22((short)((uint)iVar4 >> 0x10),
                            *(undefined2 *)(*(int *)(iVar4 + 0xc) + iVar6)),&DAT_004718e4);
        uVar3 = __vbaStrMove();
        local_68 = __vbaStrCat(uVar3);
        piVar5 = local_100;
        local_70[0] = 8;
        local_58 = 0x80020004;
        local_60[0] = 10;
        iVar4 = (**(code **)(*local_100 + 0x28))
                          (local_100,local_60,local_70,local_c0,local_80,local_90,&local_40);
        if (iVar4 < 0) {
          __vbaHresultCheckObj(iVar4,piVar5,&DAT_004711c4,0x28);
        }
        uVar3 = __vbaCastObj(local_40,&DAT_004711d4);
        __vbaObjSet(&local_2c,uVar3);
        __vbaFreeStrList(2,&local_30,&local_34);
        __vbaFreeObjList(3,&local_38,&local_3c,&local_40);
        __vbaFreeVarList(5,local_50,local_60,local_70,local_80,local_90);
      }
    }
    else {
      if (5 < *param_2 - 1) {
        __vbaGenerateBoundsError();
      }
      bVar1 = *param_2;
      if (5 < bVar1 - 1) {
        __vbaGenerateBoundsError();
      }
      iVar4 = (bVar1 - 1) * 0x2c;
      if (*(int *)(iVar4 + 0xc + DAT_0049106c) == 0) {
LAB_0047c9bf:
        iVar6 = __vbaGenerateBoundsError();
      }
      else {
        bVar1 = *param_2;
        if (5 < bVar1 - 1) {
          __vbaGenerateBoundsError();
        }
        iVar4 = (bVar1 - 1) * 0x2c;
        if (**(short **)(iVar4 + 0xc + DAT_0049106c) != 1) goto LAB_0047c9bf;
        bVar1 = *param_2;
        if (5 < bVar1 - 1) {
          __vbaGenerateBoundsError();
        }
        iVar4 = __vbaI4Var(local_28);
        uVar7 = iVar4 - *(int *)(*(int *)(DAT_0049106c + 0xc + (bVar1 - 1) * 0x2c) + 0x14);
        bVar1 = *param_2;
        if (5 < bVar1 - 1) {
          __vbaGenerateBoundsError();
        }
        iVar4 = (bVar1 - 1) * 0x2c;
        if (*(uint *)(*(int *)(iVar4 + 0xc + DAT_0049106c) + 0x10) <= uVar7) {
          __vbaGenerateBoundsError();
        }
        iVar6 = uVar7 * 2;
      }
      if (*(short *)(*(int *)(*(int *)(iVar4 + 0xc + DAT_0049106c) + 0xc) + iVar6) == 0x2a) {
        uVar3 = (**(code **)(*param_1 + 0x388))(param_1,7,0,&DAT_004711c4);
        uVar3 = __vbaObjSet(&local_38,uVar3);
        uVar3 = __vbaLateIdCallLd(local_50,uVar3);
        uVar3 = __vbaCastObjVar(uVar3);
        piVar5 = (int *)__vbaObjSet(&local_3c,uVar3);
        local_98 = 0x80020004;
        local_a0[0] = 10;
        local_c8 = &DAT_00471484;
        local_d0[0] = 8;
        __vbaVarDup();
        local_b8 = L"SALIR DE LA CARCEL";
        local_c0[0] = 8;
        __vbaVarDup();
        if (5 < *param_2 - 1) {
          __vbaGenerateBoundsError();
        }
        bVar1 = *param_2;
        if (5 < bVar1 - 1) {
          __vbaGenerateBoundsError();
        }
        iVar4 = (bVar1 - 1) * 0x2c;
        if (*(int *)(iVar4 + 0xc + DAT_0049106c) == 0) {
LAB_0047cb54:
          iVar6 = __vbaGenerateBoundsError();
        }
        else {
          bVar1 = *param_2;
          if (5 < bVar1 - 1) {
            __vbaGenerateBoundsError();
          }
          iVar4 = (bVar1 - 1) * 0x2c;
          if (**(short **)(iVar4 + 0xc + DAT_0049106c) != 1) goto LAB_0047cb54;
          bVar1 = *param_2;
          if (5 < bVar1 - 1) {
            __vbaGenerateBoundsError();
          }
          iVar4 = __vbaI4Var(local_28);
          local_e8 = (int *)(iVar4 - *(int *)(*(int *)(DAT_0049106c + 0xc + (bVar1 - 1) * 0x2c) +
                                             0x14));
          bVar1 = *param_2;
          if (5 < bVar1 - 1) {
            __vbaGenerateBoundsError();
          }
          iVar4 = (bVar1 - 1) * 0x2c;
          if (*(int **)(*(int *)(iVar4 + 0xc + DAT_0049106c) + 0x10) <= local_e8) {
            __vbaGenerateBoundsError();
          }
          iVar6 = (int)local_e8 * 2;
        }
        iVar4 = *(int *)(iVar4 + 0xc + DAT_0049106c);
        __vbaStrI2(CONCAT22((short)((uint)iVar4 >> 0x10),
                            *(undefined2 *)(*(int *)(iVar4 + 0xc) + iVar6)),&DAT_004718e4);
        uVar3 = __vbaStrMove();
        local_68 = __vbaStrCat(uVar3);
        local_70[0] = 8;
        local_58 = 0x80020004;
        local_60[0] = 10;
        iVar4 = (**(code **)(*piVar5 + 0x28))
                          (piVar5,local_60,local_70,local_80,local_90,local_a0,&local_40);
        if (iVar4 < 0) {
          __vbaHresultCheckObj(iVar4,piVar5,&DAT_004711c4,0x28);
        }
        uVar3 = __vbaCastObj(local_40,&DAT_004711d4);
        __vbaObjSet(&local_2c,uVar3);
        __vbaFreeStr();
        __vbaFreeObjList(3,&local_38,&local_3c,&local_40);
        __vbaFreeVarList(6,local_50,local_60,local_70,local_80,local_90,local_a0);
      }
      if (5 < *param_2 - 1) {
        __vbaGenerateBoundsError();
      }
      bVar1 = *param_2;
      if (5 < bVar1 - 1) {
        __vbaGenerateBoundsError();
      }
      iVar4 = (bVar1 - 1) * 0x2c;
      if (*(int *)(iVar4 + 0xc + DAT_0049106c) == 0) {
LAB_0047cd09:
        iVar6 = __vbaGenerateBoundsError();
      }
      else {
        bVar1 = *param_2;
        if (5 < bVar1 - 1) {
          __vbaGenerateBoundsError();
        }
        iVar4 = (bVar1 - 1) * 0x2c;
        if (**(short **)(iVar4 + 0xc + DAT_0049106c) != 1) goto LAB_0047cd09;
        bVar1 = *param_2;
        if (5 < bVar1 - 1) {
          __vbaGenerateBoundsError();
        }
        iVar4 = __vbaI4Var(local_28);
        bVar2 = *param_2;
        uVar7 = iVar4 - *(int *)(*(int *)(DAT_0049106c + 0xc + (bVar1 - 1) * 0x2c) + 0x14);
        if (5 < bVar2 - 1) {
          __vbaGenerateBoundsError();
        }
        iVar4 = (bVar2 - 1) * 0x2c;
        if (*(uint *)(*(int *)(iVar4 + 0xc + DAT_0049106c) + 0x10) <= uVar7) {
          __vbaGenerateBoundsError();
        }
        iVar6 = uVar7 * 2;
      }
      if (*(short *)(*(int *)(*(int *)(iVar4 + 0xc + DAT_0049106c) + 0xc) + iVar6) == 0x2b) {
        uVar3 = (**(code **)(*param_1 + 0x388))(param_1,7,0,&DAT_004711c4);
        uVar3 = __vbaObjSet(&local_38,uVar3);
        uVar3 = __vbaLateIdCallLd(local_50,uVar3);
        uVar3 = __vbaCastObjVar(uVar3);
        piVar5 = (int *)__vbaObjSet(&local_3c,uVar3);
        local_98 = 0x80020004;
        local_a0[0] = 10;
        local_c8 = &DAT_0047147c;
        local_d0[0] = 8;
        __vbaVarDup();
        local_b8 = L"SALIR DE LA CARCEL";
        local_c0[0] = 8;
        __vbaVarDup();
        if (5 < *param_2 - 1) {
          __vbaGenerateBoundsError();
        }
        bVar1 = *param_2;
        if (5 < bVar1 - 1) {
          __vbaGenerateBoundsError();
        }
        iVar4 = (bVar1 - 1) * 0x2c;
        if (*(int *)(iVar4 + 0xc + DAT_0049106c) == 0) {
LAB_0047cea0:
          iVar6 = __vbaGenerateBoundsError();
        }
        else {
          bVar1 = *param_2;
          if (5 < bVar1 - 1) {
            __vbaGenerateBoundsError();
          }
          iVar4 = (bVar1 - 1) * 0x2c;
          if (**(short **)(iVar4 + 0xc + DAT_0049106c) != 1) goto LAB_0047cea0;
          bVar1 = *param_2;
          if (5 < bVar1 - 1) {
            __vbaGenerateBoundsError();
          }
          iVar4 = __vbaI4Var(local_28);
          local_e8 = (int *)(iVar4 - *(int *)(*(int *)(DAT_0049106c + 0xc + (bVar1 - 1) * 0x2c) +
                                             0x14));
          bVar1 = *param_2;
          if (5 < bVar1 - 1) {
            __vbaGenerateBoundsError();
          }
          iVar4 = (bVar1 - 1) * 0x2c;
          if (*(int **)(*(int *)(iVar4 + 0xc + DAT_0049106c) + 0x10) <= local_e8) {
            __vbaGenerateBoundsError();
          }
          iVar6 = (int)local_e8 * 2;
        }
        iVar4 = *(int *)(iVar4 + 0xc + DAT_0049106c);
        __vbaStrI2(CONCAT22((short)((uint)iVar4 >> 0x10),
                            *(undefined2 *)(*(int *)(iVar4 + 0xc) + iVar6)),&DAT_004718e4);
        uVar3 = __vbaStrMove();
        local_68 = __vbaStrCat(uVar3);
        local_70[0] = 8;
        local_58 = 0x80020004;
        local_60[0] = 10;
        iVar4 = (**(code **)(*piVar5 + 0x28))
                          (piVar5,local_60,local_70,local_80,local_90,local_a0,&local_40);
        if (iVar4 < 0) {
          __vbaHresultCheckObj(iVar4,piVar5,&DAT_004711c4,0x28);
        }
        uVar3 = __vbaCastObj(local_40,&DAT_004711d4);
        __vbaObjSet(&local_2c,uVar3);
        __vbaFreeStr();
        __vbaFreeObjList(3,&local_38,&local_3c,&local_40);
        __vbaFreeVarList(6,local_50,local_60,local_70,local_80,local_90,local_a0);
      }
    }
    iVar4 = __vbaVarForNext(local_28,local_114,local_124);
  } while( true );
}


