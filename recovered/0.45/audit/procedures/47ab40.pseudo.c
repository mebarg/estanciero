/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

void __cdecl FUN_0047ab40(int *param_1,wchar_t *param_2,byte *param_3)

{
  byte bVar1;
  undefined1 uVar2;
  byte bVar3;
  int iVar4;
  wchar_t *pwVar5;
  int *piVar6;
  undefined4 uVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  ushort in_FPUStatusWord;
  ushort uVar11;
  wchar_t *pwStack_158;
  wchar_t *pwStack_150;
  undefined4 *puStack_14c;
  int *piStack_148;
  wchar_t *pwStack_144;
  byte *pbVar12;
  wchar_t *pwStack_128;
  undefined1 local_c0 [36];
  undefined4 local_9c;
  undefined4 local_8c;
  int *local_88;
  wchar_t *local_84;
  undefined4 local_7c [2];
  undefined4 local_74;
  int local_6c [2];
  undefined4 local_64;
  undefined4 local_5c [2];
  undefined4 local_54;
  undefined4 local_4c [4];
  undefined4 local_3c;
  int *local_38;
  undefined4 local_34;
  undefined4 local_30;
  int *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  byte local_1c [4];
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_00401656;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xfffffef0;
  local_c = &DAT_004012a8;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))();
  local_1c[0] = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = (int *)0x0;
  local_30 = 0;
  local_34 = 0;
  local_38 = (int *)0x0;
  local_3c = 0;
  local_4c[0] = 0;
  local_5c[0] = 0;
  local_6c[0] = 0;
  local_7c[0] = 0;
  local_8c = 0;
  local_9c = 0;
  local_c0[0] = 0;
  if (0x29 < *param_3) {
    __vbaGenerateBoundsError();
  }
  __vbaStrCopy();
  iVar4 = __vbaStrCmp();
  if (iVar4 == 0) {
LAB_0047b2c9:
    bVar3 = *param_3;
    if (0x29 < bVar3) {
      __vbaGenerateBoundsError();
    }
    if (*(char *)(DAT_00491034 + 0x65 + (uint)bVar3 * 0x74) != '\0') {
      bVar3 = *param_3;
      if (0x29 < bVar3) {
        __vbaGenerateBoundsError();
      }
      if (*(byte *)(DAT_00491034 + 0x65 + (uint)bVar3 * 0x74) != DAT_0049107a) {
        bVar3 = *param_3;
        if (0x29 < bVar3) {
          __vbaGenerateBoundsError();
        }
        if (*(short *)(DAT_00491034 + 0x6c + (uint)bVar3 * 0x74) == 0) {
          if (DAT_00491714 == (int *)0x0) {
            __vbaNew2();
          }
          piVar8 = DAT_00491714;
          if (DAT_004910c4 == (wchar_t *)0x0) {
            __vbaNew2();
          }
          iVar4 = *piVar8;
          pwStack_128 = (wchar_t *)__vbaObjSetAddref();
          iVar4 = (**(code **)(iVar4 + 0xc))();
          if (iVar4 < 0) {
            __vbaHresultCheckObj();
          }
          __vbaFreeObj();
          if (DAT_004910c4 == (wchar_t *)0x0) {
            __vbaNew2();
          }
          pwVar5 = DAT_004910c4;
          local_8c = 2;
          local_84 = (wchar_t *)0x1;
          pwStack_150 = DAT_004910c4;
          puStack_14c = (undefined4 *)0x2;
          piStack_148 = local_88;
          pwStack_144 = (wchar_t *)0x1;
          iVar4 = (**(code **)(*(int *)DAT_004910c4 + 0x2b0))();
          if (iVar4 < 0) {
            pwStack_128 = pwVar5;
            __vbaHresultCheckObj();
          }
        }
      }
      bVar1 = __vbaUI1I2();
      bVar3 = __vbaUI1I2();
      while (local_1c[0] = bVar3, local_1c[0] <= bVar1) {
        pbVar12 = local_1c;
        FUN_00489260(pbVar12);
        bVar3 = local_1c[0] + 1;
        if (0xfe < local_1c[0]) {
          __vbaErrorOverflow();
          pwStack_144 = 
          L"◿ფ@◿ჼ@◿ၬ@◿ၐ@◿ᄨ@◿ူ@◿ᄼ@◿ၴ@◿ᄸ@◿ᄬ@◿ჴ@◿Ⴠ@◿ჰ@◿၀@◿တ@◿ᅬ@◿ဌ@◿ᆔ@◿ᄔ@◿ႄ@◿ე@◿ᆀ@◿ᅸ@◿Ⴈ@◿ၜ@◿ᄐ@◿ᆌ@◿ၸ@◿შ@◿န@◿ᅜ@◿Ⴀ@◿ᅄ@◿း@◿ᄤ@◿ႜ@◿ᄰ@◿ၔ@◿ᆈ@◿ᅔ@◿ဨ@◿჈@◿ႈ@◿ᄈ@◿ᆠ@◿Ⴐ@◿ၼ@◿ᅴ@◿ᆄ@◿Ⴜ@◿႐@◿ᆐ@◿რ@◿ᅈ@◿ၘ@◿წ@◿ᆜ@◿ဤ@◿ᄜ@◿ဠ@◿၈@◿ᅤ@◿ᄴ@◿ဈ@◿၄@◿ᅰ@◿လ@◿ᄌ@◿ၠ@◿ၰ@◿ᄠ@◿ᄘ@◿ဴ@◿Ⴤ@◿Ⴔ@◿ᆘ@◿ၨ@◿ᅼ@◿ာ@◿ᅘ@◿ၤ@◿႘@◿၌@◿ა@◿င@◿က@◿ဘ@◿Ⴄ@◿ᅐ@◿ᅨ@◿Ⴌ@◿ᅠ@◿Ⴘ@◿ᅌ@◿ြ@◿ჸ@◿ᄀ@◿ႀ@◿ᄄ@◿ნ@◿ი@◿႔@◿჌@◿ᅀ@"
          ;
          piStack_148 = ExceptionList;
          ExceptionList = &piStack_148;
          (**(code **)(*(int *)pbVar12 + 4))(pbVar12);
          puStack_14c = (undefined4 *)0x0;
          pwStack_150 = (wchar_t *)0x0;
          pwStack_158 = (wchar_t *)0x0;
          uVar7 = (**(code **)(*(int *)pbVar12 + 0x31c))(pbVar12);
          piVar8 = (int *)__vbaObjSet(&stack0xfffffeac,uVar7);
          uVar7 = (**(code **)(*(int *)pbVar12 + 0x318))(pbVar12);
          piVar6 = (int *)__vbaObjSet(&puStack_14c,uVar7);
          iVar4 = (**(code **)(*piVar6 + 0x40))
                            (piVar6,CONCAT22((short)((uint)&pwStack_150 >> 0x10),
                                             (ushort)(byte)*pwStack_128),&pwStack_150);
          if (iVar4 < 0) {
            __vbaHresultCheckObj(iVar4,piVar6,&DAT_00470e74,0x40);
          }
          pwVar5 = pwStack_150;
          iVar4 = (**(code **)(*(int *)pwStack_150 + 0x78))(pwStack_150,&pwStack_158);
          uVar11 = 0;
          if (iVar4 < 0) {
            __vbaHresultCheckObj(iVar4,pwVar5,&DAT_00471330,0x78);
          }
          if ((uVar11 & 0xd) != 0) {
            __vbaFPException();
            return;
          }
          iVar4 = (**(code **)(*piVar8 + 0x74))(piVar8,(float)pwStack_158 - 4.0);
          if (iVar4 < 0) {
            __vbaHresultCheckObj(iVar4,piVar8,&DAT_00471378,0x74);
          }
          __vbaFreeObjList(3,&puStack_14c,&pwStack_150,&stack0xfffffeac);
          return;
        }
      }
      goto code_r0x0047b5ca;
    }
    if (DAT_00491714 == (int *)0x0) {
      __vbaNew2();
    }
    piVar8 = DAT_00491714;
    if (DAT_0049109c == (wchar_t *)0x0) {
      __vbaNew2();
    }
    iVar4 = *piVar8;
    __vbaObjSetAddref();
    iVar4 = (**(code **)(iVar4 + 0xc))();
    if (iVar4 < 0) {
      __vbaHresultCheckObj();
    }
    __vbaFreeObj();
    if (DAT_0049109c == (wchar_t *)0x0) {
      __vbaNew2();
    }
    local_8c = 2;
    local_84 = (wchar_t *)0x1;
    pwStack_150 = DAT_0049109c;
    puStack_14c = (undefined4 *)0x2;
    piStack_148 = local_88;
    pwStack_144 = (wchar_t *)0x1;
    iVar4 = (**(code **)(*(int *)DAT_0049109c + 0x2b0))();
    if (iVar4 < 0) {
      pwStack_158 = (wchar_t *)&DAT_00470e94;
      __vbaHresultCheckObj();
    }
    pwStack_158 = L"຋噗釿܈";
    FUN_00489260((byte *)param_2);
    pwStack_158 = param_2;
    iVar4 = (**(code **)(*param_1 + 0x708))();
  }
  else {
    pwStack_128 = L"삅萏ڦ";
    iVar4 = __vbaStrCmp();
    if (iVar4 == 0) goto LAB_0047b2c9;
    pwStack_128 = L"삅萏ڐ";
    iVar4 = __vbaStrCmp();
    if (iVar4 == 0) goto LAB_0047b2c9;
    iVar4 = __vbaStrCmp();
    if (iVar4 == 0) {
      iVar4 = (**(code **)(*param_1 + 0x710))();
    }
    else {
      iVar4 = __vbaStrCmp();
      if (iVar4 == 0) {
        iVar4 = (**(code **)(*param_1 + 0x714))();
      }
      else {
        iVar4 = __vbaStrCmp();
        if (iVar4 != 0) goto code_r0x0047b5ca;
        bVar3 = *param_3;
        bVar1 = __vbaUI1I2();
        if ((bVar3 == bVar1) || (bVar1 = __vbaUI1I2(), bVar3 == bVar1)) {
          iVar4 = (**(code **)(*param_1 + 0x70c))();
        }
        else {
          bVar1 = __vbaUI1I2();
          if (bVar3 == bVar1) {
            uVar10 = (byte)*param_2 - 1;
            if (5 < uVar10) {
              __vbaGenerateBoundsError();
            }
            uVar9 = (byte)*param_2 - 1;
            if (5 < uVar9) {
              __vbaGenerateBoundsError();
            }
            *(float *)(DAT_0049106c + 8 + uVar9 * 0x2c) =
                 *(float *)(DAT_0049106c + 8 + uVar10 * 0x2c) + 2500.0;
            if ((in_FPUStatusWord & 0xd) != 0) {
              __vbaFPException();
              return;
            }
            FUN_00489260((byte *)param_2);
            if (5 < (byte)*param_2 - 1) {
              __vbaGenerateBoundsError();
            }
            __vbaStrCat();
            __vbaStrMove();
            FUN_00487700(&local_20);
            __vbaFreeStr();
            goto code_r0x0047b5ca;
          }
          bVar1 = __vbaUI1I2();
          if (bVar3 == bVar1) {
            uVar10 = (byte)*param_2 - 1;
            if (5 < uVar10) {
              __vbaGenerateBoundsError();
            }
            if (*(short *)(DAT_0049106c + 0x16 + uVar10 * 0x2c) != 0) goto code_r0x0047b5ca;
            iVar4 = (**(code **)(*param_1 + 0x704))();
          }
          else {
            bVar1 = __vbaUI1I2();
            if (bVar3 == bVar1) {
              local_74 = 0x80020004;
              local_64 = 0x80020004;
              local_54 = 0x80020004;
              local_7c[0] = 10;
              local_6c[0] = 10;
              local_5c[0] = 10;
              local_84 = L"Desea permanecer 2 turnos en descanso?";
              local_8c = 8;
              __vbaVarDup();
              pwStack_144 = (wchar_t *)0x47ae5b;
              iVar4 = Ordinal_595();
              pwStack_144 = (wchar_t *)local_7c;
              piStack_148 = local_6c;
              puStack_14c = local_5c;
              pwStack_150 = (wchar_t *)local_4c;
              pwStack_158 = L"쒃昔ﾅ萏ܽ";
              __vbaFreeVarList();
              if (iVar4 == 6) {
                uVar10 = (uint)DAT_0049107a;
                if (5 < uVar10 - 1) {
                  __vbaGenerateBoundsError();
                }
                uVar2 = __vbaUI1I2();
                *(undefined1 *)(DAT_0049106c + 0x25 + (uVar10 - 1) * 0x2c) = uVar2;
                uVar10 = (uint)DAT_0049107a;
                if (5 < uVar10 - 1) {
                  __vbaGenerateBoundsError();
                }
                *(undefined2 *)(DAT_0049106c + 0x14 + (uVar10 - 1) * 0x2c) = 0xffff;
                (**(code **)(*param_1 + 0x308))();
                pwVar5 = (wchar_t *)__vbaObjSet();
                piStack_148 = (int *)0x47af04;
                pwStack_144 = pwVar5;
                iVar4 = (**(code **)(*(int *)pwVar5 + 0x40))();
                if (iVar4 < 0) {
                  piStack_148 = (int *)0x40;
                  puStack_14c = (undefined4 *)&DAT_00470e74;
                  pwStack_158 = (wchar_t *)0x47af19;
                  pwStack_150 = pwVar5;
                  __vbaHresultCheckObj();
                }
                piVar8 = local_38;
                piStack_148 = (int *)&DAT_00470e54;
                puStack_14c = (undefined4 *)0x0;
                pwStack_150 = (wchar_t *)0x4;
                pwStack_158 = (wchar_t *)0x47af34;
                pwStack_158 = (wchar_t *)(**(code **)(*param_1 + 0x38c))();
                __vbaObjSet();
                pwStack_158 = (wchar_t *)__vbaLateIdCallLd();
                __vbaCastObjVar();
                piVar6 = (int *)__vbaObjSet();
                local_54 = 7;
                local_5c[0] = 2;
                iVar4 = (**(code **)(*piVar6 + 0x24))();
                if (iVar4 < 0) {
                  __vbaHresultCheckObj();
                }
                iVar4 = (**(code **)(*local_2c + 0x34))();
                if (iVar4 < 0) {
                  __vbaHresultCheckObj();
                }
                local_30 = 0;
                iVar4 = *piVar8;
                __vbaObjSet();
                iVar4 = (**(code **)(iVar4 + 0x5c))();
                if (iVar4 < 0) {
                  __vbaHresultCheckObj(iVar4,piVar8,&DAT_00470e84,0x5c);
                }
                __vbaFreeObjList(6,&local_24,&local_28,&local_2c,&local_34,&local_3c,&local_38);
                __vbaFreeVarList(2,local_4c,local_5c);
                uVar7 = (**(code **)(*param_1 + 0x308))(param_1);
                piVar8 = (int *)__vbaObjSet(&local_34,uVar7);
                iVar4 = (**(code **)(*piVar8 + 0x40))(piVar8,2,&local_38);
                if (iVar4 < 0) {
                  __vbaHresultCheckObj(iVar4,piVar8,&DAT_00470e74,0x40);
                }
                piVar8 = local_38;
                uVar7 = (**(code **)(*param_1 + 0x38c))(param_1,4,0,&DAT_00470e54);
                uVar7 = __vbaObjSet(&local_24,uVar7);
                uVar7 = __vbaLateIdCallLd(local_4c,uVar7);
                uVar7 = __vbaCastObjVar(uVar7);
                piVar6 = (int *)__vbaObjSet(&local_28,uVar7);
                local_54 = 7;
                local_5c[0] = 2;
                iVar4 = (**(code **)(*piVar6 + 0x24))(piVar6,local_5c,&local_2c);
                if (iVar4 < 0) {
                  __vbaHresultCheckObj(iVar4,piVar6,&DAT_00470e54,0x24);
                }
                piVar6 = local_2c;
                iVar4 = (**(code **)(*local_2c + 0x34))(local_2c,&local_30);
                if (iVar4 < 0) {
                  __vbaHresultCheckObj(iVar4,piVar6,&DAT_00470e64,0x34);
                }
                uVar7 = local_30;
                local_30 = 0;
                iVar4 = *piVar8;
                uVar7 = __vbaObjSet(&local_3c,uVar7);
                iVar4 = (**(code **)(iVar4 + 0x5c))(piVar8,uVar7);
                if (iVar4 < 0) {
                  __vbaHresultCheckObj(iVar4,piVar8,&DAT_00470e84,0x5c);
                }
                __vbaFreeObjList(6,&local_24,&local_28,&local_2c,&local_34,&local_3c,&local_38);
                __vbaFreeVarList(2,local_4c,local_5c);
                uVar10 = (byte)*param_2 - 1;
                if (5 < uVar10) {
                  __vbaGenerateBoundsError();
                }
                __vbaStrCat(L" permanece 2 turnos en descanso",
                            *(undefined4 *)(DAT_0049106c + 4 + uVar10 * 0x2c));
                __vbaStrMove();
                FUN_00487700(&local_20);
                __vbaFreeStr();
              }
              goto code_r0x0047b5ca;
            }
            bVar1 = __vbaUI1I2();
            if (bVar3 == bVar1) {
              if (5 < (byte)*param_2 - 1) {
                __vbaGenerateBoundsError();
              }
              __vbaStrCat();
              __vbaStrMove();
              FUN_00487700(&local_20);
              __vbaFreeStr();
              goto code_r0x0047b5ca;
            }
            bVar1 = __vbaUI1I2();
            if (bVar3 != bVar1) goto code_r0x0047b5ca;
            if (5 < (byte)*param_2 - 1) {
              __vbaGenerateBoundsError();
            }
            __vbaStrCat();
            __vbaStrMove();
            FUN_00487700(&local_20);
            __vbaFreeStr();
            local_c0[0] = __vbaUI1I2();
            local_84 = param_2;
            local_8c = 0x4011;
            pwStack_144 = L"຋噗釿܄";
            FUN_00488bd0(&local_8c,local_c0);
            pwStack_144 = param_2;
            piStack_148 = param_1;
            puStack_14c = (undefined4 *)0x47b297;
            iVar4 = (**(code **)(*param_1 + 0x704))();
          }
        }
      }
    }
  }
  if (iVar4 < 0) {
    __vbaHresultCheckObj();
  }
code_r0x0047b5ca:
  __vbaFreeStr();
  return;
}


