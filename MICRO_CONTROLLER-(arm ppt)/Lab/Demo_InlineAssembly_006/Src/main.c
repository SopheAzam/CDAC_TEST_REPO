/**
  ******************************************************************************
  * @file    main.c
  * @author  Auto-generated by STM32CubeIDE
  * @version V1.0
  * @brief   Default main function.
  ******************************************************************************
*/

int main(void)
{
#if 1
	__asm volatile("LDR R1,=#0x20001000");
	__asm volatile("LDR R2,=#0x20001004");
	__asm volatile("LDR R0,[R1]");
	__asm volatile("LDR R1,[R2]");
	__asm volatile("ADD R0,R0,R1");
	__asm volatile("STR R0,[R2]");
#endif

	/* store 'val' in to R0*/
	int val=50;
	__asm volatile("MOV R0,%0": :"r"(val));

	/*read CONTROL register value in to control_reg vriable */
	int control_reg;
	__asm volatile("MRS %0,CONTROL": "=r"(control_reg) );

	//Operands are referenced by a percent sign followed by a single digit,
	//where %0 refers to the first %1 to the second operand and so forth.

    /* Read the value present at pointer p2 in to p1 */
	int p1, *p2;

	p2 = (int*)0x20000008;

	__asm volatile("LDR %0,[%1]": "=r"(p1): "r"(p2));


	for(;;);
}
