
/**
--------------------------------------------------------
--------------------------------------------------------
 * @name    : RCC_priv.h
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
#include "RCC_priv.h"
/* -------------------- Include END -------------------- */

/* -------------------- Macro Start -------------------- */

/* -------------------- Macro END -------------------- */

/* -------------------- Macro Functions Start -------------------- */
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

