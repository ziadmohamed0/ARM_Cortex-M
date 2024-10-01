/**
 ******************************************************************************
 * @file           : Bit_Math.h
 * @author         : Ziad Mohammed Fathi
 * @brief          : Bit_Math Header file.
 ******************************************************************************
 */

#ifndef COMMON_BIT_MATH_H_
#define COMMON_BIT_MATH_H_

#define CLR_BIT(reg,bit)      reg &= ~ (1 << bit)	//	Clear Bit In Any Register
#define SET_BIT(reg,bit)      reg |=   (1 << bit)	//	Set Bit In Any Register
#define TOGGLE_BIT(reg,bit)   reg ^=   (1 << bit)	//	Toggle Bit In Any Register
#define GET_BIT(reg,bit)      ((reg) & (bit) )	//	Get Bit In Any Register


#endif /* COMMON_BIT_MATH_H_ */
