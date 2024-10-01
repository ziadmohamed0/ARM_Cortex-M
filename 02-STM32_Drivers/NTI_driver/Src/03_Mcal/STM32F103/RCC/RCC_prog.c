/**
--------------------------------------------------------
--------------------------------------------------------
 * @name    : RCC_prog.c
 * @author  : Ziad Mohammed Fathy.
 * @date    : Sep.29.2024
 * @version :   _v1_
 * @brief   :
--------------------------------------------------------
--------------------------------------------------------
 */

#include "03_Mcal/STM32F103/RCC/RCC_init.h"

/**
 * @brief  	: 	Enable clock of peripheral in STM32f103xx.
 * @param1	:	Copy_busName -> which bus to connected with peripheral.
 * @param2	:	copy_u8PrefNum -> Number of peripheral in bus Enable clock.
 * @retVal	:	void.
 */
void MRCC_vClockEnable(BUS_t Copy_busName, uint8_t copy_u8PrefNum) {
    switch (Copy_busName) {
        case AHB:  SET_BIT(RCC_AHBENR, copy_u8PrefNum);  break;
        case APB1: SET_BIT(RCC_APB2ENR, copy_u8PrefNum); break;
        case APB2: SET_BIT(RCC_APB1ENR, copy_u8PrefNum); break;
        default: /*ERROR*/ break;
    }
}

/**
 * @brief  	: 	Disable clock of peripheral in STM32f103xx.
 * @param1	:	Copy_busName -> which bus to connected with peripheral.
 * @param2	:	copy_u8PrefNum -> Number of peripheral in bus disable clock.
 * @retVal	:	void.
 */
void MRCC_vClockDisable(BUS_t Copy_busName, uint8_t copy_u8PrefNum) {
    switch (Copy_busName) {
        case AHB:  CLR_BIT(RCC_AHBENR, copy_u8PrefNum);  break;
        case APB1: CLR_BIT(RCC_APB2ENR, copy_u8PrefNum); break;
        case APB2: CLR_BIT(RCC_APB1ENR, copy_u8PrefNum); break;
        default: /*ERROR*/ break;
    }
}
