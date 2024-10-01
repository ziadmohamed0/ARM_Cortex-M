/**
--------------------------------------------------------
--------------------------------------------------------
 * @name    : SCB_priv.h
 * @author  : Ziad Mohammed Fathy.
 * @date    : Sep.29.2024
 * @version :   _v1_
 * @brief   :
--------------------------------------------------------
--------------------------------------------------------
 */

#ifndef _MCAL_CORE_CORTEXM3_SCB_SCB_PRIV_H_
#define _MCAL_CORE_CORTEXM3_SCB_SCB_PRIV_H_

/* -------------------- Include Start -------------------- */
#include "../NVIC/NVIC_init.h"
/* -------------------- Include END -------------------- */

/* -------------------- Macro Start -------------------- */
#define SCB_BASE_ADDRESS			(0xE000ED00)
#define SCB							((SCB_t *) SCB_BASE_ADDRESS)
/* -------------------- Macro END -------------------- */

/* -------------------- Macro Functions Start -------------------- */
/* -------------------- Macro Functions END -------------------- */

/* -------------------- Data Types Start -------------------- */
typedef struct {
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
/* -------------------- Data Types END -------------------- */

/* -------------------- Software interface Start -------------------- */
typedef enum
{
	SCB_GROUPPRIORITIES_0 = 0x00000007U,
	SCB_GROUPPRIORITIES_1 = 0x00000006U,
	SCB_GROUPPRIORITIES_2 = 0x00000005U,
	SCB_GROUPPRIORITIES_3 = 0x00000004U,
	SCB_GROUPPRIORITIES_4 = 0x00000003U,
}SCB_GROUPPRIORITIES_t;
/* -------------------- Software interface END -------------------- */

#endif /* 03_MCAL_CORE_CORTEXM3_SCB_SCB_PRIV_H_ */



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