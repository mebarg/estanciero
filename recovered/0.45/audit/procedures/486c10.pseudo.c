/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

void __cdecl FUN_00486c10(uint param_1)

{
  short sVar1;
  undefined4 uVar2;
  short sVar3;
  undefined4 local_68 [2];
  undefined4 local_60;
  undefined4 local_58 [2];
  wchar_t *local_50;
  undefined4 local_48;
  undefined4 local_38 [4];
  undefined4 local_28 [4];
  uint local_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &LAB_00401656;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff84;
  local_8 = &DAT_00401400;
  sVar3 = (short)param_1;
  local_28[0] = 0;
  local_38[0] = 0;
  local_48 = 0;
  local_68[0] = 0;
  local_50 = L"0123456789.,";
  local_58[0] = 8;
  ExceptionList = &pvStack_14;
  Ordinal_608(local_28,(int)sVar3);
  local_60 = 0;
  local_68[0] = 0x8002;
  uVar2 = __vbaInStrVar(local_38,0,local_28,local_58,1);
  sVar1 = __vbaVarTstEq(local_68,uVar2);
  __vbaFreeVarList(2,local_28,local_38);
  local_18 = ~-(uint)(sVar1 != 0) & param_1;
  if (sVar3 == 8) {
    local_18 = 8;
  }
  if (sVar3 == 0xd) {
    local_18 = 0xd;
  }
  sVar1 = Ordinal_516(&DAT_00470f28);
  if (sVar3 == sVar1) {
    Ordinal_516(&DAT_00473370);
  }
  return;
}


