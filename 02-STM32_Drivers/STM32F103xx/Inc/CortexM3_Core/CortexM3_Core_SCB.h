/**
 ******************************************************************************
 * @file           : CortexM3_Core_SCB.h
 * @author         : Ziad Mohammed Fathi
 * @brief          : CortexM3_Core_SCB Header file.
 ******************************************************************************
 */

#ifndef CORTEXM3_CORE_CORTEXM3_CORE_SCB_H_
#define CORTEXM3_CORE_CORTEXM3_CORE_SCB_H_

/* ------------------------------ Include Start ---------------------------- */
#include "../STM32F103xx/STM32F103xx_Vec.h"
/* ------------------------------ Include END ------------------------------ */

/* ------------------------------ Macro Start ---------------------------- */
#define SCB_Base (0xE000ED00)
#define SCB		((SCB_t *)SCB_Base)

#define VECTKEY_STATUSE	0x05FA

#define SCB_VECTKEY_POS			16U
#define SCB_VECTKEY_MSK			(0xFFFF << SCB_VECTKEY_POS)

#define SCB_GROUP_PRIORTY_POS	8U
#define SCB_GROUP_PRIORTY_MSK	(7UL << SCB_GROUP_PRIORTY_POS)

/* ------------------------------ Macro END ------------------------------ */

/* ------------------- Macro Functions Declarations Start ----------------- */
/* ------------------- Macro Functions Declarations END ------------------- */

/* ---------------------- Data Types Declarations Start -------------------- */
typedef struct
{
	volatile uint32_t CPUID;
	volatile uint32_t ICSR;
	volatile uint32_t VTOR;
	volatile uint32_t AIRCR;
	volatile uint32_t SCR;
	volatile uint32_t CCR;
	volatile uint32_t SHPR1;
	volatile uint32_t SHPR2;
	volatile uint32_t SHPR3;
	volatile uint32_t SHCRS;
	volatile uint32_t CFSR;
	volatile uint32_t MMSR;
	volatile uint32_t BFSR;
	volatile uint32_t UFSR;
	volatile uint32_t HFSR;
	volatile uint32_t MMAR;
	volatile uint32_t BFAR;
	volatile uint32_t AFSR;
}SCB_t;

typedef enum
{
	SCB_GROUPPRIORITIES_0 = 0x00000007U,
	SCB_GROUPPRIORITIES_1 = 0x00000006U,
	SCB_GROUPPRIORITIES_2 = 0x00000005U,
	SCB_GROUPPRIORITIES_3 = 0x00000004U,
	SCB_GROUPPRIORITIES_4 = 0x00000003U,
}SCB_GROUPPRIORITIES_t;
/* ---------------------- Data Types Declarations END ---------------------- */

/* ------------------- Software interface Declarations Start ----------------- */
void SCB_setGroupPriority(SCB_GROUPPRIORITIES_t copyGroupPriority);
uint32_t SCB_getGroupPriority(void);
/* ------------------- Software interface Declarations END ------------------- */


#endif /* CORTEXM3_CORE_CORTEXM3_CORE_SCB_H_ */
