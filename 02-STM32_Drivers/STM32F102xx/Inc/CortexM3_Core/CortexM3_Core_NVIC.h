/**
 ******************************************************************************
 * @file           : CortexM3_Core_NVIC.h
 * @author         : Ziad Mohammed Fathi
 * @brief          : CortexM3_Core_NVIC Header file.
 ******************************************************************************
 */

#ifndef CORTEXM3_CORE_CORTEXM3_CORE_NVIC_H_
#define CORTEXM3_CORE_CORTEXM3_CORE_NVIC_H_

/* ------------------------------ Include Start ---------------------------- */
#include "CortexM3_Core_SCB.h"
/* ------------------------------ Include END ------------------------------ */

/* ------------------------------ Macro Start ---------------------------- */
#define NVIC_ISER_Base (0xE000E100UL)
#define NVIC_ICER_Base (0XE000E180UL)
#define NVIC_ISPR_Base (0XE000E200UL)
#define NVIC_ICPR_Base (0XE000E280UL)
#define NVIC_IABR_Base (0xE000E300UL)
#define NVIC_IPR_Base  (0xE000E400UL)

#define NVIC_ISER ((ISER_t *)NVIC_ISER_Base)
#define NVIC_ICER ((ICER_t *)NVIC_ICER_Base)
#define NVIC_ISPR ((ISPR_t *)NVIC_ISPR_Base)
#define NVIC_ICPR ((ICPR_t *)NVIC_ICPR_Base)
#define NVIC_IABR ((IABR_t *)NVIC_IABR_Base)
#define NVIC_IPR  ((IPR_t  *)NVIC_IPR_Base )

#define NVIC_Priority_Bits 4U
/* ------------------------------ Macro END ------------------------------ */

/* ------------------- Macro Functions Declarations Start ----------------- */
/* ------------------- Macro Functions Declarations END ------------------- */

/* ---------------------- Data Types Declarations Start -------------------- */

	/* ***** NVIC Interrupt Set-enable Registers {NVIC_ISER} ***** */
typedef struct
{
	volatile uint32_t NVIC_ISERn[8U];
}ISER_t;

	/* **** NVIC Interrupt Clear-enable Registers {NVIC_ICER} **** */
typedef struct
{
	volatile uint32_t NVIC_ICERn[8U];
}ICER_t;

	/* ***** NVIC Interrupt Set-pending Registers {NVIC_ISPR} **** */
typedef struct
{
	volatile uint32_t NVIC_ISPRn[8U];
}ISPR_t;

	/* *** NVIC Interrupt Clear-pending Registers {NVIC_ICPR} **** */
typedef struct
{
	volatile uint32_t NVIC_ICPRn[8U];
}ICPR_t;

	/* ***** NVIC Interrupt Active Bit Registers {NVIC_IABR} ***** */
typedef struct
{
	volatile uint32_t NVIC_IABRn[8U];
}IABR_t;

	/* ******* NVIC Interrupt Priority Registers {NVIC_IPR} ****** */
typedef struct
{
	volatile uint8_t NVIC_IPRn[240U];
}IPR_t;

/* ---------------------- Data Types Declarations END ---------------------- */

/* ------------------- Software interface Declarations Start ----------------- */
void NVIC_setEnableIQRn(IQRn_t copyIQRn);
void NVIC_setDisableIQRn(IQRn_t copyIQRn);
void NVIC_setPendingIQRn(IQRn_t copyIQRn);
void NVIC_clearPendingIQRn(IQRn_t copyIQRn);
uint32_t NVIC_getActiveIQRn(IQRn_t copyIQRn);

void NVIC_setPriorityIQRn(IQRn_t copyIQRn,uint32_t copyPriority);
uint32_t NVIC_getPriorityIQRn(IQRn_t copyIQRn);
/* ------------------- Software interface Declarations END ------------------- */

#endif /* CORTEXM3_CORE_CORTEXM3_CORE_NVIC_H_ */
