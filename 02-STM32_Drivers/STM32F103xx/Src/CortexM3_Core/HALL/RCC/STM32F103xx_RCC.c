/**
 ******************************************************************************
 * @file           : STM32F103xx_RCC.c
 * @author         : Ziad Mohammed Fathi
 * @brief          : STM32F103xx_RCC Source file
 ******************************************************************************
 */

#include "CortexM3_Core/HALL/RCC/STM32F103xx_RCC.h"

Return_t RCC_oscConfig(OSCILLATOR_t *copyOscConfig)
{
	Return_t retValue = Ret_OK;

	if (copyOscConfig == NULL)
	{
		retValue = Ret_ERROR;
	}
	else
	{
		switch (copyOscConfig->OSCILLATOR_Type)
		{
			case RCC_OSCILLATOR_TYPE_HSE:
					switch (copyOscConfig->HSE_STAT)
					{
						case RCC_HSE_ON:
								SET_BIT(RCC->RCC_CR,HSEON);
							break;
						case RCC_HSE_OFF:
								CLR_BIT(RCC->RCC_CR,HSEON);
							break;
					}
				break;

			case RCC_OSCILLATOR_TYPE_HSI:
					switch (copyOscConfig->HSI_STAT)
					{
					case RCC_HSI_ON:
							SET_BIT(RCC->RCC_CR,HSION);
						break;
					case RCC_HSI_OFF:
							CLR_BIT(RCC->RCC_CR,HSION);
						break;
					}
				break;

			case RCC_OSCILLATOR_TYPE_LSE:
				switch (copyOscConfig->LSE_STAT)
				{
				case RCC_LSE_ON:
						SET_BIT(RCC->RCC_BDCR,LSEON);
					break;
				case RCC_LSE_OFF:
						CLR_BIT(RCC->RCC_BDCR,LSEON);
					break;
				}
				break;

			case RCC_OSCILLATOR_TYPE_LSI:
				switch (copyOscConfig->LSI_STAT)
				{
				case RCC_LSI_ON:
						SET_BIT(RCC->RCC_CSR,LSION);
					break;
				case RCC_LSI_OFF:
						CLR_BIT(RCC->RCC_CSR,LSEON);
					break;
				}
				break;
		}
	}
	return retValue;
}


Return_t RCC_sysCLKConfig(RCC_SYSCLK_t *copySYSCLKConfig)
{
	Return_t retValue = Ret_OK;

	if(copySYSCLKConfig == NULL)
	{
		retValue = Ret_ERROR;
	}
	else
	{
		RCC->RCC_CFGR |= (copySYSCLKConfig->AHB_DIV  << RCC_CFGRAPB2_HPRE_POS );
		RCC->RCC_CFGR |= (copySYSCLKConfig->APB1_DIV << RCC_CFGRAPB2_PPRE1_POS);
		RCC->RCC_CFGR |= (copySYSCLKConfig->APB2_DIV << RCC_CFGRAPB2_PPRE2_POS);
}
	return retValue;
}
