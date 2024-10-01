/**
 ******************************************************************************
 * @file           : Bit_Math.h
 * @author         : Ziad Mohammed Fathi
 * @brief          : Bit Math logic operations
 ******************************************************************************
 */
#ifndef BIT_MATH_H_
#define BIT_MATH_H_

/* ========== Bit Math Macros ========== */
#define CLR_BIT(reg,bit)      reg &= ~ (1 << bit)	//	Clear Bit In Any Register
#define SET_BIT(reg,bit)      reg |=   (1 << bit)	//	Set Bit In Any Register
#define TOGGLE_BIT(reg,bit)   reg ^=   (1 << bit)	//	Toggle Bit In Any Register
#define GET_BIT(reg,bit)      ((reg >> bit) & 1 )	//	Get Bit In Any Register

#endif /* BIT_MATH_H_ */
