################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/03_Mcal/Core_CortexM3/NVIC_prog.c 

OBJS += \
./Src/03_Mcal/Core_CortexM3/NVIC_prog.o 

C_DEPS += \
./Src/03_Mcal/Core_CortexM3/NVIC_prog.d 


# Each subdirectory must supply rules for building sources it contributes
Src/03_Mcal/Core_CortexM3/%.o Src/03_Mcal/Core_CortexM3/%.su Src/03_Mcal/Core_CortexM3/%.cyclo: ../Src/03_Mcal/Core_CortexM3/%.c Src/03_Mcal/Core_CortexM3/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F1 -DSTM32F103C8Tx -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Src-2f-03_Mcal-2f-Core_CortexM3

clean-Src-2f-03_Mcal-2f-Core_CortexM3:
	-$(RM) ./Src/03_Mcal/Core_CortexM3/NVIC_prog.cyclo ./Src/03_Mcal/Core_CortexM3/NVIC_prog.d ./Src/03_Mcal/Core_CortexM3/NVIC_prog.o ./Src/03_Mcal/Core_CortexM3/NVIC_prog.su

.PHONY: clean-Src-2f-03_Mcal-2f-Core_CortexM3
