/**
 ******************************************************************************
 * @file           : CortexM3_Core_NVIC.h
 * @author         : Ziad Mohammed Fathi
 * @brief          : CortexM3_Core_NVIC Header body
 ******************************************************************************
 */

#ifndef CORTEXM3_CORE_NVIC_H_
#define CORTEXM3_CORE_NVIC_H_

/* ------------------------------ Include Start ---------------------------- */
#include "../STM32F103xx/STM32F103xx_VEC.h"
#include "CortexM3_Core_SCB.h"
/* ------------------------------ Include END ------------------------------ */

/* ------------------------------ Macro Start ---------------------------- */
#define NVIC_Priority_Bits 4U

#define NVIC_ISERx_Base	(0xE000E100)
#define NVIC_ICERx_Base	(0XE000E180)
#define NVIC_ISPRx_Base	(0XE000E200)
#define NVIC_ICPRx_Base	(0XE000E280)
#define NVIC_IABRx_Base	(0xE000E300)
#define NVIC_IPRx_Base	(0xE000E400)
#define NVIC_STIRx_Base	(0xE000EF00)

#define NVIC_ISER	((ISER_t *) NVIC_ISERx_Base)
#define NVIC_ICER	((ICER_t *) NVIC_ICERx_Base)
#define NVIC_ISPR	((ISPR_t *) NVIC_ISPRx_Base)
#define NVIC_ICPR	((ICPR_t *) NVIC_ICPRx_Base)
#define NVIC_IABR	((IABR_t *) NVIC_IABRx_Base)
#define NVIC_IPR	((IPR_t *) NVIC_IPRx_Base)
#define NVIC_STIR	((STIR_t *) NVIC_STIRx_Base)
/* ------------------------------ Macro END ------------------------------ */

/* ------------------- Macro Functions Declarations Start ----------------- */
/* ------------------- Macro Functions Declarations END ------------------- */

/* ---------------------- Data Types Declarations Start -------------------- */

/* ~~~~~ ISER NVIC REGISTERS (Interrupt Set-enable Registers) ~~~~~ */
typedef struct
{
	volatile uint32_t NVIC_ISER_t[8U];
}ISER_t;

/* ~~~~~ ICER NVIC REGISTERS (Interrupt Clear-enable Registers) ~~~~~ */
typedef struct
{
	volatile uint32_t NVIC_ICER_t[8U];
}ICER_t;

/* ~~~~~ ISPR NVIC REGISTERS (Interrupt Set-pending Registers) ~~~~~ */
typedef struct
{
	volatile uint32_t NVIC_ISPR_t[8U];
}ISPR_t;

/* ~~~~~ ICPR NVIC REGISTERS (Interrupt Clear-pending Registers) ~~~~~ */
typedef struct
{
	volatile uint32_t NVIC_ICPR_t[8U];
}ICPR_t;

/* ~~~~~ IABR NVIC REGISTERS (Interrupt Active Bit Registers) ~~~~~ */
typedef struct
{
	volatile uint32_t NVIC_IABR_t[8U];
}IABR_t;

/* ~~~~~ IPR NVIC REGISTERS (Interrupt Priority Registers) ~~~~~ */
typedef struct
{
	volatile uint8_t NVIC_IPR_t[240U];
}IPR_t;
/* ---------------------- Data Types Declarations END ---------------------- */

/* ------------------- Software interface Declarations Start ----------------- */
void NVIC_setEnableIQR(IQRn_t copyIQRn);
void NVIC_setDisableIQR(IQRn_t copyIQRn);
void NVIC_setPendingIQR(IQRn_t copyIQRn);
void NVIC_clearPendingIQR(IQRn_t copyIQRn);
uint32_t NVIC_getActiveIQR(IQRn_t copyIQRn);

void NVIC_setPriority(IQRn_t copyIQRn,uint32_t copyPrioritygroup);
uint32_t NVIC_getPriority(IQRn_t copyIQRn);
/* ------------------- Software interface Declarations END ------------------- */

#endif /* CORTEXM3_CORE_NVIC_H_ */
