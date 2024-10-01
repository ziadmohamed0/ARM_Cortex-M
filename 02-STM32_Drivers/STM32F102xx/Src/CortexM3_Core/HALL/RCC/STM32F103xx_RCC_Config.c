/**
 ******************************************************************************
 * @file           : STM32F103xx_RCC_Config.c
 * @author         : Ziad Mohammed Fathi
 * @brief          : STM32F103xx_RCC_Config Source file
 ******************************************************************************
 */

#include "CortexM3_Core/HALL/RCC/STM32F103xx_RCC_Config.h"
#include "CortexM3_Core/HALL/RCC/STM32F103xx_RCC.h"

/**
 * brief	: High Speed External oscillator  initialization.
 */
OSCILLATOR_t OSC_HSE =
{
		.OSCILLATOR_Type 		= RCC_OSCILLATOR_TYPE_HSE,
		.HSE_STAT		 		= RCC_HSE_ON,
};

/**
 * brief	: High Speed Internal oscillator  initialization.
 */
OSCILLATOR_t OSC_HSI =
{
		.OSCILLATOR_Type		= RCC_OSCILLATOR_TYPE_HSI,
		.HSI_STAT				= RCC_HSI_ON,
};

/**
 * brief	: Low Speed External oscillator  initialization.
 */
OSCILLATOR_t OSC_LSE =
{
		.OSCILLATOR_Type		= RCC_OSCILLATOR_TYPE_LSE,
		.LSE_STAT				= RCC_LSE_ON,
};

/**
 * brief	: Low Speed Internal oscillator  initialization.
 */
OSCILLATOR_t OSC_LSI =
{
		.OSCILLATOR_Type 		= RCC_OSCILLATOR_TYPE_LSI,
		.LSI_STAT				= RCC_LSI_ON,
};

/**
 * brief	: system clock initialization by write values in AHB , APB1 & APB2 dividers.
 */
RCC_SYSCLK_t SYSCLK =
{
		.AHB_DIV 				= RCC_SYSCLK_AHB_None,
		.APB1_DIV 				= RCC_SYSCLK_APB1_None,
		.APB2_DIV				= RCC_SYSCLK_APB2_None,
};
