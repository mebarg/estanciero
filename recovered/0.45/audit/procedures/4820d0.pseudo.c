/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

void __cdecl FUN_004820d0(int *param_1,byte *param_2)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  code *pcVar10;
  uint uVar11;
  code *pcVar12;
  ushort in_FPUStatusWord;
  ushort uVar13;
  float10 extraout_ST0;
  char local_94 [8];
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 *local_78;
  undefined4 local_74;
  undefined4 local_70 [2];
  undefined4 local_68;
  undefined4 local_60 [2];
  undefined4 local_58;
  undefined4 local_50;
  int *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  float local_28;
  float local_24;
  uint local_20;
  uint local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_00401656;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff04;
  local_c = &DAT_004013f0;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = local_1c & 0xffffff00;
  local_24 = 0.0;
  local_28 = 0.0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  local_40 = (int *)0x0;
  local_44 = 0;
  local_48 = 0;
  local_4c = (int *)0x0;
  local_50 = 0;
  local_70[0] = 0;
  local_80 = 0;
  local_94[0] = '\0';
  local_58 = 0x80020004;
  local_60[0] = 10;
  Ordinal_593(local_60);
  if (((in_FPUStatusWord & 0xd) != 0) || (__vbaFPInt(), (in_FPUStatusWord & 0xd) != 0)) {
LAB_004832ce:
    __vbaFPException();
    return;
  }
  cVar1 = __vbaFpUI1();
  local_20 = CONCAT31(local_20._1_3_,cVar1);
  __vbaFreeVar();
  pcVar10 = __vbaUI1I2_exref;
  if ((cVar1 == '\x06') && (*(short *)((int)param_1 + 0x52) != 0)) {
    local_94[0] = __vbaUI1I2();
    iVar6 = (**(code **)(*param_1 + 0x72c))(param_1,local_94);
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,param_1,&DAT_00470614,0x72c);
    }
  }
  if (((byte)local_20 == '\x1b') && ((short)param_1[0x15] != 0)) {
    local_94[0] = __vbaUI1I2();
    iVar6 = (**(code **)(*param_1 + 0x72c))(param_1,local_94);
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,param_1,&DAT_00470614,0x72c);
    }
  }
  uVar11 = (uint)DAT_0049107a;
  if (5 < uVar11 - 1) {
    __vbaGenerateBoundsError();
  }
  __vbaStrCat(&DAT_00471e20,*(undefined4 *)(DAT_0049106c + 4 + (uVar11 - 1) * 0x2c));
  pcVar12 = __vbaStrMove_exref;
  uVar7 = __vbaStrMove();
  if ((byte)local_20 < *param_2) goto LAB_004832d3;
  __vbaStrUI1((byte)local_20 - *param_2,uVar7);
  uVar7 = __vbaStrMove();
  __vbaStrCat(uVar7);
  __vbaStrMove();
  FUN_00487700(&local_34);
  __vbaFreeStrList(3,&local_2c,&local_30,&local_34);
  if (DAT_00491714 == (int *)0x0) {
    __vbaNew2(&LAB_00470d04,&DAT_00491714);
  }
  piVar8 = DAT_00491714;
  if (DAT_00491114 == (code *)0x0) {
    __vbaNew2(&DAT_0046c584,&DAT_00491114);
  }
  iVar6 = *piVar8;
  uVar7 = __vbaObjSetAddref(&local_38,DAT_00491114);
  iVar6 = (**(code **)(iVar6 + 0xc))(piVar8,uVar7);
  if (iVar6 < 0) {
    __vbaHresultCheckObj(iVar6,piVar8,&DAT_00470cf4,0xc);
  }
  __vbaFreeObj();
  if (DAT_00491114 == (code *)0x0) {
    __vbaNew2(&DAT_0046c584,&DAT_00491114);
  }
  uVar7 = (**(code **)(*(int *)DAT_00491114 + 0x304))(DAT_00491114);
  piVar8 = (int *)__vbaObjSet(&local_38,uVar7);
  uVar11 = (local_20 & 0xff) - 1;
  if (0x1f < uVar11) {
    __vbaGenerateBoundsError();
  }
  iVar6 = (**(code **)(*piVar8 + 0x54))(piVar8,*(undefined4 *)(DAT_00491050 + uVar11 * 4));
  if (iVar6 < 0) {
    __vbaHresultCheckObj(iVar6,piVar8,&DAT_00471330,0x54);
  }
  __vbaFreeObj();
  if ((byte)local_20 == '\x18') {
    local_78 = (undefined1 *)0x0;
    local_80 = 0xb;
    if (DAT_00491114 == (code *)0x0) {
      __vbaNew2(&DAT_0046c584,&DAT_00491114);
    }
    uVar7 = (**(code **)(*(int *)DAT_00491114 + 0x308))
                      (DAT_00491114,0x80010007,local_80,local_7c,local_78,local_74);
    uVar7 = __vbaObjSet(&local_38,uVar7);
    __vbaLateIdSt(uVar7);
    __vbaFreeObj();
    if (DAT_00491114 == (code *)0x0) {
      __vbaNew2(&DAT_0046c584,&DAT_00491114);
    }
    uVar7 = (**(code **)(*(int *)DAT_00491114 + 0x2fc))(DAT_00491114);
    piVar8 = (int *)__vbaObjSet(&local_38,uVar7);
    iVar6 = (**(code **)(*piVar8 + 0x94))(piVar8,0xffffffff);
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar8,&DAT_004717a8,0x94);
    }
    __vbaFreeObj();
    if (DAT_00491114 == (code *)0x0) {
      __vbaNew2(&DAT_0046c584,&DAT_00491114);
    }
    uVar7 = (**(code **)(*(int *)DAT_00491114 + 0x300))(DAT_00491114);
    piVar8 = (int *)__vbaObjSet(&local_38,uVar7);
    iVar6 = (**(code **)(*piVar8 + 0x94))(piVar8,0xffffffff);
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar8,&DAT_004717a8,0x94);
    }
    __vbaFreeObj();
  }
  if (DAT_00491114 == (code *)0x0) {
    __vbaNew2(&DAT_0046c584,&DAT_00491114);
  }
  pcVar12 = DAT_00491114;
  local_88 = 0x80020004;
  local_80 = 2;
  local_78 = (undefined1 *)0x1;
  iVar6 = (**(code **)(*(int *)DAT_00491114 + 0x2b0))
                    (DAT_00491114,2,local_7c,1,local_74,10,local_8c,0x80020004,local_84);
  uVar13 = 0;
  if (iVar6 < 0) {
    __vbaHresultCheckObj(iVar6,pcVar12,&DAT_00471e48,0x2b0);
  }
  cVar1 = __vbaUI1I2();
  if ((byte)local_20 == cVar1) {
    local_94[0] = __vbaUI1I2();
    local_78 = &DAT_0049107a;
    local_80 = 0x4011;
    FUN_00488bd0(&local_80,local_94);
joined_r0x00482d7d:
    pcVar12 = (code *)(DAT_0049107a - 1);
    if ((code *)0x5 < pcVar12) {
      __vbaGenerateBoundsError();
    }
LAB_00482d87:
    uVar3 = __vbaUI1I2();
    *(undefined1 *)(DAT_0049106c + 0x10 + (int)pcVar12 * 0x2c) = uVar3;
  }
  else {
    cVar1 = __vbaUI1I2();
    if ((byte)local_20 == cVar1) {
      uVar11 = (uint)DAT_0049107a;
      if (5 < uVar11 - 1) {
        __vbaGenerateBoundsError();
      }
      if (0xd < *(byte *)(DAT_0049106c + 0x10 + (uVar11 - 1) * 0x2c)) {
        local_24 = 5000.0;
      }
      local_94[0] = __vbaUI1I2();
      local_78 = &DAT_0049107a;
      local_80 = 0x4011;
      FUN_00488bd0(&local_80,local_94);
      pcVar12 = (code *)(DAT_0049107a - 1);
      if ((code *)0x5 < pcVar12) {
        __vbaGenerateBoundsError();
      }
      goto LAB_00482d87;
    }
    cVar1 = __vbaUI1I2();
    if ((byte)local_20 == cVar1) {
      local_28 = 3000.0;
    }
    else {
      cVar1 = __vbaUI1I2();
      if ((byte)local_20 == cVar1) {
        local_94[0] = __vbaUI1I2();
        local_78 = &DAT_0049107a;
        local_80 = 0x4011;
        FUN_00488bd0(&local_80,local_94);
        pcVar12 = (code *)(DAT_0049107a - 1);
        if ((code *)0x5 < pcVar12) {
          __vbaGenerateBoundsError();
        }
        uVar3 = __vbaUI1I2();
        *(undefined1 *)(DAT_0049106c + 0x10 + (int)pcVar12 * 0x2c) = uVar3;
      }
      else {
        cVar1 = __vbaUI1I2();
        if ((byte)local_20 == cVar1) {
          uVar11 = (uint)DAT_0049107a;
          if (5 < uVar11 - 1) {
            __vbaGenerateBoundsError();
          }
          pcVar12 = (code *)(DAT_0049107a - 1);
          if ((code *)0x5 < pcVar12) {
            __vbaGenerateBoundsError();
          }
          if (SBORROW2((ushort)*(byte *)(DAT_0049106c + 0x10 + (uVar11 - 1) * 0x2c),3))
          goto LAB_004832d3;
          uVar3 = __vbaUI1I2();
          *(undefined1 *)(DAT_0049106c + 0x10 + (int)pcVar12 * 0x2c) = uVar3;
          pcVar12 = (code *)(DAT_0049107a - 1);
          if ((code *)0x5 < pcVar12) {
            __vbaGenerateBoundsError();
          }
          local_78 = &DAT_0049107a;
          local_80 = 0x4011;
          FUN_00488bd0(&local_80,(undefined1 *)(DAT_0049106c + 0x10 + (int)pcVar12 * 0x2c));
        }
        else {
          cVar1 = __vbaUI1I2();
          if ((byte)local_20 == cVar1) {
            local_94[0] = __vbaUI1I2();
            FUN_00487410(&DAT_0049107a,local_94);
            pcVar12 = (code *)(DAT_0049107a - 1);
            if ((code *)0x5 < pcVar12) {
              __vbaGenerateBoundsError();
            }
            *(undefined2 *)(DAT_0049106c + 0x28 + (int)pcVar12 * 0x2c) = 0xffff;
            iVar6 = (**(code **)(*param_1 + 0x708))(param_1,&DAT_0049107a);
            if (iVar6 < 0) {
              __vbaHresultCheckObj(iVar6,param_1,&DAT_00470614,0x708);
            }
            *(undefined2 *)((int)param_1 + 0x52) = 0xffff;
          }
          else {
            cVar1 = __vbaUI1I2();
            if ((byte)local_20 == cVar1) {
              local_24 = 1000.0;
            }
            else {
              cVar1 = __vbaUI1I2();
              if ((byte)local_20 == cVar1) {
                local_24 = 3000.0;
              }
              else {
                cVar1 = __vbaUI1I2();
                if ((byte)local_20 == cVar1) {
                  local_28 = 300.0;
                }
                else {
                  cVar1 = __vbaUI1I2();
                  if ((byte)local_20 == cVar1) {
LAB_00482a41:
                    local_94[0] = __vbaUI1I2();
                    FUN_00489400(local_94);
                    local_28 = (float)extraout_ST0;
                  }
                  else {
                    cVar1 = __vbaUI1I2();
                    if ((byte)local_20 == cVar1) {
                      uVar11 = (uint)DAT_0049107a;
                      if (5 < uVar11 - 1) {
                        __vbaGenerateBoundsError();
                      }
                      if (0x1a < *(byte *)(DAT_0049106c + 0x10 + (uVar11 - 1) * 0x2c)) {
                        local_24 = 5000.0;
                      }
                      local_94[0] = __vbaUI1I2();
                      local_78 = &DAT_0049107a;
                      local_80 = 0x4011;
                      FUN_00488bd0(&local_80,local_94);
                      pcVar12 = (code *)(DAT_0049107a - 1);
                      if ((code *)0x5 < pcVar12) {
                        __vbaGenerateBoundsError();
                      }
                      goto LAB_00482d87;
                    }
                    cVar1 = __vbaUI1I2();
                    if ((byte)local_20 == cVar1) {
                      iVar6 = (**(code **)(*param_1 + 0x704))(param_1,&DAT_0049107a);
                      if (iVar6 < 0) {
                        __vbaHresultCheckObj(iVar6,param_1,&DAT_00470614,0x704);
                      }
                      local_94[0] = __vbaUI1I2();
                      local_78 = &DAT_0049107a;
                      local_80 = 0x4011;
                      FUN_00488bd0(&local_80,local_94);
                    }
                    else {
                      cVar1 = __vbaUI1I2();
                      if ((byte)local_20 == cVar1) {
                        local_28 = 400.0;
                      }
                      else {
                        cVar1 = __vbaUI1I2();
                        if ((byte)local_20 == cVar1) {
                          local_24 = 10000.0;
                        }
                        else {
                          cVar1 = __vbaUI1I2();
                          if ((byte)local_20 == cVar1) {
                            uVar11 = (uint)DAT_0049107a;
                            if (5 < uVar11 - 1) {
                              __vbaGenerateBoundsError();
                            }
                            if (0x10 < *(byte *)(DAT_0049106c + 0x10 + (uVar11 - 1) * 0x2c)) {
                              local_24 = 5000.0;
                            }
                            local_94[0] = __vbaUI1I2();
                            local_78 = &DAT_0049107a;
                            local_80 = 0x4011;
                            FUN_00488bd0(&local_80,local_94);
                            pcVar12 = (code *)(DAT_0049107a - 1);
                            if ((code *)0x5 < pcVar12) {
                              __vbaGenerateBoundsError();
                            }
                            goto LAB_00482d87;
                          }
                          cVar1 = __vbaUI1I2();
                          if ((byte)local_20 == cVar1) goto LAB_00482a41;
                          cVar1 = __vbaUI1I2();
                          if ((byte)local_20 != cVar1) {
                            cVar1 = __vbaUI1I2();
                            if ((byte)local_20 != cVar1) {
                              cVar1 = __vbaUI1I2();
                              if ((byte)local_20 != cVar1) {
                                cVar1 = __vbaUI1I2();
                                if ((byte)local_20 != cVar1) {
                                  cVar1 = __vbaUI1I2();
                                  if ((byte)local_20 != cVar1) {
                                    cVar1 = __vbaUI1I2();
                                    if ((byte)local_20 == cVar1) {
                                      bVar4 = __vbaUI1I2();
                                      bVar5 = __vbaUI1I2();
                                      do {
                                        local_1c = CONCAT31(local_1c._1_3_,bVar5);
                                        if (bVar4 < bVar5) goto LAB_00482dea;
                                        bVar2 = bVar5;
                                        if (bVar5 != DAT_0049107a) {
                                          local_24 = local_24 + 200.0;
                                          if ((uVar13 & 0xd) != 0) goto LAB_004832ce;
                                          pcVar12 = (code *)(bVar5 - 1);
                                          if ((code *)0x5 < pcVar12) {
                                            __vbaGenerateBoundsError();
                                          }
                                          uVar11 = (local_1c & 0xff) - 1;
                                          if (5 < uVar11) {
                                            __vbaGenerateBoundsError();
                                          }
                                          *(float *)(DAT_0049106c + 8 + uVar11 * 0x2c) =
                                               *(float *)(DAT_0049106c + 8 + (int)pcVar12 * 0x2c) -
                                               200.0;
                                          if ((uVar13 & 0xd) != 0) goto LAB_004832ce;
                                          bVar2 = (byte)local_1c;
                                        }
                                        bVar5 = bVar2 + 1;
                                      } while (bVar2 != 0xff);
                                      goto LAB_004832d3;
                                    }
                                    cVar1 = __vbaUI1I2();
                                    if ((byte)local_20 != cVar1) {
                                      cVar1 = __vbaUI1I2();
                                      if ((byte)local_20 == cVar1) {
                                        local_24 = 200.0;
                                      }
                                      else {
                                        cVar1 = __vbaUI1I2();
                                        if ((byte)local_20 == cVar1) {
                                          uVar11 = (uint)DAT_0049107a;
                                          if (5 < uVar11 - 1) {
                                            __vbaGenerateBoundsError();
                                          }
                                          pcVar12 = (code *)(DAT_0049107a - 1);
                                          if ((code *)0x5 < pcVar12) {
                                            __vbaGenerateBoundsError();
                                          }
                                          *(float *)(DAT_0049106c + 8 + (int)pcVar12 * 0x2c) =
                                               *(float *)(DAT_0049106c + 8 + (uVar11 - 1) * 0x2c) +
                                               500.0;
                                          if ((uVar13 & 0xd) != 0) goto LAB_004832ce;
                                        }
                                        else {
                                          cVar1 = __vbaUI1I2();
                                          if ((byte)local_20 == cVar1) {
                                            local_94[0] = __vbaUI1I2();
                                            local_78 = &DAT_0049107a;
                                            local_80 = 0x4011;
                                            FUN_00488bd0(&local_80,local_94);
                                            iVar6 = (**(code **)(*param_1 + 0x704))
                                                              (param_1,&DAT_0049107a);
                                            if (iVar6 < 0) {
                                              __vbaHresultCheckObj
                                                        (iVar6,param_1,&DAT_00470614,0x704);
                                            }
                                          }
                                          else {
                                            cVar1 = __vbaUI1I2();
                                            if ((byte)local_20 == cVar1) {
                                              local_94[0] = __vbaUI1I2();
                                              FUN_00487410(&DAT_0049107a,local_94);
                                              pcVar12 = (code *)(DAT_0049107a - 1);
                                              if ((code *)0x5 < pcVar12) {
                                                __vbaGenerateBoundsError();
                                              }
                                              *(undefined2 *)
                                               (DAT_0049106c + 0x26 + (int)pcVar12 * 0x2c) = 0xffff;
                                              iVar6 = (**(code **)(*param_1 + 0x708))
                                                                (param_1,&DAT_0049107a);
                                              if (iVar6 < 0) {
                                                __vbaHresultCheckObj
                                                          (iVar6,param_1,&DAT_00470614,0x708);
                                              }
                                              *(undefined2 *)(param_1 + 0x15) = 0xffff;
                                            }
                                            else {
                                              cVar1 = __vbaUI1I2();
                                              if ((byte)local_20 == cVar1) {
                                                local_94[0] = __vbaUI1I2();
                                                local_78 = &DAT_0049107a;
                                                local_80 = 0x4011;
                                                FUN_00488bd0(&local_80,local_94);
                                                local_24 = 5000.0;
                                                goto joined_r0x00482d7d;
                                              }
                                              cVar1 = __vbaUI1I2();
                                              if ((byte)local_20 == cVar1) {
                                                local_24 = 400.0;
                                              }
                                              else {
                                                cVar1 = __vbaUI1I2();
                                                if ((byte)local_20 == cVar1) {
                                                  local_24 = 1000.0;
                                                }
                                                else {
                                                  cVar1 = __vbaUI1I2();
                                                  if ((byte)local_20 == cVar1) {
                                                    local_24 = 4000.0;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                      goto LAB_00482dea;
                                    }
                                    local_94[0] = __vbaUI1I2();
                                    local_78 = &DAT_0049107a;
                                    local_80 = 0x4011;
                                    FUN_00488bd0(&local_80,local_94);
                                    pcVar12 = (code *)(DAT_0049107a - 1);
                                    if ((code *)0x5 < pcVar12) {
                                      __vbaGenerateBoundsError();
                                    }
                                    goto LAB_00482d87;
                                  }
                                }
                                local_28 = 1000.0;
                                goto LAB_00482dea;
                              }
                            }
                          }
                          local_24 = 2000.0;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00482dea:
  if ((local_24 != 0.0) &&
     (iVar6 = (**(code **)(*param_1 + 0x71c))(param_1,&DAT_0049107a,&local_24), iVar6 < 0)) {
    __vbaHresultCheckObj(iVar6,param_1,&DAT_00470614,0x71c);
  }
  if ((local_28 != 0.0) &&
     (iVar6 = (**(code **)(*param_1 + 0x720))(param_1,&DAT_0049107a,&local_28), iVar6 < 0)) {
    __vbaHresultCheckObj(iVar6,param_1,&DAT_00470614,0x720);
  }
  bVar4 = __vbaUI1I2();
  bVar5 = __vbaUI1I2();
  pcVar10 = (code *)(uint)bVar4;
  local_1c = CONCAT31(local_1c._1_3_,bVar5);
  while( true ) {
    if (bVar4 < bVar5) {
      if (*param_2 == 0x10) {
        uVar11 = (uint)DAT_0049107a;
        if (5 < uVar11 - 1) {
          __vbaGenerateBoundsError();
        }
        *(undefined2 *)(DAT_0049106c + 0x18 + (uVar11 - 1) * 0x2c) = 0;
        local_78 = (undefined1 *)0x0;
        local_80 = 0xb;
        uVar7 = (**(code **)(*param_1 + 0x380))(param_1,0x6803001b,0xb,local_7c,0,local_74);
        pcVar10 = __vbaObjSet_exref;
        uVar7 = __vbaObjSet(&local_38,uVar7);
        __vbaLateIdSt(uVar7);
        __vbaFreeObj();
      }
      else {
        uVar11 = (uint)DAT_0049107a;
        if (5 < uVar11 - 1) {
          __vbaGenerateBoundsError();
        }
        *(undefined2 *)(DAT_0049106c + 0x1a + (uVar11 - 1) * 0x2c) = 0;
        local_78 = (undefined1 *)0x0;
        local_80 = 0xb;
        uVar7 = (**(code **)(*param_1 + 900))(param_1,0x6803001b,0xb,local_7c,0,local_74);
        uVar7 = __vbaObjSet(&local_38,uVar7);
        __vbaLateIdSt(uVar7);
        __vbaFreeObj();
        pcVar10 = __vbaObjSet_exref;
      }
      if ((short)param_1[0x14] != 0) {
        uVar11 = (uint)DAT_0049107a;
        if (5 < uVar11 - 1) {
          __vbaGenerateBoundsError();
        }
        *(undefined2 *)(DAT_0049106c + 0x14 + (uVar11 - 1) * 0x2c) = 0;
        uVar7 = (**(code **)(*param_1 + 0x308))(param_1);
        piVar8 = (int *)(*pcVar10)(&local_48,uVar7);
        iVar6 = (**(code **)(*piVar8 + 0x40))(piVar8,1,&local_4c);
        if (iVar6 < 0) {
          __vbaHresultCheckObj(iVar6,piVar8,&DAT_00470e74,0x40);
        }
        piVar8 = local_4c;
        uVar7 = (**(code **)(*param_1 + 0x38c))(param_1,4,0,&DAT_00470e54);
        uVar7 = (*pcVar10)(&local_38,uVar7);
        uVar7 = __vbaLateIdCallLd(local_60,uVar7);
        uVar7 = __vbaCastObjVar(uVar7);
        piVar9 = (int *)(*pcVar10)(&local_3c,uVar7);
        local_68 = 1;
        local_70[0] = 2;
        iVar6 = (**(code **)(*piVar9 + 0x24))(piVar9,local_70,&local_40);
        if (iVar6 < 0) {
          __vbaHresultCheckObj(iVar6,piVar9,&DAT_00470e54,0x24);
        }
        piVar9 = local_40;
        iVar6 = (**(code **)(*local_40 + 0x34))(local_40,&local_44);
        if (iVar6 < 0) {
          __vbaHresultCheckObj(iVar6,piVar9,&DAT_00470e64,0x34);
        }
        uVar7 = local_44;
        local_44 = 0;
        iVar6 = *piVar8;
        uVar7 = (*pcVar10)(&local_50,uVar7);
        iVar6 = (**(code **)(iVar6 + 0x5c))(piVar8,uVar7);
        if (iVar6 < 0) {
          __vbaHresultCheckObj(iVar6,piVar8,&DAT_00470e84,0x5c);
        }
        __vbaFreeObjList(6,&local_38,&local_3c,&local_40,&local_48,&local_50,&local_4c);
        __vbaFreeVarList(2,local_60,local_70);
        uVar7 = (**(code **)(*param_1 + 0x308))(param_1);
        piVar8 = (int *)(*pcVar10)(&local_48,uVar7);
        iVar6 = (**(code **)(*piVar8 + 0x40))(piVar8,2,&local_4c);
        if (iVar6 < 0) {
          __vbaHresultCheckObj(iVar6,piVar8,&DAT_00470e74,0x40);
        }
        piVar8 = local_4c;
        uVar7 = (**(code **)(*param_1 + 0x38c))(param_1,4,0,&DAT_00470e54);
        uVar7 = (*pcVar10)(&local_38,uVar7);
        uVar7 = __vbaLateIdCallLd(local_60,uVar7);
        uVar7 = __vbaCastObjVar(uVar7);
        piVar9 = (int *)(*pcVar10)(&local_3c,uVar7);
        local_68 = 1;
        local_70[0] = 2;
        iVar6 = (**(code **)(*piVar9 + 0x24))(piVar9,local_70,&local_40);
        if (iVar6 < 0) {
          __vbaHresultCheckObj(iVar6,piVar9,&DAT_00470e54,0x24);
        }
        piVar9 = local_40;
        iVar6 = (**(code **)(*local_40 + 0x34))(local_40,&local_44);
        if (iVar6 < 0) {
          __vbaHresultCheckObj(iVar6,piVar9,&DAT_00470e64,0x34);
        }
        uVar7 = local_44;
        local_44 = 0;
        iVar6 = *piVar8;
        uVar7 = (*pcVar10)(&local_50,uVar7);
        iVar6 = (**(code **)(iVar6 + 0x5c))(piVar8,uVar7);
        if (iVar6 < 0) {
          __vbaHresultCheckObj(iVar6,piVar8,&DAT_00470e84,0x5c);
        }
        __vbaFreeObjList(6,&local_38,&local_3c,&local_40,&local_48,&local_50,&local_4c);
        __vbaFreeVarList(2,local_60,local_70);
      }
      iVar6 = (**(code **)(*param_1 + 0x718))(param_1);
      if (iVar6 < 0) {
        __vbaHresultCheckObj(iVar6,param_1,&DAT_00470614,0x718);
      }
      return;
    }
    FUN_00489260((byte *)&local_1c);
    bVar5 = (byte)local_1c + 1;
    if (0xfe < (byte)local_1c) break;
    local_1c = CONCAT31(local_1c._1_3_,bVar5);
  }
LAB_004832d3:
  __vbaErrorOverflow();
  *DAT_00491034 = 0;
  __vbaStrCopy(param_1,pcVar12,&stack0xfffffffc,pcVar10);
  __vbaStrCopy();
  *(undefined4 *)(DAT_00491034 + 8) = 0x459c4000;
  *(undefined4 *)(DAT_00491034 + 0x1a) = 0x44060000;
  *(undefined4 *)(DAT_00491034 + 0x1c) = 0x44060000;
  *(undefined4 *)(DAT_00491034 + 0x1e) = 0x44060000;
  *(undefined4 *)(DAT_00491034 + 0x20) = 0x440d0000;
  *(undefined4 *)(DAT_00491034 + 0x22) = 0x440d0000;
  *(undefined4 *)(DAT_00491034 + 0x24) = 0x44120000;
  *(undefined4 *)(DAT_00491034 + 0x26) = 0x441b0000;
  *(undefined4 *)(DAT_00491034 + 0x28) = 0x44210000;
  *(undefined4 *)(DAT_00491034 + 0x2a) = 0x44270000;
  *(undefined4 *)(DAT_00491034 + 0x2c) = 0x44280000;
  *(undefined4 *)(DAT_00491034 + 0x2e) = 0x441e0000;
  *(undefined4 *)(DAT_00491034 + 0x30) = 0x44230000;
  DAT_00491034[0x3a] = 1;
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  *(undefined4 *)(DAT_00491034 + 0x42) = 0x447a0000;
  *(undefined4 *)(DAT_00491034 + 0x44) = 0x42200000;
  *(undefined4 *)(DAT_00491034 + 0x46) = 0x43480000;
  *(undefined4 *)(DAT_00491034 + 0x48) = 0x44160000;
  *(undefined4 *)(DAT_00491034 + 0x4a) = 0x44d48000;
  *(undefined4 *)(DAT_00491034 + 0x4c) = 0x453b8000;
  *(undefined4 *)(DAT_00491034 + 0x4e) = 0x45947000;
  *(undefined4 *)(DAT_00491034 + 0x50) = 0x447a0000;
  *(undefined4 *)(DAT_00491034 + 0x52) = 0x447a0000;
  *(undefined4 *)(DAT_00491034 + 0x54) = 0x43f40000;
  *(undefined4 *)(DAT_00491034 + 0x56) = 0x43f40000;
  *(undefined4 *)(DAT_00491034 + 0x58) = 0x43f40000;
  *(undefined4 *)(DAT_00491034 + 0x5a) = 0x43f40000;
  *(undefined4 *)(DAT_00491034 + 0x5c) = 0x44000000;
  *(undefined4 *)(DAT_00491034 + 0x5e) = 0x44000000;
  *(undefined4 *)(DAT_00491034 + 0x60) = 0x44160000;
  *(undefined4 *)(DAT_00491034 + 0x62) = 0x441c0000;
  *(undefined4 *)(DAT_00491034 + 100) = 0x44220000;
  *(undefined4 *)(DAT_00491034 + 0x66) = 0x44280000;
  *(undefined4 *)(DAT_00491034 + 0x68) = 0x441a0000;
  *(undefined4 *)(DAT_00491034 + 0x6a) = 0x44240000;
  *(undefined4 *)(DAT_00491034 + 0x6e) = 0x43fa0000;
  __vbaStrCopy();
  DAT_00491034[0x74] = 2;
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  *(undefined4 *)(DAT_00491034 + 0x7c) = 0x447a0000;
  *(undefined4 *)(DAT_00491034 + 0x7e) = 0x42200000;
  *(undefined4 *)(DAT_00491034 + 0x80) = 0x43480000;
  *(undefined4 *)(DAT_00491034 + 0x82) = 0x44160000;
  *(undefined4 *)(DAT_00491034 + 0x84) = 0x44d48000;
  *(undefined4 *)(DAT_00491034 + 0x86) = 0x453b8000;
  *(undefined4 *)(DAT_00491034 + 0x88) = 0x45947000;
  *(undefined4 *)(DAT_00491034 + 0x8a) = 0x447a0000;
  *(undefined4 *)(DAT_00491034 + 0x8c) = 0x447a0000;
  *(undefined4 *)(DAT_00491034 + 0x8e) = 0x43dc0000;
  *(undefined4 *)(DAT_00491034 + 0x90) = 0x43dc0000;
  *(undefined4 *)(DAT_00491034 + 0x92) = 0x43dc0000;
  *(undefined4 *)(DAT_00491034 + 0x94) = 0x43dc0000;
  *(undefined4 *)(DAT_00491034 + 0x96) = 0x43e80000;
  *(undefined4 *)(DAT_00491034 + 0x98) = 0x43e80000;
  *(undefined4 *)(DAT_00491034 + 0x9a) = 0x44160000;
  *(undefined4 *)(DAT_00491034 + 0x9c) = 0x441c0000;
  *(undefined4 *)(DAT_00491034 + 0x9e) = 0x44220000;
  *(undefined4 *)(DAT_00491034 + 0xa0) = 0x44280000;
  *(undefined4 *)(DAT_00491034 + 0xa2) = 0x441a0000;
  *(undefined4 *)(DAT_00491034 + 0xa4) = 0x44240000;
  *(undefined4 *)(DAT_00491034 + 0xa8) = 0x43fa0000;
  __vbaStrCopy();
  DAT_00491034[0xae] = 3;
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  *(undefined4 *)(DAT_00491034 + 0xb6) = 0x44960000;
  *(undefined4 *)(DAT_00491034 + 0xb8) = 0x42a00000;
  *(undefined4 *)(DAT_00491034 + 0xba) = 0x43c80000;
  *(undefined4 *)(DAT_00491034 + 0xbc) = 0x44480000;
  *(undefined4 *)(DAT_00491034 + 0xbe) = 0x45548000;
  *(undefined4 *)(DAT_00491034 + 0xc0) = 0x45bb8000;
  *(undefined4 *)(DAT_00491034 + 0xc2) = 0x46147000;
  *(undefined4 *)(DAT_00491034 + 0xc4) = 0x447a0000;
  *(undefined4 *)(DAT_00491034 + 0xc6) = 0x447a0000;
  *(undefined4 *)(DAT_00491034 + 200) = 0x43c80000;
  *(undefined4 *)(DAT_00491034 + 0xca) = 0x43c80000;
  *(undefined4 *)(DAT_00491034 + 0xcc) = 0x43c80000;
  *(undefined4 *)(DAT_00491034 + 0xce) = 0x43c80000;
  *(undefined4 *)(DAT_00491034 + 0xd0) = 0x43d10000;
  *(undefined4 *)(DAT_00491034 + 0xd2) = 0x43d10000;
  *(undefined4 *)(DAT_00491034 + 0xd4) = 0x44160000;
  *(undefined4 *)(DAT_00491034 + 0xd6) = 0x441c0000;
  *(undefined4 *)(DAT_00491034 + 0xd8) = 0x44220000;
  *(undefined4 *)(DAT_00491034 + 0xda) = 0x44280000;
  *(undefined4 *)(DAT_00491034 + 0xdc) = 0x441a0000;
  *(undefined4 *)(DAT_00491034 + 0xde) = 0x44240000;
  *(undefined4 *)(DAT_00491034 + 0xe2) = 0x44160000;
  __vbaStrCopy();
  DAT_00491034[0xe8] = 4;
  __vbaStrCopy();
  __vbaStrCopy();
  *(undefined4 *)(DAT_00491034 + 0xf0) = 0x459c4000;
  *(undefined4 *)(DAT_00491034 + 0x102) = 0x43b40000;
  *(undefined4 *)(DAT_00491034 + 0x104) = 0x43b40000;
  *(undefined4 *)(DAT_00491034 + 0x106) = 0x43b40000;
  *(undefined4 *)(DAT_00491034 + 0x108) = 0x43b40000;
  *(undefined4 *)(DAT_00491034 + 0x10a) = 0x43bd0000;
  *(undefined4 *)(DAT_00491034 + 0x10c) = 0x43bd0000;
  *(undefined4 *)(DAT_00491034 + 0x10e) = 0x44160000;
  *(undefined4 *)(DAT_00491034 + 0x110) = 0x441c0000;
  *(undefined4 *)(DAT_00491034 + 0x112) = 0x44220000;
  *(undefined4 *)(DAT_00491034 + 0x114) = 0x44280000;
  *(undefined4 *)(DAT_00491034 + 0x116) = 0x441a0000;
  *(undefined4 *)(DAT_00491034 + 0x118) = 0x44240000;
  DAT_00491034[0x122] = 5;
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  *(undefined4 *)(DAT_00491034 + 0x12a) = 0x44fa0000;
  *(undefined4 *)(DAT_00491034 + 300) = 0x42dc0000;
  *(undefined4 *)(DAT_00491034 + 0x12e) = 0x440e8000;
  *(undefined4 *)(DAT_00491034 + 0x130) = 0x44d48000;
  *(undefined4 *)(DAT_00491034 + 0x132) = 0x45a0f000;
  *(undefined4 *)(DAT_00491034 + 0x134) = 0x45ed8000;
  *(undefined4 *)(DAT_00491034 + 0x136) = 0x46147000;
  *(undefined4 *)(DAT_00491034 + 0x138) = 0x447a0000;
  *(undefined4 *)(DAT_00491034 + 0x13a) = 0x447a0000;
  *(undefined4 *)(DAT_00491034 + 0x13c) = 0x439c0000;
  *(undefined4 *)(DAT_00491034 + 0x13e) = 0x439c0000;
  *(undefined4 *)(DAT_00491034 + 0x140) = 0x439c0000;
  *(undefined4 *)(DAT_00491034 + 0x142) = 0x439c0000;
  *(undefined4 *)(DAT_00491034 + 0x144) = 0x43a80000;
  *(undefined4 *)(DAT_00491034 + 0x146) = 0x43a80000;
  *(undefined4 *)(DAT_00491034 + 0x148) = 0x44160000;
  *(undefined4 *)(DAT_00491034 + 0x14a) = 0x441c0000;
  *(undefined4 *)(DAT_00491034 + 0x14c) = 0x44220000;
  *(undefined4 *)(DAT_00491034 + 0x14e) = 0x44280000;
  *(undefined4 *)(DAT_00491034 + 0x150) = 0x441a0000;
  *(undefined4 *)(DAT_00491034 + 0x152) = 0x44240000;
  *(undefined4 *)(DAT_00491034 + 0x156) = 0x447a0000;
  __vbaStrCopy();
  DAT_00491034[0x15c] = 6;
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  *(undefined4 *)(DAT_00491034 + 0x164) = 0x45098000;
  *(undefined4 *)(DAT_00491034 + 0x166) = 0x43160000;
  *(undefined4 *)(DAT_00491034 + 0x168) = 0x443b8000;
  *(undefined4 *)(DAT_00491034 + 0x16a) = 0x44fa0000;
  *(undefined4 *)(DAT_00491034 + 0x16c) = 0x45b22000;
  *(undefined4 *)(DAT_00491034 + 0x16e) = 0x4604d000;
  *(undefined4 *)(DAT_00491034 + 0x170) = 0x4633b000;
  *(undefined4 *)(DAT_00491034 + 0x172) = 0x447a0000;
  *(undefined4 *)(DAT_00491034 + 0x174) = 0x447a0000;
  *(undefined4 *)(DAT_00491034 + 0x176) = 0x43840000;
  *(undefined4 *)(DAT_00491034 + 0x178) = 0x43840000;
  *(undefined4 *)(DAT_00491034 + 0x17a) = 0x43840000;
  *(undefined4 *)(DAT_00491034 + 0x17c) = 0x43840000;
  *(undefined4 *)(DAT_00491034 + 0x17e) = 0x43900000;
  *(undefined4 *)(DAT_00491034 + 0x180) = 0x43900000;
  *(undefined4 *)(DAT_00491034 + 0x182) = 0x44160000;
  *(undefined4 *)(DAT_00491034 + 0x184) = 0x441c0000;
  *(undefined4 *)(DAT_00491034 + 0x186) = 0x44220000;
  *(undefined4 *)(DAT_00491034 + 0x188) = 0x44280000;
  *(undefined4 *)(DAT_00491034 + 0x18a) = 0x441a0000;
  *(undefined4 *)(DAT_00491034 + 0x18c) = 0x44240000;
  *(undefined4 *)(DAT_00491034 + 400) = 0x447a0000;
  __vbaStrCopy();
  DAT_00491034[0x196] = 7;
  __vbaStrCopy();
  __vbaStrCopy();
  *(undefined4 *)(DAT_00491034 + 0x19e) = 0x451c4000;
  *(undefined4 *)(DAT_00491034 + 0x1b0) = 0x43700000;
  *(undefined4 *)(DAT_00491034 + 0x1b2) = 0x43580000;
  *(undefined4 *)(DAT_00491034 + 0x1b4) = 0x43400000;
  *(undefined4 *)(DAT_00491034 + 0x1b6) = 0x43500000;
  *(undefined4 *)(DAT_00491034 + 0x1b8) = 0x43700000;
  *(undefined4 *)(DAT_00491034 + 0x1ba) = 0x43700000;
  *(undefined4 *)(DAT_00491034 + 0x1bc) = 0x44180000;
  *(undefined4 *)(DAT_00491034 + 0x1be) = 0x441c0000;
  *(undefined4 *)(DAT_00491034 + 0x1c0) = 0x44200000;
  *(undefined4 *)(DAT_00491034 + 0x1c2) = 0x44260000;
  *(undefined4 *)(DAT_00491034 + 0x1c4) = 0x44200000;
  *(undefined4 *)(DAT_00491034 + 0x1c6) = 0x44280000;
  DAT_00491034[0x1d0] = 8;
  __vbaStrCopy();
  __vbaStrCopy();
  *(undefined4 *)(DAT_00491034 + 0x1d8) = 0x456d8000;
  *(undefined4 *)(DAT_00491034 + 0x1ea) = 0x43600000;
  *(undefined4 *)(DAT_00491034 + 0x1ec) = 0x43480000;
  *(undefined4 *)(DAT_00491034 + 0x1ee) = 0x43300000;
  *(undefined4 *)(DAT_00491034 + 0x1f0) = 0x43180000;
  *(undefined4 *)(DAT_00491034 + 0x1f2) = 0x43500000;
  *(undefined4 *)(DAT_00491034 + 500) = 0x43300000;
  *(undefined4 *)(DAT_00491034 + 0x1f6) = 0x440e0000;
  *(undefined4 *)(DAT_00491034 + 0x1f8) = 0x44100000;
  *(undefined4 *)(DAT_00491034 + 0x1fa) = 0x44140000;
  *(undefined4 *)(DAT_00491034 + 0x1fc) = 0x44180000;
  *(undefined4 *)(DAT_00491034 + 0x1fe) = 0x44160000;
  *(undefined4 *)(DAT_00491034 + 0x200) = 0x441a0000;
  *(undefined4 *)(DAT_00491034 + 0x204) = 0x44ed8000;
  DAT_00491034[0x20a] = 9;
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  *(undefined4 *)(DAT_00491034 + 0x212) = 0x45228000;
  *(undefined4 *)(DAT_00491034 + 0x214) = 0x43480000;
  *(undefined4 *)(DAT_00491034 + 0x216) = 0x447a0000;
  *(undefined4 *)(DAT_00491034 + 0x218) = 0x452f0000;
  *(undefined4 *)(DAT_00491034 + 0x21a) = 0x4604d000;
  *(undefined4 *)(DAT_00491034 + 0x21c) = 0x463b8000;
  *(undefined4 *)(DAT_00491034 + 0x21e) = 0x465de000;
  *(undefined4 *)(DAT_00491034 + 0x220) = 0x447a0000;
  *(undefined4 *)(DAT_00491034 + 0x222) = 0x447a0000;
  *(undefined4 *)(DAT_00491034 + 0x224) = 0x43480000;
  *(undefined4 *)(DAT_00491034 + 0x226) = 0x43300000;
  *(undefined4 *)(DAT_00491034 + 0x228) = 0x43180000;
  *(undefined4 *)(DAT_00491034 + 0x22a) = 0x43000000;
  *(undefined4 *)(DAT_00491034 + 0x22c) = 0x43300000;
  *(undefined4 *)(DAT_00491034 + 0x22e) = 0x43180000;
  *(undefined4 *)(DAT_00491034 + 0x230) = 0x44040000;
  *(undefined4 *)(DAT_00491034 + 0x232) = 0x44060000;
  *(undefined4 *)(DAT_00491034 + 0x234) = 0x440a0000;
  *(undefined4 *)(DAT_00491034 + 0x236) = 0x440e0000;
  *(undefined4 *)(DAT_00491034 + 0x238) = 0x440c0000;
  *(undefined4 *)(DAT_00491034 + 0x23a) = 0x44100000;
  *(undefined4 *)(DAT_00491034 + 0x23e) = 0x44a28000;
  __vbaStrCopy();
  DAT_00491034[0x244] = 10;
  __vbaStrCopy();
  __vbaStrCopy();
  *(undefined4 *)(DAT_00491034 + 0x25e) = 0x43300000;
  *(undefined4 *)(DAT_00491034 + 0x260) = 0x43180000;
  *(undefined4 *)(DAT_00491034 + 0x262) = 0x43000000;
  *(undefined4 *)(DAT_00491034 + 0x264) = 0x42d00000;
  *(undefined4 *)(DAT_00491034 + 0x266) = 0x43200000;
  *(undefined4 *)(DAT_00491034 + 0x268) = 0x43000000;
  *(undefined4 *)(DAT_00491034 + 0x26a) = 0x43f40000;
  *(undefined4 *)(DAT_00491034 + 0x26c) = 0x43f80000;
  *(undefined4 *)(DAT_00491034 + 0x26e) = 0x44000000;
  *(undefined4 *)(DAT_00491034 + 0x270) = 0x44040000;
  *(undefined4 *)(DAT_00491034 + 0x272) = 0x44020000;
  *(undefined4 *)(DAT_00491034 + 0x274) = 0x44060000;
  DAT_00491034[0x27e] = 0xb;
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  *(undefined4 *)(DAT_00491034 + 0x286) = 0x45228000;
  *(undefined4 *)(DAT_00491034 + 0x288) = 0x43480000;
  *(undefined4 *)(DAT_00491034 + 0x28a) = 0x447a0000;
  *(undefined4 *)(DAT_00491034 + 0x28c) = 0x452f0000;
  *(undefined4 *)(DAT_00491034 + 0x28e) = 0x4604d000;
  *(undefined4 *)(DAT_00491034 + 0x290) = 0x463b8000;
  *(undefined4 *)(DAT_00491034 + 0x292) = 0x465de000;
  *(undefined4 *)(DAT_00491034 + 0x294) = 0x447a0000;
  *(undefined4 *)(DAT_00491034 + 0x296) = 0x447a0000;
  *(undefined4 *)(DAT_00491034 + 0x298) = 0x43200000;
  *(undefined4 *)(DAT_00491034 + 0x29a) = 0x43080000;
  *(undefined4 *)(DAT_00491034 + 0x29c) = 0x42d00000;
  *(undefined4 *)(DAT_00491034 + 0x29e) = 0x42a00000;
  *(undefined4 *)(DAT_00491034 + 0x2a0) = 0x43000000;
  *(undefined4 *)(DAT_00491034 + 0x2a2) = 0x42d00000;
  *(undefined4 *)(DAT_00491034 + 0x2a4) = 0x43e40000;
  *(undefined4 *)(DAT_00491034 + 0x2a6) = 0x43e40000;
  *(undefined4 *)(DAT_00491034 + 0x2a8) = 0x43ec0000;
  *(undefined4 *)(DAT_00491034 + 0x2aa) = 0x43f40000;
  *(undefined4 *)(DAT_00491034 + 0x2ac) = 0x43f00000;
  *(undefined4 *)(DAT_00491034 + 0x2ae) = 0x43f80000;
  *(undefined4 *)(DAT_00491034 + 0x2b2) = 0x44a28000;
  __vbaStrCopy();
  DAT_00491034[0x2b8] = 0xc;
  __vbaStrCopy();
  __vbaStrCopy();
  *(undefined4 *)(DAT_00491034 + 0x2c0) = 0x45610000;
  *(undefined4 *)(DAT_00491034 + 0x2c4) = 0x43fa0000;
  *(undefined4 *)(DAT_00491034 + 0x2c6) = 0x447a0000;
  *(undefined4 *)(DAT_00491034 + 0x2c8) = 0x44fa0000;
  *(undefined4 *)(DAT_00491034 + 0x2ca) = 0x457a0000;
  *(undefined4 *)(DAT_00491034 + 0x2d2) = 0x43000000;
  *(undefined4 *)(DAT_00491034 + 0x2d4) = 0x42d00000;
  *(undefined4 *)(DAT_00491034 + 0x2d6) = 0x42a00000;
  *(undefined4 *)(DAT_00491034 + 0x2d8) = 0x42600000;
  *(undefined4 *)(DAT_00491034 + 0x2da) = 0x43000000;
  *(undefined4 *)(DAT_00491034 + 0x2dc) = 0x42a00000;
  *(undefined4 *)(DAT_00491034 + 0x2de) = 0x43cc0000;
  *(undefined4 *)(DAT_00491034 + 0x2e0) = 0x43d40000;
  *(undefined4 *)(DAT_00491034 + 0x2e2) = 0x43d80000;
  *(undefined4 *)(DAT_00491034 + 0x2e4) = 0x43e00000;
  *(undefined4 *)(DAT_00491034 + 0x2e6) = 0x43d80000;
  *(undefined4 *)(DAT_00491034 + 0x2e8) = 0x43e40000;
  *(undefined4 *)(DAT_00491034 + 0x2ec) = 0x44ed8000;
  DAT_00491034[0x2f2] = 0xd;
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  *(undefined4 *)(DAT_00491034 + 0x2fa) = 0x453b8000;
  *(undefined4 *)(DAT_00491034 + 0x2fc) = 0x43660000;
  *(undefined4 *)(DAT_00491034 + 0x2fe) = 0x448fc000;
  *(undefined4 *)(DAT_00491034 + 0x300) = 0x45548000;
  *(undefined4 *)(DAT_00491034 + 0x302) = 0x46147000;
  *(undefined4 *)(DAT_00491034 + 0x304) = 0x464b2000;
  *(undefined4 *)(DAT_00491034 + 0x306) = 0x4684d000;
  *(undefined4 *)(DAT_00491034 + 0x308) = 0x447a0000;
  *(undefined4 *)(DAT_00491034 + 0x30a) = 0x447a0000;
  *(undefined4 *)(DAT_00491034 + 0x30c) = 0x42d00000;
  *(undefined4 *)(DAT_00491034 + 0x30e) = 0x42a00000;
  *(undefined4 *)(DAT_00491034 + 0x310) = 0x42600000;
  *(undefined4 *)(DAT_00491034 + 0x312) = 0x42200000;
  *(undefined4 *)(DAT_00491034 + 0x314) = 0x42d00000;
  *(undefined4 *)(DAT_00491034 + 0x316) = 0x42a00000;
  *(undefined4 *)(DAT_00491034 + 0x318) = 0x43b80000;
  *(undefined4 *)(DAT_00491034 + 0x31a) = 0x43c00000;
  *(undefined4 *)(DAT_00491034 + 0x31c) = 0x43c80000;
  *(undefined4 *)(DAT_00491034 + 0x31e) = 0x43d00000;
  *(undefined4 *)(DAT_00491034 + 800) = 0x43c40000;
  *(undefined4 *)(DAT_00491034 + 0x322) = 0x43cc0000;
  *(undefined4 *)(DAT_00491034 + 0x326) = 0x44bb8000;
  __vbaStrCopy();
  DAT_00491034[0x32c] = 0xe;
  __vbaStrCopy();
  __vbaStrCopy();
  *(undefined4 *)(DAT_00491034 + 0x346) = 0x42a00000;
  *(undefined4 *)(DAT_00491034 + 0x348) = 0x42600000;
  *(undefined4 *)(DAT_00491034 + 0x34a) = 0x42000000;
  *(undefined4 *)(DAT_00491034 + 0x34c) = 0x41800000;
  *(undefined4 *)(DAT_00491034 + 0x34e) = 0x42400000;
  *(undefined4 *)(DAT_00491034 + 0x350) = 0x41c00000;
  *(undefined4 *)(DAT_00491034 + 0x352) = 0x43b00000;
  *(undefined4 *)(DAT_00491034 + 0x354) = 0x43a80000;
  *(undefined4 *)(DAT_00491034 + 0x356) = 0x43a40000;
  *(undefined4 *)(DAT_00491034 + 0x358) = 0x43b00000;
  *(undefined4 *)(DAT_00491034 + 0x35a) = 0x43b80000;
  *(undefined4 *)(DAT_00491034 + 0x35c) = 0x43bc0000;
  DAT_00491034[0x366] = 0xf;
  __vbaStrCopy();
  __vbaStrCopy();
  *(undefined4 *)(DAT_00491034 + 0x380) = 0x42e00000;
  *(undefined4 *)(DAT_00491034 + 0x382) = 0x42b00000;
  *(undefined4 *)(DAT_00491034 + 900) = 0x42800000;
  *(undefined4 *)(DAT_00491034 + 0x386) = 0x42200000;
  *(undefined4 *)(DAT_00491034 + 0x388) = 0x42a00000;
  *(undefined4 *)(DAT_00491034 + 0x38a) = 0x42400000;
  *(undefined4 *)(DAT_00491034 + 0x38c) = 0x439c0000;
  *(undefined4 *)(DAT_00491034 + 0x38e) = 0x43940000;
  *(undefined4 *)(DAT_00491034 + 0x390) = 0x43900000;
  *(undefined4 *)(DAT_00491034 + 0x392) = 0x438c0000;
  *(undefined4 *)(DAT_00491034 + 0x394) = 0x43a00000;
  *(undefined4 *)(DAT_00491034 + 0x396) = 0x43980000;
  DAT_00491034[0x3a0] = 0x10;
  __vbaStrCopy();
  __vbaStrCopy();
  *(undefined4 *)(DAT_00491034 + 0x3a8) = 0x456d8000;
  *(undefined4 *)(DAT_00491034 + 0x3ba) = 0x43080000;
  *(undefined4 *)(DAT_00491034 + 0x3bc) = 0x42e00000;
  *(undefined4 *)(DAT_00491034 + 0x3be) = 0x42b00000;
  *(undefined4 *)(DAT_00491034 + 0x3c0) = 0x42800000;
  *(undefined4 *)(DAT_00491034 + 0x3c2) = 0x42e00000;
  *(undefined4 *)(DAT_00491034 + 0x3c4) = 0x42b00000;
  *(undefined4 *)(DAT_00491034 + 0x3c6) = 0x438c0000;
  *(undefined4 *)(DAT_00491034 + 0x3c8) = 0x43800000;
  *(undefined4 *)(DAT_00491034 + 0x3ca) = 0x43780000;
  *(undefined4 *)(DAT_00491034 + 0x3cc) = 0x43700000;
  *(undefined4 *)(DAT_00491034 + 0x3ce) = 0x438c0000;
  *(undefined4 *)(DAT_00491034 + 0x3d0) = 0x43880000;
  *(undefined4 *)(DAT_00491034 + 0x3d4) = 0x44ed8000;
  DAT_00491034[0x3da] = 0x11;
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  *(undefined4 *)(DAT_00491034 + 0x3e2) = 0x45548000;
  *(undefined4 *)(DAT_00491034 + 0x3e4) = 0x437a0000;
  *(undefined4 *)(DAT_00491034 + 0x3e6) = 0x44a8c000;
  *(undefined4 *)(DAT_00491034 + 1000) = 0x456d8000;
  *(undefined4 *)(DAT_00491034 + 0x3ea) = 0x451c4000;
  *(undefined4 *)(DAT_00491034 + 0x3ec) = 0x465de000;
  *(undefined4 *)(DAT_00491034 + 0x3ee) = 0x468ca000;
  *(undefined4 *)(DAT_00491034 + 0x3f0) = 0x447a0000;
  *(undefined4 *)(DAT_00491034 + 0x3f2) = 0x447a0000;
  *(undefined4 *)(DAT_00491034 + 0x3f4) = 0x43200000;
  *(undefined4 *)(DAT_00491034 + 0x3f6) = 0x43080000;
  *(undefined4 *)(DAT_00491034 + 0x3f8) = 0x42e00000;
  *(undefined4 *)(DAT_00491034 + 0x3fa) = 0x42b00000;
  *(undefined4 *)(DAT_00491034 + 0x3fc) = 0x43000000;
  *(undefined4 *)(DAT_00491034 + 0x3fe) = 0x42d00000;
  *(undefined4 *)(DAT_00491034 + 0x400) = 0x43700000;
  *(undefined4 *)(DAT_00491034 + 0x402) = 0x43580000;
  *(undefined4 *)(DAT_00491034 + 0x404) = 0x43480000;
  *(undefined4 *)(DAT_00491034 + 0x406) = 0x43480000;
  *(undefined4 *)(DAT_00491034 + 0x408) = 0x43700000;
  *(undefined4 *)(DAT_00491034 + 0x40a) = 0x43600000;
  *(undefined4 *)(DAT_00491034 + 0x40e) = 0x44d48000;
  __vbaStrCopy();
  DAT_00491034[0x414] = 0x12;
  __vbaStrCopy();
  __vbaStrCopy();
  *(undefined4 *)(DAT_00491034 + 0x41c) = 0x45610000;
  *(undefined4 *)(DAT_00491034 + 0x420) = 0x43fa0000;
  *(undefined4 *)(DAT_00491034 + 0x422) = 0x447a0000;
  *(undefined4 *)(DAT_00491034 + 0x424) = 0x44fa0000;
  *(undefined4 *)(DAT_00491034 + 0x426) = 0x457a0000;
  *(undefined4 *)(DAT_00491034 + 0x42e) = 0x43280000;
  *(undefined4 *)(DAT_00491034 + 0x430) = 0x43200000;
  *(undefined4 *)(DAT_00491034 + 0x432) = 0x43080000;
  *(undefined4 *)(DAT_00491034 + 0x434) = 0x42e00000;
  *(undefined4 *)(DAT_00491034 + 0x436) = 0x43080000;
  *(undefined4 *)(DAT_00491034 + 0x438) = 0x42e00000;
  *(undefined4 *)(DAT_00491034 + 0x43a) = 0x43500000;
  *(undefined4 *)(DAT_00491034 + 0x43c) = 0x43380000;
  *(undefined4 *)(DAT_00491034 + 0x43e) = 0x43280000;
  *(undefined4 *)(DAT_00491034 + 0x440) = 0x43180000;
  *(undefined4 *)(DAT_00491034 + 0x442) = 0x43400000;
  *(undefined4 *)(DAT_00491034 + 0x444) = 0x43300000;
  *(undefined4 *)(DAT_00491034 + 0x448) = 0x44e10000;
  DAT_00491034[0x44e] = 0x13;
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  *(undefined4 *)(DAT_00491034 + 0x456) = 0x45548000;
  *(undefined4 *)(DAT_00491034 + 0x458) = 0x437a0000;
  *(undefined4 *)(DAT_00491034 + 0x45a) = 0x44a8c000;
  *(undefined4 *)(DAT_00491034 + 0x45c) = 0x456d8000;
  *(undefined4 *)(DAT_00491034 + 0x45e) = 0x46241000;
  *(undefined4 *)(DAT_00491034 + 0x460) = 0x465de000;
  *(undefined4 *)(DAT_00491034 + 0x462) = 0x468ca000;
  *(undefined4 *)(DAT_00491034 + 0x464) = 0x447a0000;
  *(undefined4 *)(DAT_00491034 + 0x466) = 0x447a0000;
  *(undefined4 *)(DAT_00491034 + 0x468) = 0x43400000;
  *(undefined4 *)(DAT_00491034 + 0x46a) = 0x43380000;
  *(undefined4 *)(DAT_00491034 + 0x46c) = 0x43200000;
  *(undefined4 *)(DAT_00491034 + 0x46e) = 0x43080000;
  *(undefined4 *)(DAT_00491034 + 0x470) = 0x43200000;
  *(undefined4 *)(DAT_00491034 + 0x472) = 0x43080000;
  *(undefined4 *)(DAT_00491034 + 0x474) = 0x43280000;
  *(undefined4 *)(DAT_00491034 + 0x476) = 0x43100000;
  *(undefined4 *)(DAT_00491034 + 0x478) = 0x43000000;
  *(undefined4 *)(DAT_00491034 + 0x47a) = 0x42e00000;
  *(undefined4 *)(DAT_00491034 + 0x47c) = 0x43180000;
  *(undefined4 *)(DAT_00491034 + 0x47e) = 0x43080000;
  *(undefined4 *)(DAT_00491034 + 0x482) = 0x44d48000;
  __vbaStrCopy();
  DAT_00491034[0x488] = 0x14;
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  *(undefined4 *)(DAT_00491034 + 0x490) = 0x456d8000;
  *(undefined4 *)(DAT_00491034 + 0x492) = 0x43960000;
  *(undefined4 *)(DAT_00491034 + 0x494) = 0x44bb8000;
  *(undefined4 *)(DAT_00491034 + 0x496) = 0x45834000;
  *(undefined4 *)(DAT_00491034 + 0x498) = 0x4633b000;
  *(undefined4 *)(DAT_00491034 + 0x49a) = 0x466a6000;
  *(undefined4 *)(DAT_00491034 + 0x49c) = 0x46947000;
  *(undefined4 *)(DAT_00491034 + 0x49e) = 0x447a0000;
  *(undefined4 *)(DAT_00491034 + 0x4a0) = 0x447a0000;
  *(undefined4 *)(DAT_00491034 + 0x4a2) = 0x43500000;
  *(undefined4 *)(DAT_00491034 + 0x4a4) = 0x43500000;
  *(undefined4 *)(DAT_00491034 + 0x4a6) = 0x43380000;
  *(undefined4 *)(DAT_00491034 + 0x4a8) = 0x43200000;
  *(undefined4 *)(DAT_00491034 + 0x4aa) = 0x43380000;
  *(undefined4 *)(DAT_00491034 + 0x4ac) = 0x43200000;
  *(undefined4 *)(DAT_00491034 + 0x4ae) = 0x43000000;
  *(undefined4 *)(DAT_00491034 + 0x4b0) = 0x42d00000;
  *(undefined4 *)(DAT_00491034 + 0x4b2) = 0x42b00000;
  *(undefined4 *)(DAT_00491034 + 0x4b4) = 0x42900000;
  *(undefined4 *)(DAT_00491034 + 0x4b6) = 0x42e00000;
  *(undefined4 *)(DAT_00491034 + 0x4b8) = 0x42be0000;
  *(undefined4 *)(DAT_00491034 + 0x4bc) = 0x44ed8000;
  __vbaStrCopy();
  DAT_00491034[0x4c2] = 0x15;
  __vbaStrCopy();
  __vbaStrCopy();
  *(undefined4 *)(DAT_00491034 + 0x4dc) = 0x43600000;
  *(undefined4 *)(DAT_00491034 + 0x4de) = 0x43680000;
  *(undefined4 *)(DAT_00491034 + 0x4e0) = 0x43680000;
  *(undefined4 *)(DAT_00491034 + 0x4e2) = 0x43500000;
  *(undefined4 *)(DAT_00491034 + 0x4e4) = 0x43480000;
  *(undefined4 *)(DAT_00491034 + 0x4e6) = 0x43380000;
  *(undefined4 *)(DAT_00491034 + 0x4e8) = 0x42900000;
  *(undefined4 *)(DAT_00491034 + 0x4ea) = 0x42400000;
  *(undefined4 *)(DAT_00491034 + 0x4ec) = 0x41c00000;
  *(undefined4 *)(DAT_00491034 + 0x4ee) = 0x41800000;
  *(undefined4 *)(DAT_00491034 + 0x4f0) = 0x42800000;
  *(undefined4 *)(DAT_00491034 + 0x4f2) = 0x42200000;
  DAT_00491034[0x4fc] = 0x16;
  __vbaStrCopy();
  __vbaStrCopy();
  *(undefined4 *)(DAT_00491034 + 0x504) = 0x45610000;
  *(undefined4 *)(DAT_00491034 + 0x508) = 0x43fa0000;
  *(undefined4 *)(DAT_00491034 + 0x50a) = 0x447a0000;
  *(undefined4 *)(DAT_00491034 + 0x50c) = 0x44fa0000;
  *(undefined4 *)(DAT_00491034 + 0x50e) = 0x457a0000;
  *(undefined4 *)(DAT_00491034 + 0x516) = 0x438c0000;
  *(undefined4 *)(DAT_00491034 + 0x518) = 0x438c0000;
  *(undefined4 *)(DAT_00491034 + 0x51a) = 0x438c0000;
  *(undefined4 *)(DAT_00491034 + 0x51c) = 0x438c0000;
  *(undefined4 *)(DAT_00491034 + 0x51e) = 0x43800000;
  *(undefined4 *)(DAT_00491034 + 0x520) = 0x43800000;
  *(undefined4 *)(DAT_00491034 + 0x522) = 0x42b00000;
  *(undefined4 *)(DAT_00491034 + 0x524) = 0x42800000;
  *(undefined4 *)(DAT_00491034 + 0x526) = 0x42200000;
  *(undefined4 *)(DAT_00491034 + 0x528) = 0x41800000;
  *(undefined4 *)(DAT_00491034 + 0x52a) = 0x42600000;
  *(undefined4 *)(DAT_00491034 + 0x52c) = 0x42000000;
  *(undefined4 *)(DAT_00491034 + 0x530) = 0x44e10000;
  DAT_00491034[0x536] = 0x17;
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  *(undefined4 *)(DAT_00491034 + 0x53e) = 0x45834000;
  *(undefined4 *)(DAT_00491034 + 0x540) = 0x43af0000;
  *(undefined4 *)(DAT_00491034 + 0x542) = 0x44d48000;
  *(undefined4 *)(DAT_00491034 + 0x544) = 0x45947000;
  *(undefined4 *)(DAT_00491034 + 0x546) = 0x464b2000;
  *(undefined4 *)(DAT_00491034 + 0x548) = 0x467a0000;
  *(undefined4 *)(DAT_00491034 + 0x54a) = 0x469c4000;
  *(undefined4 *)(DAT_00491034 + 0x54c) = 0x447a0000;
  *(undefined4 *)(DAT_00491034 + 0x54e) = 0x447a0000;
  *(undefined4 *)(DAT_00491034 + 0x550) = 0x43a00000;
  *(undefined4 *)(DAT_00491034 + 0x552) = 0x43a00000;
  *(undefined4 *)(DAT_00491034 + 0x554) = 0x43a00000;
  *(undefined4 *)(DAT_00491034 + 0x556) = 0x43a00000;
  *(undefined4 *)(DAT_00491034 + 0x558) = 0x43980000;
  *(undefined4 *)(DAT_00491034 + 0x55a) = 0x43980000;
  *(undefined4 *)(DAT_00491034 + 0x55c) = 0x42b00000;
  *(undefined4 *)(DAT_00491034 + 0x55e) = 0x42800000;
  *(undefined4 *)(DAT_00491034 + 0x560) = 0x42200000;
  *(undefined4 *)(DAT_00491034 + 0x562) = 0x41800000;
  *(undefined4 *)(DAT_00491034 + 0x564) = 0x42900000;
  *(undefined4 *)(DAT_00491034 + 0x566) = 0x42000000;
  *(undefined4 *)(DAT_00491034 + 0x56a) = 0x45034000;
  __vbaStrCopy();
  DAT_00491034[0x570] = 0x18;
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  *(undefined4 *)(DAT_00491034 + 0x578) = 0x45834000;
  *(undefined4 *)(DAT_00491034 + 0x57a) = 0x43af0000;
  *(undefined4 *)(DAT_00491034 + 0x57c) = 0x44d48000;
  *(undefined4 *)(DAT_00491034 + 0x57e) = 0x45947000;
  *(undefined4 *)(DAT_00491034 + 0x580) = 0x464b2000;
  *(undefined4 *)(DAT_00491034 + 0x582) = 0x467a0000;
  *(undefined4 *)(DAT_00491034 + 0x584) = 0x469c4000;
  *(undefined4 *)(DAT_00491034 + 0x586) = 0x447a0000;
  *(undefined4 *)(DAT_00491034 + 0x588) = 0x447a0000;
  *(undefined4 *)(DAT_00491034 + 0x58a) = 0x43b80000;
  *(undefined4 *)(DAT_00491034 + 0x58c) = 0x43b80000;
  *(undefined4 *)(DAT_00491034 + 0x58e) = 0x43b80000;
  *(undefined4 *)(DAT_00491034 + 0x590) = 0x43b80000;
  *(undefined4 *)(DAT_00491034 + 0x592) = 0x43ac0000;
  *(undefined4 *)(DAT_00491034 + 0x594) = 0x43ac0000;
  *(undefined4 *)(DAT_00491034 + 0x596) = 0x42b00000;
  *(undefined4 *)(DAT_00491034 + 0x598) = 0x42800000;
  *(undefined4 *)(DAT_00491034 + 0x59a) = 0x42200000;
  *(undefined4 *)(DAT_00491034 + 0x59c) = 0x41800000;
  *(undefined4 *)(DAT_00491034 + 0x59e) = 0x42900000;
  *(undefined4 *)(DAT_00491034 + 0x5a0) = 0x42000000;
  *(undefined4 *)(DAT_00491034 + 0x5a4) = 0x45034000;
  __vbaStrCopy();
  DAT_00491034[0x5aa] = 0x19;
  __vbaStrCopy();
  __vbaStrCopy();
  *(undefined4 *)(DAT_00491034 + 0x5c4) = 0x43cc0000;
  *(undefined4 *)(DAT_00491034 + 0x5c6) = 0x43cc0000;
  *(undefined4 *)(DAT_00491034 + 0x5c8) = 0x43cc0000;
  *(undefined4 *)(DAT_00491034 + 0x5ca) = 0x43cc0000;
  *(undefined4 *)(DAT_00491034 + 0x5cc) = 0x43c00000;
  *(undefined4 *)(DAT_00491034 + 0x5ce) = 0x43c00000;
  *(undefined4 *)(DAT_00491034 + 0x5d0) = 0x42b00000;
  *(undefined4 *)(DAT_00491034 + 0x5d2) = 0x42800000;
  *(undefined4 *)(DAT_00491034 + 0x5d4) = 0x42200000;
  *(undefined4 *)(DAT_00491034 + 0x5d6) = 0x41800000;
  *(undefined4 *)(DAT_00491034 + 0x5d8) = 0x42900000;
  *(undefined4 *)(DAT_00491034 + 0x5da) = 0x42000000;
  DAT_00491034[0x5e4] = 0x1a;
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  *(undefined4 *)(DAT_00491034 + 0x5ec) = 0x458fc000;
  *(undefined4 *)(DAT_00491034 + 0x5ee) = 0x43c80000;
  *(undefined4 *)(DAT_00491034 + 0x5f0) = 0x44fa0000;
  *(undefined4 *)(DAT_00491034 + 0x5f2) = 0x45b3b000;
  *(undefined4 *)(DAT_00491034 + 0x5f4) = 0x465ac000;
  *(undefined4 *)(DAT_00491034 + 0x5f6) = 0x4684d000;
  *(undefined4 *)(DAT_00491034 + 0x5f8) = 0x46a41000;
  *(undefined4 *)(DAT_00491034 + 0x5fa) = 0x447a0000;
  *(undefined4 *)(DAT_00491034 + 0x5fc) = 0x447a0000;
  *(undefined4 *)(DAT_00491034 + 0x5fe) = 0x43e20000;
  *(undefined4 *)(DAT_00491034 + 0x600) = 0x43e20000;
  *(undefined4 *)(DAT_00491034 + 0x602) = 0x43e20000;
  *(undefined4 *)(DAT_00491034 + 0x604) = 0x43e20000;
  *(undefined4 *)(DAT_00491034 + 0x606) = 0x43d60000;
  *(undefined4 *)(DAT_00491034 + 0x608) = 0x43d60000;
  *(undefined4 *)(DAT_00491034 + 0x60a) = 0x42b00000;
  *(undefined4 *)(DAT_00491034 + 0x60c) = 0x42800000;
  *(undefined4 *)(DAT_00491034 + 0x60e) = 0x42200000;
  *(undefined4 *)(DAT_00491034 + 0x610) = 0x41800000;
  *(undefined4 *)(DAT_00491034 + 0x612) = 0x42900000;
  *(undefined4 *)(DAT_00491034 + 0x614) = 0x42000000;
  *(undefined4 *)(DAT_00491034 + 0x618) = 0x450fc000;
  __vbaStrCopy();
  DAT_00491034[0x61e] = 0x1b;
  __vbaStrCopy();
  __vbaStrCopy();
  *(undefined4 *)(DAT_00491034 + 0x626) = 0x45610000;
  *(undefined4 *)(DAT_00491034 + 0x62a) = 0x43fa0000;
  *(undefined4 *)(DAT_00491034 + 0x62c) = 0x447a0000;
  *(undefined4 *)(DAT_00491034 + 0x62e) = 0x44fa0000;
  *(undefined4 *)(DAT_00491034 + 0x630) = 0x457a0000;
  *(undefined4 *)(DAT_00491034 + 0x638) = 0x43f80000;
  *(undefined4 *)(DAT_00491034 + 0x63a) = 0x43f80000;
  *(undefined4 *)(DAT_00491034 + 0x63c) = 0x43f80000;
  *(undefined4 *)(DAT_00491034 + 0x63e) = 0x43f80000;
  *(undefined4 *)(DAT_00491034 + 0x640) = 0x43ee0000;
  *(undefined4 *)(DAT_00491034 + 0x642) = 0x43ee0000;
  *(undefined4 *)(DAT_00491034 + 0x644) = 0x42b00000;
  *(undefined4 *)(DAT_00491034 + 0x646) = 0x42800000;
  *(undefined4 *)(DAT_00491034 + 0x648) = 0x42200000;
  *(undefined4 *)(DAT_00491034 + 0x64a) = 0x41800000;
  *(undefined4 *)(DAT_00491034 + 0x64c) = 0x42900000;
  *(undefined4 *)(DAT_00491034 + 0x64e) = 0x42000000;
  *(undefined4 *)(DAT_00491034 + 0x652) = 0x44d48000;
  DAT_00491034[0x658] = 0x1c;
  __vbaStrCopy();
  __vbaStrCopy();
  *(undefined4 *)(DAT_00491034 + 0x672) = 0x44030000;
  *(undefined4 *)(DAT_00491034 + 0x674) = 0x44090000;
  *(undefined4 *)(DAT_00491034 + 0x676) = 0x440e0000;
  *(undefined4 *)(DAT_00491034 + 0x678) = 0x440e0000;
  *(undefined4 *)(DAT_00491034 + 0x67a) = 0x44030000;
  *(undefined4 *)(DAT_00491034 + 0x67c) = 0x44050000;
  *(undefined4 *)(DAT_00491034 + 0x67e) = 0x42980000;
  *(undefined4 *)(DAT_00491034 + 0x680) = 0x42880000;
  *(undefined4 *)(DAT_00491034 + 0x682) = 0x42600000;
  *(undefined4 *)(DAT_00491034 + 0x684) = 0x42000000;
  *(undefined4 *)(DAT_00491034 + 0x686) = 0x42400000;
  *(undefined4 *)(DAT_00491034 + 0x688) = 0x41c00000;
  DAT_00491034[0x692] = 0x1d;
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  *(undefined4 *)(DAT_00491034 + 0x69a) = 0x459c4000;
  *(undefined4 *)(DAT_00491034 + 0x69c) = 0x43c80000;
  *(undefined4 *)(DAT_00491034 + 0x69e) = 0x45098000;
  *(undefined4 *)(DAT_00491034 + 0x6a0) = 0x45bb8000;
  *(undefined4 *)(DAT_00491034 + 0x6a2) = 0x466a6000;
  *(undefined4 *)(DAT_00491034 + 0x6a4) = 0x468ca000;
  *(undefined4 *)(DAT_00491034 + 0x6a6) = 0x46a41000;
  *(undefined4 *)(DAT_00491034 + 0x6a8) = 0x447a0000;
  *(undefined4 *)(DAT_00491034 + 0x6aa) = 0x447a0000;
  *(undefined4 *)(DAT_00491034 + 0x6ac) = 0x44070000;
  *(undefined4 *)(DAT_00491034 + 0x6ae) = 0x440c0000;
  *(undefined4 *)(DAT_00491034 + 0x6b0) = 0x44110000;
  *(undefined4 *)(DAT_00491034 + 0x6b2) = 0x44170000;
  *(undefined4 *)(DAT_00491034 + 0x6b4) = 0x44070000;
  *(undefined4 *)(DAT_00491034 + 0x6b6) = 0x44110000;
  *(undefined4 *)(DAT_00491034 + 0x6b8) = 0x43000000;
  *(undefined4 *)(DAT_00491034 + 0x6ba) = 0x42e80000;
  *(undefined4 *)(DAT_00491034 + 0x6bc) = 0x42d00000;
  *(undefined4 *)(DAT_00491034 + 0x6be) = 0x42b80000;
  *(undefined4 *)(DAT_00491034 + 0x6c0) = 0x42d00000;
  *(undefined4 *)(DAT_00491034 + 0x6c2) = 0x42a80000;
  *(undefined4 *)(DAT_00491034 + 0x6c6) = 0x451c4000;
  __vbaStrCopy();
  DAT_00491034[0x6cc] = 0x1e;
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  *(undefined4 *)(DAT_00491034 + 0x6d4) = 0x45a8c000;
  *(undefined4 *)(DAT_00491034 + 0x6d6) = 0x43e10000;
  *(undefined4 *)(DAT_00491034 + 0x6d8) = 0x45160000;
  *(undefined4 *)(DAT_00491034 + 0x6da) = 0x45d48000;
  *(undefined4 *)(DAT_00491034 + 0x6dc) = 0x467a0000;
  *(undefined4 *)(DAT_00491034 + 0x6de) = 0x46985800;
  *(undefined4 *)(DAT_00491034 + 0x6e0) = 0x46b3b000;
  *(undefined4 *)(DAT_00491034 + 0x6e2) = 0x447a0000;
  *(undefined4 *)(DAT_00491034 + 0x6e4) = 0x447a0000;
  *(undefined4 *)(DAT_00491034 + 0x6e6) = 0x440c0000;
  *(undefined4 *)(DAT_00491034 + 0x6e8) = 0x44110000;
  *(undefined4 *)(DAT_00491034 + 0x6ea) = 0x44160000;
  *(undefined4 *)(DAT_00491034 + 0x6ec) = 0x441b0000;
  *(undefined4 *)(DAT_00491034 + 0x6ee) = 0x440b0000;
  *(undefined4 *)(DAT_00491034 + 0x6f0) = 0x44110000;
  *(undefined4 *)(DAT_00491034 + 0x6f2) = 0x43280000;
  *(undefined4 *)(DAT_00491034 + 0x6f4) = 0x431c0000;
  *(undefined4 *)(DAT_00491034 + 0x6f6) = 0x43100000;
  *(undefined4 *)(DAT_00491034 + 0x6f8) = 0x43040000;
  *(undefined4 *)(DAT_00491034 + 0x6fa) = 0x43140000;
  *(undefined4 *)(DAT_00491034 + 0x6fc) = 0x43040000;
  *(undefined4 *)(DAT_00491034 + 0x700) = 0x4528c000;
  __vbaStrCopy();
  DAT_00491034[0x706] = 0x1f;
  __vbaStrCopy();
  __vbaStrCopy();
  *(undefined4 *)(DAT_00491034 + 0x70e) = 0x456d8000;
  *(undefined4 *)(DAT_00491034 + 0x720) = 0x44120000;
  *(undefined4 *)(DAT_00491034 + 0x722) = 0x44170000;
  *(undefined4 *)(DAT_00491034 + 0x724) = 0x441d0000;
  *(undefined4 *)(DAT_00491034 + 0x726) = 0x44210000;
  *(undefined4 *)(DAT_00491034 + 0x728) = 0x44120000;
  *(undefined4 *)(DAT_00491034 + 0x72a) = 0x441b0000;
  *(undefined4 *)(DAT_00491034 + 0x72c) = 0x43540000;
  *(undefined4 *)(DAT_00491034 + 0x72e) = 0x43480000;
  *(undefined4 *)(DAT_00491034 + 0x730) = 0x433c0000;
  *(undefined4 *)(DAT_00491034 + 0x732) = 0x432c0000;
  *(undefined4 *)(DAT_00491034 + 0x734) = 0x433c0000;
  *(undefined4 *)(DAT_00491034 + 0x736) = 0x43280000;
  *(undefined4 *)(DAT_00491034 + 0x73a) = 0x44ed8000;
  DAT_00491034[0x740] = 0x20;
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  *(undefined4 *)(DAT_00491034 + 0x748) = 0x45bb8000;
  *(undefined4 *)(DAT_00491034 + 0x74a) = 0x43fa0000;
  *(undefined4 *)(DAT_00491034 + 0x74c) = 0x451c4000;
  *(undefined4 *)(DAT_00491034 + 0x74e) = 0x45cb2000;
  *(undefined4 *)(DAT_00491034 + 0x750) = 0x4684d000;
  *(undefined4 *)(DAT_00491034 + 0x752) = 0x46a41000;
  *(undefined4 *)(DAT_00491034 + 0x754) = 0x46bb8000;
  *(undefined4 *)(DAT_00491034 + 0x756) = 0x447a0000;
  *(undefined4 *)(DAT_00491034 + 0x758) = 0x447a0000;
  *(undefined4 *)(DAT_00491034 + 0x75a) = 0x44180000;
  *(undefined4 *)(DAT_00491034 + 0x75c) = 0x441d0000;
  *(undefined4 *)(DAT_00491034 + 0x75e) = 0x44220000;
  *(undefined4 *)(DAT_00491034 + 0x760) = 0x44280000;
  *(undefined4 *)(DAT_00491034 + 0x762) = 0x44170000;
  *(undefined4 *)(DAT_00491034 + 0x764) = 0x44220000;
  *(undefined4 *)(DAT_00491034 + 0x766) = 0x437c0000;
  *(undefined4 *)(DAT_00491034 + 0x768) = 0x43700000;
  *(undefined4 *)(DAT_00491034 + 0x76a) = 0x43640000;
  *(undefined4 *)(DAT_00491034 + 0x76c) = 0x43500000;
  *(undefined4 *)(DAT_00491034 + 0x76e) = 0x43640000;
  *(undefined4 *)(DAT_00491034 + 0x770) = 0x434c0000;
  *(undefined4 *)(DAT_00491034 + 0x774) = 0x453b8000;
  __vbaStrCopy();
  DAT_00491034[0x77a] = 0x21;
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  *(undefined4 *)(DAT_00491034 + 0x782) = 0x45bb8000;
  *(undefined4 *)(DAT_00491034 + 0x784) = 0x43e10000;
  *(undefined4 *)(DAT_00491034 + 0x786) = 0x45160000;
  *(undefined4 *)(DAT_00491034 + 0x788) = 0x45d48000;
  *(undefined4 *)(DAT_00491034 + 0x78a) = 0x467a0000;
  *(undefined4 *)(DAT_00491034 + 0x78c) = 0x46985800;
  *(undefined4 *)(DAT_00491034 + 0x78e) = 0x46b3b000;
  *(undefined4 *)(DAT_00491034 + 0x790) = 0x447a0000;
  *(undefined4 *)(DAT_00491034 + 0x792) = 0x447a0000;
  *(undefined4 *)(DAT_00491034 + 0x794) = 0x441d0000;
  *(undefined4 *)(DAT_00491034 + 0x796) = 0x44230000;
  *(undefined4 *)(DAT_00491034 + 0x798) = 0x44280000;
  *(undefined4 *)(DAT_00491034 + 0x79a) = 0x442e0000;
  *(undefined4 *)(DAT_00491034 + 0x79c) = 0x441d0000;
  *(undefined4 *)(DAT_00491034 + 0x79e) = 0x44270000;
  *(undefined4 *)(DAT_00491034 + 0x7a0) = 0x43900000;
  *(undefined4 *)(DAT_00491034 + 0x7a2) = 0x438a0000;
  *(undefined4 *)(DAT_00491034 + 0x7a4) = 0x43840000;
  *(undefined4 *)(DAT_00491034 + 0x7a6) = 0x43780000;
  *(undefined4 *)(DAT_00491034 + 0x7a8) = 0x43860000;
  *(undefined4 *)(DAT_00491034 + 0x7aa) = 0x43740000;
  *(undefined4 *)(DAT_00491034 + 0x7ae) = 0x453b8000;
  __vbaStrCopy();
  DAT_00491034[0x7b4] = 0x22;
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  *(undefined4 *)(DAT_00491034 + 0x7bc) = 0x45c80000;
  *(undefined4 *)(DAT_00491034 + 0x7be) = 0x44098000;
  *(undefined4 *)(DAT_00491034 + 0x7c0) = 0x45322000;
  *(undefined4 *)(DAT_00491034 + 0x7c2) = 0x4604d000;
  *(undefined4 *)(DAT_00491034 + 0x7c4) = 0x46947000;
  *(undefined4 *)(DAT_00491034 + 0x7c6) = 0x46b3b000;
  *(undefined4 *)(DAT_00491034 + 0x7c8) = 0x46d2f000;
  *(undefined4 *)(DAT_00491034 + 0x7ca) = 0x447a0000;
  *(undefined4 *)(DAT_00491034 + 0x7cc) = 0x447a0000;
  *(undefined4 *)(DAT_00491034 + 0x7ce) = 0x44230000;
  *(undefined4 *)(DAT_00491034 + 2000) = 0x44280000;
  *(undefined4 *)(DAT_00491034 + 0x7d2) = 0x442d0000;
  *(undefined4 *)(DAT_00491034 + 0x7d4) = 0x44328000;
  *(undefined4 *)(DAT_00491034 + 0x7d6) = 0x44270000;
  *(undefined4 *)(DAT_00491034 + 0x7d8) = 0x442d0000;
  *(undefined4 *)(DAT_00491034 + 0x7da) = 0x43a40000;
  *(undefined4 *)(DAT_00491034 + 0x7dc) = 0x43a00000;
  *(undefined4 *)(DAT_00491034 + 0x7de) = 0x439a0000;
  *(undefined4 *)(DAT_00491034 + 0x7e0) = 0x438e0000;
  *(undefined4 *)(DAT_00491034 + 0x7e2) = 0x43960000;
  *(undefined4 *)(DAT_00491034 + 0x7e4) = 0x438e0000;
  *(undefined4 *)(DAT_00491034 + 0x7e8) = 0x45480000;
  __vbaStrCopy();
  DAT_00491034[0x7ee] = 0x23;
  __vbaStrCopy();
  __vbaStrCopy();
  *(undefined4 *)(DAT_00491034 + 0x808) = 0x442b0000;
  *(undefined4 *)(DAT_00491034 + 0x80a) = 0x44310000;
  *(undefined4 *)(DAT_00491034 + 0x80c) = 0x44370000;
  *(undefined4 *)(DAT_00491034 + 0x80e) = 0x443b0000;
  *(undefined4 *)(DAT_00491034 + 0x810) = 0x44310000;
  *(undefined4 *)(DAT_00491034 + 0x812) = 0x44380000;
  *(undefined4 *)(DAT_00491034 + 0x814) = 0x43ae0000;
  *(undefined4 *)(DAT_00491034 + 0x816) = 0x43b40000;
  *(undefined4 *)(DAT_00491034 + 0x818) = 0x43bc0000;
  *(undefined4 *)(DAT_00491034 + 0x81a) = 0x43ac0000;
  *(undefined4 *)(DAT_00491034 + 0x81c) = 0x43a60000;
  *(undefined4 *)(DAT_00491034 + 0x81e) = 0x439e0000;
  DAT_00491034[0x828] = 0x24;
  __vbaStrCopy();
  __vbaStrCopy();
  *(undefined4 *)(DAT_00491034 + 0x842) = 0x44230000;
  *(undefined4 *)(DAT_00491034 + 0x844) = 0x44290000;
  *(undefined4 *)(DAT_00491034 + 0x846) = 0x442e0000;
  *(undefined4 *)(DAT_00491034 + 0x848) = 0x44340000;
  *(undefined4 *)(DAT_00491034 + 0x84a) = 0x44280000;
  *(undefined4 *)(DAT_00491034 + 0x84c) = 0x442f0000;
  *(undefined4 *)(DAT_00491034 + 0x84e) = 0x43c00000;
  *(undefined4 *)(DAT_00491034 + 0x850) = 0x43c60000;
  *(undefined4 *)(DAT_00491034 + 0x852) = 0x43ce0000;
  *(undefined4 *)(DAT_00491034 + 0x854) = 0x43d00000;
  *(undefined4 *)(DAT_00491034 + 0x856) = 0x43bc0000;
  *(undefined4 *)(DAT_00491034 + 0x858) = 0x43c40000;
  DAT_00491034[0x862] = 0x25;
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  *(undefined4 *)(DAT_00491034 + 0x86a) = 0x45dac000;
  *(undefined4 *)(DAT_00491034 + 0x86c) = 0x44228000;
  *(undefined4 *)(DAT_00491034 + 0x86e) = 0x454e4000;
  *(undefined4 *)(DAT_00491034 + 0x870) = 0x46147000;
  *(undefined4 *)(DAT_00491034 + 0x872) = 0x46abe000;
  *(undefined4 *)(DAT_00491034 + 0x874) = 0x46c35000;
  *(undefined4 *)(DAT_00491034 + 0x876) = 0x46ea6000;
  *(undefined4 *)(DAT_00491034 + 0x878) = 0x447a0000;
  *(undefined4 *)(DAT_00491034 + 0x87a) = 0x447a0000;
  *(undefined4 *)(DAT_00491034 + 0x87c) = 0x441e0000;
  *(undefined4 *)(DAT_00491034 + 0x87e) = 0x44230000;
  *(undefined4 *)(DAT_00491034 + 0x880) = 0x44280000;
  *(undefined4 *)(DAT_00491034 + 0x882) = 0x442e0000;
  *(undefined4 *)(DAT_00491034 + 0x884) = 0x44230000;
  *(undefined4 *)(DAT_00491034 + 0x886) = 0x44290000;
  *(undefined4 *)(DAT_00491034 + 0x888) = 0x43d20000;
  *(undefined4 *)(DAT_00491034 + 0x88a) = 0x43d80000;
  *(undefined4 *)(DAT_00491034 + 0x88c) = 0x43e00000;
  *(undefined4 *)(DAT_00491034 + 0x88e) = 0x43e60000;
  *(undefined4 *)(DAT_00491034 + 0x890) = 0x43ce0000;
  *(undefined4 *)(DAT_00491034 + 0x892) = 0x43d60000;
  *(undefined4 *)(DAT_00491034 + 0x896) = 0x455ac000;
  __vbaStrCopy();
  DAT_00491034[0x89c] = 0x26;
  __vbaStrCopy();
  __vbaStrCopy();
  *(undefined4 *)(DAT_00491034 + 0x8b6) = 0x44180000;
  *(undefined4 *)(DAT_00491034 + 0x8b8) = 0x441d0000;
  *(undefined4 *)(DAT_00491034 + 0x8ba) = 0x44220000;
  *(undefined4 *)(DAT_00491034 + 0x8bc) = 0x44270000;
  *(undefined4 *)(DAT_00491034 + 0x8be) = 0x441e0000;
  *(undefined4 *)(DAT_00491034 + 0x8c0) = 0x44240000;
  *(undefined4 *)(DAT_00491034 + 0x8c2) = 0x43e60000;
  *(undefined4 *)(DAT_00491034 + 0x8c4) = 0x43ee0000;
  *(undefined4 *)(DAT_00491034 + 0x8c6) = 0x43f40000;
  *(undefined4 *)(DAT_00491034 + 0x8c8) = 0x43fa0000;
  *(undefined4 *)(DAT_00491034 + 0x8ca) = 0x43e20000;
  *(undefined4 *)(DAT_00491034 + 0x8cc) = 0x43e80000;
  DAT_00491034[0x8d6] = 0x27;
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  *(undefined4 *)(DAT_00491034 + 0x8de) = 0x45dac000;
  *(undefined4 *)(DAT_00491034 + 0x8e0) = 0x44228000;
  *(undefined4 *)(DAT_00491034 + 0x8e2) = 0x454e4000;
  *(undefined4 *)(DAT_00491034 + 0x8e4) = 0x46147000;
  *(undefined4 *)(DAT_00491034 + 0x8e6) = 0x46abe000;
  *(undefined4 *)(DAT_00491034 + 0x8e8) = 0x46c35000;
  *(undefined4 *)(DAT_00491034 + 0x8ea) = 0x46ea6000;
  *(undefined4 *)(DAT_00491034 + 0x8ec) = 0x447a0000;
  *(undefined4 *)(DAT_00491034 + 0x8ee) = 0x447a0000;
  *(undefined4 *)(DAT_00491034 + 0x8f0) = 0x44130000;
  *(undefined4 *)(DAT_00491034 + 0x8f2) = 0x44180000;
  *(undefined4 *)(DAT_00491034 + 0x8f4) = 0x441e0000;
  *(undefined4 *)(DAT_00491034 + 0x8f6) = 0x44230000;
  *(undefined4 *)(DAT_00491034 + 0x8f8) = 0x44180000;
  *(undefined4 *)(DAT_00491034 + 0x8fa) = 0x441e0000;
  *(undefined4 *)(DAT_00491034 + 0x8fc) = 0x43fa0000;
  *(undefined4 *)(DAT_00491034 + 0x8fe) = 0x44010000;
  *(undefined4 *)(DAT_00491034 + 0x900) = 0x44040000;
  *(undefined4 *)(DAT_00491034 + 0x902) = 0x44070000;
  *(undefined4 *)(DAT_00491034 + 0x904) = 0x43f60000;
  *(undefined4 *)(DAT_00491034 + 0x906) = 0x43fe0000;
  *(undefined4 *)(DAT_00491034 + 0x90a) = 0x455ac000;
  __vbaStrCopy();
  DAT_00491034[0x910] = 0x28;
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  *(undefined4 *)(DAT_00491034 + 0x918) = 0x45e74000;
  *(undefined4 *)(DAT_00491034 + 0x91a) = 0x447a0000;
  *(undefined4 *)(DAT_00491034 + 0x91c) = 0x457a0000;
  *(undefined4 *)(DAT_00491034 + 0x91e) = 0x463b8000;
  *(undefined4 *)(DAT_00491034 + 0x920) = 0x46cb2000;
  *(undefined4 *)(DAT_00491034 + 0x922) = 0x46f23000;
  *(undefined4 *)(DAT_00491034 + 0x924) = 0x470ca000;
  *(undefined4 *)(DAT_00491034 + 0x926) = 0x447a0000;
  *(undefined4 *)(DAT_00491034 + 0x928) = 0x447a0000;
  *(undefined4 *)(DAT_00491034 + 0x92a) = 0x440d0000;
  *(undefined4 *)(DAT_00491034 + 0x92c) = 0x44120000;
  *(undefined4 *)(DAT_00491034 + 0x92e) = 0x44170000;
  *(undefined4 *)(DAT_00491034 + 0x930) = 0x441d0000;
  *(undefined4 *)(DAT_00491034 + 0x932) = 0x44120000;
  *(undefined4 *)(DAT_00491034 + 0x934) = 0x441d0000;
  *(undefined4 *)(DAT_00491034 + 0x936) = 0x44070000;
  *(undefined4 *)(DAT_00491034 + 0x938) = 0x440a0000;
  *(undefined4 *)(DAT_00491034 + 0x93a) = 0x440d0000;
  *(undefined4 *)(DAT_00491034 + 0x93c) = 0x44100000;
  *(undefined4 *)(DAT_00491034 + 0x93e) = 0x44040000;
  *(undefined4 *)(DAT_00491034 + 0x940) = 0x440b0000;
  *(undefined4 *)(DAT_00491034 + 0x944) = 0x45674000;
  __vbaStrCopy();
  DAT_00491034[0x94a] = 0x29;
  __vbaStrCopy();
  __vbaStrCopy();
  *(undefined4 *)(DAT_00491034 + 0x952) = 0x44fa0000;
  *(undefined4 *)(DAT_00491034 + 0x964) = 0x44070000;
  *(undefined4 *)(DAT_00491034 + 0x966) = 0x440c0000;
  *(undefined4 *)(DAT_00491034 + 0x968) = 0x44110000;
  *(undefined4 *)(DAT_00491034 + 0x96a) = 0x44170000;
  *(undefined4 *)(DAT_00491034 + 0x96c) = 0x44110000;
  *(undefined4 *)(DAT_00491034 + 0x96e) = 0x44170000;
  *(undefined4 *)(DAT_00491034 + 0x970) = 0x44110000;
  *(undefined4 *)(DAT_00491034 + 0x972) = 0x44140000;
  *(undefined4 *)(DAT_00491034 + 0x974) = 0x44170000;
  *(undefined4 *)(DAT_00491034 + 0x976) = 0x441a0000;
  *(undefined4 *)(DAT_00491034 + 0x978) = 0x44120000;
  *(undefined4 *)(DAT_00491034 + 0x97a) = 0x44150000;
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  return;
}


