/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

void __cdecl FUN_00477130(uint param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 extraout_var;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 extraout_var_00;
  code *pcVar7;
  int *piVar8;
  uint uVar9;
  int local_130;
  undefined4 local_118 [4];
  undefined4 local_108 [4];
  undefined4 local_f8 [4];
  undefined4 local_e8 [12];
  uint local_b8;
  uint local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c [2];
  undefined4 local_94;
  undefined4 local_8c [2];
  undefined2 local_84;
  undefined4 local_7c;
  undefined4 local_78;
  undefined *local_74;
  undefined4 local_70;
  undefined4 local_6c [4];
  int *local_5c;
  int *local_58;
  int *local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38 [4];
  undefined4 local_28 [4];
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401656;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xfffffec4;
  local_c = &DAT_00401218;
  local_8 = param_1 & 1;
  piVar8 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar8 + 4))(piVar8);
  local_28[0] = 0;
  local_38[0] = 0;
  local_3c = 0;
  local_40 = 0;
  local_44 = 0;
  local_48 = 0;
  local_4c = 0;
  local_50 = 0;
  local_54 = (int *)0x0;
  local_58 = (int *)0x0;
  local_5c = (int *)0x0;
  local_6c[0] = 0;
  local_7c = 0;
  local_8c[0] = 0;
  local_9c[0] = 0;
  local_a0 = 0;
  local_a4 = 0;
  local_a8 = 0;
  local_e8[0] = 0;
  local_f8[0] = 0;
  local_108[0] = 0;
  local_118[0] = 0;
  if (DAT_00491078 != 0) {
    local_7c = 8;
    local_74 = &DAT_00470f30;
    uVar2 = (**(code **)(*piVar8 + 0x37c))(piVar8,4,8,local_78,&DAT_00470f30,local_70);
    uVar2 = __vbaObjSet(&local_54,uVar2);
    __vbaLateIdSt(uVar2);
    __vbaFreeObj();
    uVar2 = (**(code **)(*piVar8 + 0x37c))(piVar8,0x1f,0);
    uVar2 = __vbaObjSet(&local_54,uVar2);
    __vbaLateIdCall(uVar2);
    __vbaFreeObj();
    uVar2 = (**(code **)(*piVar8 + 0x37c))(piVar8,1,0);
    uVar2 = __vbaObjSet(&local_54,uVar2);
    uVar2 = __vbaLateIdCallLd(local_6c,uVar2);
    __vbaStrVarMove(uVar2);
    uVar2 = __vbaStrMove();
    __vbaFileOpen(2,0xffffffff,1,uVar2);
    __vbaFreeStr();
    __vbaFreeObj();
    __vbaFreeVar();
    if (DAT_00491714 == (int *)0x0) {
      __vbaNew2(&LAB_00470d04,&DAT_00491714);
    }
    piVar1 = DAT_00491714;
    iVar3 = (**(code **)(*DAT_00491714 + 0x14))(DAT_00491714,&local_54);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar1,&DAT_00470cf4,0x14);
    }
    piVar1 = local_54;
    iVar3 = (**(code **)(*local_54 + 0xb8))(local_54,&local_a0);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar1,&DAT_00470f14,0xb8);
    }
    if (DAT_00491714 == (int *)0x0) {
      __vbaNew2(&LAB_00470d04,&DAT_00491714);
    }
    piVar1 = DAT_00491714;
    iVar3 = (**(code **)(*DAT_00491714 + 0x14))(DAT_00491714,&local_58);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar1,&DAT_00470cf4,0x14);
    }
    piVar1 = local_58;
    iVar3 = (**(code **)(*local_58 + 0xc0))(local_58,&local_a4);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar1,&DAT_00470f14,0xc0);
    }
    if (DAT_00491714 == (int *)0x0) {
      __vbaNew2(&LAB_00470d04,&DAT_00491714);
    }
    piVar1 = DAT_00491714;
    iVar3 = (**(code **)(*DAT_00491714 + 0x14))(DAT_00491714,&local_5c);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar1,&DAT_00470cf4,0x14);
    }
    piVar1 = local_5c;
    iVar3 = (**(code **)(*local_5c + 200))(local_5c,&local_a8);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar1,&DAT_00470f14,200);
    }
    __vbaStrI2(local_a0,&DAT_00470f3c);
    uVar2 = __vbaStrMove();
    __vbaStrCat(uVar2);
    uVar2 = __vbaStrMove();
    __vbaStrI2(local_a4,uVar2);
    uVar2 = __vbaStrMove();
    __vbaStrCat(uVar2);
    uVar2 = __vbaStrMove();
    __vbaStrI2(local_a8,uVar2);
    uVar2 = __vbaStrMove();
    __vbaStrCat(uVar2);
    uVar2 = __vbaStrMove();
    pcVar7 = __vbaPrintFile_exref;
    __vbaPrintFile(&DAT_00470f48,1,uVar2);
    __vbaFreeStrList(6,&local_3c,&local_40,&local_44,&local_48,&local_4c,&local_50);
    __vbaFreeObjList(3,&local_54,&local_58,&local_5c);
    __vbaPrintFile(&DAT_00470f50,1,CONCAT22(extraout_var,(short)piVar8[0x14]));
    __vbaPrintFile(&DAT_00470f58,1,DAT_0049107a);
    __vbaPrintFile(&DAT_00470f60,1,CONCAT22(extraout_var_00,DAT_00491080));
    local_7c = 2;
    local_8c[0] = 2;
    local_9c[0] = 2;
    local_84 = DAT_00491080;
    local_74 = (undefined *)0x1;
    local_94 = 1;
    iVar3 = __vbaVarForInit(local_38,local_e8,local_f8,local_9c,local_8c,&local_7c);
    while (iVar3 != 0) {
      iVar3 = __vbaI4Var(local_38);
      if (5 < iVar3 - 1U) {
        __vbaGenerateBoundsError();
      }
      (*pcVar7)(&DAT_00470f48,1,*(undefined4 *)(DAT_0049106c + 4 + (iVar3 - 1U) * 0x2c));
      iVar3 = __vbaI4Var(local_38);
      if (5 < iVar3 - 1U) {
        __vbaGenerateBoundsError();
      }
      (*pcVar7)(&DAT_00470f68,1,*(undefined4 *)(DAT_0049106c + 8 + (iVar3 - 1U) * 0x2c));
      iVar3 = __vbaI4Var(local_38);
      uVar9 = iVar3 - 1;
      if (5 < uVar9) {
        __vbaGenerateBoundsError();
      }
      (*pcVar7)(&DAT_00470f58,1,
                CONCAT31((int3)(uVar9 * 5 >> 8),*(undefined1 *)(DAT_0049106c + 0x10 + uVar9 * 0x2c))
               );
      iVar3 = __vbaI4Var(local_38);
      uVar9 = iVar3 - 1;
      if (5 < uVar9) {
        __vbaGenerateBoundsError();
      }
      (*pcVar7)(&DAT_00470f50,1,
                CONCAT22((short)(uVar9 * 5 >> 0x10),
                         *(undefined2 *)(DAT_0049106c + 0x14 + uVar9 * 0x2c)));
      iVar3 = __vbaI4Var(local_38);
      uVar9 = iVar3 - 1;
      if (5 < uVar9) {
        __vbaGenerateBoundsError();
      }
      (*pcVar7)(&DAT_00470f50,1,
                CONCAT22((short)(uVar9 * 5 >> 0x10),
                         *(undefined2 *)(DAT_0049106c + 0x16 + uVar9 * 0x2c)));
      iVar3 = __vbaI4Var(local_38);
      uVar9 = iVar3 - 1;
      if (5 < uVar9) {
        __vbaGenerateBoundsError();
      }
      (*pcVar7)(&DAT_00470f58,1,
                CONCAT31((int3)(uVar9 * 5 >> 8),*(undefined1 *)(DAT_0049106c + 0x24 + uVar9 * 0x2c))
               );
      iVar3 = __vbaI4Var(local_38);
      uVar9 = iVar3 - 1;
      if (5 < uVar9) {
        __vbaGenerateBoundsError();
      }
      (*pcVar7)(&DAT_00470f50,1,
                CONCAT22((short)(uVar9 * 5 >> 0x10),
                         *(undefined2 *)(DAT_0049106c + 0x18 + uVar9 * 0x2c)));
      iVar3 = __vbaI4Var(local_38);
      uVar9 = iVar3 - 1;
      if (5 < uVar9) {
        __vbaGenerateBoundsError();
      }
      (*pcVar7)(&DAT_00470f50,1,
                CONCAT22((short)(uVar9 * 5 >> 0x10),
                         *(undefined2 *)(DAT_0049106c + 0x1a + uVar9 * 0x2c)));
      iVar3 = __vbaI4Var(local_38);
      uVar9 = iVar3 - 1;
      if (5 < uVar9) {
        __vbaGenerateBoundsError();
      }
      (*pcVar7)(&DAT_00470f58,1,
                CONCAT31((int3)(uVar9 * 5 >> 8),*(undefined1 *)(DAT_0049106c + 0x11 + uVar9 * 0x2c))
               );
      iVar3 = __vbaI4Var(local_38);
      uVar9 = iVar3 - 1;
      if (5 < uVar9) {
        __vbaGenerateBoundsError();
      }
      (*pcVar7)(&DAT_00470f50,1,
                CONCAT22((short)(uVar9 * 5 >> 0x10),
                         *(undefined2 *)(DAT_0049106c + 0x28 + uVar9 * 0x2c)));
      iVar3 = __vbaI4Var(local_38);
      uVar9 = iVar3 - 1;
      if (5 < uVar9) {
        __vbaGenerateBoundsError();
      }
      (*pcVar7)(&DAT_00470f50,1,
                CONCAT22((short)(uVar9 * 5 >> 0x10),
                         *(undefined2 *)(DAT_0049106c + 0x26 + uVar9 * 0x2c)));
      iVar3 = __vbaI4Var(local_38);
      uVar9 = iVar3 - 1;
      if (5 < uVar9) {
        __vbaGenerateBoundsError();
      }
      (*pcVar7)(&DAT_00470f58,1,
                CONCAT31((int3)(uVar9 * 5 >> 8),*(undefined1 *)(DAT_0049106c + 0x25 + uVar9 * 0x2c))
               );
      iVar3 = __vbaI4Var(local_38);
      if (5 < iVar3 - 1U) {
        __vbaGenerateBoundsError();
      }
      (*pcVar7)(&DAT_00470f68,1,*(undefined4 *)(DAT_0049106c + 0x20 + (iVar3 - 1U) * 0x2c));
      iVar3 = __vbaI4Var(local_38);
      uVar9 = iVar3 - 1;
      if (5 < uVar9) {
        __vbaGenerateBoundsError();
      }
      (*pcVar7)(&DAT_00470f58,1,
                CONCAT31((int3)(uVar9 * 5 >> 8),*(undefined1 *)(DAT_0049106c + 0x1d + uVar9 * 0x2c))
               );
      iVar3 = __vbaI4Var(local_38);
      uVar9 = iVar3 - 1;
      if (5 < uVar9) {
        __vbaGenerateBoundsError();
      }
      (*pcVar7)(&DAT_00470f58,1,
                CONCAT31((int3)(uVar9 * 5 >> 8),*(undefined1 *)(DAT_0049106c + 0x1c + uVar9 * 0x2c))
               );
      iVar3 = __vbaI4Var(local_38);
      uVar9 = iVar3 - 1;
      if (5 < uVar9) {
        __vbaGenerateBoundsError();
      }
      (*pcVar7)(&DAT_00470f58,1,
                CONCAT31((int3)(uVar9 * 5 >> 8),*(undefined1 *)(DAT_0049106c + 0x12 + uVar9 * 0x2c))
               );
      local_74 = (undefined *)0x1;
      local_7c = 2;
      iVar3 = __vbaI4Var(local_38);
      if (5 < iVar3 - 1U) {
        __vbaGenerateBoundsError();
      }
      local_84 = CONCAT11(local_84._1_1_,*(undefined1 *)(DAT_0049106c + 0x12 + (iVar3 - 1U) * 0x2c))
      ;
      local_8c[0] = 0x11;
      local_94 = 1;
      local_9c[0] = 2;
      iVar3 = __vbaVarForInit(local_28,local_108,local_118,local_9c,local_8c,&local_7c);
      while (iVar3 != 0) {
        iVar3 = __vbaI4Var(local_38);
        if (5 < iVar3 - 1U) {
          __vbaGenerateBoundsError();
        }
        iVar3 = __vbaI4Var(local_38);
        if (5 < iVar3 - 1U) {
          __vbaGenerateBoundsError();
        }
        iVar3 = (iVar3 - 1U) * 0x2c;
        if (*(int *)(iVar3 + 0xc + DAT_0049106c) == 0) {
LAB_004779a7:
          iVar4 = __vbaGenerateBoundsError();
        }
        else {
          iVar3 = __vbaI4Var(local_38);
          if (5 < iVar3 - 1U) {
            __vbaGenerateBoundsError();
          }
          iVar3 = (iVar3 - 1U) * 0x2c;
          if (**(short **)(iVar3 + 0xc + DAT_0049106c) != 1) goto LAB_004779a7;
          iVar3 = __vbaI4Var(local_38);
          if (5 < iVar3 - 1U) {
            __vbaGenerateBoundsError();
          }
          iVar4 = __vbaI4Var(local_28);
          local_b0 = iVar4 - *(int *)(*(int *)(DAT_0049106c + 0xc + (iVar3 - 1U) * 0x2c) + 0x14);
          iVar3 = __vbaI4Var(local_38);
          if (5 < iVar3 - 1U) {
            __vbaGenerateBoundsError();
          }
          iVar3 = (iVar3 - 1U) * 0x2c;
          if (*(uint *)(*(int *)(iVar3 + 0xc + DAT_0049106c) + 0x10) <= local_b0) {
            __vbaGenerateBoundsError();
          }
          iVar4 = local_b0 * 2;
        }
        if (*(short *)(*(int *)(*(int *)(iVar3 + 0xc + DAT_0049106c) + 0xc) + iVar4) < 0x2a) {
          iVar3 = __vbaI4Var(local_38);
          if (5 < iVar3 - 1U) {
            __vbaGenerateBoundsError();
          }
          iVar3 = __vbaI4Var(local_38);
          if (5 < iVar3 - 1U) {
            __vbaGenerateBoundsError();
          }
          iVar3 = (iVar3 - 1U) * 0x2c;
          if (*(int *)(iVar3 + 0xc + DAT_0049106c) == 0) {
LAB_00477a8e:
            iVar4 = __vbaGenerateBoundsError();
          }
          else {
            iVar3 = __vbaI4Var(local_38);
            if (5 < iVar3 - 1U) {
              __vbaGenerateBoundsError();
            }
            iVar3 = (iVar3 - 1U) * 0x2c;
            if (**(short **)(iVar3 + 0xc + DAT_0049106c) != 1) goto LAB_00477a8e;
            iVar3 = __vbaI4Var(local_38);
            if (5 < iVar3 - 1U) {
              __vbaGenerateBoundsError();
            }
            iVar4 = __vbaI4Var(local_28);
            uVar9 = iVar4 - *(int *)(*(int *)(DAT_0049106c + 0xc + (iVar3 - 1U) * 0x2c) + 0x14);
            iVar3 = __vbaI4Var(local_38);
            if (5 < iVar3 - 1U) {
              __vbaGenerateBoundsError();
            }
            iVar3 = (iVar3 - 1U) * 0x2c;
            if (*(uint *)(*(int *)(iVar3 + 0xc + DAT_0049106c) + 0x10) <= uVar9) {
              __vbaGenerateBoundsError();
            }
            iVar4 = uVar9 * 2;
          }
          uVar9 = (uint)*(short *)(*(int *)(*(int *)(iVar3 + 0xc + DAT_0049106c) + 0xc) + iVar4);
          if (0x29 < uVar9) {
            __vbaGenerateBoundsError();
          }
          if (*(short *)(DAT_00491034 + 0x6c + uVar9 * 0x74) == 0) {
            iVar3 = __vbaI4Var(local_38);
            if (5 < iVar3 - 1U) {
              __vbaGenerateBoundsError();
            }
            iVar3 = __vbaI4Var(local_38);
            if (5 < iVar3 - 1U) {
              __vbaGenerateBoundsError();
            }
            iVar3 = (iVar3 - 1U) * 0x2c;
            if (*(int *)(iVar3 + 0xc + DAT_0049106c) == 0) {
LAB_00477e4e:
              local_130 = __vbaGenerateBoundsError();
            }
            else {
              iVar3 = __vbaI4Var(local_38);
              if (5 < iVar3 - 1U) {
                __vbaGenerateBoundsError();
              }
              iVar3 = (iVar3 - 1U) * 0x2c;
              if (**(short **)(iVar3 + 0xc + DAT_0049106c) != 1) goto LAB_00477e4e;
              iVar3 = __vbaI4Var(local_38);
              if (5 < iVar3 - 1U) {
                __vbaGenerateBoundsError();
              }
              iVar4 = __vbaI4Var(local_28);
              local_b0 = iVar4 - *(int *)(*(int *)(DAT_0049106c + 0xc + (iVar3 - 1U) * 0x2c) + 0x14)
              ;
              iVar3 = __vbaI4Var(local_38);
              if (5 < iVar3 - 1U) {
                __vbaGenerateBoundsError();
              }
              iVar3 = (iVar3 - 1U) * 0x2c;
              if (*(uint *)(*(int *)(iVar3 + 0xc + DAT_0049106c) + 0x10) <= local_b0) {
                __vbaGenerateBoundsError();
              }
              local_130 = local_b0 * 2;
            }
            iVar4 = __vbaI4Var(local_38);
            if (5 < iVar4 - 1U) {
              __vbaGenerateBoundsError();
            }
            iVar4 = __vbaI4Var(local_38);
            if (5 < iVar4 - 1U) {
              __vbaGenerateBoundsError();
            }
            iVar4 = (iVar4 - 1U) * 0x2c;
            if (*(int *)(iVar4 + 0xc + DAT_0049106c) == 0) {
LAB_00477f3c:
              iVar5 = __vbaGenerateBoundsError();
            }
            else {
              iVar4 = __vbaI4Var(local_38);
              if (5 < iVar4 - 1U) {
                __vbaGenerateBoundsError();
              }
              iVar4 = (iVar4 - 1U) * 0x2c;
              if (**(short **)(iVar4 + 0xc + DAT_0049106c) != 1) goto LAB_00477f3c;
              iVar4 = __vbaI4Var(local_38);
              if (5 < iVar4 - 1U) {
                __vbaGenerateBoundsError();
              }
              iVar5 = __vbaI4Var(local_28);
              local_b8 = iVar5 - *(int *)(*(int *)(DAT_0049106c + 0xc + (iVar4 - 1U) * 0x2c) + 0x14)
              ;
              iVar4 = __vbaI4Var(local_38);
              if (5 < iVar4 - 1U) {
                __vbaGenerateBoundsError();
              }
              iVar4 = (iVar4 - 1U) * 0x2c;
              if (*(uint *)(*(int *)(iVar4 + 0xc + DAT_0049106c) + 0x10) <= local_b8) {
                __vbaGenerateBoundsError();
              }
              iVar5 = local_b8 * 2;
            }
            uVar9 = (uint)*(short *)(*(int *)(*(int *)(iVar4 + 0xc + DAT_0049106c) + 0xc) + iVar5);
            if (0x29 < uVar9) {
              __vbaGenerateBoundsError();
            }
            iVar3 = *(int *)(iVar3 + 0xc + DAT_0049106c);
            __vbaStrI2(CONCAT22((short)((uint)iVar3 >> 0x10),
                                *(undefined2 *)(*(int *)(iVar3 + 0xc) + local_130)));
            uVar2 = __vbaStrMove();
            __vbaStrCat(&DAT_00470f7c,uVar2);
            uVar2 = __vbaStrMove();
            __vbaStrUI1(CONCAT31((int3)(uVar9 * 7 >> 8),
                                 *(undefined1 *)(DAT_00491034 + 0x66 + uVar9 * 0x74)),uVar2);
            uVar2 = __vbaStrMove();
            __vbaStrCat(uVar2);
            uVar2 = __vbaStrMove();
            __vbaPrintFile(&DAT_00470f48,1,uVar2);
          }
          else {
            iVar3 = __vbaI4Var(local_38);
            if (5 < iVar3 - 1U) {
              __vbaGenerateBoundsError();
            }
            iVar3 = __vbaI4Var(local_38);
            if (5 < iVar3 - 1U) {
              __vbaGenerateBoundsError();
            }
            iVar3 = (iVar3 - 1U) * 0x2c;
            if (*(int *)(iVar3 + 0xc + DAT_0049106c) == 0) {
LAB_00477bac:
              iVar4 = __vbaGenerateBoundsError();
            }
            else {
              iVar3 = __vbaI4Var(local_38);
              if (5 < iVar3 - 1U) {
                __vbaGenerateBoundsError();
              }
              iVar3 = (iVar3 - 1U) * 0x2c;
              if (**(short **)(iVar3 + 0xc + DAT_0049106c) != 1) goto LAB_00477bac;
              iVar3 = __vbaI4Var(local_38);
              if (5 < iVar3 - 1U) {
                __vbaGenerateBoundsError();
              }
              iVar4 = __vbaI4Var(local_28);
              local_b0 = iVar4 - *(int *)(*(int *)(DAT_0049106c + 0xc + (iVar3 - 1U) * 0x2c) + 0x14)
              ;
              iVar3 = __vbaI4Var(local_38);
              if (5 < iVar3 - 1U) {
                __vbaGenerateBoundsError();
              }
              iVar3 = (iVar3 - 1U) * 0x2c;
              if (*(uint *)(*(int *)(iVar3 + 0xc + DAT_0049106c) + 0x10) <= local_b0) {
                __vbaGenerateBoundsError();
              }
              iVar4 = local_b0 * 2;
            }
            iVar5 = __vbaI4Var(local_38);
            if (5 < iVar5 - 1U) {
              __vbaGenerateBoundsError();
            }
            iVar5 = __vbaI4Var(local_38);
            if (5 < iVar5 - 1U) {
              __vbaGenerateBoundsError();
            }
            iVar5 = (iVar5 - 1U) * 0x2c;
            if (*(int *)(iVar5 + 0xc + DAT_0049106c) == 0) {
LAB_00477c9e:
              iVar6 = __vbaGenerateBoundsError();
            }
            else {
              iVar5 = __vbaI4Var(local_38);
              if (5 < iVar5 - 1U) {
                __vbaGenerateBoundsError();
              }
              iVar5 = (iVar5 - 1U) * 0x2c;
              if (**(short **)(iVar5 + 0xc + DAT_0049106c) != 1) goto LAB_00477c9e;
              iVar5 = __vbaI4Var(local_38);
              if (5 < iVar5 - 1U) {
                __vbaGenerateBoundsError();
              }
              iVar6 = __vbaI4Var(local_28);
              local_b8 = iVar6 - *(int *)(*(int *)(DAT_0049106c + 0xc + (iVar5 - 1U) * 0x2c) + 0x14)
              ;
              iVar5 = __vbaI4Var(local_38);
              if (5 < iVar5 - 1U) {
                __vbaGenerateBoundsError();
              }
              iVar5 = (iVar5 - 1U) * 0x2c;
              if (*(uint *)(*(int *)(iVar5 + 0xc + DAT_0049106c) + 0x10) <= local_b8) {
                __vbaGenerateBoundsError();
              }
              iVar6 = local_b8 * 2;
            }
            uVar9 = (uint)*(short *)(*(int *)(*(int *)(iVar5 + 0xc + DAT_0049106c) + 0xc) + iVar6);
            if (0x29 < uVar9) {
              __vbaGenerateBoundsError();
            }
            iVar3 = *(int *)(iVar3 + 0xc + DAT_0049106c);
            __vbaStrI2(CONCAT22((short)((uint)iVar3 >> 0x10),
                                *(undefined2 *)(*(int *)(iVar3 + 0xc) + iVar4)));
            uVar2 = __vbaStrMove();
            __vbaStrCat(&PTR_DAT_00470f70,uVar2);
            uVar2 = __vbaStrMove();
            __vbaStrUI1(CONCAT31((int3)(uVar9 * 7 >> 8),
                                 *(undefined1 *)(DAT_00491034 + 0x66 + uVar9 * 0x74)),uVar2);
            uVar2 = __vbaStrMove();
            __vbaStrCat(uVar2);
            uVar2 = __vbaStrMove();
            __vbaPrintFile(&DAT_00470f48,1,uVar2);
          }
          __vbaFreeStrList(4,&local_3c,&local_40,&local_44,&local_48);
          pcVar7 = __vbaPrintFile_exref;
        }
        else {
          iVar3 = __vbaI4Var(local_38);
          if (5 < iVar3 - 1U) {
            __vbaGenerateBoundsError();
          }
          iVar3 = __vbaI4Var(local_38);
          if (5 < iVar3 - 1U) {
            __vbaGenerateBoundsError();
          }
          iVar3 = (iVar3 - 1U) * 0x2c;
          if (*(int *)(iVar3 + 0xc + DAT_0049106c) == 0) {
LAB_004780d3:
            iVar4 = __vbaGenerateBoundsError();
          }
          else {
            iVar3 = __vbaI4Var(local_38);
            if (5 < iVar3 - 1U) {
              __vbaGenerateBoundsError();
            }
            iVar3 = (iVar3 - 1U) * 0x2c;
            if (**(short **)(iVar3 + 0xc + DAT_0049106c) != 1) goto LAB_004780d3;
            iVar3 = __vbaI4Var(local_38);
            if (5 < iVar3 - 1U) {
              __vbaGenerateBoundsError();
            }
            iVar4 = __vbaI4Var(local_28);
            local_b0 = iVar4 - *(int *)(*(int *)(DAT_0049106c + 0xc + (iVar3 - 1U) * 0x2c) + 0x14);
            iVar3 = __vbaI4Var(local_38);
            if (5 < iVar3 - 1U) {
              __vbaGenerateBoundsError();
            }
            iVar3 = (iVar3 - 1U) * 0x2c;
            if (*(uint *)(*(int *)(iVar3 + 0xc + DAT_0049106c) + 0x10) <= local_b0) {
              __vbaGenerateBoundsError();
            }
            iVar4 = local_b0 * 2;
          }
          iVar3 = *(int *)(iVar3 + 0xc + DAT_0049106c);
          (*pcVar7)(&DAT_00470f60,1,
                    CONCAT22((short)((uint)iVar3 >> 0x10),
                             *(undefined2 *)(*(int *)(iVar3 + 0xc) + iVar4)));
        }
        iVar3 = __vbaVarForNext(local_28,local_108,local_118);
      }
      iVar3 = __vbaVarForNext(local_38,local_e8,local_f8);
    }
    __vbaFileClose(1);
  }
  local_8 = 0;
  __vbaFreeVarList(4,local_e8,local_f8,local_108,local_118,&LAB_004781bf);
  __vbaFreeVar();
  __vbaFreeVar();
  return;
}


