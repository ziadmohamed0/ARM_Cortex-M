/**
 ******************************************************************************
 * @file           : STM32F103xx_RCC_Config.h
 * @author         : Ziad Mohammed Fathi
 * @brief          : STM32F103xx_RCC_Config header file
 ******************************************************************************
 */

#ifndef CORTEXM3_CORE_HALL_RCC_STM32F103XX_RCC_CONFIG_H_
#define CORTEXM3_CORE_HALL_RCC_STM32F103XX_RCC_CONFIG_H_

/* ------------------------------ Include Start ---------------------------- */
#include "../Hall_Common/STM32F103xx_Prief_Defs.h"
/* ------------------------------ Include END ------------------------------ */

/* ------------------------------ Macro Start ---------------------------- */
	/* *** APB high-speed (APB2) *** */
#define RCC_SYSCLK_APB2_None				RCC_CFGRAPB2_PPRE2_NONE
#define RCC_SYSCLK_APB2_DIV_2				RCC_CFGRAPB2_PPRE2_2
#define RCC_SYSCLK_APB2_DIV_4				RCC_CFGRAPB2_PPRE2_4
#define RCC_SYSCLK_APB2_DIV_8				RCC_CFGRAPB2_PPRE2_8
#define RCC_SYSCLK_APB2_DIV_16				RCC_CFGRAPB2_PPRE2_16

	/* *** APB low-speed (APB1) *** */
#define RCC_SYSCLK_APB1_None				RCC_CFGRAPB2_PPRE1_NONE
#define RCC_SYSCLK_APB1_DIV_2				RCC_CFGRAPB2_PPRE1_2
#define RCC_SYSCLK_APB1_DIV_4				RCC_CFGRAPB2_PPRE1_4
#define RCC_SYSCLK_APB1_DIV_8				RCC_CFGRAPB2_PPRE1_8
#define RCC_SYSCLK_APB1_DIV_16				RCC_CFGRAPB2_PPRE1_16

	/* *** AHB *** */
#define RCC_SYSCLK_AHB_None					RCC_CFGRAPB2_HPRE_NONE
#define RCC_SYSCLK_AHB_DIV_2				RCC_CFGRAPB2_HPRE_2
#define RCC_SYSCLK_AHB_DIV_4				RCC_CFGRAPB2_HPRE_4
#define RCC_SYSCLK_AHB_DIV_8				RCC_CFGRAPB2_HPRE_8
#define RCC_SYSCLK_AHB_DIV_16				RCC_CFGRAPB2_HPRE_16
#define RCC_SYSCLK_AHB_DIV_64				RCC_CFGRAPB2_HPRE_64
#define RCC_SYSCLK_AHB_DIV_128				RCC_CFGRAPB2_HPRE_128
#define RCC_SYSCLK_AHB_DIV_256				RCC_CFGRAPB2_HPRE_256
#define RCC_SYSCLK_AHB_DIV_512				RCC_CFGRAPB2_HPRE_512
/* ------------------------------ Macro END ------------------------------ */

/* ------------------- Macro Functions Declarations Start ----------------- */
/* ------------------- Macro Functions Declarations END ------------------- */

/* ---------------------- Data Types Declarations Start -------------------- */
typedef struct
{
	uint32_t OSCILLATOR_Type;
	uint32_t HSE_STAT;
	uint32_t HSI_STAT;
	uint32_t LSE_STAT;
	uint32_t LSI_STAT;
}OSCILLATOR_t;

typedef struct
{
	uint32_t AHB_DIV;
	uint32_t APB1_DIV;
	uint32_t APB2_DIV;
}RCC_SYSCLK_t;

typedef enum
{
	RCC_OSCILLATOR_TYPE_NONE		= 0x00000000U,
	RCC_OSCILLATOR_TYPE_HSE			= 0x00000002U,
	RCC_OSCILLATOR_TYPE_HSI			= 0x00000004U,
	RCC_OSCILLATOR_TYPE_LSE			= 0x00000006U,
	RCC_OSCILLATOR_TYPE_LSI			= 0x00000008U,
}RCC_OSC_t;

typedef enum
{
	/* *** High Speed External oscillator Status *** */
	RCC_HSE_ON 						= 0x01U,
	RCC_HSE_OFF						= 0x00U,

	/* ** High Speed Internal oscillator Status *** */
	RCC_HSI_ON						= 0x01U,
	RCC_HSI_OFF						= 0x00U,

	/* *** Low Speed External oscillator Status *** */
	RCC_LSE_ON						= 0x01U,
	RCC_LSE_OFF						= 0x00U,

	/* *** Low Speed Internal oscillator Status *** */
	RCC_LSI_ON						= 0x01U,
	RCC_LSI_OFF						= 0x00U,
}RCC_OSC_stat;


/* ---------------------- Data Types Declarations END ---------------------- */

/* ------------------- Software interface Declarations Start ----------------- */
extern OSCILLATOR_t OSC_HSE;
extern OSCILLATOR_t OSC_HSI;
extern OSCILLATOR_t OSC_LSE;
extern OSCILLATOR_t OSC_LSI;
extern RCC_SYSCLK_t SYSCLK;
/* ------------------- Software interface Declarations END ------------------- */

#endif /* CORTEXM3_CORE_HALL_RCC_STM32F103XX_RCC_CONFIG_H_ */
