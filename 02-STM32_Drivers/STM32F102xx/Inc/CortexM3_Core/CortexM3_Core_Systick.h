/**
 ******************************************************************************
 * @file           : CortexM3_Core_Systick.h
 * @author         : Ziad Mohammed Fathi
 * @brief          : CortexM3_Core_Systick Header file.
 ******************************************************************************
 */

#ifndef CORTEXM3_CORE_CORTEXM3_CORE_SYSTICK_H_
#define CORTEXM3_CORE_CORTEXM3_CORE_SYSTICK_H_

/* ------------------------------ Include Start ---------------------------- */
#include "CortexM3_Core_NVIC.h"
#include "CortexM3_Core_Systick_cfg.h"
/* ------------------------------ Include END ------------------------------ */

/* ------------------------------ Macro Start ---------------------------- */
	/* ---- SYSTICK Base Register  ---- */
#define Systick_Base					(0xE000E010UL)
#define Systick							((Systick_t *)Systick_Base)

	/* ---- @groupRigsters : Control and Status Register (CSR) ---- */
#define Systick_CSR_ENABLE_Pos				(0U)
#define Systick_CSR_ENABLE_MSK				(0x0 << Systick_CSR_ENABLE_Pos)

#define Systick_CSR_TICKINT_Pos				(1U)
#define Systick_CSR_TICKINT_MSK				(0x0 << Systick_CSR_TICKINT_Pos)

#define Systick_CSR_CLKSOURCE_Pos			(2U)
#define Systick_CSR_CLKSOURCE_MSK			(0x0 << Systick_CSR_CLKSOURCE_Pos)

#define Systick_CSR_COUNTFLAG_Pos			(16U)
#define Systick_CSR_COUNTFLAG_MSK			(0x0 << Systick_CSR_COUNTFLAG_Pos)

	/* ---- @groupRigsters : SysTick Reload Value Register (CVR) ---- */
#define Systick_CSR_RELOAD_Pos				(0U)
#define Systick_CSR_RELOAD_MSK				(0xFFFFF << Systick_CSR_RELOAD_Pos)


#define Systick_singleInterval_Mode			0
#define Systick_periodicInterval_Mode		1
/* ------------------------------ Macro END ------------------------------ */

/* ------------------- Macro Functions Declarations Start ----------------- */
/* ------------------- Macro Functions Declarations END ------------------- */

/* ---------------------- Data Types Declarations Start -------------------- */
typedef struct
{
	volatile uint32_t	SYST_CSR;
	volatile uint32_t	SYST_RVR;
	volatile uint32_t	SYST_CVR;
	volatile uint32_t	SYST_CALIB;
}Systick_t;

/* ---------------------- Data Types Declarations END ---------------------- */

/* ------------------- Software interface Declarations Start ----------------- */
Return_t Systick_init(uint32_t copyTicks);
void Systick_deInit(void);
void Systick_waitBlocking(uint32_t copyTicks);
void Systick_singleInterval(uint32_t copyTicks,ptrFunction *callBack);
void Systick_periodicInterval(uint32_t copyTicks,ptrFunction *callBack);
Return_t Systick_getRemainingTicks(void);
Return_t Systick_getElapsedTicks(void);
/* ------------------- Software interface Declarations END ------------------- */


#endif /* CORTEXM3_CORE_CORTEXM3_CORE_SYSTICK_H_ */
