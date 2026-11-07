/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_00479520(uint param_1)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  int ****ppppiVar5;
  int *****pppppiVar6;
  int *piVar7;
  int ***pppiVar8;
  int ****ppppiVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  code *pcVar12;
  int *****pppppiVar13;
  int *unaff_EDI;
  uint uVar14;
  int *****pppppiVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int *****pppppiStack_224;
  int *****pppppiStack_220;
  int *****pppppiStack_21c;
  int *****pppppiStack_218;
  int *****pppppiStack_214;
  int *****pppppiStack_210;
  int *****pppppiStack_20c;
  int *****pppppiStack_208;
  int *****pppppiStack_204;
  int *****pppppiStack_200;
  int *****pppppiStack_1fc;
  int *****pppppiStack_1f8;
  int *****pppppiStack_1f4;
  int ****ppppiStack_1f0;
  int ****ppppiStack_1ec;
  int *****pppppiStack_1e8;
  int ****ppppiStack_1e4;
  int *****pppppiStack_1e0;
  int *****pppppiStack_1dc;
  int *****pppppiStack_1d8;
  int *****pppppiStack_1d4;
  int *****pppppiStack_1d0;
  undefined4 uStack_1cc;
  int *****pppppiStack_1c8;
  int *****pppppiStack_1c4;
  int *****pppppiStack_1c0;
  int *****pppppiStack_1bc;
  int *****pppppiStack_1b8;
  int *****pppppiStack_1b4;
  int *****pppppiStack_1a4;
  int *****pppppiStack_1a0;
  int *****pppppiStack_19c;
  int *****pppppiStack_198;
  int ****ppppiStack_194;
  int *****pppppiStack_190;
  int *****pppppiStack_18c;
  int *****pppppiStack_188;
  int *****pppppiStack_184;
  int *****pppppiStack_180;
  int *****pppppiStack_17c;
  int *****pppppiStack_178;
  int *****pppppiStack_174;
  int *****pppppiStack_170;
  int *****pppppiStack_16c;
  int *****pppppiStack_168;
  int *****pppppiStack_164;
  int *****pppppiStack_160;
  int *****pppppiStack_15c;
  int *****pppppiStack_158;
  int *****pppppiStack_154;
  int *****pppppiStack_150;
  int *****pppppiStack_14c;
  int *****pppppiStack_148;
  int *****pppppiStack_144;
  int *****pppppiStack_140;
  int *****pppppiStack_13c;
  int *****pppppiStack_138;
  int *****pppppiStack_134;
  undefined1 local_c0 [20];
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  int *****local_98;
  undefined4 local_90;
  undefined4 local_8c;
  int *****local_88;
  uint *local_84;
  int *****local_80;
  int ***local_7c [2];
  undefined4 local_74;
  int ****local_6c [2];
  undefined4 local_64;
  int ****local_5c [2];
  undefined4 local_54;
  int ***local_4c [4];
  int ****local_3c;
  int ****local_38;
  int ****local_34;
  int ****local_30;
  int *****local_2c;
  int *****local_28;
  int ****local_24;
  undefined4 local_20;
  uint local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401656;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xfffffed0;
  local_c = &DAT_00401280;
  local_8 = param_1 & 1;
  pppppiVar13 = (int *****)(param_1 & 0xfffffffe);
  pppppiStack_138 = (int *****)0x479563;
  ExceptionList = &pvStack_18;
  pppppiStack_134 = pppppiVar13;
  (*(code *)(*pppppiVar13)[1])();
  local_1c = local_1c & 0xffffff00;
  local_20 = 0;
  local_24 = (int ****)0x0;
  local_28 = (int *****)0x0;
  local_2c = (int *****)0x0;
  local_30 = (int ****)0x0;
  local_34 = (int ****)0x0;
  local_38 = (int ****)0x0;
  local_3c = (int ****)0x0;
  local_4c[0] = (int ***)0x0;
  local_5c[0] = (int ****)0x0;
  local_6c[0] = (int ****)0x0;
  local_7c[0] = (int ***)0x0;
  local_8c = 0;
  local_9c = 0;
  local_ac = 0;
  local_c0[0] = 0;
  if (DAT_00491078 != 0) {
    local_74 = 0x80020004;
    local_64 = 0x80020004;
    local_54 = 0x80020004;
    local_7c[0] = (int ***)0xa;
    local_6c[0] = (int ****)0xa;
    local_5c[0] = (int ****)0xa;
    local_84 = (uint *)&DAT_004711e8;
    local_8c = 8;
    pppppiStack_138 = (int *****)0x4795ed;
    __vbaVarDup();
    pppppiStack_138 = (int *****)local_7c;
    pppppiStack_13c = local_6c;
    pppppiStack_140 = local_5c;
    pppppiStack_148 = (int *****)local_4c;
    pppppiStack_144 = (int *****)0x4;
    pppppiStack_14c = (int *****)0x479605;
    iVar4 = Ordinal_595();
    pppppiStack_14c = (int *****)local_7c;
    pppppiStack_150 = local_6c;
    pppppiStack_154 = local_5c;
    pppppiStack_158 = (int *****)local_4c;
    pppppiStack_15c = (int *****)0x4;
    pppppiStack_160 = (int *****)0x47962a;
    __vbaFreeVarList();
    if (iVar4 == 7) {
      return;
    }
  }
  if (DAT_00491714 == (int *****)0x0) {
    pppppiStack_138 = (int *****)&DAT_00491714;
    pppppiStack_13c = (int *****)&LAB_00470d04;
    pppppiStack_140 = (int *****)0x47964e;
    __vbaNew2();
  }
  pppppiVar15 = DAT_00491714;
  if (DAT_004910b0 == (int *****)0x0) {
    pppppiStack_138 = (int *****)&DAT_004910b0;
    pppppiStack_13c = (int *****)&DAT_0046cd2c;
    pppppiStack_140 = (int *****)0x47966d;
    __vbaNew2();
  }
  ppppiVar5 = *pppppiVar15;
  pppppiStack_13c = &local_24;
  pppppiStack_138 = DAT_004910b0;
  pppppiStack_140 = (int *****)0x47967f;
  pppppiStack_140 = (int *****)__vbaObjSetAddref();
  pppppiStack_144 = pppppiVar15;
  pppppiStack_148 = (int *****)0x479684;
  ppppiVar5 = (int ****)(*(code *)ppppiVar5[3])();
  if ((int)ppppiVar5 < 0) {
    pppppiStack_148 = (int *****)0xc;
    pppppiStack_14c = (int *****)&DAT_00470cf4;
    pppppiStack_150 = pppppiVar15;
    pppppiStack_158 = (int *****)0x479699;
    pppppiStack_154 = (int *****)ppppiVar5;
    __vbaHresultCheckObj();
  }
  pppppiStack_148 = (int *****)0x4796a2;
  __vbaFreeObj();
  if (DAT_004910b0 == (int *****)0x0) {
    pppppiStack_148 = (int *****)&DAT_004910b0;
    pppppiStack_14c = (int *****)&DAT_0046cd2c;
    pppppiStack_150 = (int *****)0x4796bb;
    __vbaNew2();
  }
  pppppiVar15 = DAT_004910b0;
  pppppiStack_154 = (int *****)0xa;
  local_8c = 2;
  local_84 = (uint *)0x1;
  pppppiStack_150 = local_98;
  pppppiStack_168 = DAT_004910b0;
  pppppiStack_14c = (int *****)0x80020004;
  pppppiStack_148 = (int *****)local_90;
  pppppiStack_164 = (int *****)0x2;
  pppppiStack_160 = local_88;
  pppppiStack_15c = (int *****)0x1;
  pppppiStack_158 = local_80;
  pppppiStack_16c = (int *****)0x479723;
  pppppiVar6 = (int *****)(*(code *)(*DAT_004910b0)[0xac])();
  if ((int)pppppiVar6 < 0) {
    pppppiStack_138 = (int *****)0x2b0;
    pppppiStack_13c = (int *****)&DAT_0047123c;
    pppppiStack_140 = pppppiVar15;
    pppppiStack_148 = (int *****)0x47973d;
    pppppiStack_144 = pppppiVar6;
    __vbaHresultCheckObj();
  }
  pcVar12 = __vbaUI1I2_exref;
  if (DAT_00491078 != -1) {
    return;
  }
  pppppiStack_138 = (int *****)0x479758;
  bVar1 = __vbaUI1I2();
  pppppiStack_138 = (int *****)0x479765;
  bVar2 = __vbaUI1I2();
  do {
    local_1c = CONCAT31(local_1c._1_3_,bVar2);
    if (bVar1 < bVar2) {
      pppppiStack_138 = (int *****)0x479818;
      bVar1 = __vbaUI1I2();
      pppppiStack_138 = (int *****)0x479825;
      bVar2 = __vbaUI1I2();
      pcVar12 = __vbaObjSet_exref;
      local_1c = CONCAT31(local_1c._1_3_,bVar2);
      goto LAB_0047982e;
    }
    if (0x29 < bVar2) {
      pppppiStack_138 = (int *****)0x47978a;
      __vbaGenerateBoundsError();
    }
    pppppiStack_138 = (int *****)0x47978e;
    uVar3 = __vbaUI1I2();
    *(undefined1 *)(DAT_00491034 + 0x65 + (uint)bVar2 * 0x74) = uVar3;
    uVar14 = local_1c & 0xff;
    if (0x29 < uVar14) {
      pppppiStack_138 = (int *****)0x4797b8;
      __vbaGenerateBoundsError();
    }
    *(undefined2 *)(DAT_00491034 + 0x6c + uVar14 * 0x74) = 0;
    pppppiVar15 = (int *****)(local_1c & 0xff);
    if ((int *****)0x29 < pppppiVar15) {
      pppppiStack_138 = (int *****)0x4797e5;
      __vbaGenerateBoundsError();
    }
    pppppiStack_138 = (int *****)0x4797e9;
    uVar3 = __vbaUI1I2();
    *(undefined1 *)(DAT_00491034 + 0x66 + (int)pppppiVar15 * 0x74) = uVar3;
    bVar2 = (byte)local_1c + 1;
  } while ((byte)local_1c != -1);
LAB_0047a73b:
  pppppiStack_138 = (int *****)0x47a741;
  __vbaErrorOverflow();
  pppppiStack_148 = (int *****)&LAB_00401656;
  pppppiStack_14c = ExceptionList;
  pppppiStack_144 = (int *****)&pppppiStack_224;
  pppppiStack_140 = (int *****)&DAT_00401290;
  pppppiStack_13c = (int *****)0x0;
  ExceptionList = &pppppiStack_14c;
  pppppiStack_224 = pppppiVar15;
  pppppiStack_220 = pppppiVar13;
  pppppiStack_21c = (int *****)pcVar12;
  pppppiStack_138 = (int *****)&stack0xfffffffc;
  (**(code **)(*unaff_EDI + 4))(unaff_EDI);
  pppppiStack_150 = (int *****)0x0;
  pppppiStack_160 = (int *****)0x0;
  pppppiStack_170 = (int *****)0x0;
  pppppiStack_174 = (int *****)0x0;
  pppppiStack_178 = (int *****)0x0;
  pppppiStack_17c = (int *****)0x0;
  pppppiStack_180 = (int *****)0x0;
  pppppiStack_184 = (int *****)0x0;
  ppppiStack_194 = (int ****)0x0;
  pppppiStack_1a4 = (int *****)0x0;
  pppppiStack_1b4 = (int *****)0x0;
  pppppiStack_1d8 = (int *****)0x0;
  pppppiStack_1e8 = (int *****)0x0;
  pppppiStack_1f8 = (int *****)0x0;
  pppppiStack_208 = (int *****)0x0;
  __vbaRedim(0,8,&pppppiStack_174,0,1,3,0);
  if (DAT_00491714 == (int *****)0x0) {
    __vbaNew2(&LAB_00470d04,&DAT_00491714);
  }
  pppppiVar13 = DAT_00491714;
  iVar4 = (*(code *)(*DAT_00491714)[5])(DAT_00491714,&pppppiStack_184);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,pppppiVar13,&DAT_00470cf4,0x14);
  }
  pppppiVar13 = pppppiStack_184;
  iVar4 = (*(code *)(*pppppiStack_184)[0x14])(pppppiStack_184,&pppppiStack_17c);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,pppppiVar13,&DAT_00470f14,0x50);
  }
  __vbaStrCat(L"\\puntos.txt",pppppiStack_17c);
  uVar11 = __vbaStrMove();
  __vbaFileOpen(1,0xffffffff,1,uVar11);
  __vbaFreeStrList(2,&pppppiStack_17c,&pppppiStack_180);
  __vbaFreeObj();
  pppppiStack_18c = (int *****)0x1;
  ppppiStack_194 = (int ****)0x2;
  pppppiStack_19c = (int *****)0x29;
  pppppiStack_1a4 = (int *****)0x2;
  pppppiStack_1b4 = (int *****)0x2;
  iVar4 = __vbaVarForInit(&pppppiStack_170,&pppppiStack_1d8,&pppppiStack_1e8,&pppppiStack_1b4,
                          &pppppiStack_1a4,&ppppiStack_194);
  while (iVar4 != 0) {
    pppppiStack_18c = (int *****)0x1;
    ppppiStack_194 = (int ****)0x2;
    pppppiStack_19c = (int *****)0x3;
    pppppiStack_1a4 = (int *****)0x2;
    pppppiStack_1b4 = (int *****)0x2;
    iVar4 = __vbaVarForInit(&pppppiStack_160,&pppppiStack_1f8,&pppppiStack_208,&pppppiStack_1b4,
                            &pppppiStack_1a4,&ppppiStack_194);
    while (iVar4 != 0) {
      __vbaLineInputStr(&pppppiStack_150,1);
      if ((pppppiStack_174 == (int *****)0x0) || (*(short *)pppppiStack_174 != 1)) {
        iVar4 = __vbaGenerateBoundsError();
      }
      else {
        iVar4 = __vbaI4Var(&pppppiStack_160);
        pppiVar8 = (int ***)pppppiStack_174[5];
        if (pppppiStack_174[4] <= (int ***)(iVar4 - (int)pppiVar8)) {
          __vbaGenerateBoundsError();
        }
        iVar4 = (iVar4 - (int)pppiVar8) * 8;
      }
      Ordinal_581(pppppiStack_150);
      uVar11 = __vbaFpI4();
      *(undefined4 *)((int)pppppiStack_174[3] + iVar4) = uVar11;
      __vbaLineInputStr(&pppppiStack_150,1);
      if ((pppppiStack_174 == (int *****)0x0) || (*(short *)pppppiStack_174 != 1)) {
        iVar4 = __vbaGenerateBoundsError();
      }
      else {
        iVar4 = __vbaI4Var(&pppppiStack_160);
        pppiVar8 = (int ***)pppppiStack_174[5];
        if (pppppiStack_174[4] <= (int ***)(iVar4 - (int)pppiVar8)) {
          __vbaGenerateBoundsError();
        }
        iVar4 = (iVar4 - (int)pppiVar8) * 8;
      }
      Ordinal_581(pppppiStack_150);
      uVar11 = __vbaFpI4();
      *(undefined4 *)((int)pppppiStack_174[3] + iVar4 + 4) = uVar11;
      iVar4 = __vbaVarForNext(&pppppiStack_160,&pppppiStack_1f8,&pppppiStack_208);
    }
    __vbaAryLock(&pppppiStack_178,pppppiStack_174);
    if ((pppppiStack_178 == (int *****)0x0) || (*(short *)pppppiStack_178 != 1)) {
      iVar4 = __vbaGenerateBoundsError();
    }
    else {
      ppppiVar5 = pppppiStack_178[5];
      if (pppppiStack_178[4] <= (int ****)-(int)ppppiVar5) {
        __vbaGenerateBoundsError();
      }
      iVar4 = (int)ppppiVar5 * -8;
    }
    uVar17 = 1;
    iVar4 = (int)pppppiStack_178[3] + iVar4;
    uVar16 = 4;
    uVar11 = FUN_00470bc8();
    __vbaSetSystemError(iVar4,uVar16,uVar17);
    __vbaAryUnlock(&pppppiStack_178);
    uVar14 = __vbaI4Var(&pppppiStack_170);
    if (0x29 < uVar14) {
      __vbaGenerateBoundsError();
    }
    *(undefined4 *)(unaff_EDI[0x11] + uVar14 * 4) = uVar11;
    iVar4 = __vbaVarForNext(&pppppiStack_170,&pppppiStack_1d8,&pppppiStack_1e8);
  }
  __vbaFileClose(1);
  __vbaFreeVarList(4,&pppppiStack_1d8,&pppppiStack_1e8,&pppppiStack_1f8,&pppppiStack_208,
                   &LAB_0047ab13);
  __vbaFreeStr();
  __vbaFreeVar();
  __vbaFreeVar();
  __vbaAryDestruct(0,&pppppiStack_174);
  return;
LAB_0047982e:
  if (bVar1 < bVar2) goto LAB_00479c9d;
  uVar14 = (local_1c & 0xff) - 1;
  if (5 < uVar14) {
    pppppiStack_138 = (int *****)0x47984f;
    __vbaGenerateBoundsError();
  }
  pppppiStack_138 = (int *****)0x479857;
  uVar3 = __vbaUI1I2();
  *(undefined1 *)(DAT_0049106c + 0x10 + uVar14 * 0x2c) = uVar3;
  uVar14 = (local_1c & 0xff) - 1;
  if (5 < uVar14) {
    pppppiStack_138 = (int *****)0x47987c;
    __vbaGenerateBoundsError();
  }
  *(undefined2 *)(DAT_0049106c + 0x14 + uVar14 * 0x2c) = 0;
  uVar14 = (local_1c & 0xff) - 1;
  if (5 < uVar14) {
    pppppiStack_138 = (int *****)0x4798a4;
    __vbaGenerateBoundsError();
  }
  pppppiStack_138 = (int *****)0x4798ac;
  uVar3 = __vbaUI1I2();
  *(undefined1 *)(DAT_0049106c + 0x12 + uVar14 * 0x2c) = uVar3;
  uVar14 = (local_1c & 0xff) - 1;
  if (5 < uVar14) {
    pppppiStack_138 = (int *****)0x4798d1;
    __vbaGenerateBoundsError();
  }
  *(undefined2 *)(DAT_0049106c + 0x16 + uVar14 * 0x2c) = 0;
  uVar14 = (local_1c & 0xff) - 1;
  if (5 < uVar14) {
    pppppiStack_138 = (int *****)0x4798f9;
    __vbaGenerateBoundsError();
  }
  *(undefined2 *)(DAT_0049106c + 0x18 + uVar14 * 0x2c) = 0;
  uVar14 = (local_1c & 0xff) - 1;
  if (5 < uVar14) {
    pppppiStack_138 = (int *****)0x479921;
    __vbaGenerateBoundsError();
  }
  *(undefined4 *)(DAT_0049106c + 0x20 + uVar14 * 0x2c) = 0;
  uVar14 = (local_1c & 0xff) - 1;
  if (5 < uVar14) {
    pppppiStack_138 = (int *****)0x47994a;
    __vbaGenerateBoundsError();
  }
  pppppiStack_138 = (int *****)0x479952;
  uVar3 = __vbaUI1I2();
  *(undefined1 *)(DAT_0049106c + 0x11 + uVar14 * 0x2c) = uVar3;
  uVar14 = (local_1c & 0xff) - 1;
  if (5 < uVar14) {
    pppppiStack_138 = (int *****)0x479977;
    __vbaGenerateBoundsError();
  }
  pppppiStack_138 = (int *****)0x47997f;
  uVar3 = __vbaUI1I2();
  *(undefined1 *)(DAT_0049106c + 0x25 + uVar14 * 0x2c) = uVar3;
  uVar14 = (local_1c & 0xff) - 1;
  if (5 < uVar14) {
    pppppiStack_138 = (int *****)0x4799a4;
    __vbaGenerateBoundsError();
  }
  pppppiStack_138 = (int *****)0x4799ac;
  uVar3 = __vbaUI1I2();
  *(undefined1 *)(DAT_0049106c + 0x1d + uVar14 * 0x2c) = uVar3;
  uVar14 = (local_1c & 0xff) - 1;
  if (5 < uVar14) {
    pppppiStack_138 = (int *****)0x4799d1;
    __vbaGenerateBoundsError();
  }
  pppppiStack_138 = (int *****)0x4799d9;
  uVar3 = __vbaUI1I2();
  *(undefined1 *)(DAT_0049106c + 0x1c + uVar14 * 0x2c) = uVar3;
  uVar14 = (local_1c & 0xff) - 1;
  if (5 < uVar14) {
    pppppiStack_138 = (int *****)0x4799fe;
    __vbaGenerateBoundsError();
  }
  *(undefined2 *)(DAT_0049106c + 0x26 + uVar14 * 0x2c) = 0;
  uVar14 = (local_1c & 0xff) - 1;
  if (5 < uVar14) {
    pppppiStack_138 = (int *****)0x479a26;
    __vbaGenerateBoundsError();
  }
  *(undefined2 *)(DAT_0049106c + 0x28 + uVar14 * 0x2c) = 0;
  uVar14 = (local_1c & 0xff) - 1;
  if (5 < uVar14) {
    pppppiStack_138 = (int *****)0x479a4e;
    __vbaGenerateBoundsError();
  }
  pppppiStack_138 = (int *****)0x479a56;
  uVar3 = __vbaUI1I2();
  *(undefined1 *)(DAT_0049106c + 0x24 + uVar14 * 0x2c) = uVar3;
  uVar14 = (local_1c & 0xff) - 1;
  if (5 < uVar14) {
    pppppiStack_138 = (int *****)0x479a7b;
    __vbaGenerateBoundsError();
  }
  *(undefined4 *)(DAT_0049106c + 8 + uVar14 * 0x2c) = 0x4708b800;
  pppppiStack_13c = (int *****)0x479a98;
  pppppiStack_138 = pppppiVar13;
  pppppiStack_13c = (int *****)(*(code *)(*pppppiVar13)[0xc6])();
  pppppiStack_140 = &local_24;
  pppppiStack_144 = (int *****)0x479a9f;
  ppppiVar5 = (int ****)__vbaObjSet();
  pppppiStack_144 = (int *****)&local_28;
  pppppiStack_148 = (int *****)CONCAT22((short)((uint)ppppiVar5 >> 0x10),(ushort)(byte)local_1c);
  pppppiStack_150 = (int *****)0x479ab1;
  pppppiStack_14c = (int *****)ppppiVar5;
  iVar4 = (*(code *)(*ppppiVar5)[0x10])();
  if (iVar4 < 0) {
    pppppiStack_150 = (int *****)0x40;
    pppppiStack_154 = (int *****)&DAT_00470e74;
    pppppiStack_160 = (int *****)0x479ac6;
    pppppiStack_15c = (int *****)iVar4;
    pppppiStack_158 = (int *****)ppppiVar5;
    __vbaHresultCheckObj();
  }
  pppppiVar15 = local_28;
  pppppiStack_150 = (int *****)0x0;
  pppppiStack_154 = local_28;
  pppppiStack_158 = (int *****)0x479ad6;
  pppppiStack_164 = (int *****)(*(code *)(*local_28)[0x27])();
  if ((int)pppppiStack_164 < 0) {
    pppppiStack_158 = (int *****)0x9c;
    pppppiStack_15c = (int *****)&DAT_00471330;
    pppppiStack_160 = pppppiVar15;
    pppppiStack_168 = (int *****)0x479aee;
    __vbaHresultCheckObj();
  }
  pppppiStack_158 = (int *****)&local_28;
  pppppiStack_15c = &local_24;
  pppppiStack_160 = (int *****)0x2;
  pppppiStack_164 = (int *****)0x479afe;
  __vbaFreeObjList();
  pppppiStack_15c = (int *****)0x479b0a;
  pppppiStack_158 = pppppiVar13;
  pppppiStack_15c = (int *****)(*(code *)(*pppppiVar13)[0xc5])();
  pppppiStack_160 = &local_24;
  pppppiStack_164 = (int *****)0x479b11;
  pppppiVar15 = (int *****)__vbaObjSet();
  pppppiStack_168 = (int *****)CONCAT22(extraout_var,(ushort)(byte)local_1c);
  pppppiStack_164 = (int *****)&local_28;
  pppppiStack_170 = (int *****)0x479b23;
  pppppiStack_16c = pppppiVar15;
  pppppiVar6 = (int *****)(*(code *)(*pppppiVar15)[0x10])();
  if ((int)pppppiVar6 < 0) {
    pppppiStack_170 = (int *****)0x40;
    pppppiStack_174 = (int *****)&DAT_00470e74;
    pppppiStack_180 = (int *****)0x479b38;
    pppppiStack_17c = pppppiVar6;
    pppppiStack_178 = pppppiVar15;
    __vbaHresultCheckObj();
  }
  pppppiVar15 = local_28;
  pppppiStack_170 = (int *****)0x0;
  pppppiStack_174 = local_28;
  pppppiStack_178 = (int *****)0x479b48;
  pppppiStack_184 = (int *****)(*(code *)(*local_28)[0x23])();
  if ((int)pppppiStack_184 < 0) {
    pppppiStack_178 = (int *****)0x8c;
    pppppiStack_17c = (int *****)&DAT_00470e84;
    pppppiStack_180 = pppppiVar15;
    pppppiStack_188 = (int *****)0x479b60;
    __vbaHresultCheckObj();
  }
  pppppiStack_178 = (int *****)&local_28;
  pppppiStack_17c = &local_24;
  pppppiStack_180 = (int *****)0x2;
  pppppiStack_184 = (int *****)0x479b70;
  __vbaFreeObjList();
  pppppiStack_17c = (int *****)0x479b7c;
  pppppiStack_178 = pppppiVar13;
  pppppiStack_17c = (int *****)(*(code *)(*pppppiVar13)[0xc5])();
  pppppiStack_180 = &local_24;
  pppppiStack_184 = (int *****)0x479b83;
  pppppiVar15 = (int *****)__vbaObjSet();
  pppppiStack_188 = (int *****)CONCAT22(extraout_var_00,(ushort)(byte)local_1c);
  pppppiStack_184 = (int *****)&local_28;
  pppppiStack_190 = (int *****)0x479b95;
  pppppiStack_18c = pppppiVar15;
  pppppiVar6 = (int *****)(*(code *)(*pppppiVar15)[0x10])();
  if ((int)pppppiVar6 < 0) {
    pppppiStack_190 = (int *****)0x40;
    ppppiStack_194 = (int ****)&DAT_00470e74;
    pppppiStack_1a0 = (int *****)0x479baa;
    pppppiStack_19c = pppppiVar6;
    pppppiStack_198 = pppppiVar15;
    __vbaHresultCheckObj();
  }
  pppppiVar15 = local_28;
  pppppiStack_190 = (int *****)0x0;
  ppppiVar5 = *local_28;
  ppppiStack_194 = (int ****)0x479bbd;
  __vbaStrI2();
  ppppiStack_194 = (int ****)0x479bc8;
  ppppiStack_194 = (int ****)__vbaStrMove();
  pppppiStack_198 = pppppiVar15;
  pppppiStack_19c = (int *****)0x479be2;
  iVar4 = (*(code *)ppppiVar5[0x2f])();
  if (iVar4 < 0) {
    pppppiStack_19c = (int *****)0xbc;
    pppppiStack_1a0 = (int *****)&DAT_00470e84;
    pppppiStack_1a4 = pppppiVar15;
    __vbaHresultCheckObj();
  }
  pppppiStack_19c = (int *****)0x479c03;
  __vbaFreeStr();
  pppppiStack_19c = (int *****)&local_28;
  pppppiStack_1a0 = &local_24;
  pppppiStack_1a4 = (int *****)0x2;
  __vbaFreeObjList();
  pppppiStack_1a0 = (int *****)0x479c1f;
  pppppiStack_19c = pppppiVar13;
  pppppiStack_1a0 = (int *****)(*(code *)(*pppppiVar13)[0xc4])();
  pppppiStack_1a4 = &local_24;
  piVar7 = (int *)__vbaObjSet();
  pppppiStack_1b4 = (int *****)0x479c38;
  pppppiVar15 = (int *****)(**(code **)(*piVar7 + 0x40))();
  if ((int)pppppiVar15 < 0) {
    pppppiStack_1b4 = (int *****)0x40;
    pppppiStack_1b8 = (int *****)&DAT_00470e74;
    pppppiStack_1c4 = (int *****)0x479c4d;
    pppppiStack_1c0 = pppppiVar15;
    pppppiStack_1bc = (int *****)piVar7;
    __vbaHresultCheckObj();
  }
  pppppiVar15 = local_28;
  pppppiStack_1b4 = (int *****)0x0;
  pppppiStack_1b8 = local_28;
  pppppiStack_1bc = (int *****)0x479c5d;
  pppppiStack_1c8 = (int *****)(*(code *)(*local_28)[0x23])();
  if ((int)pppppiStack_1c8 < 0) {
    pppppiStack_1bc = (int *****)0x8c;
    pppppiStack_1c0 = (int *****)&DAT_00470e84;
    pppppiStack_1c4 = pppppiVar15;
    uStack_1cc = 0x479c75;
    __vbaHresultCheckObj();
  }
  pppppiStack_1bc = (int *****)&local_28;
  pppppiStack_1c0 = &local_24;
  pppppiStack_1c4 = (int *****)0x2;
  pppppiStack_1c8 = (int *****)0x479c85;
  __vbaFreeObjList();
  bVar2 = (byte)local_1c + 1;
  if (0xfe < (byte)local_1c) goto LAB_0047a73b;
  local_1c = CONCAT31(local_1c._1_3_,bVar2);
  goto LAB_0047982e;
LAB_00479c9d:
  pppppiStack_138 = (int *****)0x479cac;
  bVar1 = __vbaUI1I2();
  pppppiStack_138 = (int *****)0x479cb9;
  bVar2 = __vbaUI1I2();
  local_1c = CONCAT31(local_1c._1_3_,bVar2);
  while( true ) {
    if (bVar1 < bVar2) {
      pppppiStack_13c = (int *****)0x47a308;
      pppppiStack_138 = pppppiVar13;
      pppppiStack_13c = (int *****)(*(code *)(*pppppiVar13)[0xc1])();
      pppppiStack_140 = &local_24;
      pppppiStack_144 = (int *****)0x47a30f;
      pppppiVar15 = (int *****)(*pcVar12)();
      pppppiStack_144 = (int *****)0xffffffff;
      pppppiStack_14c = (int *****)0x47a31c;
      pppppiStack_148 = pppppiVar15;
      pppppiVar6 = (int *****)(*(code *)(*pppppiVar15)[0x25])();
      if ((int)pppppiVar6 < 0) {
        pppppiStack_14c = (int *****)0x94;
        pppppiStack_150 = (int *****)&DAT_00471368;
        pppppiStack_15c = (int *****)0x47a334;
        pppppiStack_158 = pppppiVar6;
        pppppiStack_154 = pppppiVar15;
        __vbaHresultCheckObj();
      }
      pppppiStack_14c = (int *****)0x47a33d;
      __vbaFreeObj();
      pppppiStack_150 = (int *****)0x47a346;
      pppppiStack_14c = pppppiVar13;
      pppppiStack_150 = (int *****)(*(code *)(*pppppiVar13)[0xc2])();
      pppppiStack_154 = &local_34;
      pppppiStack_158 = (int *****)0x47a34d;
      ppppiVar5 = (int ****)(*pcVar12)();
      pppppiStack_158 = &local_38;
      pppppiStack_15c = (int *****)0x1;
      pppppiStack_164 = (int *****)0x47a35b;
      pppppiStack_160 = (int *****)ppppiVar5;
      pppppiStack_170 = (int *****)(*(code *)(*ppppiVar5)[0x10])();
      if ((int)pppppiStack_170 < 0) {
        pppppiStack_164 = (int *****)0x40;
        pppppiStack_168 = (int *****)&DAT_00470e74;
        pppppiStack_174 = (int *****)0x47a370;
        pppppiStack_16c = (int *****)ppppiVar5;
        __vbaHresultCheckObj();
      }
      ppppiVar5 = local_38;
      pppppiStack_164 = (int *****)&DAT_00470e54;
      pppppiStack_168 = (int *****)0x0;
      pppppiStack_16c = (int *****)0x4;
      pppppiStack_174 = (int *****)0x47a38b;
      pppppiStack_170 = pppppiVar13;
      pppppiStack_174 = (int *****)(*(code *)(*pppppiVar13)[0xe3])();
      pppppiStack_178 = &local_24;
      pppppiStack_17c = (int *****)0x47a392;
      pppppiStack_17c = (int *****)(*pcVar12)();
      pppppiStack_180 = (int *****)local_4c;
      pppppiStack_184 = (int *****)0x47a39d;
      pppppiStack_174 = (int *****)__vbaLateIdCallLd();
      pppppiStack_178 = (int *****)0x47a3a7;
      pppppiStack_178 = (int *****)__vbaCastObjVar();
      pppppiStack_17c = (int *****)&local_28;
      pppppiStack_180 = (int *****)0x47a3ae;
      pppiVar8 = (int ***)(*pcVar12)();
      pppppiStack_180 = (int *****)&local_2c;
      pppppiStack_184 = local_5c;
      local_54 = 1;
      local_5c[0] = (int ****)0x2;
      pppppiStack_18c = (int *****)0x47a3cc;
      pppppiStack_188 = (int *****)pppiVar8;
      pppppiVar15 = (int *****)(*(code *)(*pppiVar8)[9])();
      if ((int)pppppiVar15 < 0) {
        pppppiStack_18c = (int *****)0x24;
        pppppiStack_190 = (int *****)&DAT_00470e54;
        pppppiStack_19c = (int *****)0x47a3e1;
        pppppiStack_198 = pppppiVar15;
        ppppiStack_194 = (int ****)pppiVar8;
        __vbaHresultCheckObj();
      }
      pppppiVar15 = local_2c;
      pppppiStack_18c = &local_30;
      pppppiStack_190 = local_2c;
      ppppiStack_194 = (int ****)0x47a3f0;
      ppppiVar9 = (int ****)(*(code *)(*local_2c)[0xd])();
      if ((int)ppppiVar9 < 0) {
        ppppiStack_194 = (int ****)0x34;
        pppppiStack_198 = (int *****)&DAT_00470e64;
        pppppiStack_19c = pppppiVar15;
        pppppiStack_1a4 = (int *****)0x47a405;
        pppppiStack_1a0 = (int *****)ppppiVar9;
        __vbaHresultCheckObj();
      }
      pppppiStack_198 = &local_3c;
      ppppiStack_194 = local_30;
      local_30 = (int ****)0x0;
      pppiVar8 = *ppppiVar5;
      pppppiStack_19c = (int *****)0x47a41e;
      pppppiStack_19c = (int *****)(*pcVar12)();
      pppppiStack_1a0 = (int *****)ppppiVar5;
      pppppiStack_1a4 = (int *****)0x47a435;
      iVar4 = (*(code *)pppiVar8[0x17])();
      if (iVar4 < 0) {
        pppppiStack_1a4 = (int *****)0x5c;
        pppppiStack_1b4 = (int *****)0x47a44a;
        __vbaHresultCheckObj();
      }
      pppppiStack_1a4 = &local_38;
      pppppiStack_1b4 = (int *****)&local_28;
      pppppiStack_1b8 = &local_24;
      pppppiStack_1bc = (int *****)0x6;
      pppppiStack_1c0 = (int *****)0x47a46a;
      __vbaFreeObjList();
      pppppiStack_1c0 = local_5c;
      pppppiStack_1c4 = (int *****)local_4c;
      pppppiStack_1c8 = (int *****)0x2;
      uStack_1cc = 0x47a47a;
      __vbaFreeVarList();
      pppppiStack_1a4 = pppppiVar13;
      (*(code *)(*pppppiVar13)[0xc2])();
      piVar7 = (int *)(*pcVar12)();
      pppppiStack_1b4 = (int *****)0x2;
      pppppiStack_1bc = (int *****)0x47a49b;
      pppppiStack_1b8 = (int *****)piVar7;
      pppppiStack_1c8 = (int *****)(**(code **)(*piVar7 + 0x40))();
      if ((int)pppppiStack_1c8 < 0) {
        pppppiStack_1bc = (int *****)0x40;
        pppppiStack_1c0 = (int *****)&DAT_00470e74;
        uStack_1cc = 0x47a4b0;
        pppppiStack_1c4 = (int *****)piVar7;
        __vbaHresultCheckObj();
      }
      ppppiVar5 = local_38;
      pppppiStack_1bc = (int *****)&DAT_00470e54;
      pppppiStack_1c0 = (int *****)0x0;
      pppppiStack_1c4 = (int *****)0x4;
      uStack_1cc = 0x47a4cb;
      pppppiStack_1c8 = pppppiVar13;
      uStack_1cc = (*(code *)(*pppppiVar13)[0xe3])();
      pppppiStack_1d0 = &local_24;
      pppppiStack_1d4 = (int *****)0x47a4d2;
      pppppiStack_1d4 = (int *****)(*pcVar12)();
      pppppiStack_1d8 = (int *****)local_4c;
      pppppiStack_1dc = (int *****)0x47a4dd;
      uStack_1cc = __vbaLateIdCallLd();
      pppppiStack_1d0 = (int *****)0x47a4e7;
      pppppiStack_1d0 = (int *****)__vbaCastObjVar();
      pppppiStack_1d4 = (int *****)&local_28;
      pppppiStack_1d8 = (int *****)0x47a4ee;
      piVar7 = (int *)(*pcVar12)();
      pppppiStack_1d8 = (int *****)&local_2c;
      pppppiStack_1dc = local_5c;
      local_54 = 1;
      local_5c[0] = (int ****)0x2;
      ppppiStack_1e4 = (int ****)0x47a50c;
      pppppiStack_1e0 = (int *****)piVar7;
      iVar4 = (**(code **)(*piVar7 + 0x24))();
      if (iVar4 < 0) {
        ppppiStack_1e4 = (int ****)0x24;
        pppppiStack_1e8 = (int *****)&DAT_00470e54;
        pppppiStack_1f4 = (int *****)0x47a521;
        ppppiStack_1f0 = (int ****)iVar4;
        ppppiStack_1ec = (int ****)piVar7;
        __vbaHresultCheckObj();
      }
      pppppiVar15 = local_2c;
      ppppiStack_1e4 = (int ****)&local_30;
      pppppiStack_1e8 = local_2c;
      ppppiStack_1ec = (int ****)0x47a530;
      pppppiVar6 = (int *****)(*(code *)(*local_2c)[0xd])();
      if ((int)pppppiVar6 < 0) {
        ppppiStack_1ec = (int ****)0x34;
        ppppiStack_1f0 = (int ****)&DAT_00470e64;
        pppppiStack_1f4 = pppppiVar15;
        pppppiStack_1fc = (int *****)0x47a545;
        pppppiStack_1f8 = pppppiVar6;
        __vbaHresultCheckObj();
      }
      ppppiStack_1f0 = (int ****)&local_3c;
      ppppiStack_1ec = local_30;
      local_30 = (int ****)0x0;
      pppiVar8 = *ppppiVar5;
      pppppiStack_1f4 = (int *****)0x47a55e;
      pppppiStack_1f4 = (int *****)(*pcVar12)();
      pppppiStack_1f8 = (int *****)ppppiVar5;
      pppppiStack_1fc = (int *****)0x47a575;
      pppppiStack_208 = (int *****)(*(code *)pppiVar8[0x17])();
      if ((int)pppppiStack_208 < 0) {
        pppppiStack_1fc = (int *****)0x5c;
        pppppiStack_200 = (int *****)&DAT_00470e84;
        pppppiStack_204 = (int *****)ppppiVar5;
        pppppiStack_20c = (int *****)0x47a58a;
        __vbaHresultCheckObj();
      }
      pppppiStack_1fc = &local_38;
      pppppiStack_200 = &local_3c;
      pppppiStack_204 = &local_34;
      pppppiStack_208 = (int *****)&local_2c;
      pppppiStack_20c = (int *****)&local_28;
      pppppiStack_210 = &local_24;
      pppppiStack_214 = (int *****)0x6;
      pppppiStack_218 = (int *****)0x47a5aa;
      __vbaFreeObjList();
      pppppiStack_218 = local_5c;
      pppppiStack_21c = (int *****)local_4c;
      pppppiStack_220 = (int *****)0x2;
      pppppiStack_224 = (int *****)0x47a5ba;
      __vbaFreeVarList();
      pppppiStack_1fc = (int *****)0x47a5c8;
      DAT_0049107a = __vbaUI1I2();
      pppppiStack_200 = (int *****)0x47a5d6;
      pppppiStack_1fc = pppppiVar13;
      pppppiStack_200 = (int *****)(*(code *)(*pppppiVar13)[199])();
      pppppiStack_204 = &local_24;
      pppppiStack_208 = (int *****)0x47a5dd;
      ppppiVar5 = (int ****)(*pcVar12)();
      pppppiStack_208 = (int *****)0xffffffff;
      pppppiStack_210 = (int *****)0x47a5ea;
      pppppiStack_20c = (int *****)ppppiVar5;
      ppppiVar9 = (int ****)(*(code *)(*ppppiVar5)[0x23])();
      if ((int)ppppiVar9 < 0) {
        pppppiStack_210 = (int *****)0x8c;
        pppppiStack_214 = (int *****)&DAT_00471378;
        pppppiStack_220 = (int *****)0x47a602;
        pppppiStack_21c = (int *****)ppppiVar9;
        pppppiStack_218 = (int *****)ppppiVar5;
        __vbaHresultCheckObj();
      }
      pppppiStack_210 = (int *****)0x47a60b;
      __vbaFreeObj();
      pppppiStack_210 = (int *****)0x47a618;
      local_c0[0] = __vbaUI1I2();
      pppppiStack_210 = (int *****)local_c0;
      pppppiStack_218 = (int *****)0x47a62e;
      pppppiStack_214 = pppppiVar13;
      ppppiVar5 = (int ****)(*(code *)(*pppppiVar13)[0x1c0])();
      if ((int)ppppiVar5 < 0) {
        pppppiStack_218 = (int *****)0x700;
        pppppiStack_21c = (int *****)&DAT_00470614;
        pppppiStack_224 = (int *****)ppppiVar5;
        pppppiStack_220 = pppppiVar13;
        __vbaHresultCheckObj();
      }
      pppppiStack_218 = (int *****)0x47a64b;
      local_c0[0] = __vbaUI1I2();
      pppppiStack_218 = (int *****)local_c0;
      pppppiStack_220 = (int *****)0x47a661;
      pppppiStack_21c = pppppiVar13;
      iVar4 = (*(code *)(*pppppiVar13)[0x1c2])();
      if (iVar4 < 0) {
        pppppiStack_220 = (int *****)0x708;
        pppppiStack_224 = (int *****)&DAT_00470614;
        __vbaHresultCheckObj(iVar4,pppppiVar13);
      }
      local_8c = 0xb;
      local_84 = (uint *)0x0;
      pppppiStack_224 = (int *****)0x0;
      pppppiStack_220 = local_80;
      uVar11 = (*(code *)(*pppppiVar13)[0xdd])(pppppiVar13,0x80010007,0xb,local_88);
      uVar11 = (*pcVar12)(&local_24,uVar11);
      __vbaLateIdSt(uVar11);
      __vbaFreeObj();
      return;
    }
    pppppiStack_13c = (int *****)0x479cd1;
    pppppiStack_138 = pppppiVar13;
    pppppiStack_13c = (int *****)(*(code *)(*pppppiVar13)[0xc6])();
    pppppiStack_140 = &local_24;
    pppppiStack_144 = (int *****)0x479cd8;
    ppppiVar5 = (int ****)(*pcVar12)();
    pppppiStack_144 = (int *****)&local_28;
    pppppiStack_148 = (int *****)CONCAT22((short)((uint)ppppiVar5 >> 0x10),(ushort)(byte)local_1c);
    pppppiStack_150 = (int *****)0x479cea;
    pppppiStack_14c = (int *****)ppppiVar5;
    iVar4 = (*(code *)(*ppppiVar5)[0x10])();
    if (iVar4 < 0) {
      pppppiStack_150 = (int *****)0x40;
      pppppiStack_154 = (int *****)&DAT_00470e74;
      pppppiStack_160 = (int *****)0x479cff;
      pppppiStack_15c = (int *****)iVar4;
      pppppiStack_158 = (int *****)ppppiVar5;
      __vbaHresultCheckObj();
    }
    pppppiVar15 = local_28;
    pppppiStack_150 = (int *****)0xffffffff;
    pppppiStack_154 = local_28;
    pppppiStack_158 = (int *****)0x479d0f;
    pppppiStack_164 = (int *****)(*(code *)(*local_28)[0x27])();
    if ((int)pppppiStack_164 < 0) {
      pppppiStack_158 = (int *****)0x9c;
      pppppiStack_15c = (int *****)&DAT_00471330;
      pppppiStack_160 = pppppiVar15;
      pppppiStack_168 = (int *****)0x479d27;
      __vbaHresultCheckObj();
    }
    pppppiStack_158 = (int *****)&local_28;
    pppppiStack_15c = &local_24;
    pppppiStack_160 = (int *****)0x2;
    pppppiStack_164 = (int *****)0x479d37;
    __vbaFreeObjList();
    pppppiStack_15c = (int *****)0x479d43;
    pppppiStack_158 = pppppiVar13;
    pppppiStack_15c = (int *****)(*(code *)(*pppppiVar13)[0xc4])();
    pppppiStack_160 = &local_34;
    pppppiStack_164 = (int *****)0x479d4a;
    pppppiVar15 = (int *****)(*pcVar12)();
    pppppiStack_168 = (int *****)CONCAT22(extraout_var_01,(ushort)(byte)local_1c);
    pppppiStack_164 = &local_38;
    pppppiStack_170 = (int *****)0x479d5c;
    pppppiStack_16c = pppppiVar15;
    pppppiStack_17c = (int *****)(*(code *)(*pppppiVar15)[0x10])();
    if ((int)pppppiStack_17c < 0) {
      pppppiStack_170 = (int *****)0x40;
      pppppiStack_174 = (int *****)&DAT_00470e74;
      pppppiStack_180 = (int *****)0x479d71;
      pppppiStack_178 = pppppiVar15;
      __vbaHresultCheckObj();
    }
    ppppiVar5 = local_38;
    pppppiStack_170 = (int *****)&DAT_00470e54;
    pppppiStack_174 = (int *****)0x0;
    pppppiStack_178 = (int *****)0x4;
    pppppiStack_180 = (int *****)0x479d8c;
    pppppiStack_17c = pppppiVar13;
    pppppiStack_180 = (int *****)(*(code *)(*pppppiVar13)[0xde])();
    pppppiStack_184 = &local_24;
    pppppiStack_188 = (int *****)0x479d93;
    pppppiStack_188 = (int *****)(*pcVar12)();
    pppppiStack_18c = (int *****)local_4c;
    pppppiStack_190 = (int *****)0x479d9e;
    pppppiStack_180 = (int *****)__vbaLateIdCallLd();
    pppppiStack_184 = (int *****)0x479da8;
    pppppiStack_184 = (int *****)__vbaCastObjVar();
    pppppiStack_188 = (int *****)&local_28;
    pppppiStack_18c = (int *****)0x479daf;
    pppiVar8 = (int ***)(*pcVar12)();
    local_84 = &local_1c;
    pppppiStack_18c = (int *****)&local_2c;
    pppppiStack_190 = (int *****)&local_8c;
    local_8c = 0x4011;
    pppppiStack_198 = (int *****)0x479dd2;
    ppppiStack_194 = (int ****)pppiVar8;
    pppppiVar15 = (int *****)(*(code *)(*pppiVar8)[9])();
    if ((int)pppppiVar15 < 0) {
      pppppiStack_198 = (int *****)0x24;
      pppppiStack_19c = (int *****)&DAT_00470e54;
      pppppiStack_1a4 = pppppiVar15;
      pppppiStack_1a0 = (int *****)pppiVar8;
      __vbaHresultCheckObj();
    }
    pppppiStack_198 = &local_30;
    pppppiStack_19c = local_2c;
    pppppiStack_1a0 = (int *****)0x479df6;
    iVar4 = (*(code *)(*local_2c)[0xd])();
    if (iVar4 < 0) {
      pppppiStack_1a0 = (int *****)0x34;
      pppppiStack_1a4 = (int *****)&DAT_00470e64;
      __vbaHresultCheckObj();
    }
    pppppiStack_1a4 = &local_3c;
    pppppiStack_1a0 = (int *****)local_30;
    local_30 = (int ****)0x0;
    pppiVar8 = *ppppiVar5;
    (*pcVar12)();
    pppppiStack_1bc = (int *****)(*(code *)pppiVar8[0x17])();
    if ((int)pppppiStack_1bc < 0) {
      pppppiStack_1b4 = (int *****)&DAT_00470e84;
      pppppiStack_1b8 = (int *****)ppppiVar5;
      pppppiStack_1c0 = (int *****)0x479e50;
      __vbaHresultCheckObj();
    }
    pppppiStack_1b4 = &local_3c;
    pppppiStack_1b8 = &local_34;
    pppppiStack_1bc = (int *****)&local_2c;
    pppppiStack_1c0 = (int *****)&local_28;
    pppppiStack_1c4 = &local_24;
    pppppiStack_1c8 = (int *****)0x6;
    uStack_1cc = 0x479e70;
    __vbaFreeObjList();
    __vbaFreeVar();
    pppppiStack_1b4 = (int *****)0x479e85;
    FUN_00489260((byte *)&local_1c);
    pppppiStack_1b8 = (int *****)0x479e8e;
    pppppiStack_1b4 = pppppiVar13;
    pppppiStack_1b8 = (int *****)(*(code *)(*pppppiVar13)[0xc4])();
    pppppiStack_1bc = &local_24;
    pppppiStack_1c0 = (int *****)0x479e95;
    piVar7 = (int *)(*pcVar12)();
    pppppiStack_1c0 = (int *****)&local_28;
    pppppiStack_1c4 = (int *****)CONCAT22((short)((uint)piVar7 >> 0x10),(ushort)(byte)local_1c);
    uStack_1cc = 0x479ea7;
    pppppiStack_1c8 = (int *****)piVar7;
    ppppiVar5 = (int ****)(**(code **)(*piVar7 + 0x40))();
    if ((int)ppppiVar5 < 0) {
      uStack_1cc = 0x40;
      pppppiStack_1d0 = (int *****)&DAT_00470e74;
      pppppiStack_1dc = (int *****)0x479ebc;
      pppppiStack_1d8 = (int *****)ppppiVar5;
      pppppiStack_1d4 = (int *****)piVar7;
      __vbaHresultCheckObj();
    }
    pppppiVar15 = local_28;
    uStack_1cc = 0xffffffff;
    pppppiStack_1d0 = local_28;
    pppppiStack_1d4 = (int *****)0x479ecc;
    pppppiStack_1e0 = (int *****)(*(code *)(*local_28)[0x23])();
    if ((int)pppppiStack_1e0 < 0) {
      pppppiStack_1d4 = (int *****)0x8c;
      pppppiStack_1d8 = (int *****)&DAT_00470e84;
      pppppiStack_1dc = pppppiVar15;
      ppppiStack_1e4 = (int ****)0x479ee4;
      __vbaHresultCheckObj();
    }
    pppppiStack_1d4 = (int *****)&local_28;
    pppppiStack_1d8 = &local_24;
    pppppiStack_1dc = (int *****)0x2;
    pppppiStack_1e0 = (int *****)0x479ef4;
    __vbaFreeObjList();
    pppppiStack_1d8 = (int *****)0x479f00;
    pppppiStack_1d4 = pppppiVar13;
    pppppiStack_1d8 = (int *****)(*(code *)(*pppppiVar13)[0xc5])();
    pppppiStack_1dc = &local_34;
    pppppiStack_1e0 = (int *****)0x479f07;
    ppppiVar5 = (int ****)(*pcVar12)();
    ppppiStack_1e4 = (int ****)CONCAT22(extraout_var_02,(ushort)(byte)local_1c);
    pppppiStack_1e0 = &local_38;
    ppppiStack_1ec = (int ****)0x479f19;
    pppppiStack_1e8 = (int *****)ppppiVar5;
    pppppiStack_1f8 = (int *****)(*(code *)(*ppppiVar5)[0x10])();
    if ((int)pppppiStack_1f8 < 0) {
      ppppiStack_1ec = (int ****)0x40;
      ppppiStack_1f0 = (int ****)&DAT_00470e74;
      pppppiStack_1fc = (int *****)0x479f2e;
      pppppiStack_1f4 = (int *****)ppppiVar5;
      __vbaHresultCheckObj();
    }
    ppppiVar5 = local_38;
    ppppiStack_1ec = (int ****)&DAT_00470e54;
    ppppiStack_1f0 = (int ****)0x0;
    pppppiStack_1f4 = (int *****)0x4;
    pppppiStack_1fc = (int *****)0x479f49;
    pppppiStack_1f8 = pppppiVar13;
    pppppiStack_1fc = (int *****)(*(code *)(*pppppiVar13)[0xde])();
    pppppiStack_200 = &local_24;
    pppppiStack_204 = (int *****)0x479f50;
    pppppiStack_204 = (int *****)(*pcVar12)();
    pppppiStack_208 = (int *****)local_4c;
    pppppiStack_20c = (int *****)0x479f5b;
    pppppiStack_1fc = (int *****)__vbaLateIdCallLd();
    pppppiStack_200 = (int *****)0x479f65;
    pppppiStack_200 = (int *****)__vbaCastObjVar();
    pppppiStack_204 = (int *****)&local_28;
    pppppiStack_208 = (int *****)0x479f6c;
    piVar7 = (int *)(*pcVar12)();
    local_84 = &local_1c;
    pppppiStack_208 = (int *****)&local_2c;
    pppppiStack_20c = (int *****)&local_8c;
    local_8c = 0x4011;
    pppppiStack_214 = (int *****)0x479f8f;
    pppppiStack_210 = (int *****)piVar7;
    ppppiVar9 = (int ****)(**(code **)(*piVar7 + 0x24))();
    if ((int)ppppiVar9 < 0) {
      pppppiStack_214 = (int *****)0x24;
      pppppiStack_218 = (int *****)&DAT_00470e54;
      pppppiStack_224 = (int *****)0x479fa4;
      pppppiStack_220 = (int *****)ppppiVar9;
      pppppiStack_21c = (int *****)piVar7;
      __vbaHresultCheckObj();
    }
    pppppiVar15 = local_2c;
    pppppiStack_214 = &local_30;
    pppppiStack_218 = local_2c;
    pppppiStack_21c = (int *****)0x479fb3;
    iVar4 = (*(code *)(*local_2c)[0xd])();
    if (iVar4 < 0) {
      pppppiStack_21c = (int *****)0x34;
      pppppiStack_220 = (int *****)&DAT_00470e64;
      pppppiStack_224 = pppppiVar15;
      __vbaHresultCheckObj(iVar4);
    }
    pppppiStack_220 = &local_3c;
    pppppiStack_21c = (int *****)local_30;
    local_30 = (int ****)0x0;
    pppiVar8 = *ppppiVar5;
    pppppiStack_224 = (int *****)0x479fe1;
    pppppiStack_224 = (int *****)(*pcVar12)();
    iVar4 = (*(code *)pppiVar8[0x17])(ppppiVar5);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,ppppiVar5,&DAT_00470e84,0x5c);
    }
    __vbaFreeObjList(6,&local_24,&local_28,&local_2c,&local_34,&local_3c,&local_38);
    __vbaFreeVar();
    uVar11 = (*(code *)(*pppppiVar13)[0xc5])(pppppiVar13);
    piVar7 = (int *)(*pcVar12)(&local_24,uVar11);
    iVar4 = (**(code **)(*piVar7 + 0x40))(piVar7,local_1c & 0xff,&local_28);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar7,&DAT_00470e74,0x40);
    }
    pppppiVar15 = local_28;
    iVar4 = (*(code *)(*local_28)[0x23])(local_28,0xffffffff);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,pppppiVar15,&DAT_00470e84,0x8c);
    }
    __vbaFreeObjList(2,&local_24,&local_28);
    uVar11 = (*(code *)(*pppppiVar13)[0xc5])(pppppiVar13);
    piVar7 = (int *)(*pcVar12)(&local_24,uVar11);
    iVar4 = (**(code **)(*piVar7 + 0x40))(piVar7,local_1c & 0xff,&local_28);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar7,&DAT_00470e74,0x40);
    }
    pppppiVar15 = local_28;
    uVar14 = (local_1c & 0xff) - 1;
    if (5 < uVar14) {
      __vbaGenerateBoundsError();
    }
    uVar10 = (local_1c & 0xff) - 1;
    local_84 = *(uint **)(DAT_00491034 + 0x4c + uVar14 * 4);
    local_8c = 4;
    if (5 < uVar10) {
      __vbaGenerateBoundsError();
    }
    iVar4 = (*(code *)(*pppppiVar15)[0x4c])
                      (pppppiVar15,*(undefined4 *)(DAT_00491034 + 0x34 + uVar10 * 4),local_8c,
                       local_88,local_84,local_80,10,local_98,0x80020004,local_90,10,local_a8,
                       0x80020004,local_a0);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,pppppiVar15,&DAT_00470e84,0x130);
    }
    __vbaFreeObjList(2,&local_24,&local_28);
    uVar11 = (*(code *)(*pppppiVar13)[0xd6])(pppppiVar13);
    piVar7 = (int *)__vbaObjSet(&local_24,uVar11);
    iVar4 = (**(code **)(*piVar7 + 0x40))(piVar7,local_1c & 0xff,&local_28);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar7,&DAT_00470e74,0x40);
    }
    pppppiVar15 = local_28;
    uVar14 = (local_1c & 0xff) - 1;
    if (5 < uVar14) {
      __vbaGenerateBoundsError();
    }
    iVar4 = (*(code *)(*pppppiVar15)[0x19])
                      (pppppiVar15,*(undefined4 *)(DAT_0049106c + 4 + uVar14 * 0x2c));
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,pppppiVar15,&DAT_00471358,100);
    }
    __vbaFreeObjList(2,&local_24,&local_28);
    uVar11 = (*(code *)(*pppppiVar13)[0xd6])(pppppiVar13);
    piVar7 = (int *)__vbaObjSet(&local_24,uVar11);
    iVar4 = (**(code **)(*piVar7 + 0x40))(piVar7,local_1c & 0xff,&local_28);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar7,&DAT_00470e74,0x40);
    }
    pppppiVar15 = local_28;
    iVar4 = (*(code *)(*local_28)[0x17])(local_28,0xffffffff);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,pppppiVar15,&DAT_00471358,0x5c);
    }
    __vbaFreeObjList(2,&local_24,&local_28);
    bVar2 = (byte)local_1c + 1;
    pcVar12 = __vbaObjSet_exref;
    if (0xfe < (byte)local_1c) break;
    local_1c = CONCAT31(local_1c._1_3_,bVar2);
  }
  goto LAB_0047a73b;
}


