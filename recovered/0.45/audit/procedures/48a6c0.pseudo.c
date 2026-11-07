/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

undefined4 __cdecl FUN_0048a6c0(uint param_1)

{
  short sVar1;
  int *****pppppiVar2;
  int *****pppppiVar3;
  int ******ppppppiVar4;
  int ******ppppppiVar5;
  int iVar6;
  undefined4 uVar7;
  int ******ppppppiVar8;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  int *****extraout_ECX;
  int *****extraout_ECX_00;
  int *****pppppiVar9;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined2 uVar10;
  undefined2 extraout_var_06;
  undefined2 extraout_var_07;
  undefined2 extraout_var_08;
  undefined2 extraout_var_09;
  int *piVar11;
  int ******ppppppiVar12;
  int *piVar13;
  int *****unaff_EDI;
  int *****pppppiVar14;
  ushort uVar15;
  int *****pppppiStack_148;
  int *****pppppiStack_144;
  int *****pppppiStack_140;
  int *****pppppiStack_13c;
  int *****pppppiStack_138;
  int *****pppppiStack_134;
  int *****pppppiStack_130;
  int *****pppppiStack_12c;
  int *****pppppiStack_128;
  int *piStack_124;
  int *****pppppiStack_120;
  int *****pppppiStack_11c;
  int ****local_c0;
  int *****local_bc [13];
  undefined4 local_88;
  wchar_t *local_80;
  int ***local_78 [2];
  undefined4 local_70;
  undefined4 local_68 [2];
  undefined4 local_60;
  undefined4 local_58 [2];
  undefined4 local_50;
  undefined4 local_48 [4];
  int *****local_38;
  int ****local_34;
  int *****local_30;
  int ****local_2c;
  int *****local_28;
  int ****local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401656;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xfffffee8;
  local_c = &DAT_00401518;
  local_8 = param_1 & 1;
  ppppppiVar12 = (int ******)(param_1 & 0xfffffffe);
  pppppiStack_120 = (int *****)0x48a703;
  ExceptionList = &pvStack_18;
  pppppiStack_11c = (int *****)ppppppiVar12;
  (*(code *)(*ppppppiVar12)[1])();
  sVar1 = *(short *)(ppppppiVar12 + 0xd);
  piVar11 = (int *)0x0;
  local_1c = 0;
  local_20 = 0;
  local_24 = (int ****)0x0;
  local_28 = (int *****)0x0;
  local_2c = (int ****)0x0;
  local_30 = (int *****)0x0;
  local_34 = (int ****)0x0;
  local_38 = (int *****)0x0;
  local_48[0] = 0;
  local_58[0] = 0;
  local_68[0] = 0;
  local_78[0] = (int ***)0x0;
  local_88 = 0;
  local_bc[0] = (int *****)0x0;
  local_c0 = (int ****)0x0;
  if (5 < sVar1) {
    local_70 = 0x80020004;
    local_60 = 0x80020004;
    local_50 = 0x80020004;
    local_78[0] = (int ***)0xa;
    local_68[0] = 10;
    local_58[0] = 10;
    local_80 = L"Maximo 6 jugadores";
    local_88 = 8;
    pppppiStack_120 = (int *****)0x48af84;
    __vbaVarDup();
    pppppiStack_120 = (int *****)local_78;
    piStack_124 = local_68;
    pppppiStack_128 = (int *****)local_58;
    pppppiStack_130 = (int *****)local_48;
    pppppiStack_12c = (int *****)0x0;
    pppppiStack_134 = (int *****)0x48af9b;
    Ordinal_595();
    pppppiStack_134 = (int *****)local_78;
    pppppiStack_138 = (int *****)local_68;
    pppppiStack_13c = (int *****)local_58;
    pppppiStack_140 = (int *****)local_48;
    pppppiStack_144 = (int *****)0x4;
    pppppiStack_148 = (int *****)0x48afb3;
    uVar7 = __vbaFreeVarList();
    return uVar7;
  }
  pppppiVar14 = unaff_EDI;
  if (!SCARRY2(sVar1,1)) {
    *(short *)(ppppppiVar12 + 0xd) = sVar1 + 1;
    if (DAT_00491714 == (int ******)0x0) {
      pppppiStack_120 = (int *****)&DAT_00491714;
      piStack_124 = (int *)&LAB_00470d04;
      pppppiStack_128 = (int *****)0x48a770;
      __vbaNew2();
    }
    ppppppiVar8 = DAT_00491714;
    piStack_124 = (int *)0x48a785;
    pppppiStack_120 = (int *****)ppppppiVar12;
    piStack_124 = (int *)(*(code *)(*ppppppiVar12)[0xc1])();
    pppppiStack_128 = &local_24;
    pppppiStack_12c = (int *****)0x48a790;
    ppppppiVar4 = (int ******)__vbaObjSet();
    pppppiStack_130 = (int *****)CONCAT22(extraout_var,*(undefined2 *)(ppppppiVar12 + 0xd));
    pppppiStack_12c = (int *****)&local_28;
    pppppiStack_138 = (int *****)0x48a7a1;
    pppppiStack_134 = (int *****)ppppppiVar4;
    ppppppiVar5 = (int ******)(*(code *)(*ppppppiVar4)[0x10])();
    pppppiVar14 = (int *****)__vbaHresultCheckObj_exref;
    if ((int)ppppppiVar5 < 0) {
      pppppiStack_138 = (int *****)0x40;
      pppppiStack_13c = (int *****)&DAT_00470e74;
      pppppiStack_148 = (int *****)0x48a7b8;
      pppppiStack_144 = (int *****)ppppppiVar5;
      pppppiStack_140 = (int *****)ppppppiVar4;
      __vbaHresultCheckObj();
    }
    pppppiStack_138 = local_28;
    pppppiStack_13c = &local_2c;
    local_28 = (int *****)0x0;
    pppppiVar2 = *ppppppiVar8;
    pppppiStack_140 = (int *****)0x48a7d9;
    pppppiStack_140 = (int *****)__vbaObjSet();
    pppppiStack_144 = (int *****)ppppppiVar8;
    pppppiStack_148 = (int *****)0x48a7e6;
    iVar6 = (*(code *)pppppiVar2[3])();
    if (iVar6 < 0) {
      pppppiStack_148 = (int *****)0xc;
      __vbaHresultCheckObj(iVar6,ppppppiVar8,&DAT_00470cf4);
    }
    pppppiStack_148 = &local_2c;
    __vbaFreeObjList(2,&local_24);
    pppppiStack_148 = (int *****)ppppppiVar12;
    uVar7 = (*(code *)(*ppppppiVar12)[0xc1])();
    piVar11 = (int *)__vbaObjSet(&local_2c,uVar7);
    pppppiStack_11c = (int *****)&local_30;
    pppppiStack_120 = (int *****)CONCAT22(extraout_var_08,*(short *)(ppppppiVar12 + 0xd) + -1);
    if (!SBORROW2(*(short *)(ppppppiVar12 + 0xd),1)) {
      pppppiStack_128 = (int *****)0x48a839;
      piStack_124 = piVar11;
      ppppppiVar8 = (int ******)(**(code **)(*piVar11 + 0x40))();
      if ((int)ppppppiVar8 < 0) {
        pppppiStack_128 = (int *****)0x40;
        pppppiStack_12c = (int *****)&DAT_00470e74;
        pppppiStack_138 = (int *****)0x48a84a;
        pppppiStack_134 = (int *****)ppppppiVar8;
        pppppiStack_130 = (int *****)piVar11;
        __vbaHresultCheckObj();
      }
      pppppiVar2 = local_30;
      pppppiStack_128 = &local_c0;
      pppppiStack_12c = local_30;
      pppppiStack_130 = (int *****)0x48a85f;
      ppppppiVar8 = (int ******)(*(code *)(*local_30)[0x22])();
      if ((int)ppppppiVar8 < 0) {
        pppppiStack_130 = (int *****)0x88;
        pppppiStack_134 = (int *****)&DAT_00471330;
        pppppiStack_138 = pppppiVar2;
        pppppiStack_140 = (int *****)0x48a873;
        pppppiStack_13c = (int *****)ppppppiVar8;
        __vbaHresultCheckObj();
      }
      pppppiStack_134 = (int *****)0x48a87c;
      pppppiStack_130 = (int *****)ppppppiVar12;
      pppppiStack_134 = (int *****)(*(code *)(*ppppppiVar12)[0xc1])();
      pppppiStack_138 = &local_34;
      pppppiStack_13c = (int *****)0x48a887;
      ppppppiVar8 = (int ******)__vbaObjSet();
      pppppiStack_140 = (int *****)CONCAT22(extraout_var_00,*(undefined2 *)(ppppppiVar12 + 0xd));
      pppppiStack_13c = (int *****)&local_38;
      pppppiStack_148 = (int *****)0x48a898;
      pppppiStack_144 = (int *****)ppppppiVar8;
      iVar6 = (*(code *)(*ppppppiVar8)[0x10])();
      if (iVar6 < 0) {
        pppppiStack_148 = (int *****)0x40;
        __vbaHresultCheckObj(iVar6,ppppppiVar8,&DAT_00470e74);
      }
      pppppiVar2 = local_38;
      pppppiStack_148 = (int *****)ppppppiVar12;
      uVar7 = (*(code *)(*ppppppiVar12)[0xc1])();
      piVar11 = (int *)__vbaObjSet(&local_24,uVar7);
      pppppiStack_11c = (int *****)&local_28;
      pppppiStack_120 = (int *****)CONCAT22(extraout_var_01,*(short *)(ppppppiVar12 + 0xd) + -1);
      if (!SBORROW2(*(short *)(ppppppiVar12 + 0xd),1)) {
        pppppiStack_128 = (int *****)0x48a8e1;
        piStack_124 = piVar11;
        ppppppiVar8 = (int ******)(**(code **)(*piVar11 + 0x40))();
        if ((int)ppppppiVar8 < 0) {
          pppppiStack_128 = (int *****)0x40;
          pppppiStack_12c = (int *****)&DAT_00470e74;
          pppppiStack_138 = (int *****)0x48a8f2;
          pppppiStack_134 = (int *****)ppppppiVar8;
          pppppiStack_130 = (int *****)piVar11;
          __vbaHresultCheckObj();
        }
        pppppiVar3 = local_28;
        pppppiStack_128 = (int *****)local_bc;
        pppppiStack_12c = local_28;
        pppppiStack_130 = (int *****)0x48a904;
        ppppppiVar8 = (int ******)(*(code *)(*local_28)[0x1e])();
        uVar15 = 0;
        pppppiVar9 = extraout_ECX;
        if ((int)ppppppiVar8 < 0) {
          pppppiStack_130 = (int *****)0x78;
          pppppiStack_134 = (int *****)&DAT_00471330;
          pppppiStack_138 = pppppiVar3;
          pppppiStack_140 = (int *****)0x48a915;
          pppppiStack_13c = (int *****)ppppppiVar8;
          __vbaHresultCheckObj();
          pppppiVar9 = extraout_ECX_00;
        }
        pppppiStack_130 = (int *****)((float)local_c0 + (float)local_bc[0] + 105.0);
        if ((uVar15 & 0xd) != 0) {
LAB_0048b02d:
          pppppiStack_130 = pppppiVar9;
          uVar7 = __vbaFPException();
          return uVar7;
        }
        pppppiStack_134 = pppppiVar2;
        pppppiStack_138 = (int *****)0x48a941;
        pppppiStack_144 = (int *****)(*(code *)(*pppppiVar2)[0x1f])();
        if ((int)pppppiStack_144 < 0) {
          pppppiStack_138 = (int *****)0x7c;
          pppppiStack_13c = (int *****)&DAT_00471330;
          pppppiStack_140 = pppppiVar2;
          pppppiStack_148 = (int *****)0x48a952;
          __vbaHresultCheckObj();
        }
        pppppiStack_138 = (int *****)&local_38;
        pppppiStack_13c = &local_34;
        pppppiStack_140 = (int *****)&local_30;
        pppppiStack_144 = &local_2c;
        pppppiStack_148 = (int *****)&local_28;
        __vbaFreeObjList(6,&local_24);
        pppppiStack_13c = (int *****)0x48a97e;
        pppppiStack_138 = (int *****)ppppppiVar12;
        pppppiStack_13c = (int *****)(*(code *)(*ppppppiVar12)[0xc1])();
        pppppiStack_140 = &local_2c;
        pppppiStack_144 = (int *****)0x48a989;
        piVar11 = (int *)__vbaObjSet();
        pppppiStack_148 = (int *****)CONCAT22(extraout_var_02,*(undefined2 *)(ppppppiVar12 + 0xd));
        pppppiStack_144 = (int *****)&local_30;
        iVar6 = (**(code **)(*piVar11 + 0x40))(piVar11);
        if (iVar6 < 0) {
          __vbaHresultCheckObj(iVar6,piVar11,&DAT_00470e74,0x40);
        }
        pppppiVar2 = local_30;
        uVar7 = (*(code *)(*ppppppiVar12)[0xc1])(ppppppiVar12);
        piVar11 = (int *)__vbaObjSet(&local_24,uVar7);
        pppppiStack_11c = (int *****)&local_28;
        pppppiStack_120 = (int *****)CONCAT22(extraout_var_03,*(short *)(ppppppiVar12 + 0xd) + -1);
        if (!SBORROW2(*(short *)(ppppppiVar12 + 0xd),1)) {
          pppppiStack_128 = (int *****)0x48a9e3;
          piStack_124 = piVar11;
          ppppppiVar8 = (int ******)(**(code **)(*piVar11 + 0x40))();
          if ((int)ppppppiVar8 < 0) {
            pppppiStack_128 = (int *****)0x40;
            pppppiStack_12c = (int *****)&DAT_00470e74;
            pppppiStack_138 = (int *****)0x48a9f4;
            pppppiStack_134 = (int *****)ppppppiVar8;
            pppppiStack_130 = (int *****)piVar11;
            __vbaHresultCheckObj();
          }
          pppppiVar3 = local_28;
          pppppiStack_128 = (int *****)local_bc;
          pppppiStack_12c = local_28;
          pppppiStack_130 = (int *****)0x48aa06;
          ppppppiVar8 = (int ******)(*(code *)(*local_28)[0x1c])();
          if ((int)ppppppiVar8 < 0) {
            pppppiStack_130 = (int *****)0x70;
            pppppiStack_134 = (int *****)&DAT_00471330;
            pppppiStack_138 = pppppiVar3;
            pppppiStack_140 = (int *****)0x48aa17;
            pppppiStack_13c = (int *****)ppppppiVar8;
            __vbaHresultCheckObj();
          }
          pppppiStack_130 = local_bc[0];
          pppppiStack_134 = pppppiVar2;
          pppppiStack_138 = (int *****)0x48aa2a;
          pppppiStack_144 = (int *****)(*(code *)(*pppppiVar2)[0x1d])();
          if ((int)pppppiStack_144 < 0) {
            pppppiStack_138 = (int *****)0x74;
            pppppiStack_13c = (int *****)&DAT_00471330;
            pppppiStack_140 = pppppiVar2;
            pppppiStack_148 = (int *****)0x48aa3b;
            __vbaHresultCheckObj();
          }
          pppppiStack_138 = (int *****)&local_30;
          pppppiStack_13c = &local_2c;
          pppppiStack_140 = (int *****)&local_28;
          pppppiStack_144 = &local_24;
          pppppiStack_148 = (int *****)0x4;
          __vbaFreeObjList();
          pppppiStack_13c = (int *****)0x48aa5f;
          pppppiStack_138 = (int *****)ppppppiVar12;
          pppppiStack_13c = (int *****)(*(code *)(*ppppppiVar12)[0xc1])();
          pppppiStack_140 = &local_24;
          pppppiStack_144 = (int *****)0x48aa6a;
          piVar11 = (int *)__vbaObjSet();
          pppppiStack_148 =
               (int *****)
               CONCAT22((short)((uint)piVar11 >> 0x10),*(undefined2 *)(ppppppiVar12 + 0xd));
          pppppiStack_144 = (int *****)&local_28;
          iVar6 = (**(code **)(*piVar11 + 0x40))(piVar11);
          uVar10 = extraout_var_04;
          if (iVar6 < 0) {
            __vbaHresultCheckObj(iVar6,piVar11,&DAT_00470e74,0x40);
            uVar10 = extraout_var_05;
          }
          pppppiVar3 = local_28;
          pppppiVar2 = (int *****)*local_28;
          __vbaStrI2(CONCAT22(uVar10,*(undefined2 *)(ppppppiVar12 + 0xd)),L"Jugador ");
          uVar7 = __vbaStrMove();
          __vbaStrCat(uVar7);
          uVar7 = __vbaStrMove();
          iVar6 = (*(code *)pppppiVar2[0x15])(pppppiVar3,uVar7);
          if (iVar6 < 0) {
            __vbaHresultCheckObj(iVar6,pppppiVar3,&DAT_00471330,0x54);
          }
          __vbaFreeStrList(2,&local_1c,&local_20);
          __vbaFreeObjList(2,&local_24,&local_28);
          uVar7 = (*(code *)(*ppppppiVar12)[0xc1])(ppppppiVar12);
          piVar11 = (int *)__vbaObjSet(&local_24,uVar7);
          iVar6 = (**(code **)(*piVar11 + 0x40))
                            (piVar11,CONCAT22(extraout_var_09,*(undefined2 *)(ppppppiVar12 + 0xd)),
                             &local_28);
          if (iVar6 < 0) {
            __vbaHresultCheckObj(iVar6,piVar11,&DAT_00470e74,0x40);
          }
          pppppiVar2 = local_28;
          iVar6 = (*(code *)(*local_28)[0x27])(local_28,0xffffffff);
          if (iVar6 < 0) {
            __vbaHresultCheckObj(iVar6,pppppiVar2,&DAT_00471330,0x9c);
          }
          __vbaFreeObjList(2,&local_24,&local_28);
          if (DAT_00491714 == (int ******)0x0) {
            __vbaNew2(&LAB_00470d04,&DAT_00491714);
          }
          ppppppiVar8 = DAT_00491714;
          uVar7 = (*(code *)(*ppppppiVar12)[0xbf])(ppppppiVar12);
          piVar11 = (int *)__vbaObjSet(&local_24,uVar7);
          iVar6 = (**(code **)(*piVar11 + 0x40))
                            (piVar11,*(undefined2 *)(ppppppiVar12 + 0xd),&local_28);
          if (iVar6 < 0) {
            __vbaHresultCheckObj(iVar6,piVar11,&DAT_00470e74,0x40);
          }
          pppppiVar3 = local_28;
          local_28 = (int *****)0x0;
          pppppiVar2 = *ppppppiVar8;
          uVar7 = __vbaObjSet(&local_2c,pppppiVar3);
          iVar6 = (*(code *)pppppiVar2[3])(ppppppiVar8,uVar7);
          if (iVar6 < 0) {
            __vbaHresultCheckObj(iVar6,ppppppiVar8,&DAT_00470cf4,0xc);
          }
          __vbaFreeObjList(2,&local_24,&local_2c);
          uVar7 = (*(code *)(*ppppppiVar12)[0xbf])(ppppppiVar12);
          piVar11 = (int *)__vbaObjSet(&local_2c,uVar7);
          pppppiStack_11c = (int *****)&local_30;
          pppppiStack_120 = (int *****)CONCAT22(extraout_var_06,*(short *)(ppppppiVar12 + 0xd) + -1)
          ;
          if (!SBORROW2(*(short *)(ppppppiVar12 + 0xd),1)) {
            pppppiStack_128 = (int *****)0x48ac54;
            piStack_124 = piVar11;
            ppppppiVar8 = (int ******)(**(code **)(*piVar11 + 0x40))();
            if ((int)ppppppiVar8 < 0) {
              pppppiStack_128 = (int *****)0x40;
              pppppiStack_12c = (int *****)&DAT_00470e74;
              pppppiStack_138 = (int *****)0x48ac65;
              pppppiStack_134 = (int *****)ppppppiVar8;
              pppppiStack_130 = (int *****)piVar11;
              __vbaHresultCheckObj();
            }
            pppppiVar2 = local_30;
            pppppiStack_128 = &local_c0;
            pppppiStack_12c = local_30;
            pppppiStack_130 = (int *****)0x48ac7a;
            ppppppiVar8 = (int ******)(*(code *)(*local_30)[0x20])();
            if ((int)ppppppiVar8 < 0) {
              pppppiStack_130 = (int *****)0x80;
              pppppiStack_134 = (int *****)&DAT_00472250;
              pppppiStack_138 = pppppiVar2;
              pppppiStack_140 = (int *****)0x48ac8e;
              pppppiStack_13c = (int *****)ppppppiVar8;
              __vbaHresultCheckObj();
            }
            pppppiStack_134 = (int *****)0x48ac97;
            pppppiStack_130 = (int *****)ppppppiVar12;
            pppppiStack_134 = (int *****)(*(code *)(*ppppppiVar12)[0xbf])();
            pppppiStack_138 = &local_34;
            pppppiStack_13c = (int *****)0x48aca2;
            ppppppiVar8 = (int ******)__vbaObjSet();
            pppppiStack_140 =
                 (int *****)
                 CONCAT22((short)((uint)ppppppiVar8 >> 0x10),*(undefined2 *)(ppppppiVar12 + 0xd));
            pppppiStack_13c = (int *****)&local_38;
            pppppiStack_148 = (int *****)0x48acb3;
            pppppiStack_144 = (int *****)ppppppiVar8;
            iVar6 = (*(code *)(*ppppppiVar8)[0x10])();
            if (iVar6 < 0) {
              pppppiStack_148 = (int *****)0x40;
              __vbaHresultCheckObj(iVar6,ppppppiVar8,&DAT_00470e74);
            }
            pppppiVar2 = local_38;
            pppppiStack_148 = (int *****)ppppppiVar12;
            uVar7 = (*(code *)(*ppppppiVar12)[0xbf])();
            piVar11 = (int *)__vbaObjSet(&local_24,uVar7);
            pppppiStack_11c = (int *****)&local_28;
            pppppiStack_120 =
                 (int *****)
                 CONCAT22((short)((uint)piVar11 >> 0x10),*(short *)(ppppppiVar12 + 0xd) + -1);
            if (!SBORROW2(*(short *)(ppppppiVar12 + 0xd),1)) {
              pppppiStack_128 = (int *****)0x48acfc;
              piStack_124 = piVar11;
              ppppppiVar8 = (int ******)(**(code **)(*piVar11 + 0x40))();
              if ((int)ppppppiVar8 < 0) {
                pppppiStack_128 = (int *****)0x40;
                pppppiStack_12c = (int *****)&DAT_00470e74;
                pppppiStack_138 = (int *****)0x48ad0d;
                pppppiStack_134 = (int *****)ppppppiVar8;
                pppppiStack_130 = (int *****)piVar11;
                __vbaHresultCheckObj();
              }
              pppppiVar14 = local_28;
              pppppiStack_128 = (int *****)local_bc;
              pppppiStack_12c = local_28;
              pppppiStack_130 = (int *****)0x48ad1f;
              ppppppiVar8 = (int ******)(*(code *)(*local_28)[0x1c])();
              uVar15 = 0;
              if ((int)ppppppiVar8 < 0) {
                pppppiStack_130 = (int *****)0x70;
                pppppiStack_134 = (int *****)&DAT_00472250;
                pppppiStack_138 = pppppiVar14;
                pppppiStack_140 = (int *****)0x48ad30;
                pppppiStack_13c = (int *****)ppppppiVar8;
                __vbaHresultCheckObj();
              }
              pppppiStack_130 = (int *****)((float)local_c0 + (float)local_bc[0] + 75.0);
              pppppiVar9 = (int *****)*pppppiVar2;
              if ((uVar15 & 0xd) == 0) {
                pppppiStack_134 = pppppiVar2;
                pppppiStack_138 = (int *****)0x48ad5c;
                pppppiStack_144 = (int *****)(*(code *)(*pppppiVar2)[0x1d])();
                if ((int)pppppiStack_144 < 0) {
                  pppppiStack_138 = (int *****)0x74;
                  pppppiStack_13c = (int *****)&DAT_00472250;
                  pppppiStack_140 = pppppiVar2;
                  pppppiStack_148 = (int *****)0x48ad6d;
                  __vbaHresultCheckObj();
                }
                pppppiStack_138 = (int *****)&local_38;
                pppppiStack_13c = &local_34;
                pppppiStack_140 = (int *****)&local_30;
                pppppiStack_144 = &local_2c;
                pppppiStack_148 = (int *****)&local_28;
                __vbaFreeObjList(6,&local_24);
                pppppiStack_13c = (int *****)0x48ad99;
                pppppiStack_138 = (int *****)ppppppiVar12;
                pppppiStack_13c = (int *****)(*(code *)(*ppppppiVar12)[0xbf])();
                pppppiStack_140 = &local_2c;
                pppppiStack_144 = (int *****)0x48ada4;
                piVar11 = (int *)__vbaObjSet();
                pppppiStack_148 =
                     (int *****)
                     CONCAT22((short)((uint)piVar11 >> 0x10),*(undefined2 *)(ppppppiVar12 + 0xd));
                pppppiStack_144 = (int *****)&local_30;
                iVar6 = (**(code **)(*piVar11 + 0x40))(piVar11);
                if (iVar6 < 0) {
                  __vbaHresultCheckObj(iVar6,piVar11,&DAT_00470e74,0x40);
                }
                pppppiVar14 = local_30;
                uVar7 = (*(code *)(*ppppppiVar12)[0xbf])(ppppppiVar12);
                piVar11 = (int *)__vbaObjSet(&local_24,uVar7);
                iVar6 = (**(code **)(*piVar11 + 0x40))
                                  (piVar11,*(undefined2 *)(ppppppiVar12 + 0xd),&local_28);
                if (iVar6 < 0) {
                  __vbaHresultCheckObj(iVar6,piVar11,&DAT_00470e74,0x40);
                }
                pppppiVar2 = local_28;
                iVar6 = (*(code *)(*local_28)[0x1a])(local_28,local_bc);
                if (iVar6 < 0) {
                  __vbaHresultCheckObj(iVar6,pppppiVar2,&DAT_00472250,0x68);
                }
                iVar6 = (*(code *)(*pppppiVar14)[0x1b])(pppppiVar14,local_bc[0]);
                if (iVar6 < 0) {
                  __vbaHresultCheckObj(iVar6,pppppiVar14,&DAT_00472250,0x6c);
                }
                __vbaFreeObjList(4,&local_24,&local_28,&local_2c,&local_30);
                uVar7 = (*(code *)(*ppppppiVar12)[0xbf])(ppppppiVar12);
                piVar11 = (int *)__vbaObjSet(&local_24,uVar7);
                iVar6 = (**(code **)(*piVar11 + 0x40))
                                  (piVar11,CONCAT22(extraout_var_07,
                                                    *(undefined2 *)(ppppppiVar12 + 0xd)),&local_28);
                if (iVar6 < 0) {
                  __vbaHresultCheckObj(iVar6,piVar11,&DAT_00470e74,0x40);
                }
                pppppiVar14 = local_28;
                iVar6 = (*(code *)(*local_28)[0x25])(local_28,0xffffffff);
                if (iVar6 < 0) {
                  __vbaHresultCheckObj(iVar6,pppppiVar14,&DAT_00472250,0x94);
                }
                __vbaFreeObjList(2,&local_24,&local_28);
                uVar7 = (*(code *)(*ppppppiVar12)[0xbf])(ppppppiVar12);
                piVar11 = (int *)__vbaObjSet(&local_24,uVar7);
                iVar6 = (**(code **)(*piVar11 + 0x40))
                                  (piVar11,*(undefined2 *)(ppppppiVar12 + 0xd),&local_28);
                if (iVar6 < 0) {
                  __vbaHresultCheckObj(iVar6,piVar11,&DAT_00470e74,0x40);
                }
                pppppiVar14 = local_28;
                iVar6 = (*(code *)(*local_28)[0x29])(local_28,&DAT_00471b58);
                if (iVar6 < 0) {
                  __vbaHresultCheckObj(iVar6,pppppiVar14,&DAT_00472250,0xa4);
                }
                uVar7 = __vbaFreeObjList(2,&local_24,&local_28);
                return uVar7;
              }
              goto LAB_0048b02d;
            }
          }
        }
      }
    }
  }
  pppppiStack_120 = (int *****)0x48b038;
  __vbaErrorOverflow();
  pppppiStack_130 = (int *****)&LAB_00401656;
  pppppiStack_134 = ExceptionList;
  pppppiStack_12c = (int *****)&pppppiStack_148;
  pppppiStack_128 = (int *****)&DAT_00401528;
  piStack_124 = (int *)((uint)unaff_EDI & 1);
  piVar13 = (int *)((uint)unaff_EDI & 0xfffffffe);
  ExceptionList = &pppppiStack_134;
  pppppiStack_148 = pppppiVar14;
  pppppiStack_144 = (int *****)ppppppiVar12;
  pppppiStack_140 = (int *****)piVar11;
  pppppiStack_120 = (int *****)&stack0xfffffffc;
  (**(code **)(*piVar13 + 4))(piVar13);
  *(undefined2 *)(piVar13 + 0xd) = 2;
  piStack_124 = (int *)0x0;
  (**(code **)(*piVar13 + 8))(piVar13);
  ExceptionList = pppppiStack_134;
  return piStack_124;
}


