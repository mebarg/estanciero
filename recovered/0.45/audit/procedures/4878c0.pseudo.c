/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

uint FUN_004878c0(byte *param_1,float *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  bVar1 = *param_1;
  if (5 < bVar1 - 1) {
    __vbaGenerateBoundsError();
  }
  uVar2 = DAT_0049106c;
  if (*(char *)(DAT_0049106c + 0x12 + (bVar1 - 1) * 0x2c) == '\0') {
    uVar3 = *param_1 - 1;
    if (5 < uVar3) {
      __vbaGenerateBoundsError();
    }
    uVar2 = uVar3 * 0xb & 0xffff0000;
    if (*(float *)(DAT_0049106c + 8 + uVar3 * 0x2c) < *param_2) {
      return 0xffffffff;
    }
  }
  return uVar2 & 0xffff0000;
}


