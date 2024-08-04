/**
 ******************************************************************************
 * @file           : CortexM3_Core_NVIC.c
 * @author         : Ziad Mohammed Fathi
 * @brief          : CortexM3_Core_NVIC Source file.
 ******************************************************************************
 */

#include "CortexM3_Core/CortexM3_Core_NVIC.h"

void NVIC_setEnableIQRn(IQRn_t copyIQRn)
{
	if((uint32_t)copyIQRn >= 0)
	{
		if(((uint32_t)copyIQRn >= 0) && ((uint32_t)copyIQRn <= 31))
		{
			SET_BIT(NVIC_ISER->NVIC_ISERn[0],(((uint32_t)copyIQRn) & 0x1F));
		}
		else if (((uint32_t)copyIQRn >= 32) && ((uint32_t)copyIQRn <= 63))
		{
			SET_BIT(NVIC_ISER->NVIC_ISERn[1],(((uint32_t)copyIQRn) & 0x1F));
		}
		else
		{
			SET_BIT(NVIC_ISER->NVIC_ISERn[2],(((uint32_t)copyIQRn) & 0x1F));
		}
	}

	else
	{
		/*	Nothing	*/
	}
}

void NVIC_setDisableIQRn(IQRn_t copyIQRn)
{
	if((uint32_t)copyIQRn >= 0)
	{
		if(((uint32_t)copyIQRn >= 0) && ((uint32_t)copyIQRn <= 31))
		{
			SET_BIT(NVIC_ICER->NVIC_ICERn[0],(((uint32_t)copyIQRn) & 0x1F));
		}
		else if (((uint32_t)copyIQRn >= 32) && ((uint32_t)copyIQRn <= 63))
		{
			SET_BIT(NVIC_ICER->NVIC_ICERn[1],(((uint32_t)copyIQRn) & 0x1F));
		}
		else
		{
			SET_BIT(NVIC_ICER->NVIC_ICERn[2],(((uint32_t)copyIQRn) & 0x1F));
		}
	}

	else
	{
		/*	Nothing	*/
	}
}

void NVIC_setPendingIQRn(IQRn_t copyIQRn)
{
	if((uint32_t)copyIQRn >= 0)
	{
		if(((uint32_t)copyIQRn >= 0) && ((uint32_t)copyIQRn <= 31))
		{
			SET_BIT(NVIC_ISPR->NVIC_ISPRn[0],(((uint32_t)copyIQRn) & 0x1F));
		}
		else if (((uint32_t)copyIQRn >= 32) && ((uint32_t)copyIQRn <= 63))
		{
			SET_BIT(NVIC_ISPR->NVIC_ISPRn[1],(((uint32_t)copyIQRn) & 0x1F));
		}
		else
		{
			SET_BIT(NVIC_ISPR->NVIC_ISPRn[2],(((uint32_t)copyIQRn) & 0x1F));
		}
	}

	else
	{
		/*	Nothing	*/
	}
}

void NVIC_clearPendingIQRn(IQRn_t copyIQRn)
{
	if((uint32_t)copyIQRn >= 0)
	{
		if(((uint32_t)copyIQRn >= 0) && ((uint32_t)copyIQRn <= 31))
		{
			SET_BIT(NVIC_ICPR->NVIC_ICPRn[0],(((uint32_t)copyIQRn) & 0x1F));
		}
		else if (((uint32_t)copyIQRn >= 32) && ((uint32_t)copyIQRn <= 63))
		{
			SET_BIT(NVIC_ICPR->NVIC_ICPRn[1],(((uint32_t)copyIQRn) & 0x1F));
		}
		else
		{
			SET_BIT(NVIC_ICPR->NVIC_ICPRn[2],(((uint32_t)copyIQRn) & 0x1F));
		}
	}

	else
	{
		/*	Nothing	*/
	}
}

uint32_t NVIC_getActiveIQRn(IQRn_t copyIQRn)
{
	uint32_t retValue = 0;
	uint32_t value = 0;

	if((uint32_t)copyIQRn >= 0)
	{
		if(((uint32_t)copyIQRn >= 0) && ((uint32_t)copyIQRn <= 31))
		{
			retValue = GET_BIT(NVIC_IABR->NVIC_IABRn[0],(((uint32_t)copyIQRn) & 0x1F));
		}
		else if (((uint32_t)copyIQRn >= 32) && ((uint32_t)copyIQRn <= 63))
		{
			retValue = GET_BIT(NVIC_IABR->NVIC_IABRn[1],(((uint32_t)copyIQRn) & 0x1F));
		}
		else
		{
			retValue = GET_BIT(NVIC_IABR->NVIC_IABRn[2],(((uint32_t)copyIQRn) & 0x1F));
		}

		if(retValue !=0)
			value = 1UL;
		else
			value = 0UL;

		return value;
	}

	else
	{
		/*	Nothing	*/
	}
}

void NVIC_setPriorityIQRn(IQRn_t copyIQRn,uint32_t copyPriority)
{
	if(copyIQRn >= 0)
	{
		NVIC_IPR->NVIC_IPRn[(uint32_t)copyIQRn] = ((uint8_t)copyPriority << (8 - NVIC_Priority_Bits) & 0xFF);
	}
	else
	{
		/*	Nothing	*/
	}
}

uint32_t NVIC_getPriorityIQRn(IQRn_t copyIQRn)
{
	uint32_t retValue = 0;

	if(copyIQRn >= 0)
	{
		retValue = ((NVIC_IPR->NVIC_IPRn[(uint32_t)copyIQRn]) >> (8 - NVIC_Priority_Bits));
	}
	else
	{
		/*	Nothing	*/
	}
	return retValue;
}
