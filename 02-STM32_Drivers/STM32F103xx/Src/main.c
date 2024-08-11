/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Ziad Mohammed Fathi
 * @brief          : Main program body
 ******************************************************************************
 */

#include "CortexM3_Core/CortexM3_interfacing.h"

uint32_t Var1 = 0;
uint32_t volatile Var2 = 0;
uint32_t volatile Var3 = 0;

void SystickFunc1(void){
	Var2++;
}

void SystickFunc2(void){
	Var3++;
}
int main(void)
{
	SCB_setGroupPriority(SCB_GROUPPRIORITIES_2);
	Var1 = Systick_init(1000000);
	Systick_singleInterval(1000000, SystickFunc1);
	Systick_periodicInterval(1000000, SystickFunc2);

	while(1)
	{

	}
}
