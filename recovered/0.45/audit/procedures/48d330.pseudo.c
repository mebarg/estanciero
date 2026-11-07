/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

/* WARNING: Removing unreachable block (ram,0x0048d71e) */
/* WARNING: Removing unreachable block (ram,0x0048d729) */
/* WARNING: Removing unreachable block (ram,0x0048d72f) */
/* WARNING: Removing unreachable block (ram,0x0048d73a) */
/* WARNING: Removing unreachable block (ram,0x0048d740) */
/* WARNING: Removing unreachable block (ram,0x0048d75d) */
/* WARNING: Removing unreachable block (ram,0x0048d763) */
/* WARNING: Removing unreachable block (ram,0x0048db74) */
/* WARNING: Removing unreachable block (ram,0x0048d792) */

void __cdecl FUN_0048d330(uint param_1)

{
  byte *pbVar1;
  byte bVar2;
  code cVar3;
  code cVar4;
  byte bVar5;
  undefined1 uVar6;
  short sVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  uint *puVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 uVar15;
  code *pcVar16;
  int *piVar17;
  code *pcVar18;
  code *pcVar19;
  code *pcStack_250;
  code *pcStack_24c;
  code *pcStack_248;
  int iStack_244;
  undefined4 uStack_238;
  undefined4 *puStack_234;
  undefined1 *puStack_230;
  void *pvStack_22c;
  undefined1 *puStack_228;
  undefined1 *puStack_224;
  int **ppiStack_220;
  uint uStack_21c;
  undefined4 *puStack_218;
  undefined4 uStack_214;
  int *piStack_210;
  undefined1 *puStack_20c;
  undefined4 *puStack_208;
  undefined4 uStack_204;
  undefined4 *puStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  code *pcStack_1f0;
  int *piStack_1ec;
  uint uStack_1e8;
  byte bStack_1dc;
  byte bStack_1d4;
  byte bStack_1cc;
  undefined4 auStack_1b8 [2];
  undefined2 uStack_1b0;
  undefined4 auStack_1a8 [2];
  undefined2 uStack_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  int **ppiStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  int iStack_184;
  undefined4 uStack_178;
  int *piStack_174;
  int iStack_170;
  int *piStack_16c;
  undefined *puStack_168;
  int *piStack_164;
  int *piStack_160;
  int *piStack_15c;
  int *piStack_158;
  void *pvStack_144;
  undefined1 *puStack_140;
  undefined *puStack_13c;
  int *piStack_138;
  undefined *puStack_134;
  int *piStack_128;
  byte *pbStack_124;
  code *pcStack_120;
  int local_34 [7];
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401656;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff6c;
  local_c = &DAT_00401580;
  local_8 = param_1 & 1;
  piVar17 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar17 + 4))();
  uVar11 = (uint)DAT_0049107a;
  local_34[3] = 0;
  local_34[2] = 0;
  local_34[1] = 0;
  local_34[0] = 0;
  if (5 < uVar11 - 1) {
    __vbaGenerateBoundsError();
  }
  pbVar1 = (byte *)(piVar17 + 0xd);
  *pbVar1 = *(byte *)(DAT_0049106c + 0x10 + (uVar11 - 1) * 0x2c);
  *(byte *)((int)piVar17 + 0x35) = DAT_0049107a;
  (**(code **)(*piVar17 + 0x30c))();
  piVar8 = (int *)__vbaObjSet();
  if (0x29 < *pbVar1) {
    __vbaGenerateBoundsError();
  }
  if (0x29 < *pbVar1) {
    __vbaGenerateBoundsError();
  }
  iVar9 = *piVar8;
  __vbaStrCat();
  __vbaStrMove();
  __vbaStrCat();
  __vbaStrMove();
  iVar9 = (**(code **)(iVar9 + 0x54))();
  if (iVar9 < 0) {
    __vbaHresultCheckObj();
  }
  __vbaFreeStrList();
  __vbaFreeObj();
  (**(code **)(*piVar17 + 0x304))();
  piVar8 = (int *)__vbaObjSet();
  bVar5 = *pbVar1;
  if (0x29 < bVar5) {
    __vbaGenerateBoundsError();
  }
  if (5 < *(byte *)(DAT_00491034 + 0x65 + (uint)bVar5 * 0x74) - 1) {
    __vbaGenerateBoundsError();
  }
  iVar9 = (**(code **)(*piVar8 + 0x54))();
  if (iVar9 < 0) {
    __vbaHresultCheckObj();
  }
  __vbaFreeObj();
  (**(code **)(*piVar17 + 0x304))();
  piVar8 = (int *)__vbaObjSet();
  if (DAT_00491010 == (int *)0x0) {
    __vbaNew2();
  }
  (**(code **)(*DAT_00491010 + 0x318))();
  piVar10 = (int *)__vbaObjSet();
  if (0x29 < *pbVar1) {
    __vbaGenerateBoundsError();
  }
  iVar9 = (**(code **)(*piVar10 + 0x40))();
  if (iVar9 < 0) {
    __vbaHresultCheckObj();
  }
  iVar9 = (**(code **)(iRam00000000 + 0x60))();
  if (iVar9 < 0) {
    __vbaHresultCheckObj();
  }
  iVar9 = (**(code **)(*piVar8 + 100))();
  if (iVar9 < 0) {
    __vbaHresultCheckObj();
  }
  __vbaFreeObjList();
  if (0x29 < *pbVar1) {
    __vbaGenerateBoundsError();
  }
  __vbaStrCopy();
  pcVar18 = __vbaStrCmp_exref;
  iVar9 = __vbaStrCmp();
  if (iVar9 == 0) {
    if (0x29 < *pbVar1) {
      __vbaGenerateBoundsError();
    }
    iVar9 = (**(code **)(*piVar17 + 0x6f8))();
    if (iVar9 < 0) {
      __vbaHresultCheckObj();
    }
    __vbaVarMove();
    if (0x29 < *pbVar1) {
      __vbaGenerateBoundsError();
    }
    iVar9 = (**(code **)(*piVar17 + 0x6f8))();
    if (iVar9 < 0) {
      puStack_134 = &LAB_004713f8;
      puStack_140 = (undefined1 *)0x48d713;
      puStack_13c = (undefined *)iVar9;
      piStack_138 = piVar17;
      __vbaHresultCheckObj();
    }
    bVar5 = *pbVar1;
    if (0x29 < bVar5) {
      __vbaGenerateBoundsError();
    }
    bVar2 = *pbVar1;
    if (0x29 < bVar2) {
      __vbaGenerateBoundsError();
    }
    uVar11 = (uint)*(byte *)(DAT_00491034 + 0x66 + (uint)bVar2 * 0x74);
    if (5 < uVar11) {
      __vbaGenerateBoundsError();
    }
    piVar17[0xe] = *(int *)(DAT_00491034 + 0x14 + uVar11 * 4 + (uint)bVar5 * 0x74);
  }
  else {
    iVar9 = __vbaStrCmp();
    if (iVar9 == 0) {
      bVar5 = *pbVar1;
      if (0x29 < bVar5) {
        __vbaGenerateBoundsError();
      }
      uVar11 = *(byte *)(DAT_00491034 + 0x65 + (uint)bVar5 * 0x74) - 1;
      if (5 < uVar11) {
        __vbaGenerateBoundsError();
      }
      iVar9 = (short)(ushort)*(byte *)(DAT_0049106c + 0x1c + uVar11 * 0x2c) * 500;
      sVar7 = (short)iVar9;
      if (sVar7 != iVar9) {
LAB_0048db79:
        __vbaErrorOverflow();
        puStack_140 = &LAB_00401656;
        pvStack_144 = ExceptionList;
        puStack_13c = (undefined *)&pcStack_1f0;
        pcStack_1f0 = pcVar18;
        piStack_138 = (int *)&DAT_00401590;
        puStack_134 = (undefined *)0x0;
        uStack_1f8 = 0x48dbba;
        ExceptionList = &pvStack_144;
        piStack_1ec = piVar17;
        uStack_1e8 = uVar11;
        (**(code **)(*piStack_128 + 4))();
        piStack_15c = (int *)0x0;
        piStack_160 = (int *)((uint)piStack_160 & 0xffffff00);
        piStack_164 = (int *)((uint)piStack_164 & 0xffffff00);
        uStack_178 = 0;
        uStack_188 = 0;
        auStack_1a8[0] = 0;
        auStack_1b8[0] = 0;
        ppiStack_190 = (int **)&DAT_00473370;
        uStack_198 = 8;
        uStack_1f8 = 0x48dbf4;
        __vbaVarDup();
        bVar5 = *pbStack_124;
        if (0x29 < bVar5) {
          uStack_1f8 = 0x48dc08;
          __vbaGenerateBoundsError();
        }
        uStack_1f8 = 0;
        puStack_200 = &uStack_178;
        uStack_1fc = 0xffffffff;
        uStack_204 = *(undefined4 *)(DAT_00491034 + 0x70 + (uint)bVar5 * 0x74);
        puStack_208 = &uStack_188;
        puStack_20c = (undefined1 *)0x48dc30;
        Ordinal_711();
        puStack_20c = (undefined1 *)0x48dc3c;
        __vbaVarMove();
        puStack_20c = (undefined1 *)0x48dc45;
        __vbaFreeVar();
        pcVar18 = __vbaRefVarAry_exref;
        puStack_20c = &stack0xfffffeac;
        piStack_210 = (int *)0x48dc51;
        puVar12 = (uint *)__vbaRefVarAry();
        pcVar19 = __vbaUbound_exref;
        piStack_210 = (int *)*puVar12;
        uStack_214 = 1;
        puStack_218 = (undefined4 *)0x48dc5e;
        iVar9 = __vbaUbound();
        pcVar16 = __vbaUI1I4_exref;
        if (!SCARRY4(iVar9,1)) {
          puStack_218 = (undefined4 *)0x48dc71;
          bVar5 = __vbaUI1I4();
          pcVar19 = __vbaGenerateBoundsError_exref;
          puStack_168 = (undefined *)CONCAT31(puStack_168._1_3_,bVar5);
          pcVar16 = pcStack_120;
          if (1 < bVar5) {
            puStack_218 = (undefined4 *)&stack0xfffffeac;
            uStack_21c = 0x48dc82;
            puVar13 = (undefined4 *)__vbaRefVarAry();
            uStack_21c = *puVar13;
            ppiStack_220 = (int **)0x1;
            puStack_224 = (undefined1 *)0x48dc89;
            __vbaUbound();
            puStack_224 = (undefined1 *)0x48dc8d;
            bStack_1cc = __vbaUI1I4();
            puStack_224 = (undefined1 *)0x48dc9b;
            bVar5 = __vbaUI1I2();
            piStack_164 = (int *)CONCAT31(piStack_164._1_3_,bVar5);
            do {
              pcVar19 = __vbaGenerateBoundsError_exref;
              if (bStack_1cc < bVar5) {
                if ((byte)piStack_160 == (char)puStack_168) {
LAB_0048de6f:
                  piStack_15c = (int *)0xffffffff;
                }
LAB_0048de76:
                puStack_218 = (undefined4 *)&LAB_0048e02c;
                uStack_21c = 0x48e02b;
                __vbaFreeVar();
                return;
              }
              pcVar18 = (code *)((byte)*pcStack_120 - 1);
              if ((code *)0x5 < pcVar18) {
                puStack_218 = (undefined4 *)0x48dcc1;
                __vbaGenerateBoundsError();
              }
              bStack_1d4 = *(byte *)(DAT_0049106c + 0x12 + (int)pcVar18 * 0x2c);
              puStack_218 = (undefined4 *)0x48dce2;
              bVar5 = __vbaUI1I2();
              while( true ) {
                piStack_158 = (int *)CONCAT31(piStack_158._1_3_,bVar5);
                if (bStack_1d4 < bVar5) break;
                if (5 < (byte)*pcStack_120 - 1) {
                  puStack_218 = (undefined4 *)0x48dcff;
                  (*pcVar19)();
                }
                cVar3 = *pcStack_120;
                if (5 < (byte)cVar3 - 1) {
                  puStack_218 = (undefined4 *)0x48dd0d;
                  (*pcVar19)();
                }
                iVar9 = ((byte)cVar3 - 1) * 0x2c;
                if (*(int *)(iVar9 + 0xc + DAT_0049106c) == 0) {
LAB_0048ddb6:
                  puStack_218 = (undefined4 *)0x48ddb8;
                  iVar14 = (*pcVar19)();
                }
                else {
                  cVar3 = *pcStack_120;
                  if (5 < (byte)cVar3 - 1) {
                    puStack_218 = (undefined4 *)0x48dd36;
                    (*pcVar19)();
                  }
                  iVar9 = ((byte)cVar3 - 1) * 0x2c;
                  if (**(short **)(iVar9 + 0xc + DAT_0049106c) != 1) goto LAB_0048ddb6;
                  cVar3 = *pcStack_120;
                  if (5 < (byte)cVar3 - 1) {
                    puStack_218 = (undefined4 *)0x48dd5d;
                    (*pcVar19)();
                  }
                  cVar4 = *pcStack_120;
                  uVar11 = ((uint)piStack_158 & 0xff) -
                           *(int *)(*(int *)(DAT_0049106c + 0xc + ((byte)cVar3 - 1) * 0x2c) + 0x14);
                  if (5 < (byte)cVar4 - 1) {
                    puStack_218 = (undefined4 *)0x48dd8d;
                    __vbaGenerateBoundsError();
                  }
                  iVar9 = ((byte)cVar4 - 1) * 0x2c;
                  if (*(uint *)(*(int *)(iVar9 + 0xc + DAT_0049106c) + 0x10) <= uVar11) {
                    puStack_218 = (undefined4 *)0x48ddab;
                    __vbaGenerateBoundsError();
                  }
                  iVar14 = uVar11 * 2;
                  pcVar19 = __vbaGenerateBoundsError_exref;
                }
                uStack_1a0 = *(undefined2 *)
                              (*(int *)(*(int *)(iVar9 + 0xc + DAT_0049106c) + 0xc) + iVar14);
                puStack_218 = auStack_1a8;
                uStack_198 = 0x4011;
                ppiStack_220 = &piStack_164;
                pvStack_22c = (void *)0x1;
                auStack_1a8[0] = 0x8002;
                puStack_228 = (undefined1 *)0x4011;
                puStack_224 = (undefined1 *)uStack_194;
                puStack_230 = &stack0xfffffeac;
                uStack_21c = uStack_18c;
                puStack_234 = &uStack_178;
                uStack_238 = 0x48de0c;
                ppiStack_190 = ppiStack_220;
                uStack_21c = __vbaVarIndexLoad();
                ppiStack_220 = (int **)0x48de16;
                pcVar18 = (code *)__vbaVarTstEq();
                ppiStack_220 = (int **)0x48de21;
                __vbaFreeVar();
                if ((short)pcVar18 != 0) {
                  if (SCARRY2((ushort)(byte)piStack_160,1)) goto LAB_0048e055;
                  puStack_218 = (undefined4 *)0x48de3b;
                  uVar6 = __vbaUI1I2();
                  piStack_160 = (int *)CONCAT31(piStack_160._1_3_,uVar6);
                }
                bVar5 = (byte)piStack_158 + 1;
                if (0xfe < (byte)piStack_158) goto LAB_0048e055;
              }
              bVar5 = (byte)piStack_164 + 1;
              if (0xfe < (byte)piStack_164) goto LAB_0048e055;
              piStack_164 = (int *)CONCAT31(piStack_164._1_3_,bVar5);
            } while( true );
          }
          cVar3 = *pcStack_120;
          if (5 < (byte)cVar3 - 1) {
            puStack_218 = (undefined4 *)0x48de97;
            __vbaGenerateBoundsError();
          }
          bStack_1dc = *(byte *)(DAT_0049106c + 0x12 + ((byte)cVar3 - 1) * 0x2c);
          puStack_218 = (undefined4 *)0x48deb8;
          bVar5 = __vbaUI1I2();
          do {
            piStack_158 = (int *)CONCAT31(piStack_158._1_3_,bVar5);
            if (bStack_1dc < bVar5) goto LAB_0048de76;
            if (5 < (byte)*pcStack_120 - 1) {
              puStack_218 = (undefined4 *)0x48ded1;
              (*pcVar19)();
            }
            cVar3 = *pcStack_120;
            if (5 < (byte)cVar3 - 1) {
              puStack_218 = (undefined4 *)0x48dedf;
              (*pcVar19)();
            }
            iVar9 = ((byte)cVar3 - 1) * 0x2c;
            if (*(int *)(iVar9 + 0xc + DAT_0049106c) == 0) {
LAB_0048df87:
              puStack_218 = (undefined4 *)0x48df89;
              iVar14 = (*pcVar19)();
            }
            else {
              cVar3 = *pcStack_120;
              if (5 < (byte)cVar3 - 1) {
                puStack_218 = (undefined4 *)0x48df08;
                (*pcVar19)();
              }
              iVar9 = ((byte)cVar3 - 1) * 0x2c;
              if (**(short **)(iVar9 + 0xc + DAT_0049106c) != 1) goto LAB_0048df87;
              cVar3 = *pcStack_120;
              if (5 < (byte)cVar3 - 1) {
                puStack_218 = (undefined4 *)0x48df2f;
                (*pcVar19)();
              }
              uVar11 = ((uint)piStack_158 & 0xff) -
                       *(int *)(*(int *)(DAT_0049106c + 0xc + ((byte)cVar3 - 1) * 0x2c) + 0x14);
              cVar3 = *pcStack_120;
              if (5 < (byte)cVar3 - 1) {
                puStack_218 = (undefined4 *)0x48df5e;
                __vbaGenerateBoundsError();
              }
              iVar9 = ((byte)cVar3 - 1) * 0x2c;
              if (*(uint *)(*(int *)(iVar9 + 0xc + DAT_0049106c) + 0x10) <= uVar11) {
                puStack_218 = (undefined4 *)0x48df7c;
                __vbaGenerateBoundsError();
              }
              iVar14 = uVar11 * 2;
              pcVar19 = __vbaGenerateBoundsError_exref;
            }
            uStack_1b0 = *(undefined2 *)
                          (*(int *)(*(int *)(iVar9 + 0xc + DAT_0049106c) + 0xc) + iVar14);
            puStack_218 = auStack_1b8;
            uStack_198 = 2;
            ppiStack_190 = (int **)0x0;
            pvStack_22c = (void *)0x1;
            auStack_1b8[0] = 0x8002;
            puStack_228 = (undefined1 *)0x2;
            puStack_224 = (undefined1 *)uStack_194;
            puStack_230 = &stack0xfffffeac;
            ppiStack_220 = (int **)0x0;
            uStack_21c = uStack_18c;
            puStack_234 = &uStack_178;
            uStack_238 = 0x48dfe2;
            uStack_21c = __vbaVarIndexLoad();
            ppiStack_220 = (int **)0x48dfec;
            pcVar18 = (code *)__vbaVarTstEq();
            ppiStack_220 = (int **)0x48dff7;
            __vbaFreeVar();
            if ((short)pcVar18 != 0) goto LAB_0048de6f;
            bVar5 = (byte)piStack_158 + 1;
          } while ((byte)piStack_158 != -1);
        }
LAB_0048e055:
        puStack_218 = (undefined4 *)0x48e05b;
        __vbaErrorOverflow();
        puStack_228 = &LAB_00401656;
        pvStack_22c = ExceptionList;
        puStack_224 = (undefined1 *)&pcStack_250;
        ppiStack_220 = (int **)&DAT_004015a0;
        uStack_21c = (uint)piStack_210 & 1;
        piVar17 = (int *)((uint)piStack_210 & 0xfffffffe);
        ExceptionList = &pvStack_22c;
        pcStack_250 = pcVar19;
        pcStack_24c = pcVar18;
        pcStack_248 = pcVar16;
        puStack_218 = (undefined4 *)&stack0xfffffed0;
        piStack_210 = piVar17;
        (**(code **)(*piVar17 + 4))(piVar17);
        puStack_230 = (undefined1 *)0x0;
        if (DAT_00491714 == (int *)0x0) {
          __vbaNew2(&LAB_00470d04,&DAT_00491714);
        }
        piVar8 = DAT_00491714;
        iStack_244 = *DAT_00491714;
        uVar15 = __vbaObjSetAddref(&puStack_230,piVar17);
        iVar9 = (**(code **)(iStack_244 + 0x10))(piVar8,uVar15);
        if (iVar9 < 0) {
          __vbaHresultCheckObj(iVar9,piVar8,&DAT_00470cf4,0x10);
        }
        __vbaFreeObj();
        return;
      }
    }
    else {
      puStack_134 = &DAT_004713b8;
      piStack_138 = (int *)0x48d88b;
      iVar9 = __vbaStrCmp();
      if (iVar9 != 0) goto LAB_0048d900;
      bVar5 = *pbVar1;
      if (0x29 < bVar5) {
        __vbaGenerateBoundsError();
      }
      uVar11 = *(byte *)(DAT_00491034 + 0x65 + (uint)bVar5 * 0x74) - 1;
      if (5 < uVar11) {
        __vbaGenerateBoundsError();
      }
      iVar9 = (int)(short)((ushort)*(byte *)(DAT_0049106c + 0x1d + uVar11 * 0x2c) * 100) *
              (int)(short)(ushort)DAT_0049108c;
      sVar7 = (short)iVar9;
      if (sVar7 != iVar9) goto LAB_0048db79;
    }
    piVar17[0xe] = (int)(float)(int)sVar7;
  }
LAB_0048d900:
  puStack_134 = (undefined *)0x48d909;
  puStack_134 = (undefined *)(**(code **)(*piVar17 + 0x314))();
  piStack_138 = local_34;
  puStack_13c = (undefined *)0x48d914;
  piVar8 = (int *)__vbaObjSet();
  puStack_140 = (undefined1 *)piVar17[0xe];
  puStack_13c = &DAT_0047399c;
  iVar9 = *piVar8;
  pvStack_144 = (void *)0x48d927;
  __vbaStrR4();
  pvStack_144 = (void *)0x48d932;
  pvStack_144 = (void *)__vbaStrMove();
  __vbaStrCat();
  __vbaStrMove();
  piStack_15c = (int *)(**(code **)(iVar9 + 0x54))();
  if ((int)piStack_15c < 0) {
    piStack_160 = (int *)0x48d95e;
    piStack_158 = piVar8;
    __vbaHresultCheckObj();
  }
  piStack_158 = (int *)0x2;
  piStack_15c = (int *)0x48d96e;
  __vbaFreeStrList();
  __vbaFreeObj();
  pbVar1 = (byte *)((int)piVar17 + 0x35);
  bVar5 = *pbVar1;
  if (5 < bVar5 - 1) {
    __vbaGenerateBoundsError();
  }
  if ((float)piVar17[0xe] <= *(float *)(DAT_0049106c + 8 + (bVar5 - 1) * 0x2c)) {
    DAT_00491084 = 0;
    bVar5 = *pbVar1;
    if (5 < bVar5 - 1) {
      __vbaGenerateBoundsError();
    }
    *(undefined4 *)(DAT_0049106c + 0x20 + (bVar5 - 1) * 0x2c) = 0;
  }
  else {
    piStack_158 = (int *)0x48d9b4;
    uVar11 = FUN_004878c0(pbVar1,(float *)(piVar17 + 0xe));
    if ((short)uVar11 != 0) {
      FUN_00487930(pbVar1);
      goto LAB_0048db0b;
    }
    DAT_00491084 = 0xffff;
    (**(code **)(*piVar17 + 0x300))();
    piStack_158 = local_34;
    piStack_15c = (int *)0x48d9e1;
    piVar8 = (int *)__vbaObjSet();
    piStack_15c = (int *)0x0;
    piStack_164 = (int *)0x48d9ee;
    piStack_160 = piVar8;
    iVar9 = (**(code **)(*piVar8 + 0x8c))();
    if (iVar9 < 0) {
      piStack_164 = (int *)0x8c;
      puStack_168 = &DAT_004717a8;
      piStack_174 = (int *)0x48da06;
      iStack_170 = iVar9;
      piStack_16c = piVar8;
      __vbaHresultCheckObj();
    }
    piStack_164 = (int *)0x48da11;
    __vbaFreeObj();
    puStack_168 = (undefined *)0x48da1a;
    piStack_164 = piVar17;
    puStack_168 = (undefined *)(**(code **)(*piVar17 + 0x2fc))();
    piStack_16c = local_34;
    iStack_170 = 0x48da25;
    piStack_174 = (int *)__vbaObjSet();
    iStack_170 = -1;
    uStack_178 = 0x48da32;
    iVar9 = (**(code **)(*piStack_174 + 0x8c))();
    if (iVar9 < 0) {
      uStack_178 = 0x8c;
      uStack_188 = 0x48da4a;
      iStack_184 = iVar9;
      __vbaHresultCheckObj();
    }
    uStack_178 = 0x48da4f;
    __vbaFreeObj();
    bVar5 = *pbVar1;
    if (5 < bVar5 - 1) {
      uStack_178 = 0x48da61;
      __vbaGenerateBoundsError();
    }
    uStack_178 = *(undefined4 *)(DAT_0049106c + 4 + (bVar5 - 1) * 0x2c);
    __vbaStrCat();
    __vbaStrMove();
    iStack_184 = 0x48da91;
    FUN_00487700(local_34 + 2);
    iStack_184 = 0x48da9a;
    __vbaFreeStr();
  }
  if (DAT_00491010 == (int *)0x0) {
    piStack_158 = (int *)0x48dae4;
    __vbaNew2();
  }
  piVar17 = DAT_00491010;
  piVar8 = (int *)(**(code **)(*DAT_00491010 + 0x718))();
  if ((int)piVar8 < 0) {
    piStack_158 = (int *)&DAT_00470614;
    piStack_15c = piVar17;
    piStack_164 = (int *)0x48db0b;
    piStack_160 = piVar8;
    __vbaHresultCheckObj();
  }
LAB_0048db0b:
  local_8 = 0;
  piStack_158 = (int *)0x48db4b;
  __vbaFreeStr();
  piStack_158 = (int *)0x48db54;
  __vbaFreeVar();
  return;
}


