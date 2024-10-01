/**
--------------------------------------------------------
--------------------------------------------------------
 * @name    : NVIC_prog.c
 * @author  : Ziad Mohammed Fathy.
 * @date    : Sep.29.2024
 * @version :   _v1_
 * @brief   :
--------------------------------------------------------
--------------------------------------------------------
 */
#include "03_Mcal/Core_CortexM3/NVIC/NVIC_init.h"

/**
 * @brief	:	Enables an interrupt or exception.
 * @param1	:	copyIRQn -> Number of interrupt
 * @retVal	:	void
 */
void MNVIC_vEnableIRQ(IRQn_t copyIRQn) {
	if((copyIRQn >= 0) && (copyIRQn <= 31)) {
		SET_BIT(NVIC_ISER->NVIC_ISERn[0], (((uint32_t)copyIRQn) & 0x1F));
	}
	else if ((copyIRQn >= 32) && (copyIRQn < 64)) {
		SET_BIT(NVIC_ISER->NVIC_ISERn[1], (((uint32_t)copyIRQn) & 0x1F));
	}
	else {
		SET_BIT(NVIC_ISER->NVIC_ISERn[2], (((uint32_t)copyIRQn) & 0x1F));
	}
}

/**
 * @brief	:	Disables an interrupt or exception.
 * @param1	:	copyIRQn -> Number of interrupt
 * @retVal	:	void
 */
void MNVIC_vDisableIRQ(IRQn_t copyIRQn) {
	if((copyIRQn >= 0) && (copyIRQn <= 31)) {
		SET_BIT(NVIC_ICER->NVIC_ICERn[0], (((uint32_t)copyIRQn) & 0x1F));
	}
	else if ((copyIRQn >= 32) && (copyIRQn < 64)) {
		SET_BIT(NVIC_ICER->NVIC_ICERn[1], (((uint32_t)copyIRQn) & 0x1F));
	}
	else {
		SET_BIT(NVIC_ICER->NVIC_ICERn[2], (((uint32_t)copyIRQn) & 0x1F));
	}
}

/**
 * @brief	:	Sets the pending status of interrupt or exception to 1.
 * @param1	:	copyIRQn -> Number of interrupt
 * @retVal	:	void
 */
void MNVIC_vSetPendingIRQ(IRQn_t copyIRQn) {
	if((copyIRQn >= 0) && (copyIRQn <= 31)) {
		SET_BIT(NVIC_ISPR->NVIC_ISPRn[0], (((uint32_t)copyIRQn) & 0x1F));
	}
	else if ((copyIRQn >= 32) && (copyIRQn < 64)) {
		SET_BIT(NVIC_ISPR->NVIC_ISPRn[1], (((uint32_t)copyIRQn) & 0x1F));
	}
	else {
		SET_BIT(NVIC_ISPR->NVIC_ISPRn[2], (((uint32_t)copyIRQn) & 0x1F));
	}
}

/**
 * @brief	:	Clear the pending status of interrupt or exception to 0.
 * @param1	:	copyIRQn -> Number of interrupt
 * @retVal	:	void
 */
void MNVIC_vClearPendingIRQ(IRQn_t copyIRQn) {
	if((copyIRQn >= 0) && (copyIRQn <= 31)) {
		SET_BIT(NVIC_ICPR->NVIC_ICPRn[0], (((uint32_t)copyIRQn) & 0x1F));
	}
	else if ((copyIRQn >= 32) && (copyIRQn < 64)) {
		SET_BIT(NVIC_ICPR->NVIC_ICPRn[1], (((uint32_t)copyIRQn) & 0x1F));
	}
	else {
		SET_BIT(NVIC_ICPR->NVIC_ICPRn[2], (((uint32_t)copyIRQn) & 0x1F));
	}
}

/**
 * @brief	:	Reads the pending status of interrupt or exception. This function returns non-zero value if the pending status is set to 1.
 * @param1	:	copyIRQn -> Number of interrupt
 * @retVal	:	Status of interrupt's Pending.
 */
uint32_t MNVIC_u32GetPendingIRQ(IRQn_t copyIRQn) {
	uint32_t retVal = 0 ;
	if((copyIRQn >= 0) && (copyIRQn <= 31)) {
		retVal = GET_BIT(NVIC_IABR->NVIC_IABRn[0], (((uint32_t)copyIRQn) & 0x1F));
	}
	else if ((copyIRQn >= 32) && (copyIRQn < 64)) {
		retVal = GET_BIT(NVIC_IABR->NVIC_IABRn[1], (((uint32_t)copyIRQn) & 0x1F));
	}
	else {
		retVal = GET_BIT(NVIC_IABR->NVIC_IABRn[2], (((uint32_t)copyIRQn) & 0x1F));
	}
	return 0;
}

/**
 * @brief	:	Sets the priority of an interrupt or exception with configurable priority level to 1.
 * @param1	:	copyIRQn -> Number of interrupt
 * @param2	:	copyPriority -> Level of Priority.
 * @retVal	:	void
 */
void MNVIC_vSetPriority(IRQn_t copyIRQn, uint32_t copyPriority) {

}

/**
 * @brief	:	Reads the priority of an interrupt or exception with configurable priority level. This function return the current priority level..
 * @param1	:	copyIRQn -> Number of interrupt
 * @retVal	:	Status of interrupt's Priority.
 */
uint32_t MNVIC_u32GetPriority(IRQn_t copyIRQn) {
	return 0;
}
