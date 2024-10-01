/**
 ******************************************************************************
 * @file           : CortexM3_Core_Systick.c
 * @author         : Ziad Mohammed Fathi
 * @brief          : CortexM3_Core_Systick Source file.
 ******************************************************************************
 */

#include "CortexM3_Core/CortexM3_Core_Systick.h"

static  ptrFunction SystickCallBack = NULL;
static volatile uint8_t		SystickMode		= Systick_singleInterval_Mode;

Return_t Systick_init(uint32_t copyTicks)
{
	uint8_t retValue = Ret_OK;
	if(copyTicks > Systick_CSR_RELOAD_MSK)
	{
		retValue = Ret_ERROR;
	}
	else
	{
		CLR_BIT(Systick->SYST_CSR,Systick_CSR_ENABLE_Pos);
		Systick->SYST_RVR = copyTicks;
		Systick->SYST_CVR = 0;

	#if		(Systick_CLK_COURCE == Systick_CLK_COURCE_DIV_1)
			SET_BIT(Systick->SYST_CSR, Systick_CSR_CLKSOURCE_Pos);
	#elif	(Systick_CLK_COURCE == Systick_CLK_COURCE_DIV_8)
			CLR_BIT(Systick->SYST_CSR, Systick_CSR_CLKSOURCE_Pos);
	#else
	#error	"Invalid Clock Source"
	#endif
			CLR_BIT(Systick->SYST_CSR, Systick_CSR_TICKINT_Pos);
	}

	return retValue;
}

void Systick_deInit(void)
{
	CLR_BIT(Systick->SYST_CSR,Systick_CSR_ENABLE_Pos);
	Systick->SYST_RVR = 0;
	Systick->SYST_CVR = 0;
	CLR_BIT(Systick->SYST_CSR, Systick_CSR_TICKINT_Pos);
}

void Systick_waitBlocking(uint32_t copyTicks)
{
	Systick->SYST_RVR = copyTicks;
	SET_BIT(Systick->SYST_CSR,Systick_CSR_ENABLE_Pos);
	while(GET_BIT(Systick->SYST_CSR,Systick_CSR_COUNTFLAG_MSK == 0));
	CLR_BIT(Systick->SYST_CSR,Systick_CSR_ENABLE_Pos);
	Systick->SYST_RVR = 0;
	Systick->SYST_CVR = 0;
}

void Systick_singleInterval(uint32_t copyTicks,ptrFunction *callBack)
{
	if(callBack == NULL){
	}
	else
	{
		Systick->SYST_RVR = copyTicks;
		SystickCallBack   = callBack;
		SystickMode		  = Systick_singleInterval_Mode;
		SET_BIT(Systick->SYST_CSR, Systick_CSR_TICKINT_Pos);
		SET_BIT(Systick->SYST_CSR,Systick_CSR_ENABLE_Pos);
	}
}

void Systick_periodicInterval(uint32_t copyTicks,ptrFunction *callBack)
{
	if(callBack == NULL){
	}
	else
	{
		Systick->SYST_RVR = copyTicks;
		SystickCallBack   = callBack;
		SystickMode		  = Systick_periodicInterval_Mode;
		SET_BIT(Systick->SYST_CSR, Systick_CSR_TICKINT_Pos);
		SET_BIT(Systick->SYST_CSR,Systick_CSR_ENABLE_Pos);
	}
}

Return_t Systick_getRemainingTicks(void)
{
	uint32_t retValue = 0;
	retValue = Systick->SYST_CVR;
	return retValue;
}

Return_t Systick_getElapsedTicks(void)
{
	uint32_t retValue = 0;
	retValue = Systick->SYST_RVR - Systick->SYST_CVR;
	return retValue;
}

void SysTick_Handler(void)
{
	if(SystickMode == Systick_singleInterval_Mode)
	{
		Systick_deInit();
	}
	if(SystickCallBack)
	{
		SystickCallBack();
	}
}
