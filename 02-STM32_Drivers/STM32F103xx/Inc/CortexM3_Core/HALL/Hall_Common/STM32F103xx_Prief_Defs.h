/**
 ******************************************************************************
 * @file           : STM32F103xx_Prief_Defs.h
 * @author         : Ziad Mohammed Fathi
 * @brief          : STM32F103xx_Prief_Defs header file
 ******************************************************************************
 */


#ifndef CORTEXM3_CORE_HALL_HALL_COMMON_STM32F103XX_PRIEF_DEFS_H_
#define CORTEXM3_CORE_HALL_HALL_COMMON_STM32F103XX_PRIEF_DEFS_H_

/* ------------------------------ Include Start ---------------------------- */
#include "Common/Std_Types.h"
/* ------------------------------ Include END ------------------------------ */

/* ------------------------------ Macro Start ---------------------------- */
#define Periph_Base							(0x40000000UL)

	/* *@groupMacros : RCC . */
#define RCC_Base							(0x40021000UL)
#define RCC 								((RCC_t *) RCC_Base)

	/* *** APB high-speed (APB2) *** */
#define RCC_CFGRAPB2_PPRE2_POS				(11U)
#define RCC_CFGRAPB2_PPRE2_MSK				(0x7UL << RCC_APB2_POS)

#define RCC_CFGRAPB2_PPRE2_NONE				0x0U
#define RCC_CFGRAPB2_PPRE2_2				0x4U
#define RCC_CFGRAPB2_PPRE2_4				0x5U
#define RCC_CFGRAPB2_PPRE2_8				0x6U
#define RCC_CFGRAPB2_PPRE2_16				0x7U

	/* *** APB low-speed (APB1) *** */
#define RCC_CFGRAPB2_PPRE1_POS				(8U)
#define RCC_CFGRAPB2_PPRE1_MSK				(0x7UL << RCC_APB2_POS)

#define RCC_CFGRAPB2_PPRE1_NONE				0x0U
#define RCC_CFGRAPB2_PPRE1_2				0x4U
#define RCC_CFGRAPB2_PPRE1_4				0x5U
#define RCC_CFGRAPB2_PPRE1_8				0x6U
#define RCC_CFGRAPB2_PPRE1_16				0x7U

	/* *** AHB *** */
#define RCC_CFGRAPB2_HPRE_POS				(4U)
#define RCC_CFGRAPB2_HPRE_MSK				(0xFUL << RCC_APB2_POS)

#define RCC_CFGRAPB2_HPRE_NONE				0x0U
#define RCC_CFGRAPB2_HPRE_2					0x8U
#define RCC_CFGRAPB2_HPRE_4					0x9U
#define RCC_CFGRAPB2_HPRE_8					0xAU
#define RCC_CFGRAPB2_HPRE_16				0xBU
#define RCC_CFGRAPB2_HPRE_64				0xCU
#define RCC_CFGRAPB2_HPRE_128				0xDU
#define RCC_CFGRAPB2_HPRE_256				0xEU
#define RCC_CFGRAPB2_HPRE_512				0xFU

	/* ***** enable HSE OSC Bit ***** */
#define HSEON								16U
#define HSION								0U
#define LSEON								0U
#define LSION								0U

	/* ***** Number Of Bits In RCC_APB2ENR ***** */
#define IOPAEN								2U	// GPIOA
#define IOPBEN								3U	// GPIOB
#define IOPCEN								4U	// GPIOC
#define IOPDEN								5U	// GPIOD
#define IOPEEN								6U	// GPIOE

/* ------------------------------ Macro END ------------------------------ */

/* ------------------- Macro Functions Declarations Start ----------------- */
/* ------------------- Macro Functions Declarations END ------------------- */

/* ---------------------- Data Types Declarations Start -------------------- */
/**
 * @Brief	: SCB Registers.
 */
typedef struct
{
	volatile uint32_t CPUID;
	volatile uint32_t ICSR;
	volatile uint32_t VTOR;
	volatile uint32_t AIRCR;
	volatile uint32_t SCR;
	volatile uint32_t CCR;
	volatile uint32_t SHPR1;
	volatile uint32_t SHPR2;
	volatile uint32_t SHPR3;
	volatile uint32_t SHCRS;
	volatile uint32_t CFSR;
	volatile uint32_t MMSR;
	volatile uint32_t BFSR;
	volatile uint32_t UFSR;
	volatile uint32_t HFSR;
	volatile uint32_t MMAR;
	volatile uint32_t BFAR;
	volatile uint32_t AFSR;
}SCB_t;

/**
 * @Brief	: Vector Table.
 */
typedef enum
{
/* ------- Cortex-M3 Processor Exceptions Number -------- */
	NMI_IQRn                   	=-14,
	MemManage_IQRn             	=-12,
	BusFault_IQRn              	=-11,
	UsageFault_IQRn            	=-10,
	SVC_IQRn                   	=-5,
	DebugMon_IQRn              	=-4,
	PendSV_IQRn                	=-2,
	SysTick_IQRn               	=-1,
/* ------- STM32F103xx specific Interrupt Number -------- */
	WWDG_IQRn                  	= 0,
	PVD_IQRn                   	= 1,
	TAMPER_IQRn                	= 2,
	RTC_IQRn                   	= 3,
	FLASH_IQRn                 	= 4,
	RCC_IQRn                   	= 5,
	EXTI0_IQRn                 	= 6,
	EXTI1_IQRn                 	= 7,
	EXTI2_IQRn                 	= 8,
	EXTI3_IQRn                 	= 9,
	EXTI4_IQRn                 	= 10,
	DMA1_Channel1_IQRn         	= 11,
	DMA1_Channel2_IQRn         	= 12,
	DMA1_Channel3_IQRn         	= 13,
	DMA1_Channel4_IQRn         	= 14,
	DMA1_Channel5_IQRn         	= 15,
	DMA1_Channel6_IQRn         	= 16,
	DMA1_Channel7_IQRn         	= 17,
	ADC1_2_IQRn                	= 18,
	USB_HP_CAN_TX_IQRn         	= 19,
	USB_LP_CAN_RX0_IQRn        	= 20,
	CAN_RX1_IQRn               	= 21,
	CAN_SCE_IQRn               	= 22,
	EXTI9_5_IQRn               	= 23,
	TIM1_BRK_IQRn              	= 24,
	TIM1_UP_IQRn               	= 25,
	TIM1_TRG_COM_IQRn          	= 26,
	TIM1_CC_IQRn               	= 27,
	TIM2_IQRn                  	= 28,
	TIM3_IQRn                  	= 29,
	TIM4_IQRn                  	= 30,
	I2C1_EV_IQRn               	= 31,
	I2C1_ER_IQRn               	= 32,
	I2C2_EV_IQRn               	= 33,
	I2C2_ER_IQRn               	= 34,
	SPI1_IQRn                  	= 35,
	SPI2_IQRn                  	= 36,
	USART1_IQRn                	= 37,
	USART2_IQRn                	= 38,
	USART3_IQRn                	= 39,
	EXTI15_10_IQRn             	= 40,
	RTCAlarm_IQRn              	= 41,
	USBWakeup_iQR			   	= 42,
	TIM8_BRK_IQRn              	= 43,
	TIM8_UP_IQRn               	= 44,
	TIM8_TRG_COM_IQRn          	= 45,
	TIM8_CC_IQRn               	= 46,
	ADC3_IQRn                  	= 47,
	FSMC_IQRn                 	= 48,
	SDIO_IQRn                  	= 49,
	TIM5_IQRn                  	= 50,
	SPI3_IQRn                  	= 51,
	UART4_IQRn                 	= 52,
	UART5_IQRn                 	= 53,
	TIM6_IQRn                  	= 54,
	TIM7_IQRn                  	= 55,
	DMA2_Channel1_IQRn         	= 56,
	DMA2_Channel2_IQRn         	= 57,
	DMA2_Channel3_IQRn         	= 58,
	DMA2_Channel4_5_IQRn       	= 59
}IQRn_t;

/**
 * @Brief	: Return Status.
 */
typedef enum
{
	Ret_ERROR					= 0x00U,
	Ret_OK     					= 0x01U,
}Return_t;

/**
 * @Brief	: RCC registers.
 */
typedef struct
{
	volatile uint32_t RCC_CR;
	volatile uint32_t RCC_CFGR;
	volatile uint32_t RCC_CIR;
	volatile uint32_t RCC_APB2RSTR;
	volatile uint32_t RCC_APB1RSTR;
	volatile uint32_t RCC_AHBENR;
	volatile uint32_t RCC_APB2ENR;
	volatile uint32_t RCC_APB1ENR;
	volatile uint32_t RCC_BDCR;
	volatile uint32_t RCC_CSR;
	volatile uint32_t RCC_AHBSTR;
	volatile uint32_t RCC_CFGR2;
}RCC_t;
/* ---------------------- Data Types Declarations END ---------------------- */


#endif /* CORTEXM3_CORE_HALL_HALL_COMMON_STM32F103XX_PRIEF_DEFS_H_ */
