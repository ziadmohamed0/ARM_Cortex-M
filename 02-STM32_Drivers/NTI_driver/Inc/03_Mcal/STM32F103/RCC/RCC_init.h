
/**
--------------------------------------------------------
--------------------------------------------------------
 * @name    : RCC_init.h
 * @author  : Ziad Mohammed Fathy.
 * @date    : Sep.29.2024
 * @version :   _v1_
 * @brief   :
--------------------------------------------------------
--------------------------------------------------------
 */

#ifndef _MCAL_RCC_RCC_INIT_H_
#define _MCAL_RCC_RCC_INIT_H_

/* -------------------- Include Start -------------------- */
#include "RCC_cfg.h"
/* -------------------- Include END -------------------- */

/* -------------------- Macro Start -------------------- */
/* -------------------- Macro END -------------------- */

/* -------------------- Macro Functions Start -------------------- */


		/* ***** Enable , Disable CLK Internal, External oscillator.  ***** */

/* ***** Enable CLK Pins ***** */
#define MRCC_EN_CLK_HSI(void)				(SET_BIT(RCC_AHBENR, _CLK_EN_HSI))
#define MRCC_EN_CLK_HSE(void)				(SET_BIT(RCC_AHBENR, _CLK_EN_HSE))
#define MRCC_EN_CLK_CSS(void)				(SET_BIT(RCC_AHBENR, _CLK_EN_CSS))

/* ***** Disable CLK Pins ***** */
#define MRCC_DIS_CLK_HSI(void)				(CLR_BIT(RCC_AHBENR, _CLK_EN_HSI))
#define MRCC_DIS_CLK_HSE(void)				(CLR_BIT(RCC_AHBENR, _CLK_EN_HSE))
#define MRCC_DIS_CLK_CSS(void)				(CLR_BIT(RCC_AHBENR, _CLK_EN_CSS))


				/* ***** Enable , Disable CLK AHP Bus.  ***** */

/* ***** Enable CLK Pins ***** */
#define MRCC_EN_CLK_DMA1(void)				(SET_BIT(RCC_AHBENR, _CLK_EN_DMA1))
#define MRCC_EN_CLK_DMA2(void)				(SET_BIT(RCC_AHBENR, _CLK_EN_DMA2))
#define MRCC_EN_CLK_SRAM(void)				(SET_BIT(RCC_AHBENR, _CLK_EN_SRAM))
#define MRCC_EN_CLK_FLITF(void)				(SET_BIT(RCC_AHBENR, _CLK_EN_FLITF))
#define MRCC_EN_CLK_CRC(void)				(SET_BIT(RCC_AHBENR, _CLK_EN_CRC))
#define MRCC_EN_CLK_OTGFS(void)				(SET_BIT(RCC_AHBENR, _CLK_EN_OTGFS))
#define MRCC_EN_CLK_ETHMA(void)				(SET_BIT(RCC_AHBENR, _CLK_EN_ETHMA))
#define MRCC_EN_CLK_ETHMAC_TX(void)			(SET_BIT(RCC_AHBENR, _CLK_EN_ETHMAC_TX))
#define MRCC_EN_CLK_ETHMAC_RX(void)			(SET_BIT(RCC_AHBENR, _CLK_EN_ETHMAC_RX))

/* ***** Disable CLK Pins ***** */
#define MRCC_DIS_CLK_ETHMA(void)			(CLR_BIT(RCC_AHBENR, _CLK_EN_ETHMA))
#define MRCC_DIS_CLK_ETHMAC_TX(void)		(CLR_BIT(RCC_AHBENR, _CLK_EN_ETHMAC_TX))
#define MRCC_DIS_CLK_ETHMAC_RX(void)		(CLR_BIT(RCC_AHBENR, _CLK_EN_ETHMAC_RX))
#define MRCC_DIS_CLK_OTGFS(void)			(CLR_BIT(RCC_AHBENR, _CLK_EN_OTGFS))
#define MRCC_DIS_CLK_CRC(void)				(CLR_BIT(RCC_AHBENR, _CLK_EN_CRC))
#define MRCC_DIS_CLK_DMA1(void)				(CLR_BIT(RCC_AHBENR, _CLK_EN_DMA1))
#define MRCC_DIS_CLK_DMA2(void)				(CLR_BIT(RCC_AHBENR, _CLK_EN_DMA2))
#define MRCC_DIS_CLK_SRAM(void)				(CLR_BIT(RCC_AHBENR, _CLK_EN_SRAM))
#define MRCC_DIS_CLK_FLITF(void)			(CLR_BIT(RCC_AHBENR, _CLK_EN_FLITF))



				/* ***** Enable , Disable CLK APB1 Bus.  ***** */

/* ***** Enable CLK (WWDG, BKP, PWR, DAC) Pins ***** */
#define MRCC_EN_CLK_WWDG(void)				(SET_BIT(RCC_APB1ENR, _CLK_EN_WWDG))
#define MRCC_EN_CLK_BKP(void)				(SET_BIT(RCC_APB1ENR, _CLK_EN_BKP))
#define MRCC_EN_CLK_PWR(void)				(SET_BIT(RCC_APB1ENR, _CLK_EN_PWR))
#define MRCC_EN_CLK_DAC(void)				(SET_BIT(RCC_APB1ENR, _CLK_EN_DAC))

/* ***** Disable CLK (WWDG, BKP, PWR, DAC) Pins ***** */
#define MRCC_DIS_CLK_DAC(void)				(CLR_BIT(RCC_APB1ENR, _CLK_EN_DAC))
#define MRCC_DIS_CLK_PWR(void)				(CLR_BIT(RCC_APB1ENR, _CLK_EN_PWR))
#define MRCC_DIS_CLK_BKP(void)				(CLR_BIT(RCC_APB1ENR, _CLK_EN_BKP))
#define MRCC_DIS_CLK_WWDG(void)				(CLR_BIT(RCC_APB1ENR, _CLK_EN_WWDG))

/* ***** Enable CLK (CAN, I2C, SPI)-> 1,2 Pins ***** */
#define MRCC_EN_CLK_CAN1(void)				(SET_BIT(RCC_APB1ENR, _CLK_EN_CAN1))
#define MRCC_EN_CLK_CAN2(void)				(SET_BIT(RCC_APB1ENR, _CLK_EN_CAN2))
#define MRCC_EN_CLK_I2C1(void)				(SET_BIT(RCC_APB1ENR, _CLK_EN_I2C1))
#define MRCC_EN_CLK_I2C2(void)				(SET_BIT(RCC_APB1ENR, _CLK_EN_I2C2))
#define MRCC_EN_CLK_SPI2(void)				(SET_BIT(RCC_APB1ENR, _CLK_EN_SPI2))
#define MRCC_EN_CLK_SPI3(void)				(SET_BIT(RCC_APB1ENR, _CLK_EN_SPI3))

/* ***** Disable CLK (CAN, I2C, SPI)-> 1,2 Pins ***** */
#define MRCC_DIS_CLK_CAN1(void)				(CLR_BIT(RCC_APB1ENR, _CLK_EN_CAN1))
#define MRCC_DIS_CLK_CAN2(void)				(CLR_BIT(RCC_APB1ENR, _CLK_EN_CAN2))
#define MRCC_DIS_CLK_SPI2(void)				(CLR_BIT(RCC_APB1ENR, _CLK_EN_SPI2))
#define MRCC_DIS_CLK_SPI3(void)				(CLR_BIT(RCC_APB1ENR, _CLK_EN_SPI3))
#define MRCC_DIS_CLK_I2C1(void)				(CLR_BIT(RCC_APB1ENR, _CLK_EN_I2C1))
#define MRCC_DIS_CLK_I2C2(void)				(CLR_BIT(RCC_APB1ENR, _CLK_EN_I2C2))

/* ***** Enable CLK USART 2,3,4,5 Pins ***** */
#define MRCC_EN_CLK_USART2(void)			(SET_BIT(RCC_APB1ENR, _CLK_EN_USART2))
#define MRCC_EN_CLK_USART3(void)			(SET_BIT(RCC_APB1ENR, _CLK_EN_USART3))
#define MRCC_EN_CLK_USART4(void)			(SET_BIT(RCC_APB1ENR, _CLK_EN_USART4))
#define MRCC_EN_CLK_USART5(void)			(SET_BIT(RCC_APB1ENR, _CLK_EN_USART5))

/* ***** Disable CLK USART 2,3,4,5 Pins ***** */
#define MRCC_DIS_CLK_USART2(void)			(CLR_BIT(RCC_APB1ENR, _CLK_EN_USART2))
#define MRCC_DIS_CLK_USART3(void)			(CLR_BIT(RCC_APB1ENR, _CLK_EN_USART3))
#define MRCC_DIS_CLK_USART4(void)			(CLR_BIT(RCC_APB1ENR, _CLK_EN_USART4))
#define MRCC_DIS_CLK_USART5(void)			(CLR_BIT(RCC_APB1ENR, _CLK_EN_USART5))

/* ***** Enable CLK TIMER 2,3,4,5,6,7 Pins ***** */
#define MRCC_EN_CLK_TIM2(void)				(SET_BIT(RCC_APB1ENR, _CLK_EN_TIM2))
#define MRCC_EN_CLK_TIM3(void)				(SET_BIT(RCC_APB1ENR, _CLK_EN_TIM3))
#define MRCC_EN_CLK_TIM4(void)				(SET_BIT(RCC_APB1ENR, _CLK_EN_TIM4))
#define MRCC_EN_CLK_TIM5(void)				(SET_BIT(RCC_APB1ENR, _CLK_EN_TIM5))
#define MRCC_EN_CLK_TIM6(void)				(SET_BIT(RCC_APB1ENR, _CLK_EN_TIM6))
#define MRCC_EN_CLK_TIM7(void)				(SET_BIT(RCC_APB1ENR, _CLK_EN_TIM7))

/* ***** Disable CLK TIMER 2,3,4,5,6,7 Pins ***** */
#define MRCC_DIS_CLK_TIM2(void)				(CLR_BIT(RCC_APB1ENR, _CLK_EN_TIM2))
#define MRCC_DIS_CLK_TIM3(void)				(CLR_BIT(RCC_APB1ENR, _CLK_EN_TIM3))
#define MRCC_DIS_CLK_TIM4(void)				(CLR_BIT(RCC_APB1ENR, _CLK_EN_TIM4))
#define MRCC_DIS_CLK_TIM5(void)				(CLR_BIT(RCC_APB1ENR, _CLK_EN_TIM5))
#define MRCC_DIS_CLK_TIM6(void)				(CLR_BIT(RCC_APB1ENR, _CLK_EN_TIM6))
#define MRCC_DIS_CLK_TIM7(void)				(CLR_BIT(RCC_APB1ENR, _CLK_EN_TIM7))



				/* ***** Enable , Disable CLK APB2 Bus.  ***** */

/* ***** Enable CLK (USART1, TIM1, SPI1) Pins ***** */
#define MRCC_EN_CLK_USART1(void)			(SET_BIT(RCC_APB2ENR, _CLK_EN_USART1))
#define MRCC_EN_CLK_TIM1(void)				(SET_BIT(RCC_APB2ENR, _CLK_EN_TIM1))
#define MRCC_EN_CLK_SPI1(void)				(SET_BIT(RCC_APB2ENR, _CLK_EN_SPI1))

/* ***** Disable CLK (USART1, TIM1, SPI1) Pins ***** */
#define MRCC_DIS_CLK_USART1(void)			(CLR_BIT(RCC_APB2ENR, _CLK_EN_USART1))
#define MRCC_DIS_CLK_TIM1(void)				(CLR_BIT(RCC_APB2ENR, _CLK_EN_TIM1))
#define MRCC_DIS_CLK_SPI1(void)				(CLR_BIT(RCC_APB2ENR, _CLK_EN_SPI1))

/* ***** Enable CLK ADC 1,2 Pins ***** */
#define MRCC_EN_CLK_ADC1(void)				(SET_BIT(RCC_APB2ENR, _CLK_EN_ADC1))
#define MRCC_EN_CLK_ADC2(void)				(SET_BIT(RCC_APB2ENR, _CLK_EN_ADC2))

/* ***** Disable CLK ADC 1,2 Pins ***** */
#define MRCC_DIS_CLK_ADC1(void)				(CLR_BIT(RCC_APB2ENR, _CLK_EN_ADC1))
#define MRCC_DIS_CLK_ADC2(void)				(CLR_BIT(RCC_APB2ENR, _CLK_EN_ADC2))

/* ***** Enable CLK InPut OutPut Pins ***** */
#define MRCC_EN_CLK_AFIO(void)				(SET_BIT(RCC_APB2ENR, _CLK_EN_AFIO))
#define MRCC_EN_CLK_GPIOA(void)				(SET_BIT(RCC_APB2ENR,_CLK_EN_IOPA))
#define MRCC_EN_CLK_GPIOB(void)				(SET_BIT(RCC_APB2ENR,_CLK_EN_IOPB))
#define MRCC_EN_CLK_GPIOC(void)				(SET_BIT(RCC_APB2ENR,_CLK_EN_IOPC))
#define MRCC_EN_CLK_GPIOD(void)				(SET_BIT(RCC_APB2ENR,_CLK_EN_IOPD))
#define MRCC_EN_CLK_GPIOE(void)				(SET_BIT(RCC_APB2ENR,_CLK_EN_IOPE))

/* ***** Disable CLK GPIO Pins (GPIO-A ~ GPIO-E) ***** */
#define MRCC_DIS_CLK_GPIOA(void)			(CLR_BIT(RCC_APB2ENR,_CLK_EN_IOPA))
#define MRCC_DIS_CLK_GPIOB(void)			(CLR_BIT(RCC_APB2ENR,_CLK_EN_IOPB))
#define MRCC_DIS_CLK_GPIOC(void)			(CLR_BIT(RCC_APB2ENR,_CLK_EN_IOPC))
#define MRCC_DIS_CLK_GPIOD(void)			(CLR_BIT(RCC_APB2ENR,_CLK_EN_IOPD))
#define MRCC_DIS_CLK_GPIOE(void)			(CLR_BIT(RCC_APB2ENR,_CLK_EN_IOPE))
#define MRCC_DIS_CLK_AFIO(void)				(CLR_BIT(RCC_APB2ENR, _CLK_EN_AFIO))

/* -------------------- Macro Functions END -------------------- */

/* -------------------- Data Types Start -------------------- */
typedef enum{
    AHB = 0,
    APB2,
    APB1
}BUS_t;
/* -------------------- Data Types END -------------------- */

/* -------------------- Software interface Start -------------------- */

/**
 * @brief  	: 	Enable clock of peripheral in STM32f103xx.
 * @param1	:	Copy_busName -> which bus to connected with peripheral.
 * @param2	:	copy_u8PrefNum -> Number of peripheral in bus Enable clock.
 * @retVal	:	void.
 */
void MRCC_vClockEnable(BUS_t Copy_busName, uint8_t copy_u8PrefNum);

/**
 * @brief  	: 	Disable clock of peripheral in STM32f103xx.
 * @param1	:	Copy_busName -> which bus to connected with peripheral.
 * @param2	:	copy_u8PrefNum -> Number of peripheral in bus disable clock.
 * @retVal	:	void.
 */
void MRCC_vClockDisable(BUS_t Copy_busName, uint8_t copy_u8PrefNum);

/* -------------------- Software interface END -------------------- */


#endif /* 03_MCAL_RCC_RCC_INIT_H_ */

/*
--------------------------------------------------------------
--------------------------------------------------------------
*   $   Revision   $

    Data                By                  Ticket No.
    --------------      --------------      --------------
    Sep.29.2024         Ziad Mohammed       Ticket 1.
    --------------      --------------      --------------

--------------------------------------------------------------
--------------------------------------------------------------
*/
