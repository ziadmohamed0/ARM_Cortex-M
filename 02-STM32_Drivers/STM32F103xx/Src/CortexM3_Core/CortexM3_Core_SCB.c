/**
 ******************************************************************************
 * @file           : CortexM3_Core_SCB.c
 * @author         : Ziad Mohammed Fathi
 * @brief          : CortexM3_Core_SCB Source file.
 ******************************************************************************
 */

#include "CortexM3_Core/CortexM3_Core_SCB.h"

void SCB_setGroupPriority(SCB_GROUPPRIORITIES_t copyGroupPriority)
{
	copyGroupPriority = ((uint32_t)copyGroupPriority & 0x07);
	uint32_t RegValue = SCB->AIRCR;

	RegValue &= ~(SCB_GROUP_PRIORTY_MSK | SCB_VECTKEY_MSK);

	RegValue = (RegValue | (VECTKEY_STATUSE << SCB_VECTKEY_POS) | (copyGroupPriority << SCB_GROUP_PRIORTY_POS));
	SCB->AIRCR = RegValue;
}

uint32_t SCB_getGroupPriority(void)
{
	uint32_t retValue = (((uint32_t)SCB->AIRCR & SCB_GROUP_PRIORTY_MSK) >> SCB_GROUP_PRIORTY_POS);
	return retValue;
}
