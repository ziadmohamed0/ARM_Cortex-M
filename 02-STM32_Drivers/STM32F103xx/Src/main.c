/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Ziad Mohammed Fathi
 * @brief          : Main program body
 ******************************************************************************
 */

#include "CortexM3_Core/CortexM3_interfacing.h"


uint8_t var1 = 0;
uint8_t var2 = 0;


int main(void)
{
	SCB_setGroupPriority(SCB_GROUPPRIORITIES_2);

	var1 = RCC_oscConfig(&OSC_HSE);
	var2 = RCC_sysCLKConfig(&SYSCLK);
	while(1)
	{

	}
}
