/**
 ******************************************************************************
 * @file           : STM32F103xx_Vec.h
 * @author         : Ziad Mohammed Fathi
 * @brief          : STM32F103xx_Vec Header file.
 ******************************************************************************
 */

#ifndef STM32F103XX_STM32F103XX_VEC_H_
#define STM32F103XX_STM32F103XX_VEC_H_

/* ------------------------------ Include Start ---------------------------- */
#include "Common/Std_Types.h"
/* ------------------------------ Include END ------------------------------ */

/* ------------------------------ Macro Start ---------------------------- */
/* ------------------------------ Macro END ------------------------------ */

/* ------------------- Macro Functions Declarations Start ----------------- */
/* ------------------- Macro Functions Declarations END ------------------- */

/* ---------------------- Data Types Declarations Start -------------------- */
typedef enum
{
/* ------- Cortex-M3 Processor Exceptions Number -------- */
	NMI_IQRn                   =-14,
	MemManage_IQRn             =-12,
	BusFault_IQRn              =-11,
	UsageFault_IQRn            =-10,
	SVC_IQRn                   =-5,
	DebugMon_IQRn              =-4,
	PendSV_IQRn                =-2,
	SysTick_IQRn               =-1,
/* ------- STM32F103xx specific Interrupt Number -------- */
	WWDG_IQRn                  = 0,
	PVD_IQRn                   = 1,
	TAMPER_IQRn                = 2,
	RTC_IQRn                   = 3,
	FLASH_IQRn                 = 4,
	RCC_IQRn                   = 5,
	EXTI0_IQRn                 = 6,
	EXTI1_IQRn                 = 7,
	EXTI2_IQRn                 = 8,
	EXTI3_IQRn                 = 9,
	EXTI4_IQRn                 = 10,
	DMA1_Channel1_IQRn         = 11,
	DMA1_Channel2_IQRn         = 12,
	DMA1_Channel3_IQRn         = 13,
	DMA1_Channel4_IQRn         = 14,
	DMA1_Channel5_IQRn         = 15,
	DMA1_Channel6_IQRn         = 16,
	DMA1_Channel7_IQRn         = 17,
	ADC1_2_IQRn                = 18,
	USB_HP_CAN_TX_IQRn         = 19,
	USB_LP_CAN_RX0_IQRn        = 20,
	CAN_RX1_IQRn               = 21,
	CAN_SCE_IQRn               = 22,
	EXTI9_5_IQRn               = 23,
	TIM1_BRK_IQRn              = 24,
	TIM1_UP_IQRn               = 25,
	TIM1_TRG_COM_IQRn          = 26,
	TIM1_CC_IQRn               = 27,
	TIM2_IQRn                  = 28,
	TIM3_IQRn                  = 29,
	TIM4_IQRn                  = 30,
	I2C1_EV_IQRn               = 31,
	I2C1_ER_IQRn               = 32,
	I2C2_EV_IQRn               = 33,
	I2C2_ER_IQRn               = 34,
	SPI1_IQRn                  = 35,
	SPI2_IQRn                  = 36,
	USART1_IQRn                = 37,
	USART2_IQRn                = 38,
	USART3_IQRn                = 39,
	EXTI15_10_IQRn             = 40,
	RTCAlarm_IQRn              = 41,
	USBWakeup_iQR			   = 42,
	TIM8_BRK_IQRn              = 43,
	TIM8_UP_IQRn               = 44,
	TIM8_TRG_COM_IQRn          = 45,
	TIM8_CC_IQRn               = 46,
	ADC3_IQRn                  = 47,
	FSMC_IQRn                  = 48,
	SDIO_IQRn                  = 49,
	TIM5_IQRn                  = 50,
	SPI3_IQRn                  = 51,
	UART4_IQRn                 = 52,
	UART5_IQRn                 = 53,
	TIM6_IQRn                  = 54,
	TIM7_IQRn                  = 55,
	DMA2_Channel1_IQRn         = 56,
	DMA2_Channel2_IQRn         = 57,
	DMA2_Channel3_IQRn         = 58,
	DMA2_Channel4_5_IQRn       = 59
}IQRn_t;
/* ---------------------- Data Types Declarations END ---------------------- */

/* ------------------- Software interface Declarations Start ----------------- */
/* ------------------- Software interface Declarations END ------------------- */

#endif /* STM32F103XX_STM32F103XX_VEC_H_ */
