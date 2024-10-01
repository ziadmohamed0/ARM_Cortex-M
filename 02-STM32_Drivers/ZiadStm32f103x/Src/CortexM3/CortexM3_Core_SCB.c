/**
 ******************************************************************************
 * @file           : CortexM3_Core_SCB.c
 * @author         : Ziad Mohammed Fathi
 * @brief          : CortexM3_Core_SCB program body
 ******************************************************************************
 */

#include "CortexM3/CortexM3_Core_SCB.h"

void SCB_setPrioritygroup(SCB_GROUPPRIORITIES_t copyPrioritygroup)
{
	copyPrioritygroup = ((uint32_t)copyPrioritygroup & (uint32_t)0x07);
	uint32_t retValue = SCB->AIRCR;

	retValue &= ~(SCB_GROUP_PRIO_MSK | SCB_VECTKEY_MSK);
	retValue = (retValue | (SCB_VECTKEY_STATUS << SCB_VECTKEY_POS) | (((uint32_t)copyPrioritygroup) << SCB_GROUP_PRIO_POS));

	SCB->AIRCR = retValue;
}

uint32_t SCB_getPrioritygroup(void)
{
	uint32_t retvalue = ((((uint32_t)SCB->AIRCR & (uint32_t)SCB_GROUP_PRIO_MSK)) >> SCB_GROUP_PRIO_POS);
	return retvalue;
}
