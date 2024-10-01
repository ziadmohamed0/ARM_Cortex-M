/**
 ******************************************************************************
 * @file           : CortexM3_Core_NVIC.c
 * @author         : Ziad Mohammed Fathi
 * @brief          : CortexM3_Core_NVIC program body
 ******************************************************************************
 */
#include "CortexM3/CortexM3_Core_NVIC.h"

/**
 * \brief      : Enable interrupt.
 * \details    : Enable device specific interrupt in INVC interrupt controller
 * \param1[in] : IQRn -> device specific interrupt.
 * \note       : IQRn Must be positive
 */
void NVIC_setEnableIQR(IQRn_t copyIQRn)
{
	if((uint32_t)copyIQRn >= 0)
	{
		SET_BIT(NVIC_ISER->NVIC_ISER_t[copyIQRn >> 5],(((uint32_t)copyIQRn) & (0x1F)));
	}
}

/**
 * \brief      : Disable interrupt.
 * \details    : Disable device specific interrupt in INVC interrupt controller
 * \param1[in] : IQRn -> device specific interrupt.
 * \note       : IQRn Must be positive
 */
void NVIC_setDisableIQR(IQRn_t copyIQRn)
{
	if(copyIQRn >= 0)
	{
		SET_BIT(NVIC_ICER->NVIC_ICER_t[copyIQRn >> 5],(((uint32_t)copyIQRn) & (0x1F)));
	}
}

/**
 * \brief      : Set Binding interrupt.
 * \details    : Set Binding bit of device specific interrupt in INVC interrupt register
 * \param1[in] : IQRn -> device specific interrupt.
 * \note       : IQRn Must be positive
 */
void NVIC_setPendingIQR(IQRn_t copyIQRn)
{
	if(copyIQRn >= 0)
	{
		SET_BIT(NVIC_ISPR->NVIC_ISPR_t[copyIQRn >> 5],(((uint32_t)copyIQRn) & (0x1F)));
	}
}

/**
 * \brief      : Clear Binding interrupt.
 * \details    : Clear Binding bit of device specific interrupt in INVC interrupt register
 * \param1[in] : IQRn -> device specific interrupt.
 * \note       : IQRn Must be positive
 */
void NVIC_clearPendingIQR(IQRn_t copyIQRn)
{
	if(copyIQRn >= 0)
	{
		SET_BIT(NVIC_ICPR->NVIC_ICPR_t[copyIQRn >> 5],(((uint32_t)copyIQRn) & (0x1F)));
	}
}

/**
 * \brief      : Get Active interrupt.
 * \details    : Read Active register in INVC and return active bit for device specific interrupt in INVC interrupt register.
 * \param1[in] : IQRn -> device specific interrupt.
 * \return     : 0 interrupt status not active.
 * \return     : 1 interrupt status active.
 * \note       : IQRn Must be positive
 */
uint32_t NVIC_getActiveIQR(IQRn_t copyIQRn)
{
	uint32_t Value = 0;
	uint32_t retValue = 0;

	if(copyIQRn >= 0)
	{
		Value = GET_BIT(NVIC_IABR->NVIC_IABR_t[copyIQRn >> 5],(((uint32_t)copyIQRn) & (0x1F)));

		if(Value != 0)
			retValue = 1UL;
		else
			retValue = 0UL;

		return retValue;
	}

	else
	{
		return 0UL;
	}

}


void NVIC_setPriority(IQRn_t copyIQRn,uint32_t copyPrioritygroup)
{
	if(copyIQRn >= 0)
	{
		NVIC_IPR->NVIC_IPR_t[(uint32_t)copyIQRn] = (((uint8_t)(copyPrioritygroup << (8 - NVIC_Priority_Bits))) & 0xFF);
	}
	else
	{
		/* Nothing */
	}
}

uint32_t NVIC_getPriority(IQRn_t copyIQRn)
{
	if(copyIQRn >= 0)
	{
		return ((NVIC_IPR->NVIC_IPR_t[(uint32_t)copyIQRn]) >> (8 - NVIC_Priority_Bits));
	}
	else
	{
		return 0;
	}

}
