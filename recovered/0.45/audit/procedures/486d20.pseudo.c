/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

/* WARNING: Removing unreachable block (ram,0x004878ad) */
/* WARNING: Removing unreachable block (ram,0x004878dc) */
/* WARNING: Removing unreachable block (ram,0x004878de) */
/* WARNING: Removing unreachable block (ram,0x004878f1) */
/* WARNING: Removing unreachable block (ram,0x004878fd) */
/* WARNING: Removing unreachable block (ram,0x004878ff) */
/* WARNING: Removing unreachable block (ram,0x0048791c) */
/* WARNING: Removing unreachable block (ram,0x00487926) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint __cdecl FUN_00486d20(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  code cVar4;
  uint *puVar5;
  undefined1 *puVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int *piVar13;
  int *piVar14;
  ushort uVar15;
  code *pcVar16;
  code *unaff_ESI;
  undefined4 *puVar17;
  uint uVar18;
  byte *unaff_EDI;
  uint uVar19;
  uint uStack_158;
  uint uStack_154;
  undefined4 uStack_130;
  undefined4 uStack_128;
  undefined4 *puStack_124;
  undefined4 *puStack_120;
  undefined4 *puStack_11c;
  short **ppsStack_118;
  undefined4 *puStack_114;
  undefined4 *puStack_110;
  code *pcStack_10c;
  short **ppsStack_108;
  undefined4 *puStack_104;
  undefined4 *puStack_100;
  byte *pbStack_fc;
  undefined4 *puStack_f8;
  int local_e8;
  undefined4 local_d4 [4];
  undefined4 local_c4 [4];
  undefined4 local_b4 [4];
  undefined4 local_a4 [7];
  undefined4 local_88 [2];
  undefined4 local_80;
  undefined4 local_78 [2];
  undefined1 local_70;
  undefined4 local_68 [2];
  undefined4 local_60;
  undefined4 local_58 [4];
  short *local_48;
  undefined4 local_44 [4];
  undefined4 local_34 [4];
  undefined4 local_24 [4];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &LAB_00401656;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff0c;
  local_8 = &DAT_00401410;
  bVar1 = *param_1;
  local_24[0] = 0;
  local_34[0] = 0;
  local_44[0] = 0;
  local_48 = (short *)0x0;
  local_58[0] = 0;
  local_68[0] = 0;
  local_78[0] = 0;
  local_88[0] = 0;
  local_a4[0] = 0;
  local_b4[0] = 0;
  local_c4[0] = 0;
  local_d4[0] = 0;
  ExceptionList = &pvStack_14;
  puVar6 = &stack0xffffff0c;
  if (5 < bVar1 - 1) {
    puStack_f8 = (undefined4 *)0x486d96;
    ExceptionList = &pvStack_14;
    __vbaGenerateBoundsError();
    puVar6 = local_c;
  }
  local_c = puVar6;
  if (*(byte *)(DAT_0049106c + 0x12 + (bVar1 - 1) * 0x2c) < 2) {
    bVar1 = *param_1;
    if (5 < bVar1 - 1) {
      puStack_f8 = (undefined4 *)0x48733d;
      __vbaGenerateBoundsError();
    }
    puStack_f8 = (undefined4 *)0x487345;
    uVar7 = __vbaUI1I2();
    *(undefined1 *)(DAT_0049106c + 0x12 + (bVar1 - 1) * 0x2c) = uVar7;
    bVar1 = *param_1;
    if (5 < bVar1 - 1) {
      puStack_f8 = (undefined4 *)0x487367;
      __vbaGenerateBoundsError();
    }
    puStack_f8 = (undefined4 *)0x0;
    pbStack_fc = (byte *)0x0;
    puStack_100 = (undefined4 *)0x1;
    puStack_104 = (undefined4 *)0x2;
    ppsStack_108 = (short **)(DAT_0049106c + 0xc + (bVar1 - 1) * 0x2c);
    pcStack_10c = (code *)0x2;
    puStack_110 = (undefined4 *)0x80;
    puStack_114 = (undefined4 *)0x48738b;
    __vbaRedim();
LAB_0048738e:
    puStack_114 = (undefined4 *)&LAB_004873e8;
    ppsStack_118 = (short **)local_d4;
    puStack_11c = local_c4;
    puStack_120 = local_b4;
    puStack_124 = local_a4;
    __vbaFreeVarList();
    ppsStack_118 = (short **)0x4873d1;
    __vbaFreeVar();
    ppsStack_118 = (short **)0x4873d6;
    __vbaFreeVar();
    ppsStack_118 = (short **)0x4873db;
    __vbaFreeVar();
    ppsStack_118 = &local_48;
    puStack_11c = (undefined4 *)0x0;
    puStack_120 = (undefined4 *)0x4873e7;
    uVar19 = __vbaAryDestruct();
    return uVar19;
  }
  puVar17 = (undefined4 *)(*param_1 - 1);
  if ((undefined4 *)0x5 < puVar17) {
    puStack_f8 = (undefined4 *)0x486dbe;
    __vbaGenerateBoundsError();
  }
  puStack_f8 = (undefined4 *)0x0;
  uVar19 = 2;
  uVar15 = (ushort)*(byte *)(DAT_0049106c + 0x12 + (int)puVar17 * 0x2c);
  if (!SBORROW2(uVar15,1)) {
    pbStack_fc = (byte *)(int)(short)(uVar15 - 1);
    puStack_100 = (undefined4 *)0x1;
    puStack_104 = (undefined4 *)0x2;
    pcStack_10c = (code *)0x2;
    puStack_110 = (undefined4 *)0x80;
    puStack_114 = (undefined4 *)0x486df8;
    ppsStack_108 = &local_48;
    __vbaRedim();
    bVar1 = *param_1;
    local_60 = 1;
    local_68[0] = 2;
    if (5 < bVar1 - 1) {
      puStack_f8 = (undefined4 *)0x486e17;
      __vbaGenerateBoundsError();
    }
    local_70 = *(undefined1 *)(DAT_0049106c + 0x12 + (bVar1 - 1) * 0x2c);
    puStack_f8 = local_68;
    pbStack_fc = (byte *)local_78;
    puStack_100 = local_88;
    puStack_104 = local_b4;
    ppsStack_108 = (short **)local_a4;
    pcStack_10c = (code *)local_34;
    local_78[0] = 0x11;
    local_80 = 1;
    local_88[0] = 2;
    puStack_110 = (undefined4 *)0x486e65;
    iVar8 = __vbaVarForInit();
    while (iVar8 != 0) {
      if (5 < *param_1 - 1) {
        pbStack_fc = (byte *)0x486e7f;
        __vbaGenerateBoundsError();
      }
      bVar1 = *param_1;
      if (5 < bVar1 - 1) {
        pbStack_fc = (byte *)0x486e8d;
        __vbaGenerateBoundsError();
      }
      iVar8 = (bVar1 - 1) * 0x2c;
      if (*(int *)(iVar8 + 0xc + DAT_0049106c) == 0) {
LAB_00486f33:
        pbStack_fc = (byte *)0x486f35;
        iVar9 = __vbaGenerateBoundsError();
      }
      else {
        bVar1 = *param_1;
        if (5 < bVar1 - 1) {
          pbStack_fc = (byte *)0x486eb6;
          __vbaGenerateBoundsError();
        }
        iVar8 = (bVar1 - 1) * 0x2c;
        if (**(short **)(iVar8 + 0xc + DAT_0049106c) != 1) goto LAB_00486f33;
        bVar1 = *param_1;
        if (5 < bVar1 - 1) {
          pbStack_fc = (byte *)0x486edd;
          __vbaGenerateBoundsError();
        }
        pbStack_fc = (byte *)local_34;
        puStack_100 = (undefined4 *)0x486ee7;
        iVar8 = __vbaI4Var();
        bVar2 = *param_1;
        uVar19 = iVar8 - *(int *)(*(int *)(DAT_0049106c + 0xc + (bVar1 - 1) * 0x2c) + 0x14);
        if (5 < bVar2 - 1) {
          puStack_100 = (undefined4 *)0x486f10;
          __vbaGenerateBoundsError();
        }
        iVar8 = (bVar2 - 1) * 0x2c;
        if (*(uint *)(*(int *)(iVar8 + 0xc + DAT_0049106c) + 0x10) <= uVar19) {
          puStack_100 = (undefined4 *)0x486f2e;
          __vbaGenerateBoundsError();
        }
        iVar9 = uVar19 * 2;
      }
      if (*(ushort *)(*(int *)(*(int *)(iVar8 + 0xc + DAT_0049106c) + 0xc) + iVar9) !=
          (ushort)*param_2) {
        puStack_100 = local_24;
        puStack_104 = local_68;
        ppsStack_108 = (short **)local_58;
        local_60 = 1;
        local_68[0] = 2;
        pcStack_10c = (code *)0x486f73;
        __vbaVarAdd();
        pcStack_10c = (code *)0x486f7e;
        __vbaVarMove();
        if (5 < *param_1 - 1) {
          pcStack_10c = (code *)0x486f90;
          __vbaGenerateBoundsError();
        }
        bVar1 = *param_1;
        if (5 < bVar1 - 1) {
          pcStack_10c = (code *)0x486f9e;
          __vbaGenerateBoundsError();
        }
        iVar8 = (bVar1 - 1) * 0x2c;
        if (*(int *)(iVar8 + 0xc + DAT_0049106c) == 0) {
LAB_00487041:
          pcStack_10c = (code *)0x487043;
          iVar9 = __vbaGenerateBoundsError();
        }
        else {
          bVar1 = *param_1;
          if (5 < bVar1 - 1) {
            pcStack_10c = (code *)0x486fc6;
            __vbaGenerateBoundsError();
          }
          iVar8 = (bVar1 - 1) * 0x2c;
          if (**(short **)(iVar8 + 0xc + DAT_0049106c) != 1) goto LAB_00487041;
          bVar1 = *param_1;
          if (5 < bVar1 - 1) {
            pcStack_10c = (code *)0x486fec;
            __vbaGenerateBoundsError();
          }
          pcStack_10c = (code *)local_34;
          puStack_110 = (undefined4 *)0x486ff6;
          iVar8 = __vbaI4Var();
          uVar19 = iVar8 - *(int *)(*(int *)(DAT_0049106c + 0xc + (bVar1 - 1) * 0x2c) + 0x14);
          bVar1 = *param_1;
          if (5 < bVar1 - 1) {
            puStack_110 = (undefined4 *)0x48701e;
            __vbaGenerateBoundsError();
          }
          iVar8 = (bVar1 - 1) * 0x2c;
          if (*(uint *)(*(int *)(iVar8 + 0xc + DAT_0049106c) + 0x10) <= uVar19) {
            puStack_110 = (undefined4 *)0x48703c;
            __vbaGenerateBoundsError();
          }
          iVar9 = uVar19 * 2;
        }
        if ((local_48 == (short *)0x0) || (*local_48 != 1)) {
          puStack_110 = (undefined4 *)0x487082;
          iVar11 = __vbaGenerateBoundsError();
        }
        else {
          puStack_110 = local_24;
          puStack_114 = (undefined4 *)0x487060;
          iVar10 = __vbaI4Var();
          iVar11 = *(int *)(local_48 + 10);
          if (*(uint *)(local_48 + 8) <= (uint)(iVar10 - iVar11)) {
            puStack_100 = (undefined4 *)0x487077;
            __vbaGenerateBoundsError();
          }
          iVar11 = (iVar10 - iVar11) * 2;
        }
        *(undefined2 *)(*(int *)(local_48 + 6) + iVar11) =
             *(undefined2 *)(*(int *)(*(int *)(iVar8 + 0xc + DAT_0049106c) + 0xc) + iVar9);
      }
      puStack_100 = local_b4;
      puStack_104 = local_a4;
      ppsStack_108 = (short **)local_34;
      pcStack_10c = (code *)0x4870bb;
      iVar8 = __vbaVarForNext();
    }
    uVar19 = *param_1 - 1;
    if (5 < uVar19) {
      pbStack_fc = (byte *)0x4870d2;
      __vbaGenerateBoundsError();
    }
    puVar17 = (undefined4 *)(*param_1 - 1);
    if ((undefined4 *)0x5 < puVar17) {
      pbStack_fc = (byte *)0x4870e4;
      __vbaGenerateBoundsError();
    }
    if (!SBORROW2((ushort)*(byte *)(DAT_0049106c + 0x12 + uVar19 * 0x2c),1)) {
      pbStack_fc = (byte *)0x487106;
      uVar7 = __vbaUI1I2();
      *(undefined1 *)(DAT_0049106c + 0x12 + (int)puVar17 * 0x2c) = uVar7;
      bVar1 = *param_1;
      if (5 < bVar1 - 1) {
        pbStack_fc = (byte *)0x487128;
        __vbaGenerateBoundsError();
      }
      bVar2 = *param_1;
      if (5 < bVar2 - 1) {
        pbStack_fc = (byte *)0x48713a;
        __vbaGenerateBoundsError();
      }
      pbStack_fc = (byte *)0x0;
      puStack_100 = (undefined4 *)(uint)*(byte *)(DAT_0049106c + 0x12 + (bVar1 - 1) * 0x2c);
      puStack_104 = (undefined4 *)0x1;
      ppsStack_108 = (short **)0x2;
      pcStack_10c = (code *)(DAT_0049106c + 0xc + (bVar2 - 1) * 0x2c);
      puStack_110 = (undefined4 *)0x2;
      puStack_114 = (undefined4 *)0x80;
      ppsStack_118 = (short **)0x48716a;
      __vbaRedim();
      pcVar16 = __vbaGenerateBoundsError_exref;
      bVar1 = *param_1;
      local_60 = 1;
      local_68[0] = 2;
      if (5 < bVar1 - 1) {
        pbStack_fc = (byte *)0x48718f;
        __vbaGenerateBoundsError();
      }
      local_70 = *(undefined1 *)(DAT_0049106c + 0x12 + (bVar1 - 1) * 0x2c);
      pbStack_fc = (byte *)local_68;
      puStack_100 = local_78;
      puStack_104 = local_88;
      ppsStack_108 = (short **)local_d4;
      pcStack_10c = (code *)local_c4;
      puStack_110 = local_44;
      local_78[0] = 0x11;
      local_80 = 1;
      local_88[0] = 2;
      puStack_114 = (undefined4 *)0x4871e1;
      iVar8 = __vbaVarForInit();
      while (iVar8 != 0) {
        if ((local_48 == (short *)0x0) || (*local_48 != 1)) {
          puStack_114 = (undefined4 *)0x487220;
          local_e8 = (*pcVar16)();
        }
        else {
          puStack_114 = local_44;
          ppsStack_118 = (short **)0x487200;
          iVar9 = __vbaI4Var();
          iVar8 = *(int *)(local_48 + 10);
          if (*(uint *)(local_48 + 8) <= (uint)(iVar9 - iVar8)) {
            ppsStack_118 = (short **)0x487213;
            (*pcVar16)();
          }
          local_e8 = (iVar9 - iVar8) * 2;
        }
        if (5 < *param_1 - 1) {
          ppsStack_118 = (short **)0x487232;
          (*pcVar16)();
        }
        bVar1 = *param_1;
        if (5 < bVar1 - 1) {
          ppsStack_118 = (short **)0x487240;
          (*pcVar16)();
        }
        iVar8 = (bVar1 - 1) * 0x2c;
        if (*(int *)(iVar8 + 0xc + DAT_0049106c) == 0) {
LAB_004872eb:
          ppsStack_118 = (short **)0x4872ed;
          iVar9 = (*pcVar16)();
        }
        else {
          bVar1 = *param_1;
          if (5 < bVar1 - 1) {
            ppsStack_118 = (short **)0x487269;
            (*pcVar16)();
          }
          iVar8 = (bVar1 - 1) * 0x2c;
          if (**(short **)(iVar8 + 0xc + DAT_0049106c) != 1) goto LAB_004872eb;
          bVar1 = *param_1;
          if (5 < bVar1 - 1) {
            ppsStack_118 = (short **)0x487290;
            (*pcVar16)();
          }
          ppsStack_118 = (short **)local_44;
          puStack_11c = (undefined4 *)0x48729a;
          iVar8 = __vbaI4Var();
          bVar2 = *param_1;
          uVar19 = iVar8 - *(int *)(*(int *)(DAT_0049106c + 0xc + (bVar1 - 1) * 0x2c) + 0x14);
          if (5 < bVar2 - 1) {
            puStack_11c = (undefined4 *)0x4872c3;
            __vbaGenerateBoundsError();
          }
          iVar8 = (bVar2 - 1) * 0x2c;
          if (*(uint *)(*(int *)(iVar8 + 0xc + DAT_0049106c) + 0x10) <= uVar19) {
            puStack_11c = (undefined4 *)0x4872e0;
            __vbaGenerateBoundsError();
          }
          iVar9 = uVar19 * 2;
          pcVar16 = __vbaGenerateBoundsError_exref;
        }
        *(undefined2 *)(*(int *)(*(int *)(iVar8 + 0xc + DAT_0049106c) + 0xc) + iVar9) =
             *(undefined2 *)(*(int *)(local_48 + 6) + local_e8);
        puStack_11c = local_d4;
        puStack_120 = local_c4;
        puStack_124 = local_44;
        iVar8 = __vbaVarForNext();
      }
      goto LAB_0048738e;
    }
  }
  pbStack_fc = (byte *)0x487401;
  __vbaErrorOverflow();
  pcVar16 = __vbaGenerateBoundsError_exref;
  pbStack_fc = param_1;
  uVar18 = *unaff_EDI - 1;
  ppsStack_108 = (short **)uVar19;
  puStack_104 = puVar17;
  puStack_100 = (undefined4 *)&stack0xfffffffc;
  if (5 < uVar18) {
    pcStack_10c = (code *)0x48742c;
    puStack_100 = (undefined4 *)&stack0xfffffffc;
    __vbaGenerateBoundsError();
  }
  uVar19 = *unaff_EDI - 1;
  if (5 < uVar19) {
    pcStack_10c = (code *)0x48743a;
    __vbaGenerateBoundsError();
  }
  if (SCARRY2((ushort)*(byte *)(DAT_0049106c + 0x12 + uVar18 * 0x2c),1)) goto LAB_004876ef;
  pcStack_10c = (code *)0x48745c;
  uVar7 = __vbaUI1I2();
  *(undefined1 *)(DAT_0049106c + 0x12 + uVar19 * 0x2c) = uVar7;
  bVar1 = *unaff_EDI;
  if (5 < bVar1 - 1) {
    pcStack_10c = (code *)0x48747a;
    __vbaGenerateBoundsError();
  }
  bVar2 = *unaff_EDI;
  if (5 < bVar2 - 1) {
    pcStack_10c = (code *)0x487488;
    __vbaGenerateBoundsError();
  }
  pcStack_10c = (code *)0x0;
  puStack_110 = (undefined4 *)(uint)*(byte *)(DAT_0049106c + 0x12 + (bVar1 - 1) * 0x2c);
  puStack_114 = (undefined4 *)0x1;
  ppsStack_118 = (short **)0x2;
  puStack_11c = (undefined4 *)(DAT_0049106c + 0xc + (bVar2 - 1) * 0x2c);
  puStack_120 = (undefined4 *)0x2;
  puStack_124 = (undefined4 *)0x80;
  uStack_128 = 0x4874b8;
  __vbaRedimPreserve();
  if (5 < *unaff_EDI - 1) {
    pcStack_10c = (code *)0x4874c7;
    __vbaGenerateBoundsError();
  }
  bVar1 = *unaff_EDI;
  if (5 < bVar1 - 1) {
    pcStack_10c = (code *)0x4874d5;
    __vbaGenerateBoundsError();
  }
  iVar8 = (bVar1 - 1) * 0x2c;
  if (*(int *)(iVar8 + 0xc + DAT_0049106c) == 0) {
LAB_00487581:
    pcStack_10c = (code *)0x487583;
    iVar9 = __vbaGenerateBoundsError();
  }
  else {
    bVar1 = *unaff_EDI;
    if (5 < bVar1 - 1) {
      pcStack_10c = (code *)0x4874fe;
      __vbaGenerateBoundsError();
    }
    iVar8 = (bVar1 - 1) * 0x2c;
    if (**(short **)(iVar8 + 0xc + DAT_0049106c) != 1) goto LAB_00487581;
    bVar1 = *unaff_EDI;
    if (5 < bVar1 - 1) {
      pcStack_10c = (code *)0x487525;
      __vbaGenerateBoundsError();
    }
    bVar2 = *unaff_EDI;
    if (5 < bVar2 - 1) {
      pcStack_10c = (code *)0x487533;
      __vbaGenerateBoundsError();
    }
    bVar3 = *unaff_EDI;
    uVar19 = (uint)*(byte *)(DAT_0049106c + 0x12 + (bVar1 - 1) * 0x2c) -
             *(int *)(*(int *)(DAT_0049106c + 0xc + (bVar2 - 1) * 0x2c) + 0x14);
    if (5 < bVar3 - 1) {
      pcStack_10c = (code *)0x487563;
      __vbaGenerateBoundsError();
    }
    iVar8 = (bVar3 - 1) * 0x2c;
    if (*(uint *)(*(int *)(iVar8 + 0xc + DAT_0049106c) + 0x10) <= uVar19) {
      pcStack_10c = (code *)0x48757c;
      __vbaGenerateBoundsError();
    }
    iVar9 = uVar19 * 2;
  }
  *(ushort *)(*(int *)(*(int *)(iVar8 + 0xc + DAT_0049106c) + 0xc) + iVar9) =
       (ushort)(byte)*unaff_ESI;
  cVar4 = *unaff_ESI;
  uVar19 = CONCAT31((int3)((uint)iVar9 >> 8),cVar4);
  if ((byte)cVar4 < 0x2a) {
    if (0x29 < (byte)cVar4) {
      pcStack_10c = (code *)0x4875ba;
      __vbaGenerateBoundsError();
    }
    *(byte *)(DAT_00491034 + 0x65 + (uint)(byte)cVar4 * 0x74) = *unaff_EDI;
    cVar4 = *unaff_ESI;
    if (0x29 < (byte)cVar4) {
      pcStack_10c = (code *)0x4875e4;
      __vbaGenerateBoundsError();
    }
    pcStack_10c = *(code **)(DAT_00491034 + 4 + (uint)(byte)cVar4 * 0x74);
    puStack_110 = (undefined4 *)&DAT_004713b0;
    puStack_114 = (undefined4 *)0x487605;
    iVar8 = __vbaStrCmp();
    pcVar16 = unaff_ESI;
    if (iVar8 == 0) {
      uVar19 = *unaff_EDI - 1;
      if (5 < uVar19) {
        pcStack_10c = (code *)0x48761b;
        __vbaGenerateBoundsError();
      }
      uVar18 = *unaff_EDI - 1;
      if (5 < uVar18) {
        pcStack_10c = (code *)0x48762d;
        __vbaGenerateBoundsError();
      }
      if (SCARRY2((ushort)*(byte *)(DAT_0049106c + 0x1c + uVar19 * 0x2c),1)) goto LAB_004876ef;
      pcStack_10c = (code *)0x48764e;
      uVar7 = __vbaUI1I2();
      *(undefined1 *)(DAT_0049106c + 0x1c + uVar18 * 0x2c) = uVar7;
    }
    cVar4 = *unaff_ESI;
    if (0x29 < (byte)cVar4) {
      pcStack_10c = (code *)0x487670;
      __vbaGenerateBoundsError();
    }
    pcStack_10c = *(code **)(DAT_00491034 + 4 + (uint)(byte)cVar4 * 0x74);
    puStack_110 = (undefined4 *)&DAT_004713b8;
    puStack_114 = (undefined4 *)0x487692;
    uVar19 = __vbaStrCmp();
    if (uVar19 == 0) {
      uVar19 = *unaff_EDI - 1;
      if (5 < uVar19) {
        pcStack_10c = (code *)0x4876a8;
        __vbaGenerateBoundsError();
      }
      uVar18 = *unaff_EDI - 1;
      if (5 < uVar18) {
        pcStack_10c = (code *)0x4876ba;
        __vbaGenerateBoundsError();
      }
      if (SCARRY2((ushort)*(byte *)(DAT_0049106c + 0x1d + uVar19 * 0x2c),1)) {
LAB_004876ef:
        pcStack_10c = (code *)0x4876f5;
        __vbaErrorOverflow();
        ppsStack_118 = (short **)&LAB_00401656;
        puStack_11c = ExceptionList;
        puStack_114 = &uStack_158;
        puStack_110 = (undefined4 *)&DAT_00401420;
        puStack_120 = (undefined4 *)0x0;
        puStack_124 = (undefined4 *)0x0;
        ExceptionList = &puStack_11c;
        uStack_158 = uVar19;
        uStack_154 = uVar18;
        puVar5 = &uStack_158;
        pcStack_10c = pcVar16;
        if (DAT_00491010 == (int *)0x0) {
          ExceptionList = &puStack_11c;
          __vbaNew2(&DAT_0046f194,&DAT_00491010);
          puVar5 = puStack_114;
        }
        puStack_114 = puVar5;
        uVar12 = (**(code **)(*DAT_00491010 + 0x2fc))(DAT_00491010);
        piVar13 = (int *)__vbaObjSet(&puStack_120,uVar12);
        iVar8 = (**(code **)(*piVar13 + 0x1ec))
                          (piVar13,*puStack_104,10,uStack_130,0x80020004,uStack_128);
        if (iVar8 < 0) {
          __vbaHresultCheckObj(iVar8,piVar13,&DAT_00471af8,0x1ec);
        }
        __vbaFreeObj();
        if (DAT_00491010 == (int *)0x0) {
          __vbaNew2(&DAT_0046f194,&DAT_00491010);
        }
        uVar12 = (**(code **)(*DAT_00491010 + 0x2fc))(DAT_00491010);
        piVar13 = (int *)__vbaObjSet(&puStack_124,uVar12);
        if (DAT_00491010 == (int *)0x0) {
          __vbaNew2(&DAT_0046f194,&DAT_00491010);
        }
        uVar12 = (**(code **)(*DAT_00491010 + 0x2fc))(DAT_00491010);
        piVar14 = (int *)__vbaObjSet(&puStack_120,uVar12);
        iVar8 = (**(code **)(*piVar14 + 0xd8))(piVar14);
        if (iVar8 < 0) {
          __vbaHresultCheckObj(iVar8,piVar14,&DAT_00471af8,0xd8);
        }
        iVar8 = (**(code **)(*piVar13 + 0xe4))(piVar13,0xffff);
        if (iVar8 < 0) {
          __vbaHresultCheckObj(iVar8,piVar13,&DAT_00471af8,0xe4);
        }
        uVar19 = __vbaFreeObjList(2,&puStack_120,&puStack_124);
        return uVar19;
      }
      pcStack_10c = (code *)0x4876d8;
      uVar19 = __vbaUI1I2();
      *(char *)(DAT_0049106c + 0x1d + uVar18 * 0x2c) = (char)uVar19;
    }
  }
  return uVar19;
}


