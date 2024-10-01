/**
 ******************************************************************************
 * @file           : Std_Types.h
 * @author         : Ziad Mohammed Fathi
 * @brief          : standard data types
 ******************************************************************************
 */

#ifndef STD_TYPES_H_
#define STD_TYPES_H_

/* ========== INCLUDES ========== */
#include "BIT_MATH.h"

/* ========== CPU_TUPES ========== */
#define CPU_8_BIT   8
#define CPU_16_BIT  16
#define CPU_32_BIT  32
#define CPU_64_BIT  64

#define CPU_type    CPU_32_BIT

/* ========== Conditions ==========*/
#if     (CPU_type == CPU_64_BIT)

typedef unsigned char       uint8_t;
typedef unsigned short      uint16_t;
typedef unsigned int        uint32_t;
typedef unsigned long long  uint64_t;
typedef signed long long    sint64_t;
typedef signed int          sint32_t;
typedef signed short        sint16_t;
typedef signed char         sint8_t;
typedef float               float32_t;
typedef double              float64_t;

#elif   (CPU_type == CPU_32_BIT)

typedef unsigned char       uint8_t;
typedef unsigned short      uint16_t;
typedef unsigned long       uint32_t;
typedef unsigned long long  uint64_t;
typedef signed long long    sint64_t;
typedef signed long         sint32_t;
typedef signed short        sint16_t;
typedef signed char         sint8_t;
typedef float               float32_t;
typedef double              float64_t;

#elif   (CPU_type == CPU_16_BIT)

typedef unsigned char       uint8_t;
typedef unsigned short      uint16_t;
typedef unsigned long       uint32_t;
typedef unsigned long long  uint64_t;
typedef signed long long    sint64_t;
typedef signed long         sint32_t;
typedef signed short        sint16_t;
typedef signed char         sint8_t;
typedef float               float32_t;
typedef double              float64_t;

#elif   (CPU_type == CPU_8_BIT)

typedef unsigned char       uint8_t;
typedef unsigned short      uint16_t;
typedef unsigned long       uint32_t;
typedef signed long         sint32_t;
typedef signed short        sint16_t;
typedef signed char         sint8_t;
typedef float               float32_t;

#endif

#endif /* STD_TYPES_H_ */
