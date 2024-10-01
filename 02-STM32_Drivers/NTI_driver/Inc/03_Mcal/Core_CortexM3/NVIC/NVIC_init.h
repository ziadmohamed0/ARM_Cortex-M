/**
--------------------------------------------------------
--------------------------------------------------------
 * @name    : NVIC_init.h
 * @author  : Ziad Mohammed Fathy.
 * @date    : Sep.29.2024
 * @version :   _v1_
 * @brief   :
--------------------------------------------------------
--------------------------------------------------------
 */

#ifndef _MCAL_CORE_CORTEXM3_NVIC_INIT_H_
#define _MCAL_CORE_CORTEXM3_NVIC_INIT_H_

/* -------------------- Include Start -------------------- */
#include "NVIC_priv.h"
/* -------------------- Include END -------------------- */

/* -------------------- Macro Start -------------------- */
/* -------------------- Macro END -------------------- */

/* -------------------- Macro Functions Start -------------------- */
/* -------------------- Macro Functions END -------------------- */

/* -------------------- Data Types Start -------------------- */
/* -------------------- Data Types END -------------------- */

/* -------------------- Software interface Start -------------------- */
/**
 * @brief	:	Enables an interrupt or exception.
 * @param1	:	copyIRQn -> Number of interrupt
 * @retVal	:	void
 */
void MNVIC_vEnableIRQ(IRQn_t copyIRQn);

/**
 * @brief	:	Disables an interrupt or exception.
 * @param1	:	copyIRQn -> Number of interrupt
 * @retVal	:	void
 */
void MNVIC_vDisableIRQ(IRQn_t copyIRQn);

/**
 * @brief	:	Sets the pending status of interrupt or exception to 1.
 * @param1	:	copyIRQn -> Number of interrupt
 * @retVal	:	void
 */
void MNVIC_vSetPendingIRQ(IRQn_t copyIRQn);

/**
 * @brief	:	Clear the pending status of interrupt or exception to 0.
 * @param1	:	copyIRQn -> Number of interrupt
 * @retVal	:	void
 */
void MNVIC_vClearPendingIRQ(IRQn_t copyIRQn);

/**
 * @brief	:	Reads the pending status of interrupt or exception. This function returns non-zero value if the pending status is set to 1.
 * @param1	:	copyIRQn -> Number of interrupt
 * @retVal	:	Status of interrupt's Pending.
 */
uint32_t MNVIC_u32GetPendingIRQ(IRQn_t copyIRQn);

/**
 * @brief	:	Sets the priority of an interrupt or exception with configurable priority level to 1.
 * @param1	:	copyIRQn -> Number of interrupt
 * @param2	:	copyPriority -> Level of Priority.
 * @retVal	:	void
 */
void MNVIC_vSetPriority(IRQn_t copyIRQn, uint32_t copyPriority);

/**
 * @brief	:	Reads the priority of an interrupt or exception with configurable priority level. This function return the current priority level..
 * @param1	:	copyIRQn -> Number of interrupt
 * @retVal	:	Status of interrupt's Priority.
 */
uint32_t MNVIC_u32GetPriority(IRQn_t copyIRQn);

/* -------------------- Software interface END -------------------- */

#endif /* 03_MCAL_CORE_CORTEXM3_NVIC_INIT_H_ */

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

