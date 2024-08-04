/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Ziad Mohammed Fathi
 * @brief          : Main program body
 ******************************************************************************
 */
#include "CortexM3_Core/CortexM3_Core_NVIC.h"

volatile uint32_t RCC_IRQHandler_flag = 0;
volatile uint32_t USART3_IRQHandler_flag = 0;

volatile uint32_t USART3_IRQHandler_Active_flag0 = 0;
volatile uint32_t USART3_IRQHandler_Active_flag1 = 0;

int main(void)
{
	NVIC_setEnableIQRn(RCC_IQRn);
	NVIC_setEnableIQRn(USART3_IQRn);

	NVIC_setPendingIQRn(RCC_IQRn);
	NVIC_setPendingIQRn(USART3_IQRn);

	NVIC_setDisableIQRn(RCC_IQRn);
	NVIC_setDisableIQRn(USART3_IQRn);

	while(1)
	{
		USART3_IRQHandler_Active_flag1 = NVIC_getActiveIQRn(USART3_IQRn);
	}
}

void RCC_IRQHandler(void)
{
	RCC_IRQHandler_flag = 1;
}

void USART3_IRQHandler(void)
{
	USART3_IRQHandler_flag = 1;
	USART3_IRQHandler_Active_flag0 = NVIC_getActiveIQRn(USART3_IQRn);
}
