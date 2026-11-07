/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

undefined4 FUN_00477000(uint param_1,short *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined2 extraout_var;
  int iVar5;
  int iVar6;
  undefined2 extraout_var_00;
  int *piVar7;
  code *pcVar8;
  uint uVar9;
  uint unaff_EDI;
  int *piVar10;
  code *pcStack_180;
  int iStack_17c;
  int *piStack_178;
  int iStack_174;
  int iStack_170;
  undefined4 auStack_15c [4];
  undefined4 auStack_14c [4];
  undefined4 auStack_13c [4];
  undefined4 auStack_12c [12];
  uint uStack_fc;
  uint uStack_f4;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 auStack_e0 [2];
  undefined4 uStack_d8;
  undefined4 auStack_d0 [2];
  undefined2 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined *puStack_b8;
  undefined4 uStack_b4;
  undefined4 auStack_b0 [4];
  int *piStack_a0;
  int *piStack_9c;
  int *piStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 auStack_7c [4];
  undefined4 auStack_6c [4];
  void *pvStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  int *piStack_50;
  int *piStack_4c;
  uint *puStack_48;
  int *piStack_44;
  uint local_1c;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401656;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffc0;
  local_c = &DAT_00401210;
  local_8 = param_1 & 1;
  piVar7 = (int *)(param_1 & 0xfffffffe);
  puStack_48 = (uint *)0x477040;
  ExceptionList = &local_18;
  piStack_44 = piVar7;
  (**(code **)(*piVar7 + 4))();
  local_1c = local_1c & 0xffffff00;
  if ((*param_2 == 2) && (DAT_00491078 != 0)) {
    puStack_48 = (uint *)0x47706c;
    bVar1 = __vbaUI1I2();
    puStack_48 = (uint *)0x477073;
    bVar2 = __vbaUI1I2();
    pcVar8 = __vbaFpI4_exref;
    local_1c = CONCAT31(local_1c._1_3_,bVar2);
    while (bVar2 <= bVar1) {
      uVar9 = local_1c & 0xff;
      if (0x29 < uVar9) {
        puStack_48 = (uint *)0x47709b;
        __vbaGenerateBoundsError();
      }
      puStack_48 = (uint *)0x4770a2;
      puStack_48 = (uint *)__vbaFpI4();
      piStack_4c = (int *)0x4770aa;
      piStack_4c = (int *)__vbaFpI4();
      piStack_50 = *(int **)(piVar7[0x11] + uVar9 * 4);
      puStack_54 = (undefined1 *)0x4770b7;
      iVar3 = FUN_00470c0c();
      puStack_54 = (undefined1 *)0x4770bf;
      __vbaSetSystemError();
      if (iVar3 != 0) {
        puStack_48 = &local_1c;
        DAT_0049108e = (byte)local_1c;
        piStack_50 = (int *)0x4770ec;
        piStack_4c = piVar7;
        iVar3 = (**(code **)(*piVar7 + 0x724))();
        if (iVar3 < 0) {
          puStack_48 = (uint *)0x724;
          piStack_4c = (int *)&DAT_00470614;
          puStack_58 = (undefined1 *)0x477102;
          puStack_54 = (undefined1 *)iVar3;
          piStack_50 = piVar7;
          __vbaHresultCheckObj();
        }
        break;
      }
      bVar2 = (byte)local_1c + 1;
      if (0xfe < (byte)local_1c) {
        puStack_48 = (uint *)0x47712e;
        __vbaErrorOverflow();
        puStack_58 = &LAB_00401656;
        pvStack_5c = ExceptionList;
        puStack_54 = (undefined1 *)&pcStack_180;
        pcStack_180 = pcVar8;
        piStack_50 = (int *)&DAT_00401218;
        piStack_4c = (int *)(unaff_EDI & 1);
        piVar10 = (int *)(unaff_EDI & 0xfffffffe);
        ExceptionList = &pvStack_5c;
        iStack_17c = iVar3;
        piStack_178 = piVar7;
        puStack_48 = (uint *)&stack0xfffffffc;
        (**(code **)(*piVar10 + 4))(piVar10);
        auStack_6c[0] = 0;
        auStack_7c[0] = 0;
        uStack_80 = 0;
        uStack_84 = 0;
        uStack_88 = 0;
        uStack_8c = 0;
        uStack_90 = 0;
        uStack_94 = 0;
        piStack_98 = (int *)0x0;
        piStack_9c = (int *)0x0;
        piStack_a0 = (int *)0x0;
        auStack_b0[0] = 0;
        uStack_c0 = 0;
        auStack_d0[0] = 0;
        auStack_e0[0] = 0;
        uStack_e4 = 0;
        uStack_e8 = 0;
        uStack_ec = 0;
        auStack_12c[0] = 0;
        auStack_13c[0] = 0;
        auStack_14c[0] = 0;
        auStack_15c[0] = 0;
        if (DAT_00491078 != 0) {
          uStack_c0 = 8;
          puStack_b8 = &DAT_00470f30;
          uVar4 = (**(code **)(*piVar10 + 0x37c))(piVar10,4,8,uStack_bc,&DAT_00470f30,uStack_b4);
          uVar4 = __vbaObjSet(&piStack_98,uVar4);
          __vbaLateIdSt(uVar4);
          __vbaFreeObj();
          uVar4 = (**(code **)(*piVar10 + 0x37c))(piVar10,0x1f,0);
          uVar4 = __vbaObjSet(&piStack_98,uVar4);
          __vbaLateIdCall(uVar4);
          __vbaFreeObj();
          uVar4 = (**(code **)(*piVar10 + 0x37c))(piVar10,1,0);
          uVar4 = __vbaObjSet(&piStack_98,uVar4);
          uVar4 = __vbaLateIdCallLd(auStack_b0,uVar4);
          __vbaStrVarMove(uVar4);
          uVar4 = __vbaStrMove();
          __vbaFileOpen(2,0xffffffff,1,uVar4);
          __vbaFreeStr();
          __vbaFreeObj();
          __vbaFreeVar();
          if (DAT_00491714 == (int *)0x0) {
            __vbaNew2(&LAB_00470d04,&DAT_00491714);
          }
          piVar7 = DAT_00491714;
          iVar3 = (**(code **)(*DAT_00491714 + 0x14))(DAT_00491714,&piStack_98);
          if (iVar3 < 0) {
            __vbaHresultCheckObj(iVar3,piVar7,&DAT_00470cf4,0x14);
          }
          piVar7 = piStack_98;
          iVar3 = (**(code **)(*piStack_98 + 0xb8))(piStack_98,&uStack_e4);
          if (iVar3 < 0) {
            __vbaHresultCheckObj(iVar3,piVar7,&DAT_00470f14,0xb8);
          }
          if (DAT_00491714 == (int *)0x0) {
            __vbaNew2(&LAB_00470d04,&DAT_00491714);
          }
          piVar7 = DAT_00491714;
          iVar3 = (**(code **)(*DAT_00491714 + 0x14))(DAT_00491714,&piStack_9c);
          if (iVar3 < 0) {
            __vbaHresultCheckObj(iVar3,piVar7,&DAT_00470cf4,0x14);
          }
          piVar7 = piStack_9c;
          iVar3 = (**(code **)(*piStack_9c + 0xc0))(piStack_9c,&uStack_e8);
          if (iVar3 < 0) {
            __vbaHresultCheckObj(iVar3,piVar7,&DAT_00470f14,0xc0);
          }
          if (DAT_00491714 == (int *)0x0) {
            __vbaNew2(&LAB_00470d04,&DAT_00491714);
          }
          piVar7 = DAT_00491714;
          iVar3 = (**(code **)(*DAT_00491714 + 0x14))(DAT_00491714,&piStack_a0);
          if (iVar3 < 0) {
            __vbaHresultCheckObj(iVar3,piVar7,&DAT_00470cf4,0x14);
          }
          piVar7 = piStack_a0;
          iVar3 = (**(code **)(*piStack_a0 + 200))(piStack_a0,&uStack_ec);
          if (iVar3 < 0) {
            __vbaHresultCheckObj(iVar3,piVar7,&DAT_00470f14,200);
          }
          __vbaStrI2(uStack_e4,&DAT_00470f3c);
          uVar4 = __vbaStrMove();
          __vbaStrCat(uVar4);
          uVar4 = __vbaStrMove();
          __vbaStrI2(uStack_e8,uVar4);
          uVar4 = __vbaStrMove();
          __vbaStrCat(uVar4);
          uVar4 = __vbaStrMove();
          __vbaStrI2(uStack_ec,uVar4);
          uVar4 = __vbaStrMove();
          __vbaStrCat(uVar4);
          uVar4 = __vbaStrMove();
          pcVar8 = __vbaPrintFile_exref;
          __vbaPrintFile(&DAT_00470f48,1,uVar4);
          __vbaFreeStrList(6,&uStack_80,&uStack_84,&uStack_88,&uStack_8c,&uStack_90,&uStack_94);
          __vbaFreeObjList(3,&piStack_98,&piStack_9c,&piStack_a0);
          __vbaPrintFile(&DAT_00470f50,1,CONCAT22(extraout_var,(short)piVar10[0x14]));
          __vbaPrintFile(&DAT_00470f58,1,DAT_0049107a);
          __vbaPrintFile(&DAT_00470f60,1,CONCAT22(extraout_var_00,DAT_00491080));
          uStack_c0 = 2;
          auStack_d0[0] = 2;
          auStack_e0[0] = 2;
          uStack_c8 = DAT_00491080;
          puStack_b8 = (undefined *)0x1;
          uStack_d8 = 1;
          iVar3 = __vbaVarForInit(auStack_7c,auStack_12c,auStack_13c,auStack_e0,auStack_d0,
                                  &uStack_c0);
          while (iVar3 != 0) {
            iVar3 = __vbaI4Var(auStack_7c);
            if (5 < iVar3 - 1U) {
              __vbaGenerateBoundsError();
            }
            (*pcVar8)(&DAT_00470f48,1,*(undefined4 *)(DAT_0049106c + 4 + (iVar3 - 1U) * 0x2c));
            iVar3 = __vbaI4Var(auStack_7c);
            if (5 < iVar3 - 1U) {
              __vbaGenerateBoundsError();
            }
            (*pcVar8)(&DAT_00470f68,1,*(undefined4 *)(DAT_0049106c + 8 + (iVar3 - 1U) * 0x2c));
            iVar3 = __vbaI4Var(auStack_7c);
            uVar9 = iVar3 - 1;
            if (5 < uVar9) {
              __vbaGenerateBoundsError();
            }
            (*pcVar8)(&DAT_00470f58,1,
                      CONCAT31((int3)(uVar9 * 5 >> 8),
                               *(undefined1 *)(DAT_0049106c + 0x10 + uVar9 * 0x2c)));
            iVar3 = __vbaI4Var(auStack_7c);
            uVar9 = iVar3 - 1;
            if (5 < uVar9) {
              __vbaGenerateBoundsError();
            }
            (*pcVar8)(&DAT_00470f50,1,
                      CONCAT22((short)(uVar9 * 5 >> 0x10),
                               *(undefined2 *)(DAT_0049106c + 0x14 + uVar9 * 0x2c)));
            iVar3 = __vbaI4Var(auStack_7c);
            uVar9 = iVar3 - 1;
            if (5 < uVar9) {
              __vbaGenerateBoundsError();
            }
            (*pcVar8)(&DAT_00470f50,1,
                      CONCAT22((short)(uVar9 * 5 >> 0x10),
                               *(undefined2 *)(DAT_0049106c + 0x16 + uVar9 * 0x2c)));
            iVar3 = __vbaI4Var(auStack_7c);
            uVar9 = iVar3 - 1;
            if (5 < uVar9) {
              __vbaGenerateBoundsError();
            }
            (*pcVar8)(&DAT_00470f58,1,
                      CONCAT31((int3)(uVar9 * 5 >> 8),
                               *(undefined1 *)(DAT_0049106c + 0x24 + uVar9 * 0x2c)));
            iVar3 = __vbaI4Var(auStack_7c);
            uVar9 = iVar3 - 1;
            if (5 < uVar9) {
              __vbaGenerateBoundsError();
            }
            (*pcVar8)(&DAT_00470f50,1,
                      CONCAT22((short)(uVar9 * 5 >> 0x10),
                               *(undefined2 *)(DAT_0049106c + 0x18 + uVar9 * 0x2c)));
            iVar3 = __vbaI4Var(auStack_7c);
            uVar9 = iVar3 - 1;
            if (5 < uVar9) {
              __vbaGenerateBoundsError();
            }
            (*pcVar8)(&DAT_00470f50,1,
                      CONCAT22((short)(uVar9 * 5 >> 0x10),
                               *(undefined2 *)(DAT_0049106c + 0x1a + uVar9 * 0x2c)));
            iVar3 = __vbaI4Var(auStack_7c);
            uVar9 = iVar3 - 1;
            if (5 < uVar9) {
              __vbaGenerateBoundsError();
            }
            (*pcVar8)(&DAT_00470f58,1,
                      CONCAT31((int3)(uVar9 * 5 >> 8),
                               *(undefined1 *)(DAT_0049106c + 0x11 + uVar9 * 0x2c)));
            iVar3 = __vbaI4Var(auStack_7c);
            uVar9 = iVar3 - 1;
            if (5 < uVar9) {
              __vbaGenerateBoundsError();
            }
            (*pcVar8)(&DAT_00470f50,1,
                      CONCAT22((short)(uVar9 * 5 >> 0x10),
                               *(undefined2 *)(DAT_0049106c + 0x28 + uVar9 * 0x2c)));
            iVar3 = __vbaI4Var(auStack_7c);
            uVar9 = iVar3 - 1;
            if (5 < uVar9) {
              __vbaGenerateBoundsError();
            }
            (*pcVar8)(&DAT_00470f50,1,
                      CONCAT22((short)(uVar9 * 5 >> 0x10),
                               *(undefined2 *)(DAT_0049106c + 0x26 + uVar9 * 0x2c)));
            iVar3 = __vbaI4Var(auStack_7c);
            uVar9 = iVar3 - 1;
            if (5 < uVar9) {
              __vbaGenerateBoundsError();
            }
            (*pcVar8)(&DAT_00470f58,1,
                      CONCAT31((int3)(uVar9 * 5 >> 8),
                               *(undefined1 *)(DAT_0049106c + 0x25 + uVar9 * 0x2c)));
            iVar3 = __vbaI4Var(auStack_7c);
            if (5 < iVar3 - 1U) {
              __vbaGenerateBoundsError();
            }
            (*pcVar8)(&DAT_00470f68,1,*(undefined4 *)(DAT_0049106c + 0x20 + (iVar3 - 1U) * 0x2c));
            iVar3 = __vbaI4Var(auStack_7c);
            uVar9 = iVar3 - 1;
            if (5 < uVar9) {
              __vbaGenerateBoundsError();
            }
            (*pcVar8)(&DAT_00470f58,1,
                      CONCAT31((int3)(uVar9 * 5 >> 8),
                               *(undefined1 *)(DAT_0049106c + 0x1d + uVar9 * 0x2c)));
            iVar3 = __vbaI4Var(auStack_7c);
            uVar9 = iVar3 - 1;
            if (5 < uVar9) {
              __vbaGenerateBoundsError();
            }
            (*pcVar8)(&DAT_00470f58,1,
                      CONCAT31((int3)(uVar9 * 5 >> 8),
                               *(undefined1 *)(DAT_0049106c + 0x1c + uVar9 * 0x2c)));
            iVar3 = __vbaI4Var(auStack_7c);
            uVar9 = iVar3 - 1;
            if (5 < uVar9) {
              __vbaGenerateBoundsError();
            }
            (*pcVar8)(&DAT_00470f58,1,
                      CONCAT31((int3)(uVar9 * 5 >> 8),
                               *(undefined1 *)(DAT_0049106c + 0x12 + uVar9 * 0x2c)));
            puStack_b8 = (undefined *)0x1;
            uStack_c0 = 2;
            iVar3 = __vbaI4Var(auStack_7c);
            if (5 < iVar3 - 1U) {
              __vbaGenerateBoundsError();
            }
            uStack_c8 = CONCAT11(uStack_c8._1_1_,
                                 *(undefined1 *)(DAT_0049106c + 0x12 + (iVar3 - 1U) * 0x2c));
            auStack_d0[0] = 0x11;
            uStack_d8 = 1;
            auStack_e0[0] = 2;
            iVar3 = __vbaVarForInit(auStack_6c,auStack_14c,auStack_15c,auStack_e0,auStack_d0,
                                    &uStack_c0);
            while (iVar3 != 0) {
              iVar3 = __vbaI4Var(auStack_7c);
              if (5 < iVar3 - 1U) {
                __vbaGenerateBoundsError();
              }
              iVar3 = __vbaI4Var(auStack_7c);
              if (5 < iVar3 - 1U) {
                __vbaGenerateBoundsError();
              }
              iVar3 = (iVar3 - 1U) * 0x2c;
              if (*(int *)(iVar3 + 0xc + DAT_0049106c) == 0) {
LAB_004779a7:
                iVar5 = __vbaGenerateBoundsError();
              }
              else {
                iVar3 = __vbaI4Var(auStack_7c);
                if (5 < iVar3 - 1U) {
                  __vbaGenerateBoundsError();
                }
                iVar3 = (iVar3 - 1U) * 0x2c;
                if (**(short **)(iVar3 + 0xc + DAT_0049106c) != 1) goto LAB_004779a7;
                iVar3 = __vbaI4Var(auStack_7c);
                if (5 < iVar3 - 1U) {
                  __vbaGenerateBoundsError();
                }
                iVar5 = __vbaI4Var(auStack_6c);
                uStack_f4 = iVar5 - *(int *)(*(int *)(DAT_0049106c + 0xc + (iVar3 - 1U) * 0x2c) +
                                            0x14);
                iVar3 = __vbaI4Var(auStack_7c);
                if (5 < iVar3 - 1U) {
                  __vbaGenerateBoundsError();
                }
                iVar3 = (iVar3 - 1U) * 0x2c;
                if (*(uint *)(*(int *)(iVar3 + 0xc + DAT_0049106c) + 0x10) <= uStack_f4) {
                  __vbaGenerateBoundsError();
                }
                iVar5 = uStack_f4 * 2;
              }
              if (*(short *)(*(int *)(*(int *)(iVar3 + 0xc + DAT_0049106c) + 0xc) + iVar5) < 0x2a) {
                iVar3 = __vbaI4Var(auStack_7c);
                if (5 < iVar3 - 1U) {
                  __vbaGenerateBoundsError();
                }
                iVar3 = __vbaI4Var(auStack_7c);
                if (5 < iVar3 - 1U) {
                  __vbaGenerateBoundsError();
                }
                iVar3 = (iVar3 - 1U) * 0x2c;
                if (*(int *)(iVar3 + 0xc + DAT_0049106c) == 0) {
LAB_00477a8e:
                  iVar5 = __vbaGenerateBoundsError();
                }
                else {
                  iVar3 = __vbaI4Var(auStack_7c);
                  if (5 < iVar3 - 1U) {
                    __vbaGenerateBoundsError();
                  }
                  iVar3 = (iVar3 - 1U) * 0x2c;
                  if (**(short **)(iVar3 + 0xc + DAT_0049106c) != 1) goto LAB_00477a8e;
                  iVar3 = __vbaI4Var(auStack_7c);
                  if (5 < iVar3 - 1U) {
                    __vbaGenerateBoundsError();
                  }
                  iVar5 = __vbaI4Var(auStack_6c);
                  uVar9 = iVar5 - *(int *)(*(int *)(DAT_0049106c + 0xc + (iVar3 - 1U) * 0x2c) + 0x14
                                          );
                  iVar3 = __vbaI4Var(auStack_7c);
                  if (5 < iVar3 - 1U) {
                    __vbaGenerateBoundsError();
                  }
                  iVar3 = (iVar3 - 1U) * 0x2c;
                  if (*(uint *)(*(int *)(iVar3 + 0xc + DAT_0049106c) + 0x10) <= uVar9) {
                    __vbaGenerateBoundsError();
                  }
                  iVar5 = uVar9 * 2;
                }
                uVar9 = (uint)*(short *)(*(int *)(*(int *)(iVar3 + 0xc + DAT_0049106c) + 0xc) +
                                        iVar5);
                if (0x29 < uVar9) {
                  __vbaGenerateBoundsError();
                }
                if (*(short *)(DAT_00491034 + 0x6c + uVar9 * 0x74) == 0) {
                  iVar3 = __vbaI4Var(auStack_7c);
                  if (5 < iVar3 - 1U) {
                    __vbaGenerateBoundsError();
                  }
                  iVar3 = __vbaI4Var(auStack_7c);
                  if (5 < iVar3 - 1U) {
                    __vbaGenerateBoundsError();
                  }
                  iVar3 = (iVar3 - 1U) * 0x2c;
                  if (*(int *)(iVar3 + 0xc + DAT_0049106c) == 0) {
LAB_00477e4e:
                    iStack_174 = __vbaGenerateBoundsError();
                  }
                  else {
                    iVar3 = __vbaI4Var(auStack_7c);
                    if (5 < iVar3 - 1U) {
                      __vbaGenerateBoundsError();
                    }
                    iVar3 = (iVar3 - 1U) * 0x2c;
                    if (**(short **)(iVar3 + 0xc + DAT_0049106c) != 1) goto LAB_00477e4e;
                    iVar3 = __vbaI4Var(auStack_7c);
                    if (5 < iVar3 - 1U) {
                      __vbaGenerateBoundsError();
                    }
                    iVar5 = __vbaI4Var(auStack_6c);
                    uStack_f4 = iVar5 - *(int *)(*(int *)(DAT_0049106c + 0xc + (iVar3 - 1U) * 0x2c)
                                                + 0x14);
                    iVar3 = __vbaI4Var(auStack_7c);
                    if (5 < iVar3 - 1U) {
                      __vbaGenerateBoundsError();
                    }
                    iVar3 = (iVar3 - 1U) * 0x2c;
                    if (*(uint *)(*(int *)(iVar3 + 0xc + DAT_0049106c) + 0x10) <= uStack_f4) {
                      __vbaGenerateBoundsError();
                    }
                    iStack_174 = uStack_f4 * 2;
                  }
                  iVar5 = __vbaI4Var(auStack_7c);
                  if (5 < iVar5 - 1U) {
                    __vbaGenerateBoundsError();
                  }
                  iVar5 = __vbaI4Var(auStack_7c);
                  if (5 < iVar5 - 1U) {
                    __vbaGenerateBoundsError();
                  }
                  iVar5 = (iVar5 - 1U) * 0x2c;
                  if (*(int *)(iVar5 + 0xc + DAT_0049106c) == 0) {
LAB_00477f3c:
                    iVar6 = __vbaGenerateBoundsError();
                  }
                  else {
                    iVar5 = __vbaI4Var(auStack_7c);
                    if (5 < iVar5 - 1U) {
                      __vbaGenerateBoundsError();
                    }
                    iVar5 = (iVar5 - 1U) * 0x2c;
                    if (**(short **)(iVar5 + 0xc + DAT_0049106c) != 1) goto LAB_00477f3c;
                    iVar5 = __vbaI4Var(auStack_7c);
                    if (5 < iVar5 - 1U) {
                      __vbaGenerateBoundsError();
                    }
                    iVar6 = __vbaI4Var(auStack_6c);
                    uStack_fc = iVar6 - *(int *)(*(int *)(DAT_0049106c + 0xc + (iVar5 - 1U) * 0x2c)
                                                + 0x14);
                    iVar5 = __vbaI4Var(auStack_7c);
                    if (5 < iVar5 - 1U) {
                      __vbaGenerateBoundsError();
                    }
                    iVar5 = (iVar5 - 1U) * 0x2c;
                    if (*(uint *)(*(int *)(iVar5 + 0xc + DAT_0049106c) + 0x10) <= uStack_fc) {
                      __vbaGenerateBoundsError();
                    }
                    iVar6 = uStack_fc * 2;
                  }
                  uVar9 = (uint)*(short *)(*(int *)(*(int *)(iVar5 + 0xc + DAT_0049106c) + 0xc) +
                                          iVar6);
                  if (0x29 < uVar9) {
                    __vbaGenerateBoundsError();
                  }
                  iVar3 = *(int *)(iVar3 + 0xc + DAT_0049106c);
                  __vbaStrI2(CONCAT22((short)((uint)iVar3 >> 0x10),
                                      *(undefined2 *)(*(int *)(iVar3 + 0xc) + iStack_174)));
                  uVar4 = __vbaStrMove();
                  __vbaStrCat(&DAT_00470f7c,uVar4);
                  uVar4 = __vbaStrMove();
                  __vbaStrUI1(CONCAT31((int3)(uVar9 * 7 >> 8),
                                       *(undefined1 *)(DAT_00491034 + 0x66 + uVar9 * 0x74)),uVar4);
                  uVar4 = __vbaStrMove();
                  __vbaStrCat(uVar4);
                  uVar4 = __vbaStrMove();
                  __vbaPrintFile(&DAT_00470f48,1,uVar4);
                }
                else {
                  iVar3 = __vbaI4Var(auStack_7c);
                  if (5 < iVar3 - 1U) {
                    __vbaGenerateBoundsError();
                  }
                  iVar3 = __vbaI4Var(auStack_7c);
                  if (5 < iVar3 - 1U) {
                    __vbaGenerateBoundsError();
                  }
                  iVar3 = (iVar3 - 1U) * 0x2c;
                  if (*(int *)(iVar3 + 0xc + DAT_0049106c) == 0) {
LAB_00477bac:
                    iStack_170 = __vbaGenerateBoundsError();
                  }
                  else {
                    iVar3 = __vbaI4Var(auStack_7c);
                    if (5 < iVar3 - 1U) {
                      __vbaGenerateBoundsError();
                    }
                    iVar3 = (iVar3 - 1U) * 0x2c;
                    if (**(short **)(iVar3 + 0xc + DAT_0049106c) != 1) goto LAB_00477bac;
                    iVar3 = __vbaI4Var(auStack_7c);
                    if (5 < iVar3 - 1U) {
                      __vbaGenerateBoundsError();
                    }
                    iVar5 = __vbaI4Var(auStack_6c);
                    uStack_f4 = iVar5 - *(int *)(*(int *)(DAT_0049106c + 0xc + (iVar3 - 1U) * 0x2c)
                                                + 0x14);
                    iVar3 = __vbaI4Var(auStack_7c);
                    if (5 < iVar3 - 1U) {
                      __vbaGenerateBoundsError();
                    }
                    iVar3 = (iVar3 - 1U) * 0x2c;
                    if (*(uint *)(*(int *)(iVar3 + 0xc + DAT_0049106c) + 0x10) <= uStack_f4) {
                      __vbaGenerateBoundsError();
                    }
                    iStack_170 = uStack_f4 * 2;
                  }
                  iVar5 = __vbaI4Var(auStack_7c);
                  if (5 < iVar5 - 1U) {
                    __vbaGenerateBoundsError();
                  }
                  iVar5 = __vbaI4Var(auStack_7c);
                  if (5 < iVar5 - 1U) {
                    __vbaGenerateBoundsError();
                  }
                  iVar5 = (iVar5 - 1U) * 0x2c;
                  if (*(int *)(iVar5 + 0xc + DAT_0049106c) == 0) {
LAB_00477c9e:
                    iVar6 = __vbaGenerateBoundsError();
                  }
                  else {
                    iVar5 = __vbaI4Var(auStack_7c);
                    if (5 < iVar5 - 1U) {
                      __vbaGenerateBoundsError();
                    }
                    iVar5 = (iVar5 - 1U) * 0x2c;
                    if (**(short **)(iVar5 + 0xc + DAT_0049106c) != 1) goto LAB_00477c9e;
                    iVar5 = __vbaI4Var(auStack_7c);
                    if (5 < iVar5 - 1U) {
                      __vbaGenerateBoundsError();
                    }
                    iVar6 = __vbaI4Var(auStack_6c);
                    uStack_fc = iVar6 - *(int *)(*(int *)(DAT_0049106c + 0xc + (iVar5 - 1U) * 0x2c)
                                                + 0x14);
                    iVar5 = __vbaI4Var(auStack_7c);
                    if (5 < iVar5 - 1U) {
                      __vbaGenerateBoundsError();
                    }
                    iVar5 = (iVar5 - 1U) * 0x2c;
                    if (*(uint *)(*(int *)(iVar5 + 0xc + DAT_0049106c) + 0x10) <= uStack_fc) {
                      __vbaGenerateBoundsError();
                    }
                    iVar6 = uStack_fc * 2;
                  }
                  uVar9 = (uint)*(short *)(*(int *)(*(int *)(iVar5 + 0xc + DAT_0049106c) + 0xc) +
                                          iVar6);
                  if (0x29 < uVar9) {
                    __vbaGenerateBoundsError();
                  }
                  iVar3 = *(int *)(iVar3 + 0xc + DAT_0049106c);
                  __vbaStrI2(CONCAT22((short)((uint)iVar3 >> 0x10),
                                      *(undefined2 *)(*(int *)(iVar3 + 0xc) + iStack_170)));
                  uVar4 = __vbaStrMove();
                  __vbaStrCat(&PTR_DAT_00470f70,uVar4);
                  uVar4 = __vbaStrMove();
                  __vbaStrUI1(CONCAT31((int3)(uVar9 * 7 >> 8),
                                       *(undefined1 *)(DAT_00491034 + 0x66 + uVar9 * 0x74)),uVar4);
                  uVar4 = __vbaStrMove();
                  __vbaStrCat(uVar4);
                  uVar4 = __vbaStrMove();
                  __vbaPrintFile(&DAT_00470f48,1,uVar4);
                }
                __vbaFreeStrList(4,&uStack_80,&uStack_84,&uStack_88,&uStack_8c);
                pcVar8 = __vbaPrintFile_exref;
              }
              else {
                iVar3 = __vbaI4Var(auStack_7c);
                if (5 < iVar3 - 1U) {
                  __vbaGenerateBoundsError();
                }
                iVar3 = __vbaI4Var(auStack_7c);
                if (5 < iVar3 - 1U) {
                  __vbaGenerateBoundsError();
                }
                iVar3 = (iVar3 - 1U) * 0x2c;
                if (*(int *)(iVar3 + 0xc + DAT_0049106c) == 0) {
LAB_004780d3:
                  iVar5 = __vbaGenerateBoundsError();
                }
                else {
                  iVar3 = __vbaI4Var(auStack_7c);
                  if (5 < iVar3 - 1U) {
                    __vbaGenerateBoundsError();
                  }
                  iVar3 = (iVar3 - 1U) * 0x2c;
                  if (**(short **)(iVar3 + 0xc + DAT_0049106c) != 1) goto LAB_004780d3;
                  iVar3 = __vbaI4Var(auStack_7c);
                  if (5 < iVar3 - 1U) {
                    __vbaGenerateBoundsError();
                  }
                  iVar5 = __vbaI4Var(auStack_6c);
                  uStack_f4 = iVar5 - *(int *)(*(int *)(DAT_0049106c + 0xc + (iVar3 - 1U) * 0x2c) +
                                              0x14);
                  iVar3 = __vbaI4Var(auStack_7c);
                  if (5 < iVar3 - 1U) {
                    __vbaGenerateBoundsError();
                  }
                  iVar3 = (iVar3 - 1U) * 0x2c;
                  if (*(uint *)(*(int *)(iVar3 + 0xc + DAT_0049106c) + 0x10) <= uStack_f4) {
                    __vbaGenerateBoundsError();
                  }
                  iVar5 = uStack_f4 * 2;
                }
                iVar3 = *(int *)(iVar3 + 0xc + DAT_0049106c);
                (*pcVar8)(&DAT_00470f60,1,
                          CONCAT22((short)((uint)iVar3 >> 0x10),
                                   *(undefined2 *)(*(int *)(iVar3 + 0xc) + iVar5)));
              }
              iVar3 = __vbaVarForNext(auStack_6c,auStack_14c,auStack_15c);
            }
            iVar3 = __vbaVarForNext(auStack_7c,auStack_12c,auStack_13c);
          }
          __vbaFileClose(1);
        }
        piStack_4c = (int *)0x0;
        __vbaFreeVarList(4,auStack_12c,auStack_13c,auStack_14c,auStack_15c,&LAB_004781bf);
        __vbaFreeVar();
        uVar4 = __vbaFreeVar();
        return uVar4;
      }
      local_1c = CONCAT31(local_1c._1_3_,bVar2);
    }
  }
  local_8 = 0;
  piStack_4c = (int *)0x477112;
  puStack_48 = (uint *)piVar7;
  (**(code **)(*piVar7 + 8))();
  ExceptionList = local_18;
  return local_8;
}


