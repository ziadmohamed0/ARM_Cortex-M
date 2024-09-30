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


#ifndef _MCAL_RCC_RCC_PRIV_H_
#define _MCAL_RCC_RCC_PRIV_H_

/* -------------------- Include Start -------------------- */
#include "RCC_cfg.h"
#include "04_lib/bit_math.h"
#include "04_lib/std_types.h"
/* -------------------- Include END -------------------- */

/* -------------------- Macro Start -------------------- */
#define MRCC_BASE_ADDRESS               (uint32_t)0x40021000

#define RCC_CR                          (*((volatile uint32_t*)(MRCC_BASE_ADDRESS + 0x000)))
#define RCC_CFGR                        (*((volatile uint32_t*)(MRCC_BASE_ADDRESS + 0x004)))
#define RCC_CIR                         (*((volatile uint32_t*)(MRCC_BASE_ADDRESS + 0x008)))
#define RCC_APB2RSTR                    (*((volatile uint32_t*)(MRCC_BASE_ADDRESS + 0x00C)))
#define RCC_APB1RSTR                    (*((volatile uint32_t*)(MRCC_BASE_ADDRESS + 0x010)))
#define RCC_AHBENR                      (*((volatile uint32_t*)(MRCC_BASE_ADDRESS + 0x014)))
#define RCC_APB2ENR                     (*((volatile uint32_t*)(MRCC_BASE_ADDRESS + 0x018)))
#define RCC_APB1ENR                     (*((volatile uint32_t*)(MRCC_BASE_ADDRESS + 0x01C)))
#define RCC_BDCR                        (*((volatile uint32_t*)(MRCC_BASE_ADDRESS + 0x020)))
#define RCC_CSR                         (*((volatile uint32_t*)(MRCC_BASE_ADDRESS + 0x024)))
#define RCC_AHBSTR                      (*((volatile uint32_t*)(MRCC_BASE_ADDRESS + 0x028)))
#define RCC_CFGR2                       (*((volatile uint32_t*)(MRCC_BASE_ADDRESS + 0x02C)))

/* @groupMacros : AHP Bus Enable Clock */
#define _CLK_EN_DMA1					0U
#define _CLK_EN_DMA2					1U
#define _CLK_EN_SRAM					2U
#define _CLK_EN_FLITF					4U
#define _CLK_EN_CRC						6U
#define _CLK_EN_OTGFS					12U
#define _CLK_EN_ETHMA					14U
#define _CLK_EN_ETHMAC_TX				15U
#define _CLK_EN_ETHMAC_RX				16U


/* @groupMacros : APB2 Bus Enable Clock */
#define _CLK_EN_AFIO					0U
#define _CLK_EN_IOPA					2U
#define _CLK_EN_IOPB					3U
#define _CLK_EN_IOPC					4U
#define _CLK_EN_IOPD					5U
#define _CLK_EN_IOPE					6U
#define _CLK_EN_ADC1					9U
#define _CLK_EN_ADC2					10U
#define _CLK_EN_TIM1					11U
#define _CLK_EN_SPI1					12U
#define _CLK_EN_USART1					14U


/* @groupMacros : APB1 Bus Enable Clock */
#define _CLK_EN_TIM2					0U
#define _CLK_EN_TIM3					1U
#define _CLK_EN_TIM4					2U
#define _CLK_EN_TIM5					3U
#define _CLK_EN_TIM6					4U
#define _CLK_EN_TIM7					5U
#define _CLK_EN_WWDG					11U
#define _CLK_EN_SPI2					14U
#define _CLK_EN_SPI3					15U
#define _CLK_EN_USART2					17U
#define _CLK_EN_USART3					18U
#define _CLK_EN_USART4					19U
#define _CLK_EN_USART5					20U
#define _CLK_EN_I2C1					21U
#define _CLK_EN_I2C2					22U
#define _CLK_EN_CAN1					25U
#define _CLK_EN_CAN2					26U
#define _CLK_EN_BKP						27U
#define _CLK_EN_PWR						28U
#define _CLK_EN_DAC						29U

/* -------------------- Macro END -------------------- */

/* -------------------- Macro Functions Start -------------------- */
/* -------------------- Macro Functions END -------------------- */

/* -------------------- Data Types Start -------------------- */
/* -------------------- Data Types END -------------------- */

/* -------------------- Software interface Start -------------------- */
/* -------------------- Software interface END -------------------- */



#endif /* 03_MCAL_RCC_RCC_PRIV_H_ */

/*
--------------------------------------------------------------
--------------------------------------------------------------
*   $   Revision   $

    Data                By                  Ticket No.
    --------------      --------------      --------------

    --------------      --------------      --------------

--------------------------------------------------------------
--------------------------------------------------------------
*/