################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/CortexM3_Core/CortexM3_Core_NVIC.c \
../Src/CortexM3_Core/CortexM3_Core_SCB.c \
../Src/CortexM3_Core/CortexM3_Core_Systick.c 

OBJS += \
./Src/CortexM3_Core/CortexM3_Core_NVIC.o \
./Src/CortexM3_Core/CortexM3_Core_SCB.o \
./Src/CortexM3_Core/CortexM3_Core_Systick.o 

C_DEPS += \
./Src/CortexM3_Core/CortexM3_Core_NVIC.d \
./Src/CortexM3_Core/CortexM3_Core_SCB.d \
./Src/CortexM3_Core/CortexM3_Core_Systick.d 


# Each subdirectory must supply rules for building sources it contributes
Src/CortexM3_Core/%.o Src/CortexM3_Core/%.su Src/CortexM3_Core/%.cyclo: ../Src/CortexM3_Core/%.c Src/CortexM3_Core/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F1 -DSTM32F103C8Tx -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Src-2f-CortexM3_Core

clean-Src-2f-CortexM3_Core:
	-$(RM) ./Src/CortexM3_Core/CortexM3_Core_NVIC.cyclo ./Src/CortexM3_Core/CortexM3_Core_NVIC.d ./Src/CortexM3_Core/CortexM3_Core_NVIC.o ./Src/CortexM3_Core/CortexM3_Core_NVIC.su ./Src/CortexM3_Core/CortexM3_Core_SCB.cyclo ./Src/CortexM3_Core/CortexM3_Core_SCB.d ./Src/CortexM3_Core/CortexM3_Core_SCB.o ./Src/CortexM3_Core/CortexM3_Core_SCB.su ./Src/CortexM3_Core/CortexM3_Core_Systick.cyclo ./Src/CortexM3_Core/CortexM3_Core_Systick.d ./Src/CortexM3_Core/CortexM3_Core_Systick.o ./Src/CortexM3_Core/CortexM3_Core_Systick.su

.PHONY: clean-Src-2f-CortexM3_Core

