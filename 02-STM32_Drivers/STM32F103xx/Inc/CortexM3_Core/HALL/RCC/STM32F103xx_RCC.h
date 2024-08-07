/**
 ******************************************************************************
 * @file           : STM32F103xx_RCC.h
 * @author         : Ziad Mohammed Fathi
 * @brief          : STM32F103xx_RCC header file
 ******************************************************************************
 */

#ifndef CORTEXM3_CORE_HALL_RCC_STM32F103XX_RCC_H_
#define CORTEXM3_CORE_HALL_RCC_STM32F103XX_RCC_H_

/* ------------------------------ Include Start ---------------------------- */
#include "STM32F103xx_RCC_Config.h"
/* ------------------------------ Include END ------------------------------ */

/* ------------------------------ Macro Start ---------------------------- */
/* ------------------------------ Macro END ------------------------------ */

/* ------------------- Macro Functions Declarations Start ----------------- */

	/* ***** Enable CLK GPIO Pins (GPIO-A ~ GPIO-E) ***** */
#define RCC_GPIOA_CLK_enable(void)		(SET_BIT(RCC->RCC_APB2ENR,IOPAEN))
#define RCC_GPIOB_CLK_enable(void)		(SET_BIT(RCC->RCC_APB2ENR,IOPBEN))
#define RCC_GPIOC_CLK_enable(void)		(SET_BIT(RCC->RCC_APB2ENR,IOPCEN))
#define RCC_GPIOD_CLK_enable(void)		(SET_BIT(RCC->RCC_APB2ENR,IOPDEN))
#define RCC_GPIOE_CLK_enable(void)		(SET_BIT(RCC->RCC_APB2ENR,IOPEEN))

	/* ***** Disable CLK GPIO Pins (GPIO-A ~ GPIO-E) ***** */
#define RCC_GPIOA_CLK_disable(void)		(CLR_BIT(RCC->RCC_APB2ENR,IOPAEN))
#define RCC_GPIOB_CLK_disable(void)		(CLR_BIT(RCC->RCC_APB2ENR,IOPBEN))
#define RCC_GPIOC_CLK_disable(void)		(CLR_BIT(RCC->RCC_APB2ENR,IOPCEN))
#define RCC_GPIOD_CLK_disable(void)		(CLR_BIT(RCC->RCC_APB2ENR,IOPDEN))
#define RCC_GPIOE_CLK_disable(void)		(CLR_BIT(RCC->RCC_APB2ENR,IOPEEN))
/* ------------------- Macro Functions Declarations END ------------------- */

/* ---------------------- Data Types Declarations Start -------------------- */

/* ---------------------- Data Types Declarations END ---------------------- */

/* ------------------- Software interface Declarations Start ----------------- */
Return_t RCC_oscConfig(OSCILLATOR_t *copyOscConfig);
Return_t RCC_sysCLKConfig(RCC_SYSCLK_t *copySYSCLKConfig);
/* ------------------- Software interface Declarations END ------------------- */

#endif /* CORTEXM3_CORE_HALL_RCC_STM32F103XX_RCC_H_ */
