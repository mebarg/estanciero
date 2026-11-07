/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

void FUN_00470bc8(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (DAT_004916f4 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00470bd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_004916f4)();
    return;
  }
  UNRECOVERED_JUMPTABLE = (code *)DllFunctionCall(&PTR_s_gdi32_00470bb0);
                    /* WARNING: Could not recover jumptable at 0x00470bdf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


