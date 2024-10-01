################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/CortexM3_Core/HALL/GPIO/STM32F103xx_GPIO_prog.c 

OBJS += \
./Src/CortexM3_Core/HALL/GPIO/STM32F103xx_GPIO_prog.o 

C_DEPS += \
./Src/CortexM3_Core/HALL/GPIO/STM32F103xx_GPIO_prog.d 


# Each subdirectory must supply rules for building sources it contributes
Src/CortexM3_Core/HALL/GPIO/%.o Src/CortexM3_Core/HALL/GPIO/%.su Src/CortexM3_Core/HALL/GPIO/%.cyclo: ../Src/CortexM3_Core/HALL/GPIO/%.c Src/CortexM3_Core/HALL/GPIO/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F1 -DSTM32F103C8Tx -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Src-2f-CortexM3_Core-2f-HALL-2f-GPIO

clean-Src-2f-CortexM3_Core-2f-HALL-2f-GPIO:
	-$(RM) ./Src/CortexM3_Core/HALL/GPIO/STM32F103xx_GPIO_prog.cyclo ./Src/CortexM3_Core/HALL/GPIO/STM32F103xx_GPIO_prog.d ./Src/CortexM3_Core/HALL/GPIO/STM32F103xx_GPIO_prog.o ./Src/CortexM3_Core/HALL/GPIO/STM32F103xx_GPIO_prog.su

.PHONY: clean-Src-2f-CortexM3_Core-2f-HALL-2f-GPIO

