################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/CortexM3_Core/HALL/RCC/STM32F103xx_RCC.c \
../Src/CortexM3_Core/HALL/RCC/STM32F103xx_RCC_Config.c 

OBJS += \
./Src/CortexM3_Core/HALL/RCC/STM32F103xx_RCC.o \
./Src/CortexM3_Core/HALL/RCC/STM32F103xx_RCC_Config.o 

C_DEPS += \
./Src/CortexM3_Core/HALL/RCC/STM32F103xx_RCC.d \
./Src/CortexM3_Core/HALL/RCC/STM32F103xx_RCC_Config.d 


# Each subdirectory must supply rules for building sources it contributes
Src/CortexM3_Core/HALL/RCC/%.o Src/CortexM3_Core/HALL/RCC/%.su Src/CortexM3_Core/HALL/RCC/%.cyclo: ../Src/CortexM3_Core/HALL/RCC/%.c Src/CortexM3_Core/HALL/RCC/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F1 -DSTM32F103C8Tx -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Src-2f-CortexM3_Core-2f-HALL-2f-RCC

clean-Src-2f-CortexM3_Core-2f-HALL-2f-RCC:
	-$(RM) ./Src/CortexM3_Core/HALL/RCC/STM32F103xx_RCC.cyclo ./Src/CortexM3_Core/HALL/RCC/STM32F103xx_RCC.d ./Src/CortexM3_Core/HALL/RCC/STM32F103xx_RCC.o ./Src/CortexM3_Core/HALL/RCC/STM32F103xx_RCC.su ./Src/CortexM3_Core/HALL/RCC/STM32F103xx_RCC_Config.cyclo ./Src/CortexM3_Core/HALL/RCC/STM32F103xx_RCC_Config.d ./Src/CortexM3_Core/HALL/RCC/STM32F103xx_RCC_Config.o ./Src/CortexM3_Core/HALL/RCC/STM32F103xx_RCC_Config.su

.PHONY: clean-Src-2f-CortexM3_Core-2f-HALL-2f-RCC

