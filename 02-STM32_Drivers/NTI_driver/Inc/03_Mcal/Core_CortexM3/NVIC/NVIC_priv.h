/**
--------------------------------------------------------
--------------------------------------------------------
 * @name    : NVIC_priv.h
 * @author  : Ziad Mohammed Fathy.
 * @date    : Sep.29.2024
 * @version :   _v1_
 * @brief   :
--------------------------------------------------------
--------------------------------------------------------
 */

#ifndef _MCAL_CORE_CORTEXM3_NVIC_PRIV_H_
#define _MCAL_CORE_CORTEXM3_NVIC_PRIV_H_

/* -------------------- Include Start -------------------- */
#include "../../../04_lib/bit_math.h"
#include "../../../04_lib/std_types.h"
#include "../../STM32F103/Common/Common_dfs.h"
/* -------------------- Include END -------------------- */

/* -------------------- Macro Start -------------------- */


#define NVIC_IPR_BASE_ADDRESS				0xE000E400
#define NVIC_IPR							((NVIC_IPR_t *)NVIC_IPR_BASE_ADDRESS)

	/* @groupMacro	: Interrupt Set-enable Registers */
#define NVIC_ISER_BASE_ADDRESS				0xE000E100
#define NVIC_ISER							((NVIC_ISER_t *)NVIC_ISER_BASE_ADDRESS)


	/* @groupMacro	: Interrupt Clear-enable Registers */
#define NVIC_ICER_BASE_ADDRESS				0XE000E180
#define NVIC_ICER							((NVIC_ICER_t *)NVIC_ICER_BASE_ADDRESS)

	/* @groupMacro	: Interrupt Set-pending Registers */
#define NVIC_ISPR_BASE_ADDRESS				0XE000E200
#define NVIC_ISPR							((NVIC_ISPR_t *)NVIC_ISPR_BASE_ADDRESS)


	/* @groupMacro	: Interrupt Clear-pending Registers */
#define NVIC_ICPR_BASE_ADDRESS				0XE000E280
#define NVIC_ICPR							((NVIC_ICPR_t *)NVIC_ICPR_BASE_ADDRESS)


	/* @groupMacro	: Interrupt Active Bit Registers */
#define NVIC_IABR_BASE_ADDRESS				0xE000E300
#define NVIC_IABR							((NVIC_IABR_t *)NVIC_IABR_BASE_ADDRESS)

#define NVIC_STIR							(*((volatile uint32_t*)(0xE000EF00)))

/* -------------------- Macro END -------------------- */

/* -------------------- Macro Functions Start -------------------- */
typedef struct {
	volatile uint32_t NVIC_ISERn[8U];
}NVIC_ISER_t;

typedef struct {
	volatile uint32_t NVIC_ICERn[8U];
}NVIC_ICER_t;

typedef struct {
	volatile uint32_t NVIC_ISPRn[8U];
}NVIC_ISPR_t;

typedef struct {
	volatile uint32_t NVIC_ICPRn[8U];
}NVIC_ICPR_t;

typedef struct {
	volatile uint32_t NVIC_IABRn[8U];
}NVIC_IABR_t;

typedef struct {
	volatile uint8_t NVIC_IPRn[240U];
}NVIC_IPR_t;
/* -------------------- Macro Functions END -------------------- */

/* -------------------- Data Types Start -------------------- */
/* -------------------- Data Types END -------------------- */

/* -------------------- Software interface Start -------------------- */
/* -------------------- Software interface END -------------------- */


#endif /* 03_MCAL_CORE_CORTEXM3_NVIC_PRIV_H_ */


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
