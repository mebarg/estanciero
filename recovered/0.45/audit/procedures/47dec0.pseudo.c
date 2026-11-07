/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

/* WARNING: Type propagation algorithm not settling */

void FUN_0047dec0(uint param_1)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  short sVar4;
  int iVar5;
  int *******pppppppiVar6;
  int ******ppppppiVar7;
  uint *puVar8;
  int *piVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  code *pcVar12;
  uint uVar13;
  int *******pppppppiVar14;
  uint unaff_EDI;
  int *******pppppppiVar15;
  float10 fVar16;
  int *******pppppppiStack_228;
  int *******pppppppiStack_224;
  int *******pppppppiStack_220;
  int *******pppppppiStack_21c;
  int *******pppppppiStack_218;
  int *******pppppppiStack_214;
  int *******pppppppiStack_210;
  int *******pppppppiStack_20c;
  int ******ppppppiStack_208;
  int *******pppppppiStack_204;
  int *******pppppppiStack_200;
  int *******pppppppiStack_1fc;
  int *******pppppppiStack_1f8;
  int *******pppppppiStack_1f4;
  int *******pppppppiStack_1f0;
  int *******pppppppiStack_1ec;
  int *******pppppppiStack_1e8;
  int *******pppppppiStack_1e4;
  int *******pppppppiStack_1e0;
  int *******pppppppiStack_1dc;
  int ******ppppppiStack_1d8;
  int *******pppppppiStack_1d4;
  int *******pppppppiStack_1d0;
  undefined4 local_174 [4];
  undefined4 local_164 [9];
  int *local_140;
  int *local_13c;
  int *******local_130;
  int *******local_120;
  int *******local_11c;
  int *******local_118 [5];
  undefined4 local_104 [2];
  undefined *local_fc;
  undefined4 local_f4 [2];
  undefined4 local_ec;
  int ******local_e4;
  int *******local_e0;
  undefined8 local_dc;
  int ******local_d4 [2];
  undefined4 local_cc;
  int ******local_c4 [2];
  undefined4 local_bc;
  int ******local_b4 [2];
  undefined4 local_ac;
  int ******local_a4 [2];
  undefined4 local_9c;
  undefined4 local_94;
  int *local_90;
  undefined4 local_8c;
  undefined4 local_88;
  int ******local_84;
  int *******local_80;
  int *******local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int ******local_64;
  int *local_60 [4];
  undefined4 local_50 [4];
  uint local_40 [5];
  uint local_2c [5];
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401656;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xfffffe34;
  local_c = &DAT_00401348;
  local_8 = param_1 & 1;
  pppppppiVar15 = (int *******)(param_1 & 0xfffffffe);
  pppppppiStack_1d4 = (int *******)0x47df03;
  ExceptionList = &pvStack_18;
  pppppppiStack_1d0 = pppppppiVar15;
  (*(code *)(*pppppppiVar15)[1])();
  local_2c[0] = local_2c[0] & 0xffffff00;
  local_2c[1] = 0;
  local_40[1] = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  local_50[0] = 0;
  local_60[0] = (int *)0x0;
  local_64 = (int ******)0x0;
  local_68 = 0;
  local_6c = 0;
  local_70 = 0;
  local_74 = 0;
  local_78 = 0;
  local_7c = (int *******)0x0;
  local_80 = (int *******)0x0;
  local_84 = (int ******)0x0;
  local_88 = 0;
  local_8c = 0;
  local_90 = (int *)0x0;
  local_94 = 0;
  local_a4[0] = (int ******)0x0;
  local_b4[0] = (int ******)0x0;
  local_c4[0] = (int ******)0x0;
  local_d4[0] = (int ******)0x0;
  local_e4 = (int ******)0x0;
  local_f4[0] = 0;
  local_104[0] = 0;
  local_118[0] = (int *******)0x0;
  local_11c = (int *******)0x0;
  local_120 = (int *******)0x0;
  local_164[0] = 0;
  local_174[0] = 0;
  if (DAT_00491078 != 0) {
    local_d4[0] = (int ******)0xa;
    local_c4[0] = (int ******)0xa;
    local_b4[0] = (int ******)0xa;
    local_cc = 0x80020004;
    local_bc = 0x80020004;
    local_ac = 0x80020004;
    local_dc = (double)CONCAT44(local_dc._4_4_,&DAT_00471a9c);
    local_e4 = (int ******)0x8;
    pppppppiStack_1d4 = (int *******)0x47dff5;
    __vbaVarDup();
    pppppppiStack_1d4 = local_d4;
    ppppppiStack_1d8 = (int ******)local_c4;
    pppppppiStack_1dc = local_b4;
    pppppppiStack_1e4 = local_a4;
    pppppppiStack_1e0 = (int *******)0x4;
    pppppppiStack_1e8 = (int *******)0x47e019;
    iVar5 = Ordinal_595();
    pppppppiStack_1e8 = local_d4;
    pppppppiStack_1ec = local_c4;
    pppppppiStack_1f0 = local_b4;
    pppppppiStack_1f4 = local_a4;
    pppppppiStack_1f8 = (int *******)0x4;
    pppppppiStack_1fc = (int *******)0x47e047;
    __vbaFreeVarList();
    if (iVar5 == 7) goto LAB_0047ffb2;
  }
  pcVar12 = __vbaUI1I2_exref;
  pppppppiStack_1d4 = (int *******)0x47e060;
  bVar1 = __vbaUI1I2();
  pppppppiStack_1d4 = (int *******)0x47e06d;
  bVar2 = __vbaUI1I2();
  do {
    local_2c[0] = CONCAT31(local_2c[0]._1_3_,bVar2);
    if (bVar1 < bVar2) {
      pppppppiStack_1d4 = (int *******)0x47e120;
      bVar1 = __vbaUI1I2();
      pppppppiStack_1d4 = (int *******)0x47e12d;
      bVar2 = __vbaUI1I2();
      local_2c[0] = CONCAT31(local_2c[0]._1_3_,bVar2);
      pcVar12 = __vbaHresultCheckObj_exref;
      goto LAB_0047e136;
    }
    if (0x29 < bVar2) {
      pppppppiStack_1d4 = (int *******)0x47e092;
      __vbaGenerateBoundsError();
    }
    pppppppiStack_1d4 = (int *******)0x47e096;
    uVar3 = __vbaUI1I2();
    *(undefined1 *)(DAT_00491034 + 0x65 + (uint)bVar2 * 0x74) = uVar3;
    uVar13 = local_2c[0] & 0xff;
    if (0x29 < uVar13) {
      pppppppiStack_1d4 = (int *******)0x47e0c0;
      __vbaGenerateBoundsError();
    }
    *(undefined2 *)(DAT_00491034 + 0x6c + uVar13 * 0x74) = 0;
    pppppppiVar14 = (int *******)(local_2c[0] & 0xff);
    if ((int *******)0x29 < pppppppiVar14) {
      pppppppiStack_1d4 = (int *******)0x47e0ed;
      __vbaGenerateBoundsError();
    }
    pppppppiStack_1d4 = (int *******)0x47e0f1;
    uVar3 = __vbaUI1I2();
    *(undefined1 *)(DAT_00491034 + 0x66 + (int)pppppppiVar14 * 0x74) = uVar3;
    bVar2 = (byte)local_2c[0] + 1;
  } while ((byte)local_2c[0] != -1);
LAB_0048008c:
  pppppppiStack_1d4 = (int *******)0x480092;
  __vbaErrorOverflow();
  pppppppiStack_1e4 = (int *******)&LAB_00401656;
  pppppppiStack_1e8 = ExceptionList;
  pppppppiStack_1e0 = (int *******)&pppppppiStack_228;
  pppppppiStack_1dc = (int *******)&DAT_00401358;
  ppppppiStack_1d8 = (int ******)(unaff_EDI & 1);
  ExceptionList = &pppppppiStack_1e8;
  pppppppiStack_228 = pppppppiVar15;
  pppppppiStack_224 = pppppppiVar14;
  pppppppiStack_220 = (int *******)pcVar12;
  pppppppiStack_1d4 = (int *******)&stack0xfffffffc;
  (**(code **)(*(int *)(unaff_EDI & 0xfffffffe) + 4))((int *)(unaff_EDI & 0xfffffffe));
  pppppppiStack_1ec = (int *******)0x0;
  if (DAT_00491714 == (int *******)0x0) {
    __vbaNew2(&LAB_00470d04,&DAT_00491714);
  }
  pppppppiVar15 = DAT_00491714;
  if (DAT_004910ec == (int *)0x0) {
    __vbaNew2(&DAT_0046c928,&DAT_004910ec);
  }
  ppppppiVar7 = *pppppppiVar15;
  uVar11 = __vbaObjSetAddref(&pppppppiStack_1ec,DAT_004910ec);
  iVar5 = (*(code *)ppppppiVar7[3])(pppppppiVar15,uVar11);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,pppppppiVar15,&DAT_00470cf4,0xc);
  }
  __vbaFreeObj();
  if (DAT_004910ec == (int *)0x0) {
    __vbaNew2(&DAT_0046c928,&DAT_004910ec);
  }
  piVar9 = DAT_004910ec;
  iVar5 = (**(code **)(*DAT_004910ec + 0x2b0))
                    (DAT_004910ec,2,pppppppiStack_1f8,1,pppppppiStack_1f0,10,ppppppiStack_208,
                     0x80020004,pppppppiStack_200);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar9,&DAT_00471bc8,0x2b0);
  }
  return;
LAB_0047e136:
  if (bVar1 < bVar2) goto LAB_0047e336;
  ppppppiStack_1d8 = (int ******)0x47e14b;
  pppppppiStack_1d4 = pppppppiVar15;
  ppppppiStack_1d8 = (int ******)(*(code *)(*pppppppiVar15)[0xc6])();
  pppppppiStack_1dc = (int *******)&local_7c;
  pppppppiStack_1e0 = (int *******)0x47e156;
  pppppppiVar14 = (int *******)__vbaObjSet();
  pppppppiStack_1e4 = (int *******)CONCAT22(extraout_var,(ushort)(byte)local_2c[0]);
  pppppppiStack_1e0 = (int *******)&local_80;
  pppppppiStack_1ec = (int *******)0x47e168;
  pppppppiStack_1e8 = pppppppiVar14;
  pppppppiVar6 = (int *******)(*(code *)(*pppppppiVar14)[0x10])();
  if ((int)pppppppiVar6 < 0) {
    pppppppiStack_1ec = (int *******)0x40;
    pppppppiStack_1f0 = (int *******)&DAT_00470e74;
    pppppppiStack_1fc = (int *******)0x47e179;
    pppppppiStack_1f8 = pppppppiVar6;
    pppppppiStack_1f4 = pppppppiVar14;
    (*pcVar12)();
  }
  pppppppiVar14 = local_80;
  pppppppiStack_1ec = (int *******)0x0;
  pppppppiStack_1f0 = local_80;
  pppppppiStack_1f4 = (int *******)0x47e189;
  pppppppiStack_200 = (int *******)(*(code *)(*local_80)[0x27])();
  if ((int)pppppppiStack_200 < 0) {
    pppppppiStack_1f4 = (int *******)0x9c;
    pppppppiStack_1f8 = (int *******)&DAT_00471330;
    pppppppiStack_1fc = pppppppiVar14;
    pppppppiStack_204 = (int *******)0x47e19d;
    (*pcVar12)();
  }
  pppppppiStack_1f4 = (int *******)&local_80;
  pppppppiStack_1f8 = (int *******)&local_7c;
  pppppppiStack_1fc = (int *******)0x2;
  pppppppiStack_200 = (int *******)0x47e1ad;
  __vbaFreeObjList();
  pppppppiStack_1f8 = (int *******)0x47e1b9;
  pppppppiStack_1f4 = pppppppiVar15;
  pppppppiStack_1f8 = (int *******)(*(code *)(*pppppppiVar15)[0xc5])();
  pppppppiStack_1fc = (int *******)&local_7c;
  pppppppiStack_200 = (int *******)0x47e1c4;
  ppppppiVar7 = (int ******)__vbaObjSet();
  pppppppiStack_200 = (int *******)&local_80;
  pppppppiStack_204 =
       (int *******)CONCAT22((short)((uint)ppppppiVar7 >> 0x10),(ushort)(byte)local_2c[0]);
  pppppppiStack_20c = (int *******)0x47e1d6;
  ppppppiStack_208 = ppppppiVar7;
  puVar8 = (uint *)(*(code *)(*ppppppiVar7)[0x10])();
  if ((int)puVar8 < 0) {
    pppppppiStack_20c = (int *******)0x40;
    pppppppiStack_210 = (int *******)&DAT_00470e74;
    pppppppiStack_21c = (int *******)0x47e1e7;
    pppppppiStack_218 = (int *******)puVar8;
    pppppppiStack_214 = (int *******)ppppppiVar7;
    (*pcVar12)();
  }
  pppppppiVar14 = local_80;
  pppppppiStack_20c = (int *******)0x0;
  pppppppiStack_210 = local_80;
  pppppppiStack_214 = (int *******)0x47e1f7;
  pppppppiStack_220 = (int *******)(*(code *)(*local_80)[0x23])();
  if ((int)pppppppiStack_220 < 0) {
    pppppppiStack_214 = (int *******)0x8c;
    pppppppiStack_218 = (int *******)&DAT_00470e84;
    pppppppiStack_21c = pppppppiVar14;
    pppppppiStack_224 = (int *******)0x47e20b;
    (*pcVar12)();
  }
  pppppppiStack_214 = (int *******)&local_80;
  pppppppiStack_218 = (int *******)&local_7c;
  pppppppiStack_21c = (int *******)0x2;
  pppppppiStack_220 = (int *******)0x47e21b;
  __vbaFreeObjList();
  pppppppiStack_218 = (int *******)0x47e227;
  pppppppiStack_214 = pppppppiVar15;
  pppppppiStack_218 = (int *******)(*(code *)(*pppppppiVar15)[0xc5])();
  pppppppiStack_21c = (int *******)&local_7c;
  pppppppiStack_220 = (int *******)0x47e232;
  pppppppiVar14 = (int *******)__vbaObjSet();
  pppppppiStack_224 = (int *******)CONCAT22(extraout_var_00,(ushort)(byte)local_2c[0]);
  pppppppiStack_220 = (int *******)&local_80;
  pppppppiStack_228 = pppppppiVar14;
  iVar5 = (*(code *)(*pppppppiVar14)[0x10])();
  if (iVar5 < 0) {
    (*pcVar12)(iVar5,pppppppiVar14,&DAT_00470e74,0x40);
  }
  pppppppiVar14 = local_80;
  ppppppiVar7 = *local_80;
  __vbaStrI2(0);
  uVar11 = __vbaStrMove();
  iVar5 = (*(code *)ppppppiVar7[0x2f])(pppppppiVar14,uVar11);
  pcVar12 = __vbaHresultCheckObj_exref;
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,pppppppiVar14,&DAT_00470e84,0xbc);
  }
  __vbaFreeStr();
  __vbaFreeObjList(2,&local_7c,&local_80);
  uVar11 = (*(code *)(*pppppppiVar15)[0xc4])(pppppppiVar15);
  piVar9 = (int *)__vbaObjSet(&local_7c,uVar11);
  iVar5 = (**(code **)(*piVar9 + 0x40))(piVar9,local_2c[0] & 0xff,&local_80);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar9,&DAT_00470e74,0x40);
  }
  pppppppiVar14 = local_80;
  iVar5 = (*(code *)(*local_80)[0x23])(local_80,0);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,pppppppiVar14,&DAT_00470e84,0x8c);
  }
  __vbaFreeObjList(2,&local_7c,&local_80);
  bVar2 = (byte)local_2c[0] + 1;
  if (0xfe < (byte)local_2c[0]) goto LAB_0048008c;
  local_2c[0] = CONCAT31(local_2c[0]._1_3_,bVar2);
  goto LAB_0047e136;
LAB_0047e336:
  local_e4 = (int ******)0xb;
  pppppppiStack_1e4 = (int *******)0x6803001b;
  pppppppiStack_1e0 = (int *******)0xb;
  pppppppiStack_1d4 = (int *******)((ulonglong)local_dc >> 0x20);
  local_dc = (double)((ulonglong)local_dc & 0xffffffff00000000);
  pppppppiStack_1dc = local_e0;
  ppppppiStack_1d8 = (int ******)0x0;
  pppppppiStack_1ec = (int *******)0x47e373;
  pppppppiStack_1e8 = pppppppiVar15;
  pppppppiStack_1ec = (int *******)(*(code *)(*pppppppiVar15)[0xe0])();
  pppppppiStack_1f0 = (int *******)&local_7c;
  pppppppiStack_1f4 = (int *******)0x47e380;
  pppppppiStack_1f4 = (int *******)__vbaObjSet();
  pppppppiStack_1f8 = (int *******)0x47e387;
  __vbaLateIdSt();
  pppppppiStack_1f8 = (int *******)0x47e392;
  __vbaFreeObj();
  local_e4 = (int ******)0xb;
  ppppppiStack_208 = (int ******)0x6803001b;
  pppppppiStack_204 = (int *******)0xb;
  pppppppiStack_1f8 = (int *******)((ulonglong)local_dc >> 0x20);
  local_dc = (double)((ulonglong)local_dc & 0xffffffff00000000);
  pppppppiStack_200 = local_e0;
  pppppppiStack_1fc = (int *******)0x0;
  pppppppiStack_210 = (int *******)0x47e3cf;
  pppppppiStack_20c = pppppppiVar15;
  pppppppiStack_210 = (int *******)(*(code *)(*pppppppiVar15)[0xe1])();
  pppppppiStack_214 = (int *******)&local_7c;
  pppppppiStack_218 = (int *******)0x47e3d6;
  pppppppiStack_218 = (int *******)__vbaObjSet();
  pppppppiStack_21c = (int *******)0x47e3dd;
  __vbaLateIdSt();
  pppppppiStack_21c = (int *******)0x47e3e2;
  __vbaFreeObj();
  pppppppiStack_220 = (int *******)0x47e3eb;
  pppppppiStack_21c = pppppppiVar15;
  pppppppiStack_220 = (int *******)(*(code *)(*pppppppiVar15)[0xbf])();
  pppppppiStack_224 = (int *******)&local_7c;
  pppppppiStack_228 = (int *******)0x47e3f2;
  pppppppiVar14 = (int *******)__vbaObjSet();
  pppppppiStack_228 = pppppppiVar14;
  iVar5 = (*(code *)(*pppppppiVar14)[0x7a])();
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,pppppppiVar14,&DAT_00471af8,0x1e8);
  }
  __vbaFreeObj();
  uVar11 = (*(code *)(*pppppppiVar15)[0xc0])(pppppppiVar15);
  piVar9 = (int *)__vbaObjSet(&local_7c,uVar11);
  iVar5 = (**(code **)(*piVar9 + 0x94))(piVar9,0);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar9,&DAT_004717a8,0x94);
  }
  __vbaFreeObj();
  local_e4 = (int ******)0x8;
  local_dc = (double)CONCAT44(local_dc._4_4_,L"Juegos guardados|*.est");
  uVar11 = (*(code *)(*pppppppiVar15)[0xdf])
                     (pppppppiVar15,3,8,local_e0,L"Juegos guardados|*.est",local_dc._4_4_);
  uVar11 = __vbaObjSet(&local_7c,uVar11);
  __vbaLateIdSt(uVar11);
  __vbaFreeObj();
  uVar11 = (*(code *)(*pppppppiVar15)[0xdf])(pppppppiVar15,0x1e,0);
  uVar11 = __vbaObjSet(&local_7c,uVar11);
  __vbaLateIdCall(uVar11);
  __vbaFreeObj();
  uVar11 = (*(code *)(*pppppppiVar15)[0xdf])(pppppppiVar15,1,0);
  uVar11 = __vbaObjSet(&local_7c,uVar11);
  uVar11 = __vbaLateIdCallLd(local_a4,uVar11);
  __vbaStrVarMove(uVar11);
  uVar11 = __vbaStrMove();
  iVar5 = __vbaStrCmp(&DAT_00471b58,uVar11);
  __vbaFreeStr();
  __vbaFreeObj();
  __vbaFreeVar();
  if (iVar5 != 0) {
    pppppppiStack_1d4 = (int *******)0x0;
    ppppppiStack_1d8 = (int ******)0x1;
    pppppppiStack_1e0 = (int *******)0x47e54d;
    pppppppiStack_1dc = pppppppiVar15;
    pppppppiStack_1e0 = (int *******)(*(code *)(*pppppppiVar15)[0xdf])();
    pppppppiStack_1e4 = (int *******)&local_7c;
    pppppppiStack_1e8 = (int *******)0x47e558;
    pppppppiStack_1e8 = (int *******)__vbaObjSet();
    pppppppiStack_1ec = local_a4;
    pppppppiStack_1f0 = (int *******)0x47e566;
    pppppppiStack_1e0 = (int *******)__vbaLateIdCallLd();
    pppppppiStack_1e4 = (int *******)0x47e570;
    __vbaStrVarMove();
    pppppppiStack_1e4 = (int *******)0x47e57b;
    pppppppiStack_1e4 = (int *******)__vbaStrMove();
    pppppppiStack_1e8 = (int *******)0x1;
    pppppppiStack_1ec = (int *******)0xffffffff;
    pppppppiStack_1f0 = (int *******)0x1;
    pppppppiStack_1f4 = (int *******)0x47e588;
    __vbaFileOpen();
    pppppppiStack_1f4 = (int *******)0x47e591;
    __vbaFreeStr();
    pppppppiStack_1f4 = (int *******)0x47e596;
    __vbaFreeObj();
    pppppppiStack_1f4 = (int *******)0x47e5a2;
    __vbaFreeVar();
    pppppppiStack_1f4 = (int *******)0x1;
    pppppppiStack_1f8 = (int *******)0x47e5aa;
    iVar5 = Ordinal_570();
    if (iVar5 != 0) {
      ppppppiStack_1d8 = (int ******)(local_40 + 1);
      pppppppiStack_1d4 = (int *******)0x1;
      pppppppiStack_1dc = (int *******)0x47e5be;
      __vbaLineInputVar();
      if (DAT_00491714 == (int *******)0x0) {
        pppppppiStack_1dc = (int *******)&DAT_00491714;
        pppppppiStack_1e0 = (int *******)&LAB_00470d04;
        pppppppiStack_1e4 = (int *******)0x47e5d7;
        __vbaNew2();
      }
      pppppppiVar14 = DAT_00491714;
      pppppppiStack_1dc = (int *******)&local_7c;
      pppppppiStack_1e0 = DAT_00491714;
      pppppppiStack_1e4 = (int *******)0x47e5e7;
      pppppppiVar6 = (int *******)(*(code *)(*DAT_00491714)[5])();
      if ((int)pppppppiVar6 < 0) {
        pppppppiStack_1e4 = (int *******)0x14;
        pppppppiStack_1e8 = (int *******)&DAT_00470cf4;
        pppppppiStack_1ec = pppppppiVar14;
        pppppppiStack_1f4 = (int *******)0x47e5fe;
        pppppppiStack_1f0 = pppppppiVar6;
        __vbaHresultCheckObj();
      }
      pppppppiVar14 = local_7c;
      pppppppiStack_1e4 = (int *******)local_118;
      pppppppiStack_1e8 = local_7c;
      pppppppiStack_1ec = (int *******)0x47e61b;
      pppppppiVar6 = (int *******)(*(code *)(*local_7c)[0x2e])();
      if ((int)pppppppiVar6 < 0) {
        pppppppiStack_1ec = (int *******)0xb8;
        pppppppiStack_1f0 = (int *******)&DAT_00470f14;
        pppppppiStack_1f4 = pppppppiVar14;
        pppppppiStack_1fc = (int *******)0x47e62f;
        pppppppiStack_1f8 = pppppppiVar6;
        __vbaHresultCheckObj();
      }
      if (DAT_00491714 == (int *******)0x0) {
        pppppppiStack_1ec = (int *******)&DAT_00491714;
        pppppppiStack_1f0 = (int *******)&LAB_00470d04;
        pppppppiStack_1f4 = (int *******)0x47e648;
        __vbaNew2();
      }
      pppppppiVar14 = DAT_00491714;
      pppppppiStack_1ec = (int *******)&local_80;
      pppppppiStack_1f0 = DAT_00491714;
      pppppppiStack_1f4 = (int *******)0x47e658;
      pppppppiVar6 = (int *******)(*(code *)(*DAT_00491714)[5])();
      if ((int)pppppppiVar6 < 0) {
        pppppppiStack_1f4 = (int *******)0x14;
        pppppppiStack_1f8 = (int *******)&DAT_00470cf4;
        pppppppiStack_1fc = pppppppiVar14;
        pppppppiStack_204 = (int *******)0x47e669;
        pppppppiStack_200 = pppppppiVar6;
        __vbaHresultCheckObj();
      }
      pppppppiVar14 = local_80;
      pppppppiStack_1f4 = (int *******)&local_11c;
      pppppppiStack_1f8 = local_80;
      pppppppiStack_1fc = (int *******)0x47e67e;
      ppppppiVar7 = (int ******)(*(code *)(*local_80)[0x30])();
      if ((int)ppppppiVar7 < 0) {
        pppppppiStack_1fc = (int *******)0xc0;
        pppppppiStack_200 = (int *******)&DAT_00470f14;
        pppppppiStack_204 = pppppppiVar14;
        pppppppiStack_20c = (int *******)0x47e692;
        ppppppiStack_208 = ppppppiVar7;
        __vbaHresultCheckObj();
      }
      if (DAT_00491714 == (int *******)0x0) {
        pppppppiStack_1fc = (int *******)&DAT_00491714;
        pppppppiStack_200 = (int *******)&LAB_00470d04;
        pppppppiStack_204 = (int *******)0x47e6ab;
        __vbaNew2();
      }
      pppppppiVar14 = DAT_00491714;
      pppppppiStack_1fc = &local_84;
      pppppppiStack_200 = DAT_00491714;
      pppppppiStack_204 = (int *******)0x47e6bb;
      pppppppiVar6 = (int *******)(*(code *)(*DAT_00491714)[5])();
      if ((int)pppppppiVar6 < 0) {
        pppppppiStack_204 = (int *******)0x14;
        ppppppiStack_208 = (int ******)&DAT_00470cf4;
        pppppppiStack_20c = pppppppiVar14;
        pppppppiStack_214 = (int *******)0x47e6cc;
        pppppppiStack_210 = pppppppiVar6;
        __vbaHresultCheckObj();
      }
      ppppppiVar7 = local_84;
      pppppppiStack_204 = (int *******)&local_120;
      ppppppiStack_208 = local_84;
      pppppppiStack_20c = (int *******)0x47e6e1;
      puVar8 = (uint *)(*(code *)(*local_84)[0x32])();
      if ((int)puVar8 < 0) {
        pppppppiStack_20c = (int *******)0xc8;
        pppppppiStack_210 = (int *******)&DAT_00470f14;
        pppppppiStack_214 = (int *******)ppppppiVar7;
        pppppppiStack_21c = (int *******)0x47e6f5;
        pppppppiStack_218 = (int *******)puVar8;
        __vbaHresultCheckObj();
      }
      pppppppiStack_20c = (int *******)&DAT_00470f3c;
      pppppppiStack_210 = local_118[0];
      pppppppiStack_214 = (int *******)0x47e707;
      __vbaStrI2();
      pppppppiStack_214 = (int *******)0x47e714;
      pppppppiStack_214 = (int *******)__vbaStrMove();
      pppppppiStack_218 = (int *******)0x47e71d;
      __vbaStrCat();
      pppppppiStack_218 = (int *******)0x47e724;
      pppppppiStack_218 = (int *******)__vbaStrMove();
      pppppppiStack_21c = local_11c;
      pppppppiStack_220 = (int *******)0x47e732;
      __vbaStrI2();
      pppppppiStack_220 = (int *******)0x47e739;
      pppppppiStack_220 = (int *******)__vbaStrMove();
      pppppppiStack_224 = (int *******)0x47e73c;
      __vbaStrCat();
      pppppppiStack_224 = (int *******)0x47e743;
      pppppppiStack_224 = (int *******)__vbaStrMove();
      pppppppiStack_228 = local_120;
      __vbaStrI2();
      uVar11 = __vbaStrMove();
      __vbaStrCat(uVar11);
      uVar11 = __vbaStrMove();
      local_9c = __vbaStrCat(&DAT_00471b60,uVar11);
      local_a4[0] = (int ******)0x8008;
      sVar4 = __vbaVarTstNe(local_a4,local_40 + 1);
      __vbaFreeStrList(6,&local_64,&local_68,&local_6c,&local_70,&local_74,&local_78);
      __vbaFreeObjList(3,&local_7c,&local_80,&local_84);
      __vbaFreeVar();
      if (sVar4 == 0) {
        __vbaLineInputVar(local_40 + 1,1);
        local_dc = (double)CONCAT44(local_dc._4_4_,L"True");
        local_e4 = (int ******)0x8008;
        sVar4 = __vbaVarTstEq(&local_e4,local_40 + 1);
        if (sVar4 == 0) {
          *(undefined2 *)(pppppppiVar15 + 0x14) = 0;
        }
        else {
          *(undefined2 *)(pppppppiVar15 + 0x14) = 0xffff;
        }
        __vbaLineInputVar(local_40 + 1,1);
        pcVar12 = __vbaStrVarVal_exref;
        uVar11 = __vbaStrVarVal(&local_64,local_40 + 1);
        Ordinal_581(uVar11);
        DAT_0049107a = __vbaFpUI1();
        __vbaFreeStr();
        __vbaLineInputVar(local_40 + 1,1);
        uVar11 = __vbaStrVarVal(&local_64,local_40 + 1);
        Ordinal_581(uVar11);
        DAT_00491080 = __vbaFpI2();
        __vbaFreeStr();
        bVar1 = __vbaUI1I2();
        bVar2 = __vbaUI1I2();
        local_2c[0] = CONCAT31(local_2c[0]._1_3_,bVar2);
        while (bVar2 <= bVar1) {
          uVar13 = (local_2c[0] & 0xff) - 1;
          if (5 < uVar13) {
            pppppppiStack_1d4 = (int *******)0x47e96b;
            __vbaGenerateBoundsError();
          }
          pppppppiStack_1d4 = (int *******)0x1;
          ppppppiStack_1d8 = (int ******)(DAT_0049106c + 4 + uVar13 * 0x2c);
          pppppppiStack_1dc = (int *******)0x47e984;
          __vbaLineInputStr();
          pppppppiStack_1e0 = (int *******)(local_40 + 1);
          pppppppiStack_1dc = (int *******)0x1;
          pppppppiStack_1e4 = (int *******)0x47e990;
          __vbaLineInputVar();
          uVar13 = (local_2c[0] & 0xff) - 1;
          if (5 < uVar13) {
            pppppppiStack_1e4 = (int *******)0x47e9a5;
            __vbaGenerateBoundsError();
          }
          pppppppiStack_1e4 = (int *******)(local_40 + 1);
          pppppppiStack_1e8 = &local_64;
          pppppppiStack_1ec = (int *******)0x47e9af;
          pppppppiStack_1ec = (int *******)(*pcVar12)();
          pppppppiStack_1f0 = (int *******)0x47e9b6;
          fVar16 = (float10)Ordinal_581();
          *(float *)(DAT_0049106c + 8 + uVar13 * 0x2c) = (float)fVar16;
          pppppppiStack_1f0 = (int *******)0x47e9da;
          __vbaFreeStr();
          pppppppiStack_1f4 = (int *******)(local_40 + 1);
          pppppppiStack_1f0 = (int *******)0x1;
          pppppppiStack_1f8 = (int *******)0x47e9e6;
          __vbaLineInputVar();
          uVar13 = (local_2c[0] & 0xff) - 1;
          if (5 < uVar13) {
            pppppppiStack_1f8 = (int *******)0x47e9fb;
            __vbaGenerateBoundsError();
          }
          pppppppiStack_1f8 = (int *******)(local_40 + 1);
          pppppppiStack_1fc = &local_64;
          pppppppiStack_200 = (int *******)0x47ea05;
          pppppppiStack_200 = (int *******)(*pcVar12)();
          pppppppiStack_204 = (int *******)0x47ea0c;
          Ordinal_581();
          pppppppiStack_204 = (int *******)0x47ea12;
          uVar3 = __vbaFpUI1();
          *(undefined1 *)(DAT_0049106c + 0x10 + uVar13 * 0x2c) = uVar3;
          pppppppiStack_204 = (int *******)0x47ea2b;
          __vbaFreeStr();
          ppppppiStack_208 = (int ******)(local_40 + 1);
          pppppppiStack_204 = (int *******)0x1;
          pppppppiStack_20c = (int *******)0x47ea37;
          __vbaLineInputVar();
          pppppppiStack_20c = (int *******)(local_40 + 1);
          pppppppiStack_210 = &local_e4;
          local_dc = (double)CONCAT44(local_dc._4_4_,L"True");
          local_e4 = (int ******)0x8008;
          pppppppiStack_214 = (int *******)0x47ea5c;
          sVar4 = __vbaVarTstEq();
          if (sVar4 == 0) {
            uVar13 = (local_2c[0] & 0xff) - 1;
            if (5 < uVar13) {
              pppppppiStack_214 = (int *******)0x47ea9d;
              __vbaGenerateBoundsError();
            }
            *(undefined2 *)(DAT_0049106c + 0x14 + uVar13 * 0x2c) = 0;
          }
          else {
            uVar13 = (local_2c[0] & 0xff) - 1;
            if (5 < uVar13) {
              pppppppiStack_214 = (int *******)0x47ea76;
              __vbaGenerateBoundsError();
            }
            *(undefined2 *)(DAT_0049106c + 0x14 + uVar13 * 0x2c) = 0xffff;
          }
          pppppppiStack_218 = (int *******)(local_40 + 1);
          pppppppiStack_214 = (int *******)0x1;
          pppppppiStack_21c = (int *******)0x47eabc;
          __vbaLineInputVar();
          pppppppiStack_21c = (int *******)(local_40 + 1);
          pppppppiStack_220 = &local_e4;
          local_dc = (double)CONCAT44(local_dc._4_4_,L"True");
          local_e4 = (int ******)0x8008;
          pppppppiStack_224 = (int *******)0x47eae1;
          sVar4 = __vbaVarTstEq();
          if (sVar4 == 0) {
            uVar13 = (local_2c[0] & 0xff) - 1;
            if (5 < uVar13) {
              pppppppiStack_224 = (int *******)0x47eb22;
              __vbaGenerateBoundsError();
            }
            *(undefined2 *)(DAT_0049106c + 0x16 + uVar13 * 0x2c) = 0;
          }
          else {
            uVar13 = (local_2c[0] & 0xff) - 1;
            if (5 < uVar13) {
              pppppppiStack_224 = (int *******)0x47eafb;
              __vbaGenerateBoundsError();
            }
            *(undefined2 *)(DAT_0049106c + 0x16 + uVar13 * 0x2c) = 0xffff;
          }
          pppppppiStack_228 = (int *******)(local_40 + 1);
          pppppppiStack_224 = (int *******)0x1;
          __vbaLineInputVar();
          uVar13 = (local_2c[0] & 0xff) - 1;
          if (5 < uVar13) {
            __vbaGenerateBoundsError();
          }
          uVar11 = (*pcVar12)(&local_64,local_40 + 1);
          Ordinal_581(uVar11);
          uVar3 = __vbaFpUI1();
          *(undefined1 *)(DAT_0049106c + 0x24 + uVar13 * 0x2c) = uVar3;
          __vbaFreeStr();
          __vbaLineInputVar(local_40 + 1,1);
          local_dc = (double)CONCAT44(local_dc._4_4_,L"True");
          local_e4 = (int ******)0x8008;
          sVar4 = __vbaVarTstEq(&local_e4,local_40 + 1);
          if (sVar4 == 0) {
            uVar13 = (local_2c[0] & 0xff) - 1;
            if (5 < uVar13) {
              __vbaGenerateBoundsError();
            }
            *(undefined2 *)(DAT_0049106c + 0x18 + uVar13 * 0x2c) = 0;
          }
          else {
            uVar13 = (local_2c[0] & 0xff) - 1;
            if (5 < uVar13) {
              __vbaGenerateBoundsError();
            }
            *(undefined2 *)(DAT_0049106c + 0x18 + uVar13 * 0x2c) = 0xffff;
          }
          __vbaLineInputVar(local_40 + 1,1);
          local_dc = (double)CONCAT44(local_dc._4_4_,L"True");
          local_e4 = (int ******)0x8008;
          sVar4 = __vbaVarTstEq(&local_e4,local_40 + 1);
          if (sVar4 == 0) {
            uVar13 = (local_2c[0] & 0xff) - 1;
            if (5 < uVar13) {
              __vbaGenerateBoundsError();
            }
            *(undefined2 *)(DAT_0049106c + 0x1a + uVar13 * 0x2c) = 0;
          }
          else {
            uVar13 = (local_2c[0] & 0xff) - 1;
            if (5 < uVar13) {
              __vbaGenerateBoundsError();
            }
            *(undefined2 *)(DAT_0049106c + 0x1a + uVar13 * 0x2c) = 0xffff;
          }
          __vbaLineInputVar(local_40 + 1,1);
          uVar13 = (local_2c[0] & 0xff) - 1;
          if (5 < uVar13) {
            __vbaGenerateBoundsError();
          }
          uVar11 = (*pcVar12)(&local_64,local_40 + 1);
          Ordinal_581(uVar11);
          uVar3 = __vbaFpUI1();
          *(undefined1 *)(DAT_0049106c + 0x11 + uVar13 * 0x2c) = uVar3;
          __vbaFreeStr();
          __vbaLineInputVar(local_40 + 1,1);
          local_dc = (double)CONCAT44(local_dc._4_4_,L"True");
          local_e4 = (int ******)0x8008;
          sVar4 = __vbaVarTstEq(&local_e4,local_40 + 1);
          if (sVar4 == 0) {
            uVar13 = (local_2c[0] & 0xff) - 1;
            if (5 < uVar13) {
              __vbaGenerateBoundsError();
            }
            *(undefined2 *)(DAT_0049106c + 0x28 + uVar13 * 0x2c) = 0;
          }
          else {
            uVar13 = (local_2c[0] & 0xff) - 1;
            if (5 < uVar13) {
              __vbaGenerateBoundsError();
            }
            *(undefined2 *)(DAT_0049106c + 0x28 + uVar13 * 0x2c) = 0xffff;
          }
          __vbaLineInputVar(local_40 + 1,1);
          local_dc = (double)CONCAT44(local_dc._4_4_,L"True");
          local_e4 = (int ******)0x8008;
          sVar4 = __vbaVarTstEq(&local_e4,local_40 + 1);
          if (sVar4 == 0) {
            uVar13 = (local_2c[0] & 0xff) - 1;
            if (5 < uVar13) {
              __vbaGenerateBoundsError();
            }
            *(undefined2 *)(DAT_0049106c + 0x26 + uVar13 * 0x2c) = 0;
          }
          else {
            uVar13 = (local_2c[0] & 0xff) - 1;
            if (5 < uVar13) {
              __vbaGenerateBoundsError();
            }
            *(undefined2 *)(DAT_0049106c + 0x26 + uVar13 * 0x2c) = 0xffff;
          }
          __vbaLineInputVar(local_40 + 1,1);
          uVar13 = (local_2c[0] & 0xff) - 1;
          if (5 < uVar13) {
            __vbaGenerateBoundsError();
          }
          uVar11 = (*pcVar12)(&local_64,local_40 + 1);
          Ordinal_581(uVar11);
          uVar3 = __vbaFpUI1();
          *(undefined1 *)(DAT_0049106c + 0x25 + uVar13 * 0x2c) = uVar3;
          __vbaFreeStr();
          __vbaLineInputVar(local_40 + 1,1);
          uVar13 = (local_2c[0] & 0xff) - 1;
          if (5 < uVar13) {
            __vbaGenerateBoundsError();
          }
          uVar11 = (*pcVar12)(&local_64,local_40 + 1);
          fVar16 = (float10)Ordinal_581(uVar11);
          *(float *)(DAT_0049106c + 0x20 + uVar13 * 0x2c) = (float)fVar16;
          __vbaFreeStr();
          __vbaLineInputVar(local_40 + 1,1);
          uVar13 = (local_2c[0] & 0xff) - 1;
          if (5 < uVar13) {
            __vbaGenerateBoundsError();
          }
          uVar11 = (*pcVar12)(&local_64,local_40 + 1);
          Ordinal_581(uVar11);
          uVar3 = __vbaFpUI1();
          *(undefined1 *)(DAT_0049106c + 0x1d + uVar13 * 0x2c) = uVar3;
          __vbaFreeStr();
          __vbaLineInputVar(local_40 + 1,1);
          uVar13 = (local_2c[0] & 0xff) - 1;
          if (5 < uVar13) {
            __vbaGenerateBoundsError();
          }
          uVar11 = (*pcVar12)(&local_64,local_40 + 1);
          Ordinal_581(uVar11);
          uVar3 = __vbaFpUI1();
          *(undefined1 *)(DAT_0049106c + 0x1c + uVar13 * 0x2c) = uVar3;
          __vbaFreeStr();
          __vbaLineInputVar(local_40 + 1,1);
          uVar11 = (*pcVar12)(&local_64,local_40 + 1);
          fVar16 = (float10)Ordinal_581(uVar11);
          local_dc = (double)fVar16;
          local_e4 = (int ******)0x5;
          __vbaVarMove();
          __vbaFreeStr();
          local_dc._0_4_ = (undefined *)0x1;
          local_ec = 1;
          local_e4 = (int ******)0x2;
          local_f4[0] = 2;
          iVar5 = __vbaVarForInit(local_2c + 1,local_164,local_174,local_f4,local_60,&local_e4);
          while (iVar5 != 0) {
            __vbaLineInputVar(local_40 + 1,1);
            local_dc._0_4_ = &DAT_00471bbc;
            local_e4 = (int ******)0x8;
            __vbaVarDup();
            uVar11 = (*pcVar12)(&local_64,local_40 + 1,local_a4,0xffffffff,0);
            Ordinal_711(local_b4,uVar11);
            __vbaVarMove();
            __vbaFreeStr();
            __vbaFreeVar();
            local_e4 = (int ******)0x2;
            local_dc._0_4_ = (undefined *)0x0;
            uVar11 = __vbaVarIndexLoad(local_a4,local_50,1,2,local_e0,0,local_dc._4_4_);
            uVar11 = (*pcVar12)(&local_64,uVar11);
            Ordinal_581(uVar11);
            uVar3 = __vbaFpUI1();
            local_40[0] = CONCAT31(local_40[0]._1_3_,uVar3);
            __vbaFreeStr();
            __vbaFreeVar();
            if ((byte)local_40[0] < 0x2a) {
              local_e4 = (int ******)0x2;
              local_dc = (double)CONCAT44(local_dc._4_4_,1);
              local_fc = &DAT_00471bc4;
              local_104[0] = 0x8008;
              uVar11 = __vbaVarIndexLoad(local_a4,local_50,1,2,local_e0,1,local_dc._4_4_);
              sVar4 = __vbaVarTstEq(local_104,uVar11);
              __vbaFreeVar();
              if (sVar4 != 0) {
                uVar13 = local_40[0] & 0xff;
                if (0x29 < uVar13) {
                  __vbaGenerateBoundsError();
                }
                *(undefined2 *)(DAT_00491034 + 0x6c + uVar13 * 0x74) = 0xffff;
              }
              uVar13 = local_40[0] & 0xff;
              local_dc._0_4_ = (undefined *)0x2;
              local_e4 = (int ******)0x2;
              if (0x29 < uVar13) {
                __vbaGenerateBoundsError();
              }
              uVar11 = __vbaVarIndexLoad(local_a4,local_50,1,local_e4,local_e0,(undefined *)local_dc
                                         ,local_dc._4_4_);
              uVar11 = (*pcVar12)(&local_64,uVar11);
              Ordinal_581(uVar11);
              uVar3 = __vbaFpUI1();
              *(undefined1 *)(DAT_00491034 + 0x66 + uVar13 * 0x74) = uVar3;
              __vbaFreeStr();
              __vbaFreeVar();
              uVar13 = local_40[0] & 0xff;
              if (0x29 < uVar13) {
                __vbaGenerateBoundsError();
              }
              if (*(char *)(DAT_00491034 + 0x66 + uVar13 * 0x74) != '\0') {
                uVar11 = (*(code *)(*pppppppiVar15)[200])(pppppppiVar15);
                piVar9 = (int *)__vbaObjSet(&local_8c,uVar11);
                iVar5 = (**(code **)(*piVar9 + 0x40))(piVar9,local_40[0] & 0xff,&local_90);
                if (iVar5 < 0) {
                  __vbaHresultCheckObj(iVar5,piVar9,&DAT_00470e74,0x40);
                }
                local_140 = local_90;
                uVar11 = (*(code *)(*pppppppiVar15)[0xe4])(pppppppiVar15,4,0,&DAT_00470e54);
                uVar11 = __vbaObjSet(&local_7c,uVar11);
                uVar11 = __vbaLateIdCallLd(local_a4,uVar11);
                uVar11 = __vbaCastObjVar(uVar11);
                piVar9 = (int *)__vbaObjSet(&local_80,uVar11);
                uVar13 = local_40[0] & 0xff;
                if (0x29 < uVar13) {
                  __vbaGenerateBoundsError();
                }
                local_e4 = (int ******)0x4011;
                local_dc._0_4_ = (undefined *)(DAT_00491034 + 0x66 + uVar13 * 0x74);
                iVar5 = (**(code **)(*piVar9 + 0x24))(piVar9,&local_e4,&local_84);
                if (iVar5 < 0) {
                  __vbaHresultCheckObj(iVar5,piVar9,&DAT_00470e54,0x24);
                }
                ppppppiVar7 = local_84;
                iVar5 = (*(code *)(*local_84)[0xd])(local_84,&local_88);
                if (iVar5 < 0) {
                  __vbaHresultCheckObj(iVar5,ppppppiVar7,&DAT_00470e64,0x34);
                }
                uVar11 = local_88;
                piVar9 = local_140;
                local_88 = 0;
                iVar5 = *local_140;
                uVar11 = __vbaObjSet(&local_94,uVar11);
                iVar5 = (**(code **)(iVar5 + 0x5c))(piVar9,uVar11);
                if (iVar5 < 0) {
                  __vbaHresultCheckObj(iVar5,piVar9,&DAT_00470e84,0x5c);
                }
                __vbaFreeObjList(6,&local_7c,&local_80,&local_84,&local_8c,&local_94,&local_90);
                __vbaFreeVar();
              }
            }
            else if ((byte)local_40[0] == 0x2a) {
              *(undefined2 *)((int)pppppppiVar15 + 0x52) = 0xffff;
              uVar13 = (local_2c[0] & 0xff) - 1;
              if (5 < uVar13) {
                __vbaGenerateBoundsError();
              }
              *(undefined2 *)(DAT_0049106c + 0x28 + uVar13 * 0x2c) = 0xffff;
            }
            else if ((byte)local_40[0] == 0x2b) {
              uVar13 = (local_2c[0] & 0xff) - 1;
              if (5 < uVar13) {
                __vbaGenerateBoundsError();
              }
              *(undefined2 *)(DAT_0049106c + 0x26 + uVar13 * 0x2c) = 0xffff;
              *(undefined2 *)(pppppppiVar15 + 0x15) = 0xffff;
            }
            FUN_00487410((byte *)local_2c,(undefined *)local_40);
            iVar5 = __vbaVarForNext(local_2c + 1,local_164,local_174);
            pcVar12 = __vbaStrVarVal_exref;
          }
          uVar13 = (local_2c[0] & 0xff) - 1;
          if (5 < uVar13) {
            __vbaGenerateBoundsError();
          }
          local_dc = (double)CONCAT44(local_dc._4_4_,local_2c);
          local_e4 = (int ******)0x4011;
          FUN_00488bd0(&local_e4,(undefined1 *)(DAT_0049106c + 0x10 + uVar13 * 0x2c));
          uVar11 = (*(code *)(*pppppppiVar15)[0xc5])(pppppppiVar15);
          piVar9 = (int *)__vbaObjSet(&local_8c,uVar11);
          iVar5 = (**(code **)(*piVar9 + 0x40))(piVar9,local_2c[0] & 0xff,&local_90);
          if (iVar5 < 0) {
            __vbaHresultCheckObj(iVar5,piVar9,&DAT_00470e74,0x40);
          }
          local_13c = local_90;
          uVar11 = (*(code *)(*pppppppiVar15)[0xde])(pppppppiVar15,4,0,&DAT_00470e54);
          uVar11 = __vbaObjSet(&local_7c,uVar11);
          uVar11 = __vbaLateIdCallLd(local_a4,uVar11);
          uVar11 = __vbaCastObjVar(uVar11);
          piVar9 = (int *)__vbaObjSet(&local_80,uVar11);
          local_dc = (double)CONCAT44(local_dc._4_4_,local_2c);
          local_e4 = (int ******)0x4011;
          iVar5 = (**(code **)(*piVar9 + 0x24))(piVar9,&local_e4,&local_84);
          if (iVar5 < 0) {
            __vbaHresultCheckObj(iVar5,piVar9,&DAT_00470e54,0x24);
          }
          ppppppiVar7 = local_84;
          iVar5 = (*(code *)(*local_84)[0xd])(local_84,&local_88);
          if (iVar5 < 0) {
            __vbaHresultCheckObj(iVar5,ppppppiVar7,&DAT_00470e64,0x34);
          }
          uVar11 = local_88;
          local_88 = 0;
          iVar5 = *local_13c;
          uVar11 = __vbaObjSet(&local_94,uVar11);
          piVar9 = local_13c;
          iVar5 = (**(code **)(iVar5 + 0x5c))(local_13c,uVar11);
          if (iVar5 < 0) {
            __vbaHresultCheckObj(iVar5,piVar9,&DAT_00470e84,0x5c);
          }
          __vbaFreeObjList(6,&local_7c,&local_80,&local_84,&local_8c,&local_94,&local_90);
          __vbaFreeVar();
          uVar11 = (*(code *)(*pppppppiVar15)[0xc5])(pppppppiVar15);
          piVar9 = (int *)__vbaObjSet(&local_7c,uVar11);
          iVar5 = (**(code **)(*piVar9 + 0x40))(piVar9,local_2c[0] & 0xff,&local_80);
          if (iVar5 < 0) {
            __vbaHresultCheckObj(iVar5,piVar9,&DAT_00470e74,0x40);
          }
          pppppppiVar14 = local_80;
          iVar5 = (*(code *)(*local_80)[0x23])(local_80,0xffffffff);
          if (iVar5 < 0) {
            __vbaHresultCheckObj(iVar5,pppppppiVar14,&DAT_00470e84,0x8c);
          }
          __vbaFreeObjList(2,&local_7c,&local_80);
          uVar11 = (*(code *)(*pppppppiVar15)[0xc6])(pppppppiVar15);
          piVar9 = (int *)__vbaObjSet(&local_7c,uVar11);
          iVar5 = (**(code **)(*piVar9 + 0x40))(piVar9,local_2c[0] & 0xff,&local_80);
          if (iVar5 < 0) {
            __vbaHresultCheckObj(iVar5,piVar9,&DAT_00470e74,0x40);
          }
          pppppppiVar14 = local_80;
          iVar5 = (*(code *)(*local_80)[0x27])(local_80,0xffffffff);
          if (iVar5 < 0) {
            __vbaHresultCheckObj(iVar5,pppppppiVar14,&DAT_00471330,0x9c);
          }
          __vbaFreeObjList(2,&local_7c,&local_80);
          FUN_00489260((byte *)local_2c);
          uVar11 = (*(code *)(*pppppppiVar15)[0xc4])(pppppppiVar15);
          piVar9 = (int *)__vbaObjSet(&local_8c,uVar11);
          iVar5 = (**(code **)(*piVar9 + 0x40))(piVar9,local_2c[0] & 0xff,&local_90);
          if (iVar5 < 0) {
            __vbaHresultCheckObj(iVar5,piVar9,&DAT_00470e74,0x40);
          }
          piVar9 = local_90;
          uVar11 = (*(code *)(*pppppppiVar15)[0xde])(pppppppiVar15,4,0,&DAT_00470e54);
          uVar11 = __vbaObjSet(&local_7c,uVar11);
          uVar11 = __vbaLateIdCallLd(local_a4,uVar11);
          uVar11 = __vbaCastObjVar(uVar11);
          piVar10 = (int *)__vbaObjSet(&local_80,uVar11);
          local_dc = (double)CONCAT44(local_dc._4_4_,local_2c);
          local_e4 = (int ******)0x4011;
          iVar5 = (**(code **)(*piVar10 + 0x24))(piVar10,&local_e4,&local_84);
          if (iVar5 < 0) {
            __vbaHresultCheckObj(iVar5,piVar10,&DAT_00470e54,0x24);
          }
          ppppppiVar7 = local_84;
          iVar5 = (*(code *)(*local_84)[0xd])(local_84,&local_88);
          if (iVar5 < 0) {
            __vbaHresultCheckObj(iVar5,ppppppiVar7,&DAT_00470e64,0x34);
          }
          uVar11 = local_88;
          local_88 = 0;
          iVar5 = *piVar9;
          uVar11 = __vbaObjSet(&local_94,uVar11);
          iVar5 = (**(code **)(iVar5 + 0x5c))(piVar9,uVar11);
          if (iVar5 < 0) {
            __vbaHresultCheckObj(iVar5,piVar9,&DAT_00470e84,0x5c);
          }
          __vbaFreeObjList(6,&local_7c,&local_80,&local_84,&local_8c,&local_94,&local_90);
          __vbaFreeVar();
          uVar11 = (*(code *)(*pppppppiVar15)[0xc4])(pppppppiVar15);
          piVar9 = (int *)__vbaObjSet(&local_7c,uVar11);
          iVar5 = (**(code **)(*piVar9 + 0x40))(piVar9,local_2c[0] & 0xff,&local_80);
          if (iVar5 < 0) {
            __vbaHresultCheckObj(iVar5,piVar9,&DAT_00470e74,0x40);
          }
          pppppppiVar14 = local_80;
          iVar5 = (*(code *)(*local_80)[0x23])(local_80,0xffffffff);
          if (iVar5 < 0) {
            __vbaHresultCheckObj(iVar5,pppppppiVar14,&DAT_00470e84,0x8c);
          }
          __vbaFreeObjList(2,&local_7c,&local_80);
          uVar11 = (*(code *)(*pppppppiVar15)[0xd6])(pppppppiVar15);
          piVar9 = (int *)__vbaObjSet(&local_7c,uVar11);
          iVar5 = (**(code **)(*piVar9 + 0x40))(piVar9,local_2c[0] & 0xff,&local_80);
          if (iVar5 < 0) {
            __vbaHresultCheckObj(iVar5,piVar9,&DAT_00470e74,0x40);
          }
          local_130 = local_80;
          uVar13 = (local_2c[0] & 0xff) - 1;
          if (5 < uVar13) {
            __vbaGenerateBoundsError();
          }
          iVar5 = (*(code *)(*local_130)[0x19])
                            (local_130,*(undefined4 *)(DAT_0049106c + 4 + uVar13 * 0x2c));
          if (iVar5 < 0) {
            __vbaHresultCheckObj(iVar5,local_130,&DAT_00471358,100);
          }
          __vbaFreeObjList(2,&local_7c,&local_80);
          uVar11 = (*(code *)(*pppppppiVar15)[0xd6])(pppppppiVar15);
          piVar9 = (int *)__vbaObjSet(&local_7c,uVar11);
          iVar5 = (**(code **)(*piVar9 + 0x40))(piVar9,local_2c[0] & 0xff,&local_80);
          if (iVar5 < 0) {
            __vbaHresultCheckObj(iVar5,piVar9,&DAT_00470e74,0x40);
          }
          pppppppiVar14 = local_80;
          iVar5 = (*(code *)(*local_80)[0x17])(local_80,0xffffffff);
          if (iVar5 < 0) {
            __vbaHresultCheckObj(iVar5,pppppppiVar14,&DAT_00471358,0x5c);
          }
          __vbaFreeObjList(2,&local_7c,&local_80);
          bVar2 = (byte)local_2c[0] + 1;
          pcVar12 = __vbaStrVarVal_exref;
          if (0xfe < (byte)local_2c[0]) goto LAB_0048008c;
          local_2c[0] = CONCAT31(local_2c[0]._1_3_,bVar2);
        }
        uVar13 = (uint)DAT_0049107a;
        if (5 < uVar13 - 1) {
          pppppppiStack_1d4 = (int *******)0x47fa08;
          __vbaGenerateBoundsError();
        }
        if (0.0 < *(float *)(DAT_0049106c + 0x20 + (uVar13 - 1) * 0x2c)) {
          ppppppiStack_1d8 = (int ******)0x47fa2e;
          pppppppiStack_1d4 = pppppppiVar15;
          ppppppiStack_1d8 = (int ******)(*(code *)(*pppppppiVar15)[0xc0])();
          pppppppiStack_1dc = (int *******)&local_7c;
          pppppppiStack_1e0 = (int *******)0x47fa39;
          pppppppiVar14 = (int *******)__vbaObjSet();
          pppppppiStack_1e0 = (int *******)0xffffffff;
          pppppppiStack_1e8 = (int *******)0x47fa46;
          pppppppiStack_1e4 = pppppppiVar14;
          pppppppiVar6 = (int *******)(*(code *)(*pppppppiVar14)[0x25])();
          if ((int)pppppppiVar6 < 0) {
            pppppppiStack_1e8 = (int *******)0x94;
            pppppppiStack_1ec = (int *******)&DAT_004717a8;
            pppppppiStack_1f8 = (int *******)0x47fa5e;
            pppppppiStack_1f4 = pppppppiVar6;
            pppppppiStack_1f0 = pppppppiVar14;
            __vbaHresultCheckObj();
          }
          pppppppiStack_1e8 = (int *******)0x47fa67;
          __vbaFreeObj();
        }
        uVar13 = (uint)DAT_0049107a;
        if (5 < uVar13 - 1) {
          pppppppiStack_1d4 = (int *******)0x47fa7d;
          __vbaGenerateBoundsError();
        }
        ppppppiStack_1d8 = (int ******)(DAT_0049106c + 0x1a + (uVar13 - 1) * 0x2c);
        local_dc = (double)CONCAT44(local_dc._4_4_,ppppppiStack_1d8);
        local_e4 = (int ******)0x400b;
        pppppppiStack_1e0 = (int *******)0x400b;
        pppppppiStack_1e4 = (int *******)0x6803001b;
        pppppppiStack_1dc = local_e0;
        pppppppiStack_1d4 = local_dc._4_4_;
        pppppppiStack_1ec = (int *******)0x47fac8;
        pppppppiStack_1e8 = pppppppiVar15;
        pppppppiStack_1ec = (int *******)(*(code *)(*pppppppiVar15)[0xe1])();
        pppppppiStack_1f0 = (int *******)&local_7c;
        pppppppiStack_1f4 = (int *******)0x47fad5;
        pppppppiStack_1f4 = (int *******)__vbaObjSet();
        pppppppiStack_1f8 = (int *******)0x47fadc;
        __vbaLateIdSt();
        pppppppiStack_1f8 = (int *******)0x47fae5;
        __vbaFreeObj();
        uVar13 = (uint)DAT_0049107a;
        if (5 < uVar13 - 1) {
          pppppppiStack_1f8 = (int *******)0x47fafa;
          __vbaGenerateBoundsError();
        }
        local_e4 = (int ******)0x400b;
        pppppppiStack_1fc = (int *******)(DAT_0049106c + 0x18 + (uVar13 - 1) * 0x2c);
        local_dc = (double)CONCAT44(local_dc._4_4_,pppppppiStack_1fc);
        ppppppiStack_208 = (int ******)0x6803001b;
        pppppppiStack_204 = (int *******)0x400b;
        pppppppiStack_200 = local_e0;
        pppppppiStack_1f8 = local_dc._4_4_;
        pppppppiStack_210 = (int *******)0x47fb44;
        pppppppiStack_20c = pppppppiVar15;
        pppppppiStack_210 = (int *******)(*(code *)(*pppppppiVar15)[0xe0])();
        pppppppiStack_214 = (int *******)&local_7c;
        pppppppiStack_218 = (int *******)0x47fb4b;
        pppppppiStack_218 = (int *******)__vbaObjSet();
        pppppppiStack_21c = (int *******)0x47fb52;
        __vbaLateIdSt();
        pppppppiStack_21c = (int *******)0x47fb5b;
        __vbaFreeObj();
        uVar13 = (uint)DAT_0049107a;
        if (5 < uVar13 - 1) {
          pppppppiStack_21c = (int *******)0x47fb70;
          __vbaGenerateBoundsError();
        }
        if (*(short *)(DAT_0049106c + 0x14 + (uVar13 - 1) * 0x2c) == 0) {
          local_e4 = (int ******)0xb;
          pppppppiStack_228 = (int *******)0xb;
          pppppppiStack_21c = (int *******)((ulonglong)local_dc >> 0x20);
          local_dc = (double)((ulonglong)local_dc & 0xffffffff00000000);
          pppppppiStack_224 = local_e0;
          pppppppiStack_220 = (int *******)0x0;
          uVar11 = (*(code *)(*pppppppiVar15)[0xdd])(pppppppiVar15,0x80010007);
          uVar11 = __vbaObjSet(&local_7c,uVar11);
          __vbaLateIdSt(uVar11);
          __vbaFreeObj();
          uVar11 = (*(code *)(*pppppppiVar15)[0xc2])(pppppppiVar15);
          piVar9 = (int *)__vbaObjSet(&local_8c,uVar11);
          iVar5 = (**(code **)(*piVar9 + 0x40))(piVar9,1,&local_90);
          if (iVar5 < 0) {
            __vbaHresultCheckObj(iVar5,piVar9,&DAT_00470e74,0x40);
          }
          local_13c = local_90;
          uVar11 = (*(code *)(*pppppppiVar15)[0xe3])(pppppppiVar15,4,0,&DAT_00470e54);
          uVar11 = __vbaObjSet(&local_7c,uVar11);
          uVar11 = __vbaLateIdCallLd(local_a4,uVar11);
          uVar11 = __vbaCastObjVar(uVar11);
          piVar9 = (int *)__vbaObjSet(&local_80,uVar11);
          local_ac = 1;
          local_b4[0] = (int ******)0x2;
          iVar5 = (**(code **)(*piVar9 + 0x24))(piVar9,local_b4,&local_84);
          if (iVar5 < 0) {
            __vbaHresultCheckObj(iVar5,piVar9,&DAT_00470e54,0x24);
          }
          ppppppiVar7 = local_84;
          iVar5 = (*(code *)(*local_84)[0xd])(local_84,&local_88);
          if (iVar5 < 0) {
            __vbaHresultCheckObj(iVar5,ppppppiVar7,&DAT_00470e64,0x34);
          }
          uVar11 = local_88;
          local_88 = 0;
          iVar5 = *local_13c;
          uVar11 = __vbaObjSet(&local_94,uVar11);
          piVar9 = local_13c;
          iVar5 = (**(code **)(iVar5 + 0x5c))(local_13c,uVar11);
          if (iVar5 < 0) {
            __vbaHresultCheckObj(iVar5,piVar9,&DAT_00470e84,0x5c);
          }
          __vbaFreeObjList(6,&local_7c,&local_80,&local_84,&local_8c,&local_94,&local_90);
          __vbaFreeVarList(2,local_a4,local_b4);
          uVar11 = (*(code *)(*pppppppiVar15)[0xc2])(pppppppiVar15);
          piVar9 = (int *)__vbaObjSet(&local_8c,uVar11);
          iVar5 = (**(code **)(*piVar9 + 0x40))(piVar9,2,&local_90);
          if (iVar5 < 0) {
            __vbaHresultCheckObj(iVar5,piVar9,&DAT_00470e74,0x40);
          }
          local_13c = local_90;
          uVar11 = (*(code *)(*pppppppiVar15)[0xe3])(pppppppiVar15,4,0,&DAT_00470e54);
          uVar11 = __vbaObjSet(&local_7c,uVar11);
          uVar11 = __vbaLateIdCallLd(local_a4,uVar11);
          uVar11 = __vbaCastObjVar(uVar11);
          piVar9 = (int *)__vbaObjSet(&local_80,uVar11);
          local_ac = 1;
          local_b4[0] = (int ******)0x2;
          iVar5 = (**(code **)(*piVar9 + 0x24))(piVar9,local_b4,&local_84);
          if (iVar5 < 0) {
            __vbaHresultCheckObj(iVar5,piVar9,&DAT_00470e54,0x24);
          }
          ppppppiVar7 = local_84;
          iVar5 = (*(code *)(*local_84)[0xd])(local_84,&local_88);
          if (iVar5 < 0) {
            __vbaHresultCheckObj(iVar5,ppppppiVar7,&DAT_00470e64,0x34);
          }
          uVar11 = local_88;
          local_88 = 0;
          iVar5 = *local_13c;
          uVar11 = __vbaObjSet(&local_94,uVar11);
          piVar9 = local_13c;
          iVar5 = (**(code **)(iVar5 + 0x5c))(local_13c,uVar11);
          if (iVar5 < 0) {
            __vbaHresultCheckObj(iVar5,piVar9,&DAT_00470e84,0x5c);
          }
          __vbaFreeObjList(6,&local_7c,&local_80,&local_84,&local_8c,&local_94,&local_90);
          __vbaFreeVarList(2,local_a4,local_b4);
        }
        else {
          pppppppiStack_220 = (int *******)0x47fb8c;
          pppppppiStack_21c = pppppppiVar15;
          iVar5 = (*(code *)(*pppppppiVar15)[0x1c6])();
          if (iVar5 < 0) {
            pppppppiStack_220 = (int *******)0x718;
            pppppppiStack_224 = (int *******)&DAT_00470614;
            pppppppiStack_228 = pppppppiVar15;
            __vbaHresultCheckObj(iVar5);
          }
        }
        pppppppiStack_220 = (int *******)&DAT_0049107a;
        pppppppiStack_228 = (int *******)0x47feed;
        pppppppiStack_224 = pppppppiVar15;
        iVar5 = (*(code *)(*pppppppiVar15)[0x1c2])();
        if (iVar5 < 0) {
          pppppppiStack_228 = (int *******)0x708;
          __vbaHresultCheckObj(iVar5,pppppppiVar15,&DAT_00470614);
        }
        pppppppiStack_228 = pppppppiVar15;
        uVar11 = (*(code *)(*pppppppiVar15)[199])();
        piVar9 = (int *)__vbaObjSet(&local_7c,uVar11);
        iVar5 = (**(code **)(*piVar9 + 0x8c))(piVar9,0xffffffff);
        if (iVar5 < 0) {
          __vbaHresultCheckObj(iVar5,piVar9,&DAT_00471378,0x8c);
        }
        __vbaFreeObj();
        uVar11 = (*(code *)(*pppppppiVar15)[0xc1])(pppppppiVar15);
        piVar9 = (int *)__vbaObjSet(&local_7c,uVar11);
        iVar5 = (**(code **)(*piVar9 + 0x94))(piVar9,0xffffffff);
        if (iVar5 < 0) {
          __vbaHresultCheckObj(iVar5,piVar9,&DAT_00471368,0x94);
        }
        __vbaFreeObj();
        iVar5 = (*(code *)(*pppppppiVar15)[0x1c0])(pppppppiVar15,&DAT_0049107a);
        if (iVar5 < 0) {
          __vbaHresultCheckObj(iVar5,pppppppiVar15,&DAT_00470614,0x700);
        }
        DAT_00491078 = -1;
        __vbaFileClose(1);
      }
      else {
        __vbaFileClose();
        local_d4[0] = (int ******)0xa;
        local_c4[0] = (int ******)0xa;
        local_b4[0] = (int ******)0xa;
        local_cc = 0x80020004;
        local_bc = 0x80020004;
        local_ac = 0x80020004;
        local_dc = (double)CONCAT44(local_dc._4_4_,L"No es un archivo del Estanciero");
        local_e4 = (int ******)0x8;
        __vbaVarDup();
        Ordinal_595(local_a4,0,local_b4,local_c4,local_d4);
        __vbaFreeVarList(4,local_a4,local_b4,local_c4,local_d4);
      }
    }
  }
LAB_0047ffb2:
  local_8 = 0;
  pppppppiStack_1d4 = (int *******)&LAB_0048006d;
  ppppppiStack_1d8 = (int ******)local_174;
  pppppppiStack_1dc = (int *******)local_164;
  pppppppiStack_1e0 = (int *******)0x2;
  pppppppiStack_1e4 = (int *******)0x48004f;
  __vbaFreeVarList();
  ppppppiStack_1d8 = (int ******)0x48005d;
  __vbaFreeVar();
  ppppppiStack_1d8 = (int ******)0x480062;
  __vbaFreeVar();
  ppppppiStack_1d8 = (int ******)0x480067;
  __vbaFreeVar();
  ppppppiStack_1d8 = (int ******)0x48006c;
  __vbaFreeVar();
  return;
}


